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

#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGADSBDemodReport.h"
#include "SWGADSBDemodSettings.h"
#include "SWGAFCActions.h"
#include "SWGAFCReport.h"
#include "SWGAFCSettings.h"
#include "SWGAMBEDevice.h"
#include "SWGAMBEDevices.h"
#include "SWGAMDemodReport.h"
#include "SWGAMDemodSettings.h"
#include "SWGAMModReport.h"
#include "SWGAMModSettings.h"
#include "SWGAPRSSettings.h"
#include "SWGAPTDemodActions.h"
#include "SWGAPTDemodActions_aos.h"
#include "SWGAPTDemodActions_los.h"
#include "SWGAPTDemodSettings.h"
#include "SWGATVDemodSettings.h"
#include "SWGATVModReport.h"
#include "SWGATVModSettings.h"
#include "SWGAirspyHFReport.h"
#include "SWGAirspyHFSettings.h"
#include "SWGAirspyReport.h"
#include "SWGAirspySettings.h"
#include "SWGArgInfo.h"
#include "SWGArgValue.h"
#include "SWGAudioDevices.h"
#include "SWGAudioInputDevice.h"
#include "SWGAudioInputSettings.h"
#include "SWGAudioOutputDevice.h"
#include "SWGAudioOutputSettings.h"
#include "SWGBFMDemodReport.h"
#include "SWGBFMDemodSettings.h"
#include "SWGBandwidth.h"
#include "SWGBeamSteeringCWModSettings.h"
#include "SWGBladeRF1InputSettings.h"
#include "SWGBladeRF1OutputSettings.h"
#include "SWGBladeRF2InputReport.h"
#include "SWGBladeRF2InputSettings.h"
#include "SWGBladeRF2MIMOReport.h"
#include "SWGBladeRF2MIMOSettings.h"
#include "SWGBladeRF2OutputReport.h"
#include "SWGBladeRF2OutputSettings.h"
#include "SWGCWKeyerSettings.h"
#include "SWGCapture.h"
#include "SWGChannel.h"
#include "SWGChannelActions.h"
#include "SWGChannelAnalyzerSettings.h"
#include "SWGChannelConfig.h"
#include "SWGChannelListItem.h"
#include "SWGChannelReport.h"
#include "SWGChannelSettings.h"
#include "SWGChannelsDetail.h"
#include "SWGChirpChatDemodReport.h"
#include "SWGChirpChatDemodSettings.h"
#include "SWGChirpChatModReport.h"
#include "SWGChirpChatModSettings.h"
#include "SWGCommand.h"
#include "SWGComplex.h"
#include "SWGDATVDemodSettings.h"
#include "SWGDSDDemodReport.h"
#include "SWGDSDDemodSettings.h"
#include "SWGDVSerialDevice.h"
#include "SWGDVSerialDevices.h"
#include "SWGDemodAnalyzerSettings.h"
#include "SWGDeviceActions.h"
#include "SWGDeviceConfig.h"
#include "SWGDeviceListItem.h"
#include "SWGDeviceReport.h"
#include "SWGDeviceSet.h"
#include "SWGDeviceSetList.h"
#include "SWGDeviceSettings.h"
#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"
#include "SWGFCDProPlusSettings.h"
#include "SWGFCDProSettings.h"
#include "SWGFeature.h"
#include "SWGFeatureActions.h"
#include "SWGFeatureConfig.h"
#include "SWGFeatureReport.h"
#include "SWGFeatureSet.h"
#include "SWGFeatureSetList.h"
#include "SWGFeatureSetPreset.h"
#include "SWGFeatureSettings.h"
#include "SWGFileInputReport.h"
#include "SWGFileInputSettings.h"
#include "SWGFileSinkActions.h"
#include "SWGFileSinkReport.h"
#include "SWGFileSinkSettings.h"
#include "SWGFileSourceActions.h"
#include "SWGFileSourceReport.h"
#include "SWGFileSourceSettings.h"
#include "SWGFreeDVDemodReport.h"
#include "SWGFreeDVDemodSettings.h"
#include "SWGFreeDVModReport.h"
#include "SWGFreeDVModSettings.h"
#include "SWGFreqTrackerReport.h"
#include "SWGFreqTrackerSettings.h"
#include "SWGFrequency.h"
#include "SWGFrequencyBand.h"
#include "SWGFrequencyRange.h"
#include "SWGGLScope.h"
#include "SWGGLSpectrum.h"
#include "SWGGS232ControllerSettings.h"
#include "SWGGain.h"
#include "SWGHackRFInputSettings.h"
#include "SWGHackRFOutputSettings.h"
#include "SWGIEEE_802_15_4_ModActions.h"
#include "SWGIEEE_802_15_4_ModActions_tx.h"
#include "SWGIEEE_802_15_4_ModReport.h"
#include "SWGIEEE_802_15_4_ModSettings.h"
#include "SWGInstanceChannelsResponse.h"
#include "SWGInstanceConfigResponse.h"
#include "SWGInstanceDevicesResponse.h"
#include "SWGInstanceSummaryResponse.h"
#include "SWGInterferometerSettings.h"
#include "SWGKiwiSDRReport.h"
#include "SWGKiwiSDRSettings.h"
#include "SWGLimeRFEDevice.h"
#include "SWGLimeRFEDevices.h"
#include "SWGLimeRFEPower.h"
#include "SWGLimeRFESettings.h"
#include "SWGLimeSdrInputReport.h"
#include "SWGLimeSdrInputSettings.h"
#include "SWGLimeSdrMIMOReport.h"
#include "SWGLimeSdrMIMOSettings.h"
#include "SWGLimeSdrOutputReport.h"
#include "SWGLimeSdrOutputSettings.h"
#include "SWGLocalInputReport.h"
#include "SWGLocalInputSettings.h"
#include "SWGLocalOutputReport.h"
#include "SWGLocalOutputSettings.h"
#include "SWGLocalSinkSettings.h"
#include "SWGLocalSourceSettings.h"
#include "SWGLocationInformation.h"
#include "SWGLoggingInfo.h"
#include "SWGMapActions.h"
#include "SWGMapCoordinate.h"
#include "SWGMapItem.h"
#include "SWGMapItem_2.h"
#include "SWGMapSettings.h"
#include "SWGMetisMISOSettings.h"
#include "SWGNFMDemodReport.h"
#include "SWGNFMDemodSettings.h"
#include "SWGNFMModReport.h"
#include "SWGNFMModSettings.h"
#include "SWGNamedEnum.h"
#include "SWGPacketDemodSettings.h"
#include "SWGPacketModActions.h"
#include "SWGPacketModActions_tx.h"
#include "SWGPacketModReport.h"
#include "SWGPacketModSettings.h"
#include "SWGPerseusReport.h"
#include "SWGPerseusSettings.h"
#include "SWGPlutoSdrInputReport.h"
#include "SWGPlutoSdrInputSettings.h"
#include "SWGPlutoSdrOutputReport.h"
#include "SWGPlutoSdrOutputSettings.h"
#include "SWGPreferences.h"
#include "SWGPreset.h"
#include "SWGPresetExport.h"
#include "SWGPresetGroup.h"
#include "SWGPresetIdentifier.h"
#include "SWGPresetImport.h"
#include "SWGPresetItem.h"
#include "SWGPresetTransfer.h"
#include "SWGPresets.h"
#include "SWGRDSReport.h"
#include "SWGRDSReport_altFrequencies.h"
#include "SWGRange.h"
#include "SWGRangeFloat.h"
#include "SWGRemoteInputReport.h"
#include "SWGRemoteInputSettings.h"
#include "SWGRemoteOutputReport.h"
#include "SWGRemoteOutputSettings.h"
#include "SWGRemoteSinkSettings.h"
#include "SWGRemoteSourceReport.h"
#include "SWGRemoteSourceSettings.h"
#include "SWGRigCtlServerSettings.h"
#include "SWGRtlSdrReport.h"
#include "SWGRtlSdrSettings.h"
#include "SWGSDRPlayReport.h"
#include "SWGSDRPlaySettings.h"
#include "SWGSSBDemodReport.h"
#include "SWGSSBDemodSettings.h"
#include "SWGSSBModReport.h"
#include "SWGSSBModSettings.h"
#include "SWGSampleRate.h"
#include "SWGSamplingDevice.h"
#include "SWGSatelliteTrackerSettings.h"
#include "SWGSigMFFileInputActions.h"
#include "SWGSigMFFileInputReport.h"
#include "SWGSigMFFileInputSettings.h"
#include "SWGSigMFFileSinkActions.h"
#include "SWGSigMFFileSinkReport.h"
#include "SWGSigMFFileSinkSettings.h"
#include "SWGSimplePTTActions.h"
#include "SWGSimplePTTReport.h"
#include "SWGSimplePTTSettings.h"
#include "SWGSoapySDRFrequencySetting.h"
#include "SWGSoapySDRGainSetting.h"
#include "SWGSoapySDRInputSettings.h"
#include "SWGSoapySDROutputSettings.h"
#include "SWGSoapySDRReport.h"
#include "SWGSpectrumServer.h"
#include "SWGSpectrumServer_clients.h"
#include "SWGStarTrackerSettings.h"
#include "SWGSuccessResponse.h"
#include "SWGTargetAzimuthElevation.h"
#include "SWGTestMISettings.h"
#include "SWGTestMOSyncSettings.h"
#include "SWGTestMiStreamSettings.h"
#include "SWGTestSourceSettings.h"
#include "SWGTraceData.h"
#include "SWGTriggerData.h"
#include "SWGUDPSinkReport.h"
#include "SWGUDPSinkSettings.h"
#include "SWGUDPSourceReport.h"
#include "SWGUDPSourceSettings.h"
#include "SWGUSRPInputReport.h"
#include "SWGUSRPInputSettings.h"
#include "SWGUSRPOutputReport.h"
#include "SWGUSRPOutputSettings.h"
#include "SWGVORDemodReport.h"
#include "SWGVORDemodSCReport.h"
#include "SWGVORDemodSCSettings.h"
#include "SWGVORDemodSettings.h"
#include "SWGVORLocalizerSettings.h"
#include "SWGWFMDemodReport.h"
#include "SWGWFMDemodSettings.h"
#include "SWGWFMModReport.h"
#include "SWGWFMModSettings.h"
#include "SWGXtrxInputReport.h"
#include "SWGXtrxInputSettings.h"
#include "SWGXtrxMIMOReport.h"
#include "SWGXtrxMIMOSettings.h"
#include "SWGXtrxOutputReport.h"
#include "SWGXtrxOutputSettings.h"

namespace SWGSDRangel {

  inline void* create(QString type) {
    if(QString("SWGADSBDemodReport").compare(type) == 0) {
      return new SWGADSBDemodReport();
    }
    if(QString("SWGADSBDemodSettings").compare(type) == 0) {
      return new SWGADSBDemodSettings();
    }
    if(QString("SWGAFCActions").compare(type) == 0) {
      return new SWGAFCActions();
    }
    if(QString("SWGAFCReport").compare(type) == 0) {
      return new SWGAFCReport();
    }
    if(QString("SWGAFCSettings").compare(type) == 0) {
      return new SWGAFCSettings();
    }
    if(QString("SWGAMBEDevice").compare(type) == 0) {
      return new SWGAMBEDevice();
    }
    if(QString("SWGAMBEDevices").compare(type) == 0) {
      return new SWGAMBEDevices();
    }
    if(QString("SWGAMDemodReport").compare(type) == 0) {
      return new SWGAMDemodReport();
    }
    if(QString("SWGAMDemodSettings").compare(type) == 0) {
      return new SWGAMDemodSettings();
    }
    if(QString("SWGAMModReport").compare(type) == 0) {
      return new SWGAMModReport();
    }
    if(QString("SWGAMModSettings").compare(type) == 0) {
      return new SWGAMModSettings();
    }
    if(QString("SWGAPRSSettings").compare(type) == 0) {
      return new SWGAPRSSettings();
    }
    if(QString("SWGAPTDemodActions").compare(type) == 0) {
      return new SWGAPTDemodActions();
    }
    if(QString("SWGAPTDemodActions_aos").compare(type) == 0) {
      return new SWGAPTDemodActions_aos();
    }
    if(QString("SWGAPTDemodActions_los").compare(type) == 0) {
      return new SWGAPTDemodActions_los();
    }
    if(QString("SWGAPTDemodSettings").compare(type) == 0) {
      return new SWGAPTDemodSettings();
    }
    if(QString("SWGATVDemodSettings").compare(type) == 0) {
      return new SWGATVDemodSettings();
    }
    if(QString("SWGATVModReport").compare(type) == 0) {
      return new SWGATVModReport();
    }
    if(QString("SWGATVModSettings").compare(type) == 0) {
      return new SWGATVModSettings();
    }
    if(QString("SWGAirspyHFReport").compare(type) == 0) {
      return new SWGAirspyHFReport();
    }
    if(QString("SWGAirspyHFSettings").compare(type) == 0) {
      return new SWGAirspyHFSettings();
    }
    if(QString("SWGAirspyReport").compare(type) == 0) {
      return new SWGAirspyReport();
    }
    if(QString("SWGAirspySettings").compare(type) == 0) {
      return new SWGAirspySettings();
    }
    if(QString("SWGArgInfo").compare(type) == 0) {
      return new SWGArgInfo();
    }
    if(QString("SWGArgValue").compare(type) == 0) {
      return new SWGArgValue();
    }
    if(QString("SWGAudioDevices").compare(type) == 0) {
      return new SWGAudioDevices();
    }
    if(QString("SWGAudioInputDevice").compare(type) == 0) {
      return new SWGAudioInputDevice();
    }
    if(QString("SWGAudioInputSettings").compare(type) == 0) {
      return new SWGAudioInputSettings();
    }
    if(QString("SWGAudioOutputDevice").compare(type) == 0) {
      return new SWGAudioOutputDevice();
    }
    if(QString("SWGAudioOutputSettings").compare(type) == 0) {
      return new SWGAudioOutputSettings();
    }
    if(QString("SWGBFMDemodReport").compare(type) == 0) {
      return new SWGBFMDemodReport();
    }
    if(QString("SWGBFMDemodSettings").compare(type) == 0) {
      return new SWGBFMDemodSettings();
    }
    if(QString("SWGBandwidth").compare(type) == 0) {
      return new SWGBandwidth();
    }
    if(QString("SWGBeamSteeringCWModSettings").compare(type) == 0) {
      return new SWGBeamSteeringCWModSettings();
    }
    if(QString("SWGBladeRF1InputSettings").compare(type) == 0) {
      return new SWGBladeRF1InputSettings();
    }
    if(QString("SWGBladeRF1OutputSettings").compare(type) == 0) {
      return new SWGBladeRF1OutputSettings();
    }
    if(QString("SWGBladeRF2InputReport").compare(type) == 0) {
      return new SWGBladeRF2InputReport();
    }
    if(QString("SWGBladeRF2InputSettings").compare(type) == 0) {
      return new SWGBladeRF2InputSettings();
    }
    if(QString("SWGBladeRF2MIMOReport").compare(type) == 0) {
      return new SWGBladeRF2MIMOReport();
    }
    if(QString("SWGBladeRF2MIMOSettings").compare(type) == 0) {
      return new SWGBladeRF2MIMOSettings();
    }
    if(QString("SWGBladeRF2OutputReport").compare(type) == 0) {
      return new SWGBladeRF2OutputReport();
    }
    if(QString("SWGBladeRF2OutputSettings").compare(type) == 0) {
      return new SWGBladeRF2OutputSettings();
    }
    if(QString("SWGCWKeyerSettings").compare(type) == 0) {
      return new SWGCWKeyerSettings();
    }
    if(QString("SWGCapture").compare(type) == 0) {
      return new SWGCapture();
    }
    if(QString("SWGChannel").compare(type) == 0) {
      return new SWGChannel();
    }
    if(QString("SWGChannelActions").compare(type) == 0) {
      return new SWGChannelActions();
    }
    if(QString("SWGChannelAnalyzerSettings").compare(type) == 0) {
      return new SWGChannelAnalyzerSettings();
    }
    if(QString("SWGChannelConfig").compare(type) == 0) {
      return new SWGChannelConfig();
    }
    if(QString("SWGChannelListItem").compare(type) == 0) {
      return new SWGChannelListItem();
    }
    if(QString("SWGChannelReport").compare(type) == 0) {
      return new SWGChannelReport();
    }
    if(QString("SWGChannelSettings").compare(type) == 0) {
      return new SWGChannelSettings();
    }
    if(QString("SWGChannelsDetail").compare(type) == 0) {
      return new SWGChannelsDetail();
    }
    if(QString("SWGChirpChatDemodReport").compare(type) == 0) {
      return new SWGChirpChatDemodReport();
    }
    if(QString("SWGChirpChatDemodSettings").compare(type) == 0) {
      return new SWGChirpChatDemodSettings();
    }
    if(QString("SWGChirpChatModReport").compare(type) == 0) {
      return new SWGChirpChatModReport();
    }
    if(QString("SWGChirpChatModSettings").compare(type) == 0) {
      return new SWGChirpChatModSettings();
    }
    if(QString("SWGCommand").compare(type) == 0) {
      return new SWGCommand();
    }
    if(QString("SWGComplex").compare(type) == 0) {
      return new SWGComplex();
    }
    if(QString("SWGDATVDemodSettings").compare(type) == 0) {
      return new SWGDATVDemodSettings();
    }
    if(QString("SWGDSDDemodReport").compare(type) == 0) {
      return new SWGDSDDemodReport();
    }
    if(QString("SWGDSDDemodSettings").compare(type) == 0) {
      return new SWGDSDDemodSettings();
    }
    if(QString("SWGDVSerialDevice").compare(type) == 0) {
      return new SWGDVSerialDevice();
    }
    if(QString("SWGDVSerialDevices").compare(type) == 0) {
      return new SWGDVSerialDevices();
    }
    if(QString("SWGDemodAnalyzerSettings").compare(type) == 0) {
      return new SWGDemodAnalyzerSettings();
    }
    if(QString("SWGDeviceActions").compare(type) == 0) {
      return new SWGDeviceActions();
    }
    if(QString("SWGDeviceConfig").compare(type) == 0) {
      return new SWGDeviceConfig();
    }
    if(QString("SWGDeviceListItem").compare(type) == 0) {
      return new SWGDeviceListItem();
    }
    if(QString("SWGDeviceReport").compare(type) == 0) {
      return new SWGDeviceReport();
    }
    if(QString("SWGDeviceSet").compare(type) == 0) {
      return new SWGDeviceSet();
    }
    if(QString("SWGDeviceSetList").compare(type) == 0) {
      return new SWGDeviceSetList();
    }
    if(QString("SWGDeviceSettings").compare(type) == 0) {
      return new SWGDeviceSettings();
    }
    if(QString("SWGDeviceState").compare(type) == 0) {
      return new SWGDeviceState();
    }
    if(QString("SWGErrorResponse").compare(type) == 0) {
      return new SWGErrorResponse();
    }
    if(QString("SWGFCDProPlusSettings").compare(type) == 0) {
      return new SWGFCDProPlusSettings();
    }
    if(QString("SWGFCDProSettings").compare(type) == 0) {
      return new SWGFCDProSettings();
    }
    if(QString("SWGFeature").compare(type) == 0) {
      return new SWGFeature();
    }
    if(QString("SWGFeatureActions").compare(type) == 0) {
      return new SWGFeatureActions();
    }
    if(QString("SWGFeatureConfig").compare(type) == 0) {
      return new SWGFeatureConfig();
    }
    if(QString("SWGFeatureReport").compare(type) == 0) {
      return new SWGFeatureReport();
    }
    if(QString("SWGFeatureSet").compare(type) == 0) {
      return new SWGFeatureSet();
    }
    if(QString("SWGFeatureSetList").compare(type) == 0) {
      return new SWGFeatureSetList();
    }
    if(QString("SWGFeatureSetPreset").compare(type) == 0) {
      return new SWGFeatureSetPreset();
    }
    if(QString("SWGFeatureSettings").compare(type) == 0) {
      return new SWGFeatureSettings();
    }
    if(QString("SWGFileInputReport").compare(type) == 0) {
      return new SWGFileInputReport();
    }
    if(QString("SWGFileInputSettings").compare(type) == 0) {
      return new SWGFileInputSettings();
    }
    if(QString("SWGFileSinkActions").compare(type) == 0) {
      return new SWGFileSinkActions();
    }
    if(QString("SWGFileSinkReport").compare(type) == 0) {
      return new SWGFileSinkReport();
    }
    if(QString("SWGFileSinkSettings").compare(type) == 0) {
      return new SWGFileSinkSettings();
    }
    if(QString("SWGFileSourceActions").compare(type) == 0) {
      return new SWGFileSourceActions();
    }
    if(QString("SWGFileSourceReport").compare(type) == 0) {
      return new SWGFileSourceReport();
    }
    if(QString("SWGFileSourceSettings").compare(type) == 0) {
      return new SWGFileSourceSettings();
    }
    if(QString("SWGFreeDVDemodReport").compare(type) == 0) {
      return new SWGFreeDVDemodReport();
    }
    if(QString("SWGFreeDVDemodSettings").compare(type) == 0) {
      return new SWGFreeDVDemodSettings();
    }
    if(QString("SWGFreeDVModReport").compare(type) == 0) {
      return new SWGFreeDVModReport();
    }
    if(QString("SWGFreeDVModSettings").compare(type) == 0) {
      return new SWGFreeDVModSettings();
    }
    if(QString("SWGFreqTrackerReport").compare(type) == 0) {
      return new SWGFreqTrackerReport();
    }
    if(QString("SWGFreqTrackerSettings").compare(type) == 0) {
      return new SWGFreqTrackerSettings();
    }
    if(QString("SWGFrequency").compare(type) == 0) {
      return new SWGFrequency();
    }
    if(QString("SWGFrequencyBand").compare(type) == 0) {
      return new SWGFrequencyBand();
    }
    if(QString("SWGFrequencyRange").compare(type) == 0) {
      return new SWGFrequencyRange();
    }
    if(QString("SWGGLScope").compare(type) == 0) {
      return new SWGGLScope();
    }
    if(QString("SWGGLSpectrum").compare(type) == 0) {
      return new SWGGLSpectrum();
    }
    if(QString("SWGGS232ControllerSettings").compare(type) == 0) {
      return new SWGGS232ControllerSettings();
    }
    if(QString("SWGGain").compare(type) == 0) {
      return new SWGGain();
    }
    if(QString("SWGHackRFInputSettings").compare(type) == 0) {
      return new SWGHackRFInputSettings();
    }
    if(QString("SWGHackRFOutputSettings").compare(type) == 0) {
      return new SWGHackRFOutputSettings();
    }
    if(QString("SWGIEEE_802_15_4_ModActions").compare(type) == 0) {
      return new SWGIEEE_802_15_4_ModActions();
    }
    if(QString("SWGIEEE_802_15_4_ModActions_tx").compare(type) == 0) {
      return new SWGIEEE_802_15_4_ModActions_tx();
    }
    if(QString("SWGIEEE_802_15_4_ModReport").compare(type) == 0) {
      return new SWGIEEE_802_15_4_ModReport();
    }
    if(QString("SWGIEEE_802_15_4_ModSettings").compare(type) == 0) {
      return new SWGIEEE_802_15_4_ModSettings();
    }
    if(QString("SWGInstanceChannelsResponse").compare(type) == 0) {
      return new SWGInstanceChannelsResponse();
    }
    if(QString("SWGInstanceConfigResponse").compare(type) == 0) {
      return new SWGInstanceConfigResponse();
    }
    if(QString("SWGInstanceDevicesResponse").compare(type) == 0) {
      return new SWGInstanceDevicesResponse();
    }
    if(QString("SWGInstanceSummaryResponse").compare(type) == 0) {
      return new SWGInstanceSummaryResponse();
    }
    if(QString("SWGInterferometerSettings").compare(type) == 0) {
      return new SWGInterferometerSettings();
    }
    if(QString("SWGKiwiSDRReport").compare(type) == 0) {
      return new SWGKiwiSDRReport();
    }
    if(QString("SWGKiwiSDRSettings").compare(type) == 0) {
      return new SWGKiwiSDRSettings();
    }
    if(QString("SWGLimeRFEDevice").compare(type) == 0) {
      return new SWGLimeRFEDevice();
    }
    if(QString("SWGLimeRFEDevices").compare(type) == 0) {
      return new SWGLimeRFEDevices();
    }
    if(QString("SWGLimeRFEPower").compare(type) == 0) {
      return new SWGLimeRFEPower();
    }
    if(QString("SWGLimeRFESettings").compare(type) == 0) {
      return new SWGLimeRFESettings();
    }
    if(QString("SWGLimeSdrInputReport").compare(type) == 0) {
      return new SWGLimeSdrInputReport();
    }
    if(QString("SWGLimeSdrInputSettings").compare(type) == 0) {
      return new SWGLimeSdrInputSettings();
    }
    if(QString("SWGLimeSdrMIMOReport").compare(type) == 0) {
      return new SWGLimeSdrMIMOReport();
    }
    if(QString("SWGLimeSdrMIMOSettings").compare(type) == 0) {
      return new SWGLimeSdrMIMOSettings();
    }
    if(QString("SWGLimeSdrOutputReport").compare(type) == 0) {
      return new SWGLimeSdrOutputReport();
    }
    if(QString("SWGLimeSdrOutputSettings").compare(type) == 0) {
      return new SWGLimeSdrOutputSettings();
    }
    if(QString("SWGLocalInputReport").compare(type) == 0) {
      return new SWGLocalInputReport();
    }
    if(QString("SWGLocalInputSettings").compare(type) == 0) {
      return new SWGLocalInputSettings();
    }
    if(QString("SWGLocalOutputReport").compare(type) == 0) {
      return new SWGLocalOutputReport();
    }
    if(QString("SWGLocalOutputSettings").compare(type) == 0) {
      return new SWGLocalOutputSettings();
    }
    if(QString("SWGLocalSinkSettings").compare(type) == 0) {
      return new SWGLocalSinkSettings();
    }
    if(QString("SWGLocalSourceSettings").compare(type) == 0) {
      return new SWGLocalSourceSettings();
    }
    if(QString("SWGLocationInformation").compare(type) == 0) {
      return new SWGLocationInformation();
    }
    if(QString("SWGLoggingInfo").compare(type) == 0) {
      return new SWGLoggingInfo();
    }
    if(QString("SWGMapActions").compare(type) == 0) {
      return new SWGMapActions();
    }
    if(QString("SWGMapCoordinate").compare(type) == 0) {
      return new SWGMapCoordinate();
    }
    if(QString("SWGMapItem").compare(type) == 0) {
      return new SWGMapItem();
    }
    if(QString("SWGMapItem_2").compare(type) == 0) {
      return new SWGMapItem_2();
    }
    if(QString("SWGMapSettings").compare(type) == 0) {
      return new SWGMapSettings();
    }
    if(QString("SWGMetisMISOSettings").compare(type) == 0) {
      return new SWGMetisMISOSettings();
    }
    if(QString("SWGNFMDemodReport").compare(type) == 0) {
      return new SWGNFMDemodReport();
    }
    if(QString("SWGNFMDemodSettings").compare(type) == 0) {
      return new SWGNFMDemodSettings();
    }
    if(QString("SWGNFMModReport").compare(type) == 0) {
      return new SWGNFMModReport();
    }
    if(QString("SWGNFMModSettings").compare(type) == 0) {
      return new SWGNFMModSettings();
    }
    if(QString("SWGNamedEnum").compare(type) == 0) {
      return new SWGNamedEnum();
    }
    if(QString("SWGPacketDemodSettings").compare(type) == 0) {
      return new SWGPacketDemodSettings();
    }
    if(QString("SWGPacketModActions").compare(type) == 0) {
      return new SWGPacketModActions();
    }
    if(QString("SWGPacketModActions_tx").compare(type) == 0) {
      return new SWGPacketModActions_tx();
    }
    if(QString("SWGPacketModReport").compare(type) == 0) {
      return new SWGPacketModReport();
    }
    if(QString("SWGPacketModSettings").compare(type) == 0) {
      return new SWGPacketModSettings();
    }
    if(QString("SWGPerseusReport").compare(type) == 0) {
      return new SWGPerseusReport();
    }
    if(QString("SWGPerseusSettings").compare(type) == 0) {
      return new SWGPerseusSettings();
    }
    if(QString("SWGPlutoSdrInputReport").compare(type) == 0) {
      return new SWGPlutoSdrInputReport();
    }
    if(QString("SWGPlutoSdrInputSettings").compare(type) == 0) {
      return new SWGPlutoSdrInputSettings();
    }
    if(QString("SWGPlutoSdrOutputReport").compare(type) == 0) {
      return new SWGPlutoSdrOutputReport();
    }
    if(QString("SWGPlutoSdrOutputSettings").compare(type) == 0) {
      return new SWGPlutoSdrOutputSettings();
    }
    if(QString("SWGPreferences").compare(type) == 0) {
      return new SWGPreferences();
    }
    if(QString("SWGPreset").compare(type) == 0) {
      return new SWGPreset();
    }
    if(QString("SWGPresetExport").compare(type) == 0) {
      return new SWGPresetExport();
    }
    if(QString("SWGPresetGroup").compare(type) == 0) {
      return new SWGPresetGroup();
    }
    if(QString("SWGPresetIdentifier").compare(type) == 0) {
      return new SWGPresetIdentifier();
    }
    if(QString("SWGPresetImport").compare(type) == 0) {
      return new SWGPresetImport();
    }
    if(QString("SWGPresetItem").compare(type) == 0) {
      return new SWGPresetItem();
    }
    if(QString("SWGPresetTransfer").compare(type) == 0) {
      return new SWGPresetTransfer();
    }
    if(QString("SWGPresets").compare(type) == 0) {
      return new SWGPresets();
    }
    if(QString("SWGRDSReport").compare(type) == 0) {
      return new SWGRDSReport();
    }
    if(QString("SWGRDSReport_altFrequencies").compare(type) == 0) {
      return new SWGRDSReport_altFrequencies();
    }
    if(QString("SWGRange").compare(type) == 0) {
      return new SWGRange();
    }
    if(QString("SWGRangeFloat").compare(type) == 0) {
      return new SWGRangeFloat();
    }
    if(QString("SWGRemoteInputReport").compare(type) == 0) {
      return new SWGRemoteInputReport();
    }
    if(QString("SWGRemoteInputSettings").compare(type) == 0) {
      return new SWGRemoteInputSettings();
    }
    if(QString("SWGRemoteOutputReport").compare(type) == 0) {
      return new SWGRemoteOutputReport();
    }
    if(QString("SWGRemoteOutputSettings").compare(type) == 0) {
      return new SWGRemoteOutputSettings();
    }
    if(QString("SWGRemoteSinkSettings").compare(type) == 0) {
      return new SWGRemoteSinkSettings();
    }
    if(QString("SWGRemoteSourceReport").compare(type) == 0) {
      return new SWGRemoteSourceReport();
    }
    if(QString("SWGRemoteSourceSettings").compare(type) == 0) {
      return new SWGRemoteSourceSettings();
    }
    if(QString("SWGRigCtlServerSettings").compare(type) == 0) {
      return new SWGRigCtlServerSettings();
    }
    if(QString("SWGRtlSdrReport").compare(type) == 0) {
      return new SWGRtlSdrReport();
    }
    if(QString("SWGRtlSdrSettings").compare(type) == 0) {
      return new SWGRtlSdrSettings();
    }
    if(QString("SWGSDRPlayReport").compare(type) == 0) {
      return new SWGSDRPlayReport();
    }
    if(QString("SWGSDRPlaySettings").compare(type) == 0) {
      return new SWGSDRPlaySettings();
    }
    if(QString("SWGSSBDemodReport").compare(type) == 0) {
      return new SWGSSBDemodReport();
    }
    if(QString("SWGSSBDemodSettings").compare(type) == 0) {
      return new SWGSSBDemodSettings();
    }
    if(QString("SWGSSBModReport").compare(type) == 0) {
      return new SWGSSBModReport();
    }
    if(QString("SWGSSBModSettings").compare(type) == 0) {
      return new SWGSSBModSettings();
    }
    if(QString("SWGSampleRate").compare(type) == 0) {
      return new SWGSampleRate();
    }
    if(QString("SWGSamplingDevice").compare(type) == 0) {
      return new SWGSamplingDevice();
    }
    if(QString("SWGSatelliteTrackerSettings").compare(type) == 0) {
      return new SWGSatelliteTrackerSettings();
    }
    if(QString("SWGSigMFFileInputActions").compare(type) == 0) {
      return new SWGSigMFFileInputActions();
    }
    if(QString("SWGSigMFFileInputReport").compare(type) == 0) {
      return new SWGSigMFFileInputReport();
    }
    if(QString("SWGSigMFFileInputSettings").compare(type) == 0) {
      return new SWGSigMFFileInputSettings();
    }
    if(QString("SWGSigMFFileSinkActions").compare(type) == 0) {
      return new SWGSigMFFileSinkActions();
    }
    if(QString("SWGSigMFFileSinkReport").compare(type) == 0) {
      return new SWGSigMFFileSinkReport();
    }
    if(QString("SWGSigMFFileSinkSettings").compare(type) == 0) {
      return new SWGSigMFFileSinkSettings();
    }
    if(QString("SWGSimplePTTActions").compare(type) == 0) {
      return new SWGSimplePTTActions();
    }
    if(QString("SWGSimplePTTReport").compare(type) == 0) {
      return new SWGSimplePTTReport();
    }
    if(QString("SWGSimplePTTSettings").compare(type) == 0) {
      return new SWGSimplePTTSettings();
    }
    if(QString("SWGSoapySDRFrequencySetting").compare(type) == 0) {
      return new SWGSoapySDRFrequencySetting();
    }
    if(QString("SWGSoapySDRGainSetting").compare(type) == 0) {
      return new SWGSoapySDRGainSetting();
    }
    if(QString("SWGSoapySDRInputSettings").compare(type) == 0) {
      return new SWGSoapySDRInputSettings();
    }
    if(QString("SWGSoapySDROutputSettings").compare(type) == 0) {
      return new SWGSoapySDROutputSettings();
    }
    if(QString("SWGSoapySDRReport").compare(type) == 0) {
      return new SWGSoapySDRReport();
    }
    if(QString("SWGSpectrumServer").compare(type) == 0) {
      return new SWGSpectrumServer();
    }
    if(QString("SWGSpectrumServer_clients").compare(type) == 0) {
      return new SWGSpectrumServer_clients();
    }
    if(QString("SWGStarTrackerSettings").compare(type) == 0) {
      return new SWGStarTrackerSettings();
    }
    if(QString("SWGSuccessResponse").compare(type) == 0) {
      return new SWGSuccessResponse();
    }
    if(QString("SWGTargetAzimuthElevation").compare(type) == 0) {
      return new SWGTargetAzimuthElevation();
    }
    if(QString("SWGTestMISettings").compare(type) == 0) {
      return new SWGTestMISettings();
    }
    if(QString("SWGTestMOSyncSettings").compare(type) == 0) {
      return new SWGTestMOSyncSettings();
    }
    if(QString("SWGTestMiStreamSettings").compare(type) == 0) {
      return new SWGTestMiStreamSettings();
    }
    if(QString("SWGTestSourceSettings").compare(type) == 0) {
      return new SWGTestSourceSettings();
    }
    if(QString("SWGTraceData").compare(type) == 0) {
      return new SWGTraceData();
    }
    if(QString("SWGTriggerData").compare(type) == 0) {
      return new SWGTriggerData();
    }
    if(QString("SWGUDPSinkReport").compare(type) == 0) {
      return new SWGUDPSinkReport();
    }
    if(QString("SWGUDPSinkSettings").compare(type) == 0) {
      return new SWGUDPSinkSettings();
    }
    if(QString("SWGUDPSourceReport").compare(type) == 0) {
      return new SWGUDPSourceReport();
    }
    if(QString("SWGUDPSourceSettings").compare(type) == 0) {
      return new SWGUDPSourceSettings();
    }
    if(QString("SWGUSRPInputReport").compare(type) == 0) {
      return new SWGUSRPInputReport();
    }
    if(QString("SWGUSRPInputSettings").compare(type) == 0) {
      return new SWGUSRPInputSettings();
    }
    if(QString("SWGUSRPOutputReport").compare(type) == 0) {
      return new SWGUSRPOutputReport();
    }
    if(QString("SWGUSRPOutputSettings").compare(type) == 0) {
      return new SWGUSRPOutputSettings();
    }
    if(QString("SWGVORDemodReport").compare(type) == 0) {
      return new SWGVORDemodReport();
    }
    if(QString("SWGVORDemodSCReport").compare(type) == 0) {
      return new SWGVORDemodSCReport();
    }
    if(QString("SWGVORDemodSCSettings").compare(type) == 0) {
      return new SWGVORDemodSCSettings();
    }
    if(QString("SWGVORDemodSettings").compare(type) == 0) {
      return new SWGVORDemodSettings();
    }
    if(QString("SWGVORLocalizerSettings").compare(type) == 0) {
      return new SWGVORLocalizerSettings();
    }
    if(QString("SWGWFMDemodReport").compare(type) == 0) {
      return new SWGWFMDemodReport();
    }
    if(QString("SWGWFMDemodSettings").compare(type) == 0) {
      return new SWGWFMDemodSettings();
    }
    if(QString("SWGWFMModReport").compare(type) == 0) {
      return new SWGWFMModReport();
    }
    if(QString("SWGWFMModSettings").compare(type) == 0) {
      return new SWGWFMModSettings();
    }
    if(QString("SWGXtrxInputReport").compare(type) == 0) {
      return new SWGXtrxInputReport();
    }
    if(QString("SWGXtrxInputSettings").compare(type) == 0) {
      return new SWGXtrxInputSettings();
    }
    if(QString("SWGXtrxMIMOReport").compare(type) == 0) {
      return new SWGXtrxMIMOReport();
    }
    if(QString("SWGXtrxMIMOSettings").compare(type) == 0) {
      return new SWGXtrxMIMOSettings();
    }
    if(QString("SWGXtrxOutputReport").compare(type) == 0) {
      return new SWGXtrxOutputReport();
    }
    if(QString("SWGXtrxOutputSettings").compare(type) == 0) {
      return new SWGXtrxOutputSettings();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != nullptr) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return nullptr;
  }

}

#endif /* ModelFactory_H_ */
