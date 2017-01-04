static int debug;
#define dprintk(args...) \
do  while (0)
struct stb6000_priv ;
static int stb6000_release(struct dvb_frontend *fe)
static int stb6000_sleep(struct dvb_frontend *fe)
static int stb6000_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int stb6000_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static struct dvb_tuner_ops stb6000_tuner_ops = ;
struct dvb_frontend *stb6000_attach(struct dvb_frontend *fe, int addr,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stb6000_attach);
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("DVB STB6000 driver");
MODULE_AUTHOR("Igor M. Liplianin <liplianin@me.by>");
MODULE_LICENSE("GPL");
