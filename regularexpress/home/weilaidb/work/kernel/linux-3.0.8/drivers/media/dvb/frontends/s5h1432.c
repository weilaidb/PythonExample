struct s5h1432_state ;
static int debug;
#define dprintk(arg...) do  while (0)
static int s5h1432_writereg(struct s5h1432_state *state,
u8 addr, u8 reg, u8 data)
static u8 s5h1432_readreg(struct s5h1432_state *state, u8 addr, u8 reg)
static int s5h1432_sleep(struct dvb_frontend *fe)
static int s5h1432_set_channel_bandwidth(struct dvb_frontend *fe,
u32 bandwidth)
static int s5h1432_set_IF(struct dvb_frontend *fe, u32 ifFreqHz)
static int s5h1432_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s5h1432_init(struct dvb_frontend *fe)
static int s5h1432_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int s5h1432_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int s5h1432_read_snr(struct dvb_frontend *fe, u16 *snr)
static int s5h1432_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int s5h1432_read_ber(struct dvb_frontend *fe, u32 *ber)
static int s5h1432_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s5h1432_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static void s5h1432_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops s5h1432_ops;
struct dvb_frontend *s5h1432_attach(const struct s5h1432_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(s5h1432_attach);
static struct dvb_frontend_ops s5h1432_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable verbose debug messages");
MODULE_DESCRIPTION("Samsung s5h1432 DVB-T Demodulator driver");
MODULE_AUTHOR("Bill Liu");
MODULE_LICENSE("GPL");
