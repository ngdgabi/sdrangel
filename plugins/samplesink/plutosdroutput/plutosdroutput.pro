#--------------------------------------------------------
#
# Pro file for Android and Windows builds with Qt Creator
#
#--------------------------------------------------------

TEMPLATE = lib
CONFIG += plugin

QT += core gui widgets multimedia opengl

TARGET = outputplutosdr

DEFINES += USE_SSE2=1
QMAKE_CXXFLAGS += -msse2
DEFINES += USE_SSE4_1=1
QMAKE_CXXFLAGS += -msse4.1
QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += $$PWD
INCLUDEPATH += ../../../exports
INCLUDEPATH += ../../../sdrbase
INCLUDEPATH += ../../../sdrgui
INCLUDEPATH += ../../../swagger/sdrangel/code/qt5/client
INCLUDEPATH += ../../../devices

MINGW32 || MINGW64 {
    LIBIIOSRC = "C:\softs\libiio"
    INCLUDEPATH += ../../../libiio/includemw
    INCLUDEPATH += $$LIBIIOSRC
}

MSVC {
    INCLUDEPATH += "C:\Program Files\PothosSDR\include"
}

CONFIG(Release):build_subdir = release
CONFIG(Debug):build_subdir = debug

SOURCES += plutosdroutputgui.cpp\
  plutosdroutput.cpp\
  plutosdroutputplugin.cpp\
  plutosdroutputsettings.cpp\
  plutosdroutputthread.cpp

HEADERS += plutosdroutputgui.h\
  plutosdroutput.h\
  plutosdroutputplugin.h\
  plutosdroutputsettings.h\
  plutosdroutputthread.h

FORMS += plutosdroutputgui.ui

LIBS += -L../../../sdrbase/$${build_subdir} -lsdrbase
LIBS += -L../../../sdrgui/$${build_subdir} -lsdrgui
LIBS += -L../../../swagger/$${build_subdir} -lswagger
LIBS += -L../../../devices/$${build_subdir} -ldevices

MINGW32 || MINGW64 {
    LIBS += -L../../../libiio/$${build_subdir} -llibiio
}

MSVC {
    LIBS += -L"C:\Program Files\PothosSDR\bin" -L"C:\Program Files\PothosSDR\lib" -llibiio
}

RESOURCES = ../../../sdrgui/resources/res.qrc
