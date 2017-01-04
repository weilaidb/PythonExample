static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
struct dib7000m_state ;
enum dib7000m_power_mode ;
static u16 dib7000m_read_word(struct dib7000m_state *state, u16 reg)
static int dib7000m_write_word(struct dib7000m_state *state, u16 reg, u16 val)
static void dib7000m_write_tab(struct dib7000m_state *state, u16 *buf)
static int dib7000m_set_output_mode(struct dib7000m_state *state, int mode)
static void dib7000m_set_power_mode(struct dib7000m_state *state, enum dib7000m_power_mode mode)
static int dib7000m_set_adc_state(struct dib7000m_state *state, enum dibx000_adc_states no)
static int dib7000m_set_bandwidth(struct dib7000m_state *state, u32 bw)
static int dib7000m_set_diversity_in(struct dvb_frontend *demod, int onoff)
static int dib7000m_sad_calib(struct dib7000m_state *state)
static void dib7000m_reset_pll_common(struct dib7000m_state *state, const struct dibx000_bandwidth_config *bw)
static void dib7000m_reset_pll(struct dib7000m_state *state)
static void dib7000mc_reset_pll(struct dib7000m_state *state)
static int dib7000m_reset_gpio(struct dib7000m_state *st)
static u16 dib7000m_defaults_common[] =
;
static u16 dib7000m_defaults[] =
;
static int dib7000m_demod_reset(struct dib7000m_state *state)
static void dib7000m_restart_agc(struct dib7000m_state *state)
static int dib7000m_agc_soft_split(struct dib7000m_state *state)
static int dib7000m_update_lna(struct dib7000m_state *state)
static int dib7000m_set_agc_config(struct dib7000m_state *state, u8 band)
static void dib7000m_update_timf(struct dib7000m_state *state)
static int dib7000m_agc_startup(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static void dib7000m_set_channel(struct dib7000m_state *state, struct dvb_frontend_parameters *ch, u8 seq)
static int dib7000m_autosearch_start(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static int dib7000m_autosearch_irq(struct dib7000m_state *state, u16 reg)
static int dib7000m_autosearch_is_irq(struct dvb_frontend *demod)
static int dib7000m_tune(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
static int dib7000m_wakeup(struct dvb_frontend *demod)
static int dib7000m_sleep(struct dvb_frontend *demod)
static int dib7000m_identify(struct dib7000m_state *state)
static int dib7000m_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int dib7000m_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int dib7000m_read_status(struct dvb_frontend *fe, fe_status_t *stat)
static int dib7000m_read_ber(struct dvb_frontend *fe, u32 *ber)
static int dib7000m_read_unc_blocks(struct dvb_frontend *fe, u32 *unc)
static int dib7000m_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int dib7000m_read_snr(struct dvb_frontend* fe, u16 *snr)
static int dib7000m_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static void dib7000m_release(struct dvb_frontend *demod)
struct i2c_adapter * dib7000m_get_i2c_master(struct dvb_frontend *demod, enum dibx000_i2c_interface intf, int gating)
EXPORT_SYMBOL(dib7000m_get_i2c_master);
int dib7000m_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
EXPORT_SYMBOL(dib7000m_pid_filter_ctrl);
int dib7000m_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
EXPORT_SYMBOL(dib7000m_pid_filter);
static struct dvb_frontend_ops dib7000m_ops;
struct dvb_frontend * dib7000m_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib7000m_config *cfg)
EXPORT_SYMBOL(dib7000m_attach);
static struct dvb_frontend_ops dib7000m_ops = ;
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 7000MA/MB/PA/PB/MC COFDM demodulator");
MODULE_LICENSE("GPL");
