static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
static int buggy_sfn_workaround;
module_param(buggy_sfn_workaround, int, 0644);
MODULE_PARM_DESC(buggy_sfn_workaround, "Enable work-around for buggy SFNs (default: 0)");
#define dprintk(args...) do  while (0)
struct dib3000mc_state ;
static u16 dib3000mc_read_word(struct dib3000mc_state *state, u16 reg)
static int dib3000mc_write_word(struct dib3000mc_state *state, u16 reg, u16 val)
static int dib3000mc_identify(struct dib3000mc_state *state)
static int dib3000mc_set_timing(struct dib3000mc_state *state, s16 nfft, u32 bw, u8 update_offset)
static int dib3000mc_setup_pwm_state(struct dib3000mc_state *state)
static int dib3000mc_set_output_mode(struct dib3000mc_state *state, int mode)
static int dib3000mc_set_bandwidth(struct dib3000mc_state *state, u32 bw)
static u16 impulse_noise_val[29] =
;
static void dib3000mc_set_impulse_noise(struct dib3000mc_state *state, u8 mode, s16 nfft)
static int dib3000mc_init(struct dvb_frontend *demod)
static int dib3000mc_sleep(struct dvb_frontend *demod)
static void dib3000mc_set_adp_cfg(struct dib3000mc_state *state, s16 qam)
static void dib3000mc_set_channel_cfg(struct dib3000mc_state *state, struct dvb_frontend_parameters *ch, u16 seq)
static int dib3000mc_autosearch_start(struct dvb_frontend *demod, struct dvb_frontend_parameters *chan)
static int dib3000mc_autosearch_is_irq(struct dvb_frontend *demod)
static int dib3000mc_tune(struct dvb_frontend *demod, struct dvb_frontend_parameters *ch)
struct i2c_adapter * dib3000mc_get_tuner_i2c_master(struct dvb_frontend *demod, int gating)
EXPORT_SYMBOL(dib3000mc_get_tuner_i2c_master);
static int dib3000mc_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int dib3000mc_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int dib3000mc_read_status(struct dvb_frontend *fe, fe_status_t *stat)
static int dib3000mc_read_ber(struct dvb_frontend *fe, u32 *ber)
static int dib3000mc_read_unc_blocks(struct dvb_frontend *fe, u32 *unc)
static int dib3000mc_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int dib3000mc_read_snr(struct dvb_frontend* fe, u16 *snr)
static int dib3000mc_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static void dib3000mc_release(struct dvb_frontend *fe)
int dib3000mc_pid_control(struct dvb_frontend *fe, int index, int pid,int onoff)
EXPORT_SYMBOL(dib3000mc_pid_control);
int dib3000mc_pid_parse(struct dvb_frontend *fe, int onoff)
EXPORT_SYMBOL(dib3000mc_pid_parse);
void dib3000mc_set_config(struct dvb_frontend *fe, struct dib3000mc_config *cfg)
EXPORT_SYMBOL(dib3000mc_set_config);
int dib3000mc_i2c_enumeration(struct i2c_adapter *i2c, int no_of_demods, u8 default_addr, struct dib3000mc_config cfg[])
EXPORT_SYMBOL(dib3000mc_i2c_enumeration);
static struct dvb_frontend_ops dib3000mc_ops;
struct dvb_frontend * dib3000mc_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, struct dib3000mc_config *cfg)
EXPORT_SYMBOL(dib3000mc_attach);
static struct dvb_frontend_ops dib3000mc_ops = ;
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 3000MC/P COFDM demodulator");
MODULE_LICENSE("GPL");
