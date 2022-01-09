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


#include "SWGFreeDVModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFreeDVModSettings::SWGFreeDVModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFreeDVModSettings::SWGFreeDVModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    free_dv_mode = 0;
    m_free_dv_mode_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    gauge_input_else_modem = 0;
    m_gauge_input_else_modem_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    cw_keyer = nullptr;
    m_cw_keyer_isSet = false;
    spectrum_config = nullptr;
    m_spectrum_config_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGFreeDVModSettings::~SWGFreeDVModSettings() {
    this->cleanup();
}

void
SWGFreeDVModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    free_dv_mode = 0;
    m_free_dv_mode_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    gauge_input_else_modem = 0;
    m_gauge_input_else_modem_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    cw_keyer = new SWGCWKeyerSettings();
    m_cw_keyer_isSet = false;
    spectrum_config = new SWGGLSpectrum();
    m_spectrum_config_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGFreeDVModSettings::cleanup() {







    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }





    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(cw_keyer != nullptr) { 
        delete cw_keyer;
    }
    if(spectrum_config != nullptr) { 
        delete spectrum_config;
    }
    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGFreeDVModSettings*
SWGFreeDVModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFreeDVModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&tone_frequency, pJson["toneFrequency"], "float", "");
    
    ::SWGSDRangel::setValue(&volume_factor, pJson["volumeFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&span_log2, pJson["spanLog2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&play_loop, pJson["playLoop"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&free_dv_mode, pJson["freeDVMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mod_af_input, pJson["modAFInput"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gauge_input_else_modem, pJson["gaugeInputElseModem"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&cw_keyer, pJson["cwKeyer"], "SWGCWKeyerSettings", "SWGCWKeyerSettings");
    
    ::SWGSDRangel::setValue(&spectrum_config, pJson["spectrumConfig"], "SWGGLSpectrum", "SWGGLSpectrum");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGFreeDVModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFreeDVModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_tone_frequency_isSet){
        obj->insert("toneFrequency", QJsonValue(tone_frequency));
    }
    if(m_volume_factor_isSet){
        obj->insert("volumeFactor", QJsonValue(volume_factor));
    }
    if(m_span_log2_isSet){
        obj->insert("spanLog2", QJsonValue(span_log2));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_play_loop_isSet){
        obj->insert("playLoop", QJsonValue(play_loop));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_free_dv_mode_isSet){
        obj->insert("freeDVMode", QJsonValue(free_dv_mode));
    }
    if(m_mod_af_input_isSet){
        obj->insert("modAFInput", QJsonValue(mod_af_input));
    }
    if(m_gauge_input_else_modem_isSet){
        obj->insert("gaugeInputElseModem", QJsonValue(gauge_input_else_modem));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((cw_keyer != nullptr) && (cw_keyer->isSet())){
        toJsonValue(QString("cwKeyer"), cw_keyer, obj, QString("SWGCWKeyerSettings"));
    }
    if((spectrum_config != nullptr) && (spectrum_config->isSet())){
        toJsonValue(QString("spectrumConfig"), spectrum_config, obj, QString("SWGGLSpectrum"));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

qint64
SWGFreeDVModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGFreeDVModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGFreeDVModSettings::getToneFrequency() {
    return tone_frequency;
}
void
SWGFreeDVModSettings::setToneFrequency(float tone_frequency) {
    this->tone_frequency = tone_frequency;
    this->m_tone_frequency_isSet = true;
}

float
SWGFreeDVModSettings::getVolumeFactor() {
    return volume_factor;
}
void
SWGFreeDVModSettings::setVolumeFactor(float volume_factor) {
    this->volume_factor = volume_factor;
    this->m_volume_factor_isSet = true;
}

qint32
SWGFreeDVModSettings::getSpanLog2() {
    return span_log2;
}
void
SWGFreeDVModSettings::setSpanLog2(qint32 span_log2) {
    this->span_log2 = span_log2;
    this->m_span_log2_isSet = true;
}

qint32
SWGFreeDVModSettings::getAudioMute() {
    return audio_mute;
}
void
SWGFreeDVModSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGFreeDVModSettings::getPlayLoop() {
    return play_loop;
}
void
SWGFreeDVModSettings::setPlayLoop(qint32 play_loop) {
    this->play_loop = play_loop;
    this->m_play_loop_isSet = true;
}

qint32
SWGFreeDVModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGFreeDVModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGFreeDVModSettings::getTitle() {
    return title;
}
void
SWGFreeDVModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGFreeDVModSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGFreeDVModSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGFreeDVModSettings::getFreeDvMode() {
    return free_dv_mode;
}
void
SWGFreeDVModSettings::setFreeDvMode(qint32 free_dv_mode) {
    this->free_dv_mode = free_dv_mode;
    this->m_free_dv_mode_isSet = true;
}

qint32
SWGFreeDVModSettings::getModAfInput() {
    return mod_af_input;
}
void
SWGFreeDVModSettings::setModAfInput(qint32 mod_af_input) {
    this->mod_af_input = mod_af_input;
    this->m_mod_af_input_isSet = true;
}

qint32
SWGFreeDVModSettings::getGaugeInputElseModem() {
    return gauge_input_else_modem;
}
void
SWGFreeDVModSettings::setGaugeInputElseModem(qint32 gauge_input_else_modem) {
    this->gauge_input_else_modem = gauge_input_else_modem;
    this->m_gauge_input_else_modem_isSet = true;
}

qint32
SWGFreeDVModSettings::getStreamIndex() {
    return stream_index;
}
void
SWGFreeDVModSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGFreeDVModSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGFreeDVModSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGFreeDVModSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGFreeDVModSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGFreeDVModSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGFreeDVModSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGFreeDVModSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGFreeDVModSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGFreeDVModSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGFreeDVModSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGCWKeyerSettings*
SWGFreeDVModSettings::getCwKeyer() {
    return cw_keyer;
}
void
SWGFreeDVModSettings::setCwKeyer(SWGCWKeyerSettings* cw_keyer) {
    this->cw_keyer = cw_keyer;
    this->m_cw_keyer_isSet = true;
}

SWGGLSpectrum*
SWGFreeDVModSettings::getSpectrumConfig() {
    return spectrum_config;
}
void
SWGFreeDVModSettings::setSpectrumConfig(SWGGLSpectrum* spectrum_config) {
    this->spectrum_config = spectrum_config;
    this->m_spectrum_config_isSet = true;
}

SWGChannelMarker*
SWGFreeDVModSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGFreeDVModSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGFreeDVModSettings::getRollupState() {
    return rollup_state;
}
void
SWGFreeDVModSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGFreeDVModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tone_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_volume_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_span_log2_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_play_loop_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(audio_device_name && *audio_device_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_free_dv_mode_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mod_af_input_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gauge_input_else_modem_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(cw_keyer && cw_keyer->isSet()){
            isObjectUpdated = true; break;
        }
        if(spectrum_config && spectrum_config->isSet()){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

