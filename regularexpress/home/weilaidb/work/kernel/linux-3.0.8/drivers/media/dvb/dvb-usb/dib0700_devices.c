static int force_lna_activation;
module_param(force_lna_activation, int, 0644);
MODULE_PARM_DESC(force_lna_activation, "force the activation of Low-Noise-Amplifyer(s) (LNA), "
"if applicable for the device (default: 0=automatic/off).");
struct dib0700_adapter_state ;
static struct mt2060_config bristol_mt2060_config[2] = ;
static struct dibx000_agc_config bristol_dib3000p_mt2060_agc_config = ;
static struct dib3000mc_config bristol_dib3000mc_config[2] = ;
static int bristol_frontend_attach(struct dvb_usb_adapter *adap)
static int eeprom_read(struct i2c_adapter *adap,u8 adrs,u8 *pval)
static int bristol_tuner_attach(struct dvb_usb_adapter *adap)
static struct dibx000_agc_config stk7700d_7000p_mt2266_agc_config[2] = ;
static struct dibx000_bandwidth_config stk7700d_mt2266_pll_config = ;
static struct dib7000p_config stk7700d_dib7000p_mt2266_config[] = ;
static struct mt2266_config stk7700d_mt2266_config[2] = ;
static int stk7700P2_frontend_attach(struct dvb_usb_adapter *adap)
static int stk7700d_frontend_attach(struct dvb_usb_adapter *adap)
static int stk7700d_tuner_attach(struct dvb_usb_adapter *adap)
static struct dibx000_agc_config xc3028_agc_config = ;
static struct dibx000_bandwidth_config xc3028_bw_config = ;
static struct dib7000p_config stk7700ph_dib7700_xc3028_config = ;
static int stk7700ph_xc3028_callback(void *ptr, int component,
int command, int arg)
static struct xc2028_ctrl stk7700ph_xc3028_ctrl = ;
static struct xc2028_config stk7700ph_xc3028_config = ;
static int stk7700ph_frontend_attach(struct dvb_usb_adapter *adap)
static int stk7700ph_tuner_attach(struct dvb_usb_adapter *adap)
#define DEFAULT_RC_INTERVAL 50
static u8 rc_request[] = ;
#define RC_REPEAT_DELAY 6
static int dib0700_rc_query_old_firmware(struct dvb_usb_device *d)
static struct dibx000_agc_config stk7700p_7000m_mt2060_agc_config = ;
static struct dibx000_agc_config stk7700p_7000p_mt2060_agc_config = ;
static struct dibx000_bandwidth_config stk7700p_pll_config = ;
static struct dib7000m_config stk7700p_dib7000m_config = ;
static struct dib7000p_config stk7700p_dib7000p_config = ;
static int stk7700p_frontend_attach(struct dvb_usb_adapter *adap)
static struct mt2060_config stk7700p_mt2060_config = ;
static int stk7700p_tuner_attach(struct dvb_usb_adapter *adap)
static struct dibx000_agc_config dib7070_agc_config = ;
static int dib7070_tuner_reset(struct dvb_frontend *fe, int onoff)
static int dib7070_tuner_sleep(struct dvb_frontend *fe, int onoff)
static struct dib0070_config dib7070p_dib0070_config[2] = ;
static struct dib0070_config dib7770p_dib0070_config = ;
static int dib7070_set_param_override(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static int dib7770_set_param_override(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int dib7770p_tuner_attach(struct dvb_usb_adapter *adap)
static int dib7070p_tuner_attach(struct dvb_usb_adapter *adap)
static int stk7700p_pid_filter(struct dvb_usb_adapter *adapter, int index,
u16 pid, int onoff)
static int stk7700p_pid_filter_ctrl(struct dvb_usb_adapter *adapter, int onoff)
static int stk70x0p_pid_filter(struct dvb_usb_adapter *adapter, int index, u16 pid, int onoff)
static int stk70x0p_pid_filter_ctrl(struct dvb_usb_adapter *adapter, int onoff)
static struct dibx000_bandwidth_config dib7070_bw_config_12_mhz = ;
static struct dib7000p_config dib7070p_dib7000p_config = ;
static int stk7070p_frontend_attach(struct dvb_usb_adapter *adap)
static struct dib7000p_config dib7770p_dib7000p_config = ;
static int stk7770p_frontend_attach(struct dvb_usb_adapter *adap)
static struct dibx000_agc_config dib807x_agc_config[2] = ;
static struct dibx000_bandwidth_config dib807x_bw_config_12_mhz = ;
static struct dib8000_config dib807x_dib8000_config[2] = ;
static int dib80xx_tuner_reset(struct dvb_frontend *fe, int onoff)
static int dib80xx_tuner_sleep(struct dvb_frontend *fe, int onoff)
static const struct dib0070_wbd_gain_cfg dib8070_wbd_gain_cfg[] = ;
static struct dib0070_config dib807x_dib0070_config[2] = ;
static int dib807x_set_param_override(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int dib807x_tuner_attach(struct dvb_usb_adapter *adap)
static int stk80xx_pid_filter(struct dvb_usb_adapter *adapter, int index,
u16 pid, int onoff)
static int stk80xx_pid_filter_ctrl(struct dvb_usb_adapter *adapter,
int onoff)
static int stk807x_frontend_attach(struct dvb_usb_adapter *adap)
static int stk807xpvr_frontend_attach0(struct dvb_usb_adapter *adap)
static int stk807xpvr_frontend_attach1(struct dvb_usb_adapter *adap)
struct dibx000_agc_config dib8090_agc_config[2] = ;
static struct dibx000_bandwidth_config dib8090_pll_config_12mhz = ;
static int dib8090_get_adc_power(struct dvb_frontend *fe)
static struct dib8000_config dib809x_dib8000_config[2] = ;
static struct dib0090_wbd_slope dib8090_wbd_table[] = ;
static struct dib0090_config dib809x_dib0090_config = ;
static int dib8096_set_param_override(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int dib809x_tuner_attach(struct dvb_usb_adapter *adap)
static int stk809x_frontend_attach(struct dvb_usb_adapter *adap)
static int nim8096md_tuner_attach(struct dvb_usb_adapter *adap)
static int nim8096md_frontend_attach(struct dvb_usb_adapter *adap)
static int dib90x0_pid_filter(struct dvb_usb_adapter *adapter, int index, u16 pid, int onoff)
static int dib90x0_pid_filter_ctrl(struct dvb_usb_adapter *adapter, int onoff)
static int dib90x0_tuner_reset(struct dvb_frontend *fe, int onoff)
static int dib90x0_tuner_sleep(struct dvb_frontend *fe, int onoff)
static int dib01x0_pmu_update(struct i2c_adapter *i2c, u16 *data, u8 len)
static struct dib9000_config stk9090m_config = ;
static struct dib9000_config nim9090md_config[2] = ;
static struct dib0090_config dib9090_dib0090_config = ;
static struct dib0090_config nim9090md_dib0090_config[2] = ;
static int stk9090m_frontend_attach(struct dvb_usb_adapter *adap)
static int dib9090_tuner_attach(struct dvb_usb_adapter *adap)
static int nim9090md_frontend_attach(struct dvb_usb_adapter *adap)
static int nim9090md_tuner_attach(struct dvb_usb_adapter *adap)
struct dib7090p_best_adc ;
static int dib7090p_get_best_sampling(struct dvb_frontend *fe , struct dib7090p_best_adc *adc)
static int dib7090_agc_startup(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static struct dib0090_wbd_slope dib7090_wbd_table[] = ;
struct dibx000_agc_config dib7090_agc_config[2] = ;
static struct dibx000_bandwidth_config dib7090_clock_config_12_mhz = ;
static struct dib7000p_config nim7090_dib7000p_config = ;
static struct dib7000p_config tfe7090pvr_dib7000p_config[2] = ;
static const struct dib0090_config nim7090_dib0090_config = ;
static const struct dib0090_config tfe7090pvr_dib0090_config[2] = ;
static int nim7090_frontend_attach(struct dvb_usb_adapter *adap)
static int nim7090_tuner_attach(struct dvb_usb_adapter *adap)
static int tfe7090pvr_frontend0_attach(struct dvb_usb_adapter *adap)
static int tfe7090pvr_frontend1_attach(struct dvb_usb_adapter *adap)
static int tfe7090pvr_tuner0_attach(struct dvb_usb_adapter *adap)
static int tfe7090pvr_tuner1_attach(struct dvb_usb_adapter *adap)
static struct dib7000p_config stk7070pd_dib7000p_config[2] = ;
static int stk7070pd_frontend_attach0(struct dvb_usb_adapter *adap)
static int stk7070pd_frontend_attach1(struct dvb_usb_adapter *adap)
static struct s5h1411_config pinnacle_801e_config = ;
static int s5h1411_frontend_attach(struct dvb_usb_adapter *adap)
static int dib0700_xc5000_tuner_callback(void *priv, int component,
int command, int arg)
static struct xc5000_config s5h1411_xc5000_tunerconfig = ;
static int xc5000_tuner_attach(struct dvb_usb_adapter *adap)
static struct lgdt3305_config hcw_lgdt3305_config = ;
static struct mxl5007t_config hcw_mxl5007t_config = ;
static int lgdt3305_frontend_attach(struct dvb_usb_adapter *adap)
static int mxl5007t_tuner_attach(struct dvb_usb_adapter *adap)
struct usb_device_id dib0700_usb_id_table[] = ;
MODULE_DEVICE_TABLE(usb, dib0700_usb_id_table);
#define DIB0700_DEFAULT_DEVICE_PROPERTIES \
.caps              = DVB_USB_IS_AN_I2C_ADAPTER, \
.usb_ctrl          = DEVICE_SPECIFIC, \
.firmware          = "dvb-usb-dib0700-1.20.fw", \
.download_firmware = dib0700_download_firmware, \
.no_reconnect      = 1, \
.size_of_priv      = sizeof(struct dib0700_state), \
.i2c_algo          = &dib0700_i2c_algo, \
.identify_state    = dib0700_identify_state
#define DIB0700_DEFAULT_STREAMING_CONFIG(ep) \
.streaming_ctrl   = dib0700_streaming_ctrl, \
.stream =
struct dvb_usb_device_properties dib0700_devices[] = ;
int dib0700_device_count = ARRAY_SIZE(dib0700_devices);
