#define XTAL 10111000
static int force_band;
module_param(force_band, int, 0644);
MODULE_PARM_DESC(force_band, "Force a specific band select "\
"(1-9, default:off).");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
#define info(args...) do  while (0)
#define err(args...)  do  while (0)
#define dprintk(args...) \
do  while (0)
struct cx24123_state ;
static struct cx24123_AGC_val  cx24123_AGC_vals[] =
;
static struct cx24123_bandselect_val  cx24123_bandselect_vals[] =
;
static struct  cx24123_regdata[] =
;
static int cx24123_i2c_writereg(struct cx24123_state *state,
u8 i2c_addr, int reg, int data)
static int cx24123_i2c_readreg(struct cx24123_state *state, u8 i2c_addr, u8 reg)
#define cx24123_readreg(state, reg) \
cx24123_i2c_readreg(state, state->config->demod_address, reg)
#define cx24123_writereg(state, reg, val) \
cx24123_i2c_writereg(state, state->config->demod_address, reg, val)
static int cx24123_set_inversion(struct cx24123_state *state,
fe_spectral_inversion_t inversion)
static int cx24123_get_inversion(struct cx24123_state *state,
fe_spectral_inversion_t *inversion)
static int cx24123_set_fec(struct cx24123_state *state, fe_code_rate_t fec)
static int cx24123_get_fec(struct cx24123_state *state, fe_code_rate_t *fec)
static u32 cx24123_int_log2(u32 a, u32 b)
static int cx24123_set_symbolrate(struct cx24123_state *state, u32 srate)
static int cx24123_pll_calculate(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx24123_pll_writereg(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p, u32 data)
static int cx24123_pll_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx24123_repeater_mode(struct cx24123_state *state, u8 mode, u8 start)
static int cx24123_initfe(struct dvb_frontend *fe)
static int cx24123_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static void cx24123_wait_for_diseqc(struct cx24123_state *state)
static int cx24123_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *cmd)
static int cx24123_diseqc_send_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t burst)
static int cx24123_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int cx24123_read_ber(struct dvb_frontend *fe, u32 *ber)
static int cx24123_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int cx24123_read_snr(struct dvb_frontend *fe, u16 *snr)
static int cx24123_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx24123_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx24123_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static int cx24123_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
unsigned int mode_flags,
unsigned int *delay,
fe_status_t *status)
static int cx24123_get_algo(struct dvb_frontend *fe)
static void cx24123_release(struct dvb_frontend *fe)
static int cx24123_tuner_i2c_tuner_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msg[], int num)
static u32 cx24123_tuner_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm cx24123_tuner_i2c_algo = ;
struct i2c_adapter *
cx24123_get_tuner_i2c_adapter(struct dvb_frontend *fe)
EXPORT_SYMBOL(cx24123_get_tuner_i2c_adapter);
static struct dvb_frontend_ops cx24123_ops;
struct dvb_frontend *cx24123_attach(const struct cx24123_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(cx24123_attach);
static struct dvb_frontend_ops cx24123_ops = ;
MODULE_DESCRIPTION("DVB Frontend module for Conexant " \
"CX24123/CX24109/CX24113 hardware");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
