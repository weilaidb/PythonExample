static int zl10036_debug;
#define dprintk(level, args...) \
do  while (0)
#define deb_info(args...)  dprintk(0x01, args)
#define deb_i2c(args...)  dprintk(0x02, args)
struct zl10036_state ;
#define _XTAL 10111
#define _RDIV 10
#define _RDIV_REG 0x0a
#define _FR   (_XTAL/_RDIV)
#define STATUS_POR 0x80
#define STATUS_FL  0x40
static int zl10036_read_status_reg(struct zl10036_state *state)
static int zl10036_write(struct zl10036_state *state, u8 buf[], u8 count)
static int zl10036_release(struct dvb_frontend *fe)
static int zl10036_sleep(struct dvb_frontend *fe)
static int zl10036_set_frequency(struct zl10036_state *state, u32 frequency)
static int zl10036_set_bandwidth(struct zl10036_state *state, u32 fbw)
static int zl10036_set_gain_params(struct zl10036_state *state,
int c)
static int zl10036_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int zl10036_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int zl10036_init_regs(struct zl10036_state *state)
static int zl10036_init(struct dvb_frontend *fe)
static struct dvb_tuner_ops zl10036_tuner_ops = ;
struct dvb_frontend *zl10036_attach(struct dvb_frontend *fe,
const struct zl10036_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(zl10036_attach);
module_param_named(debug, zl10036_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("DVB ZL10036 driver");
MODULE_AUTHOR("Tino Reichardt");
MODULE_AUTHOR("Matthias Schwarzott");
MODULE_LICENSE("GPL");
