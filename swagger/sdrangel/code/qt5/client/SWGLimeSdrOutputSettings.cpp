/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGLimeSdrOutputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLimeSdrOutputSettings::SWGLimeSdrOutputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLimeSdrOutputSettings::SWGLimeSdrOutputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    lpf_fir_enable = 0;
    m_lpf_fir_enable_isSet = false;
    lpf_firbw = 0;
    m_lpf_firbw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    nco_enable = 0;
    m_nco_enable_isSet = false;
    nco_frequency = 0;
    m_nco_frequency_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
}

SWGLimeSdrOutputSettings::~SWGLimeSdrOutputSettings() {
    this->cleanup();
}

void
SWGLimeSdrOutputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    lpf_fir_enable = 0;
    m_lpf_fir_enable_isSet = false;
    lpf_firbw = 0;
    m_lpf_firbw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    nco_enable = 0;
    m_nco_enable_isSet = false;
    nco_frequency = 0;
    m_nco_frequency_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
}

void
SWGLimeSdrOutputSettings::cleanup() {















}

SWGLimeSdrOutputSettings*
SWGLimeSdrOutputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLimeSdrOutputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_hard_interp, pJson["log2HardInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_soft_interp, pJson["log2SoftInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw, pJson["lpfBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_fir_enable, pJson["lpfFIREnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_firbw, pJson["lpfFIRBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_enable, pJson["ncoEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_frequency, pJson["ncoFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path, pJson["antennaPath"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ext_clock, pJson["extClock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ext_clock_freq, pJson["extClockFreq"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
}

QString
SWGLimeSdrOutputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGLimeSdrOutputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_log2_hard_interp_isSet){
        obj->insert("log2HardInterp", QJsonValue(log2_hard_interp));
    }
    if(m_log2_soft_interp_isSet){
        obj->insert("log2SoftInterp", QJsonValue(log2_soft_interp));
    }
    if(m_lpf_bw_isSet){
        obj->insert("lpfBW", QJsonValue(lpf_bw));
    }
    if(m_lpf_fir_enable_isSet){
        obj->insert("lpfFIREnable", QJsonValue(lpf_fir_enable));
    }
    if(m_lpf_firbw_isSet){
        obj->insert("lpfFIRBW", QJsonValue(lpf_firbw));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(m_nco_enable_isSet){
        obj->insert("ncoEnable", QJsonValue(nco_enable));
    }
    if(m_nco_frequency_isSet){
        obj->insert("ncoFrequency", QJsonValue(nco_frequency));
    }
    if(m_antenna_path_isSet){
        obj->insert("antennaPath", QJsonValue(antenna_path));
    }
    if(m_ext_clock_isSet){
        obj->insert("extClock", QJsonValue(ext_clock));
    }
    if(m_ext_clock_freq_isSet){
        obj->insert("extClockFreq", QJsonValue(ext_clock_freq));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }

    return obj;
}

qint64
SWGLimeSdrOutputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGLimeSdrOutputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGLimeSdrOutputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getLog2HardInterp() {
    return log2_hard_interp;
}
void
SWGLimeSdrOutputSettings::setLog2HardInterp(qint32 log2_hard_interp) {
    this->log2_hard_interp = log2_hard_interp;
    this->m_log2_hard_interp_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getLog2SoftInterp() {
    return log2_soft_interp;
}
void
SWGLimeSdrOutputSettings::setLog2SoftInterp(qint32 log2_soft_interp) {
    this->log2_soft_interp = log2_soft_interp;
    this->m_log2_soft_interp_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getLpfBw() {
    return lpf_bw;
}
void
SWGLimeSdrOutputSettings::setLpfBw(qint32 lpf_bw) {
    this->lpf_bw = lpf_bw;
    this->m_lpf_bw_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getLpfFirEnable() {
    return lpf_fir_enable;
}
void
SWGLimeSdrOutputSettings::setLpfFirEnable(qint32 lpf_fir_enable) {
    this->lpf_fir_enable = lpf_fir_enable;
    this->m_lpf_fir_enable_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getLpfFirbw() {
    return lpf_firbw;
}
void
SWGLimeSdrOutputSettings::setLpfFirbw(qint32 lpf_firbw) {
    this->lpf_firbw = lpf_firbw;
    this->m_lpf_firbw_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getGain() {
    return gain;
}
void
SWGLimeSdrOutputSettings::setGain(qint32 gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getNcoEnable() {
    return nco_enable;
}
void
SWGLimeSdrOutputSettings::setNcoEnable(qint32 nco_enable) {
    this->nco_enable = nco_enable;
    this->m_nco_enable_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getNcoFrequency() {
    return nco_frequency;
}
void
SWGLimeSdrOutputSettings::setNcoFrequency(qint32 nco_frequency) {
    this->nco_frequency = nco_frequency;
    this->m_nco_frequency_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getAntennaPath() {
    return antenna_path;
}
void
SWGLimeSdrOutputSettings::setAntennaPath(qint32 antenna_path) {
    this->antenna_path = antenna_path;
    this->m_antenna_path_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getExtClock() {
    return ext_clock;
}
void
SWGLimeSdrOutputSettings::setExtClock(qint32 ext_clock) {
    this->ext_clock = ext_clock;
    this->m_ext_clock_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getExtClockFreq() {
    return ext_clock_freq;
}
void
SWGLimeSdrOutputSettings::setExtClockFreq(qint32 ext_clock_freq) {
    this->ext_clock_freq = ext_clock_freq;
    this->m_ext_clock_freq_isSet = true;
}

qint32
SWGLimeSdrOutputSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGLimeSdrOutputSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGLimeSdrOutputSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGLimeSdrOutputSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}


bool
SWGLimeSdrOutputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_log2_hard_interp_isSet){ isObjectUpdated = true; break;}
        if(m_log2_soft_interp_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_bw_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_fir_enable_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_firbw_isSet){ isObjectUpdated = true; break;}
        if(m_gain_isSet){ isObjectUpdated = true; break;}
        if(m_nco_enable_isSet){ isObjectUpdated = true; break;}
        if(m_nco_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_antenna_path_isSet){ isObjectUpdated = true; break;}
        if(m_ext_clock_isSet){ isObjectUpdated = true; break;}
        if(m_ext_clock_freq_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

