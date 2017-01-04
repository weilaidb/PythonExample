static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
static int buggy_sfn_workaround;
module_param(buggy_sfn_workaround, int, 0644);
MODULE_PARM_DESC(buggy_sfn_workaround, "Enable work-around for buggy SFNs (default: 0)");
#define dprintk(args...) do  while (0)
struct i2c_device ;
struct dib7000p_state ;
enum dib7000p_power_mode ;
static int dib7090_set_output_mode(struct dvb_frontend *fe, int mode);
static int dib7090_set_diversity_in(struct dvb_frontend *fe, int onoff);
static u16 dib7000p_read_word(struct dib7000p_state *state, u16 reg)
static int dib7000p_write_word(struct dib7000p_state *state, u16 reg, u16 val)
static void dib7000p_write_tab(struct dib7000p_state *state, u16 * buf)
static int dib7000p_set_output_mode(struct dib7000p_state *state, int mode)
static int dib7000p_set_diversity_in(struct dvb_frontend *demod, int onoff)
static int dib7000p_set_power_mode(struct dib7000p_state *state, enum dib7000p_power_mode mode)
static void dib7000p_set_adc_state(struct dib7000p_state *state, enum dibx000_adc_states no)
static int dib7000p_set_bandwidth(struct dib7000p_state *state, u32 bw)
static int dib7000p_sad_calib(struct dib7000p_state *state)
int dib7000p_set_wbd_ref(struct dvb_frontend *demod, u16 value)
EXPORT_SYMBOL(dib7000p_set_wbd_ref);
static void dib7000p_reset_pll(struct dib7000p_state *state)
static u32 dib7000p_get_internal_freq(struct dib7000p_state *state)
int dib7000p_update_pll(struct dvb_frontend *fe, struct dibx000_bandwidth_config *bw)
EXPORT_SYMBOL(dib7000p_update_pll);
static int dib7000p_reset_gpio(struct dib7000p_state *st)
static int dib7000p_cfg_gpio(struct dib7000p_state *st, u8 num, u8 dir, u8 val)
int dib7000p_set_gpio(struct dvb_frontend *demod, u8 num, u8 dir, u8 val)
EXPORT_SYMBOL(dib7000p_set_gpio);
static u16 dib7000p_defaults[] = ;
static int dib7000p_demod_reset(struct dib7000p_state *state)
static void dib7000p_pll_clk_cfg(struct dib7000p_state *state)
static void dib7000p_restart_agc(struct dib7000p_state *state)
static int dib7000p_update_lna(struct dib7000p_state *state)
static int dib7000p_set_agc_config(struct dib7000p_state *state, u8 band)
static void dib7000p_set_dds(struct dib7000p_state *state, s32 offset_khz)
static int dib7000p_agc_startup(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static void dib7000p_update_timf(struct dib7000p_state *state)
u32 dib7000p_ctrl_timf(struct dvb_frontend *fe, u8 op, u32 timf)
EXPORT_SYMBOL(dib7000p_ctrl_timf);
static void dib7000p_set_channel(struct dib7000p_state *state, struct dvb_frontend_parameters *ch, u8 seq)
static int dib7000p_autosearch_start(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static int dib7000p_autosearch_is_irq(struct dvb_frontend *demod)
static void dib7000p_spur_protect(struct dib7000p_state *state, u32 rf_khz, u32 bw)
static int dib7000p_tune(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static int dib7000p_wakeup(struct dvb_frontend *demod)
static int dib7000p_sleep(struct dvb_frontend *demod)
static int dib7000p_identify(struct dib7000p_state *st)
static int dib7000p_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static int dib7000p_set_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static int dib7000p_read_status(struct dvb_frontend *fe, fe_status_t * stat)
static int dib7000p_read_ber(struct dvb_frontend *fe, u32 * ber)
static int dib7000p_read_unc_blocks(struct dvb_frontend *fe, u32 * unc)
static int dib7000p_read_signal_strength(struct dvb_frontend *fe, u16 * strength)
static int dib7000p_read_snr(struct dvb_frontend *fe, u16 * snr)
static int dib7000p_fe_get_tune_settings(struct dvb_frontend *fe, struct dvb_frontend_tune_settings *tune)
static void dib7000p_release(struct dvb_frontend *demod)
int dib7000pc_detection(struct i2c_adapter *i2c_adap)
EXPORT_SYMBOL(dib7000pc_detection);
struct i2c_adapter *dib7000p_get_i2c_master(struct dvb_frontend *demod, enum dibx000_i2c_interface intf, int gating)
EXPORT_SYMBOL(dib7000p_get_i2c_master);
int dib7000p_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
EXPORT_SYMBOL(dib7000p_pid_filter_ctrl);
int dib7000p_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
EXPORT_SYMBOL(dib7000p_pid_filter);
int dib7000p_i2c_enumeration(struct i2c_adapter *i2c, int no_of_demods, u8 default_addr, struct dib7000p_config cfg[])
EXPORT_SYMBOL(dib7000p_i2c_enumeration);
static const s32 lut_1000ln_mant[] = ;
static s32 dib7000p_get_adc_power(struct dvb_frontend *fe)
static int map_addr_to_serpar_number(struct i2c_msg *msg)
static int w7090p_tuner_write_serpar(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static int w7090p_tuner_read_serpar(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static int w7090p_tuner_rw_serpar(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
int dib7090p_rw_on_apb(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num, u16 apb_address)
static int dib7090_tuner_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static u32 dib7000p_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm dib7090_tuner_xfer_algo = ;
struct i2c_adapter *dib7090_get_i2c_tuner(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib7090_get_i2c_tuner);
static int dib7090_host_bus_drive(struct dib7000p_state *state, u8 drive)
static u32 dib7090_calcSyncFreq(u32 P_Kin, u32 P_Kout, u32 insertExtSynchro, u32 syncSize)
static int dib7090_cfg_DibTx(struct dib7000p_state *state, u32 P_Kin, u32 P_Kout, u32 insertExtSynchro, u32 synchroMode, u32 syncWord, u32 syncSize)
static int dib7090_cfg_DibRx(struct dib7000p_state *state, u32 P_Kin, u32 P_Kout, u32 synchroMode, u32 insertExtSynchro, u32 syncWord, u32 syncSize,
u32 dataOutRate)
static int dib7090_enDivOnHostBus(struct dib7000p_state *state)
static int dib7090_enAdcOnHostBus(struct dib7000p_state *state)
static int dib7090_enMpegOnHostBus(struct dib7000p_state *state)
static int dib7090_enMpegInput(struct dib7000p_state *state)
static int dib7090_enMpegMux(struct dib7000p_state *state, u16 pulseWidth, u16 enSerialMode, u16 enSerialClkDiv2)
static int dib7090_disableMpegMux(struct dib7000p_state *state)
static int dib7090_set_input_mode(struct dvb_frontend *fe, int mode)
static int dib7090_set_diversity_in(struct dvb_frontend *fe, int onoff)
static int dib7090_set_output_mode(struct dvb_frontend *fe, int mode)
int dib7090_tuner_sleep(struct dvb_frontend *fe, int onoff)
EXPORT_SYMBOL(dib7090_tuner_sleep);
int dib7090_agc_restart(struct dvb_frontend *fe, u8 restart)
EXPORT_SYMBOL(dib7090_agc_restart);
int dib7090_get_adc_power(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib7090_get_adc_power);
int dib7090_slave_reset(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib7090_slave_reset);
static struct dvb_frontend_ops dib7000p_ops;
struct dvb_frontend *dib7000p_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib7000p_config *cfg)
EXPORT_SYMBOL(dib7000p_attach);
static struct dvb_frontend_ops dib7000p_ops = ;
MODULE_AUTHOR("Olivier Grenie <ogrenie@dibcom.fr>");
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 7000PC COFDM demodulator");
MODULE_LICENSE("GPL");
