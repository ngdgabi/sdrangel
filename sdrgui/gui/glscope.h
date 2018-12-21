///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef SDRBASE_GUI_GLSCOPENG_H_
#define SDRBASE_GUI_GLSCOPENG_H_

#include <QGLWidget>
#include <QPen>
#include <QTimer>
#include <QMutex>
#include <QFont>
#include <QMatrix4x4>
#include <QAtomicInt>

#include "dsp/dsptypes.h"
#include "dsp/scopevis.h"
#include "gui/scaleengine.h"
#include "gui/glshadersimple.h"
#include "gui/glshadertextured.h"
#include "export.h"
#include "util/bitfieldindex.h"
#include "util/incrementalarray.h"

class QPainter;

class SDRGUI_API GLScope: public QGLWidget {
    Q_OBJECT

public:
    enum DisplayMode {
        DisplayXYH,
        DisplayXYV,
        DisplayX,
        DisplayY,
        DisplayPol
    };

    GLScope(QWidget* parent = 0);
    virtual ~GLScope();

    void connectTimer(const QTimer& timer);

    void setTraces(std::vector<ScopeVis::TraceData>* tracesData, std::vector<float *>* traces);
    void newTraces(std::vector<float *>* traces);
    void newTraces(std::vector<float *>* traces, int traceIndex);

    int getSampleRate() const { return m_sampleRate; }
    int getTraceSize() const { return m_traceSize; }

    void setTriggerPre(uint32_t triggerPre, bool emitSignal = false); //!< number of samples
    void setTimeOfsProMill(int timeOfsProMill);
    void setSampleRate(int sampleRate);
    void setTimeBase(int timeBase);
    void setFocusedTraceIndex(uint32_t traceIndex);
    void setDisplayMode(DisplayMode displayMode);
    void setTraceSize(int trceSize, bool emitSignal = false);
    void updateDisplay();
    void setDisplayGridIntensity(int intensity);
    void setDisplayTraceIntensity(int intensity);
    void setFocusedTriggerData(ScopeVis::TriggerData& triggerData) { m_focusedTriggerData = triggerData; }
    void setConfigChanged() { m_configChanged = true; }
    //void incrementTraceCounter() { m_traceCounter++; }

    bool getDataChanged() const { return m_dataChanged; }
    DisplayMode getDisplayMode() const { return m_displayMode; }
    void setDisplayXYPoints(bool value) { m_displayXYPoints = value; }
    const QAtomicInt& getProcessingTraceIndex() const { return m_processingTraceIndex; }

signals:
    void sampleRateChanged(int);
    void traceSizeChanged(uint32_t);
    void preTriggerChanged(uint32_t); //!< number of samples

private:
    std::vector<ScopeVis::TraceData> *m_tracesData;
    std::vector<float *> *m_traces;
    QAtomicInt m_processingTraceIndex;
    ScopeVis::TriggerData m_focusedTriggerData;
    //int m_traceCounter;
    uint32_t m_bufferIndex;
    DisplayMode m_displayMode;
    QTimer m_timer;
    QMutex m_mutex;
    QAtomicInt m_dataChanged;
    bool m_configChanged;
    int m_sampleRate;
    int m_timeOfsProMill;
    uint32_t m_triggerPre;
    int m_traceSize;
    int m_timeBase;
    int m_timeOffset;
    uint32_t m_focusedTraceIndex;

    // graphics stuff
    QRectF m_glScopeRect1;
    QRectF m_glScopeRect2;
    QMatrix4x4 m_glScopeMatrix1;
    QMatrix4x4 m_glScopeMatrix2;
    QMatrix4x4 m_glLeft1ScaleMatrix;
    QMatrix4x4 m_glRight1ScaleMatrix;
    QMatrix4x4 m_glLeft2ScaleMatrix;
    QMatrix4x4 m_glBot1ScaleMatrix;
    QMatrix4x4 m_glBot2ScaleMatrix;

    QPixmap m_left1ScalePixmap;
    QPixmap m_left2ScalePixmap;
    QPixmap m_bot1ScalePixmap;
    QPixmap m_bot2ScalePixmap;
    QPixmap m_channelOverlayPixmap1;
    QPixmap m_channelOverlayPixmap2;

    int m_displayGridIntensity;
    int m_displayTraceIntensity;
    bool m_displayXYPoints;

    ScaleEngine m_x1Scale; //!< Display #1 X scale. Time scale
    ScaleEngine m_x2Scale; //!< Display #2 X scale. Time scale
    ScaleEngine m_y1Scale; //!< Display #1 Y scale. Always connected to trace #0 (X trace)
    ScaleEngine m_y2Scale; //!< Display #2 Y scale. Connected to highlighted Y trace (#1..n)

    QFont m_channelOverlayFont;

    GLShaderSimple m_glShaderSimple;
    GLShaderTextured m_glShaderLeft1Scale;
    GLShaderTextured m_glShaderBottom1Scale;
    GLShaderTextured m_glShaderLeft2Scale;
    GLShaderTextured m_glShaderBottom2Scale;
    GLShaderTextured m_glShaderPowerOverlay;

    IncrementalArray<GLfloat> m_q3Polar;
    IncrementalArray<GLfloat> m_q3TickY1;
    IncrementalArray<GLfloat> m_q3TickY2;
    IncrementalArray<GLfloat> m_q3TickX1;
    IncrementalArray<GLfloat> m_q3TickX2;

    static const int m_topMargin = 5;
    static const int m_botMargin = 20;
    static const int m_leftMargin = 35;
    static const int m_rightMargin = 5;

    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

    void applyConfig();
    void setYScale(ScaleEngine& scale, uint32_t highlightedTraceIndex);
    void setUniqueDisplays();     //!< Arrange displays when X and Y are unique on screen
    void setVerticalDisplays();   //!< Arrange displays when X and Y are stacked vertically
    void setHorizontalDisplays(); //!< Arrange displays when X and Y are stacked horizontally
    void setPolarDisplays();      //!< Arrange displays when X and Y are stacked over on the left and polar display is on the right

    void drawChannelOverlay(      //!< Draws a text overlay
            const QString& text,
            const QColor& color,
            QPixmap& channelOverlayPixmap,
            const QRectF& glScopeRect);

protected slots:
    void cleanup();
    void tick();

};

#endif /* SDRBASE_GUI_GLSCOPENG_H_ */
