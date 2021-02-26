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
 * SWGSatelliteTrackerSettings.h
 *
 * Satellite Tracker settings
 */

#ifndef SWGSatelliteTrackerSettings_H_
#define SWGSatelliteTrackerSettings_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSatelliteTrackerSettings: public SWGObject {
public:
    SWGSatelliteTrackerSettings();
    SWGSatelliteTrackerSettings(QString* json);
    virtual ~SWGSatelliteTrackerSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSatelliteTrackerSettings* fromJson(QString &jsonString) override;

    float getLatitude();
    void setLatitude(float latitude);

    float getLongitude();
    void setLongitude(float longitude);

    float getHeightAboveSeaLevel();
    void setHeightAboveSeaLevel(float height_above_sea_level);

    QString* getTarget();
    void setTarget(QString* target);

    QList<QString*>* getSatellites();
    void setSatellites(QList<QString*>* satellites);

    QList<QString*>* getTles();
    void setTles(QList<QString*>* tles);

    QString* getDateTime();
    void setDateTime(QString* date_time);

    qint32 getMinAosElevation();
    void setMinAosElevation(qint32 min_aos_elevation);

    qint32 getMinPassElevation();
    void setMinPassElevation(qint32 min_pass_elevation);

    qint32 getRotatorMaxAzimuth();
    void setRotatorMaxAzimuth(qint32 rotator_max_azimuth);

    qint32 getRotatorMaxElevation();
    void setRotatorMaxElevation(qint32 rotator_max_elevation);

    qint32 getAzElUnits();
    void setAzElUnits(qint32 az_el_units);

    qint32 getGroundTrackPoints();
    void setGroundTrackPoints(qint32 ground_track_points);

    QString* getDateFormat();
    void setDateFormat(QString* date_format);

    qint32 getUtc();
    void setUtc(qint32 utc);

    float getUpdatePeriod();
    void setUpdatePeriod(float update_period);

    float getDopplerPeriod();
    void setDopplerPeriod(float doppler_period);

    qint32 getPredictionPeriod();
    void setPredictionPeriod(qint32 prediction_period);

    QString* getPassStartTime();
    void setPassStartTime(QString* pass_start_time);

    QString* getPassFinishTime();
    void setPassFinishTime(QString* pass_finish_time);

    float getDefaultFrequency();
    void setDefaultFrequency(float default_frequency);

    qint32 getDrawOnMap();
    void setDrawOnMap(qint32 draw_on_map);

    qint32 getAutoTarget();
    void setAutoTarget(qint32 auto_target);

    QString* getAosSpeech();
    void setAosSpeech(QString* aos_speech);

    QString* getLosSpeech();
    void setLosSpeech(QString* los_speech);

    QString* getAosCommand();
    void setAosCommand(QString* aos_command);

    QString* getLosCommand();
    void setLosCommand(QString* los_command);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getReverseApiChannelIndex();
    void setReverseApiChannelIndex(qint32 reverse_api_channel_index);


    virtual bool isSet() override;

private:
    float latitude;
    bool m_latitude_isSet;

    float longitude;
    bool m_longitude_isSet;

    float height_above_sea_level;
    bool m_height_above_sea_level_isSet;

    QString* target;
    bool m_target_isSet;

    QList<QString*>* satellites;
    bool m_satellites_isSet;

    QList<QString*>* tles;
    bool m_tles_isSet;

    QString* date_time;
    bool m_date_time_isSet;

    qint32 min_aos_elevation;
    bool m_min_aos_elevation_isSet;

    qint32 min_pass_elevation;
    bool m_min_pass_elevation_isSet;

    qint32 rotator_max_azimuth;
    bool m_rotator_max_azimuth_isSet;

    qint32 rotator_max_elevation;
    bool m_rotator_max_elevation_isSet;

    qint32 az_el_units;
    bool m_az_el_units_isSet;

    qint32 ground_track_points;
    bool m_ground_track_points_isSet;

    QString* date_format;
    bool m_date_format_isSet;

    qint32 utc;
    bool m_utc_isSet;

    float update_period;
    bool m_update_period_isSet;

    float doppler_period;
    bool m_doppler_period_isSet;

    qint32 prediction_period;
    bool m_prediction_period_isSet;

    QString* pass_start_time;
    bool m_pass_start_time_isSet;

    QString* pass_finish_time;
    bool m_pass_finish_time_isSet;

    float default_frequency;
    bool m_default_frequency_isSet;

    qint32 draw_on_map;
    bool m_draw_on_map_isSet;

    qint32 auto_target;
    bool m_auto_target_isSet;

    QString* aos_speech;
    bool m_aos_speech_isSet;

    QString* los_speech;
    bool m_los_speech_isSet;

    QString* aos_command;
    bool m_aos_command_isSet;

    QString* los_command;
    bool m_los_command_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 reverse_api_channel_index;
    bool m_reverse_api_channel_index_isSet;

};

}

#endif /* SWGSatelliteTrackerSettings_H_ */
