struct zl10353_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int debug_regs;
static int zl10353_single_write(struct dvb_frontend *fe, u8 reg, u8 val)
static int zl10353_write(struct dvb_frontend *fe, const u8 ibuf[], int ilen)
static int zl10353_read_register(struct zl10353_state *state, u8 reg)
static void zl10353_dump_regs(struct dvb_frontend *fe)
static void zl10353_calc_nominal_rate(struct dvb_frontend *fe,
enum fe_bandwidth bandwidth,
u16 *nominal_rate)
static void zl10353_calc_input_freq(struct dvb_frontend *fe,
u16 *input_freq)
static int zl10353_sleep(struct dvb_frontend *fe)
static int zl10353_set_parameters(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int zl10353_get_parameters(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int zl10353_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int zl10353_read_ber(struct dvb_frontend *fe, u32 *ber)
static int zl10353_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int zl10353_read_snr(struct dvb_frontend *fe, u16 *snr)
static int zl10353_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int zl10353_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings
*fe_tune_settings)
static int zl10353_init(struct dvb_frontend *fe)
static int zl10353_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static void zl10353_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops zl10353_ops;
struct dvb_frontend *zl10353_attach(const struct zl10353_config *config,
struct i2c_adapter *i2c)
static struct dvb_frontend_ops zl10353_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
module_param(debug_regs, int, 0644);
MODULE_PARM_DESC(debug_regs, "Turn on/off frontend register dumps (default:off).");
MODULE_DESCRIPTION("Zarlink ZL10353 DVB-T demodulator driver");
MODULE_AUTHOR("Chris Pascoe");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(zl10353_attach);
