/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGFeatureSettings.h
 *
 * Base feature settings. Only the feature settings corresponding to the feature specified in the featureType field is or should be present.
 */

#ifndef SWGFeatureSettings_H_
#define SWGFeatureSettings_H_

#include <QJsonObject>


#include "SWGAFCSettings.h"
#include "SWGAPRSSettings.h"
#include "SWGDemodAnalyzerSettings.h"
#include "SWGGS232ControllerSettings.h"
#include "SWGMapSettings.h"
#include "SWGRigCtlServerSettings.h"
#include "SWGSatelliteTrackerSettings.h"
#include "SWGSimplePTTSettings.h"
#include "SWGStarTrackerSettings.h"
#include "SWGVORLocalizerSettings.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFeatureSettings: public SWGObject {
public:
    SWGFeatureSettings();
    SWGFeatureSettings(QString* json);
    virtual ~SWGFeatureSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFeatureSettings* fromJson(QString &jsonString) override;

    QString* getFeatureType();
    void setFeatureType(QString* feature_type);

    qint32 getOriginatorFeatureSetIndex();
    void setOriginatorFeatureSetIndex(qint32 originator_feature_set_index);

    qint32 getOriginatorFeatureIndex();
    void setOriginatorFeatureIndex(qint32 originator_feature_index);

    SWGAFCSettings* getAfcSettings();
    void setAfcSettings(SWGAFCSettings* afc_settings);

    SWGAPRSSettings* getAprsSettings();
    void setAprsSettings(SWGAPRSSettings* aprs_settings);

    SWGDemodAnalyzerSettings* getDemodAnalyzerSettings();
    void setDemodAnalyzerSettings(SWGDemodAnalyzerSettings* demod_analyzer_settings);

    SWGGS232ControllerSettings* getGs232ControllerSettings();
    void setGs232ControllerSettings(SWGGS232ControllerSettings* gs232_controller_settings);

    SWGMapSettings* getMapSettings();
    void setMapSettings(SWGMapSettings* map_settings);

    SWGRigCtlServerSettings* getRigCtlServerSettings();
    void setRigCtlServerSettings(SWGRigCtlServerSettings* rig_ctl_server_settings);

    SWGSatelliteTrackerSettings* getSatelliteTrackerSettings();
    void setSatelliteTrackerSettings(SWGSatelliteTrackerSettings* satellite_tracker_settings);

    SWGStarTrackerSettings* getStarTrackerSettings();
    void setStarTrackerSettings(SWGStarTrackerSettings* star_tracker_settings);

    SWGSimplePTTSettings* getSimplePttSettings();
    void setSimplePttSettings(SWGSimplePTTSettings* simple_ptt_settings);

    SWGVORLocalizerSettings* getVorLocalizerSettings();
    void setVorLocalizerSettings(SWGVORLocalizerSettings* vor_localizer_settings);


    virtual bool isSet() override;

private:
    QString* feature_type;
    bool m_feature_type_isSet;

    qint32 originator_feature_set_index;
    bool m_originator_feature_set_index_isSet;

    qint32 originator_feature_index;
    bool m_originator_feature_index_isSet;

    SWGAFCSettings* afc_settings;
    bool m_afc_settings_isSet;

    SWGAPRSSettings* aprs_settings;
    bool m_aprs_settings_isSet;

    SWGDemodAnalyzerSettings* demod_analyzer_settings;
    bool m_demod_analyzer_settings_isSet;

    SWGGS232ControllerSettings* gs232_controller_settings;
    bool m_gs232_controller_settings_isSet;

    SWGMapSettings* map_settings;
    bool m_map_settings_isSet;

    SWGRigCtlServerSettings* rig_ctl_server_settings;
    bool m_rig_ctl_server_settings_isSet;

    SWGSatelliteTrackerSettings* satellite_tracker_settings;
    bool m_satellite_tracker_settings_isSet;

    SWGStarTrackerSettings* star_tracker_settings;
    bool m_star_tracker_settings_isSet;

    SWGSimplePTTSettings* simple_ptt_settings;
    bool m_simple_ptt_settings_isSet;

    SWGVORLocalizerSettings* vor_localizer_settings;
    bool m_vor_localizer_settings_isSet;

};

}

#endif /* SWGFeatureSettings_H_ */
