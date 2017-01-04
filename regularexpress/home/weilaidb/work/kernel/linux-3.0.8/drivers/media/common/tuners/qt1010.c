static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define dprintk(args...) \
do  while (0)
static int qt1010_readreg(struct qt1010_priv *priv, u8 reg, u8 *val)
static int qt1010_writereg(struct qt1010_priv *priv, u8 reg, u8 val)
static void qt1010_dump_regs(struct qt1010_priv *priv)
static int qt1010_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int qt1010_init_meas1(struct qt1010_priv *priv,
u8 oper, u8 reg, u8 reg_init_val, u8 *retval)
static u8 qt1010_init_meas2(struct qt1010_priv *priv,
u8 reg_init_val, u8 *retval)
static int qt1010_init(struct dvb_frontend *fe)
static int qt1010_release(struct dvb_frontend *fe)
static int qt1010_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int qt1010_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static const struct dvb_tuner_ops qt1010_tuner_ops = ;
struct dvb_frontend * qt1010_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct qt1010_config *cfg)
EXPORT_SYMBOL(qt1010_attach);
MODULE_DESCRIPTION("Quantek QT1010 silicon tuner driver");
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_AUTHOR("Aapo Tahkola <aet@rasterburn.org>");
MODULE_VERSION("0.1");
MODULE_LICENSE("GPL");
