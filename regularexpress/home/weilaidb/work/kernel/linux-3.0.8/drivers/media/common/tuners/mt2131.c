static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define dprintk(level,fmt, arg...) if (debug >= level) \
printk(KERN_INFO "%s: " fmt, "mt2131", ## arg)
static u8 mt2131_config1[] = ;
static u8 mt2131_config2[] = ;
static int mt2131_readreg(struct mt2131_priv *priv, u8 reg, u8 *val)
static int mt2131_writereg(struct mt2131_priv *priv, u8 reg, u8 val)
static int mt2131_writeregs(struct mt2131_priv *priv,u8 *buf, u8 len)
static int mt2131_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int mt2131_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mt2131_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int mt2131_get_status(struct dvb_frontend *fe, u32 *status)
static int mt2131_init(struct dvb_frontend *fe)
static int mt2131_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops mt2131_tuner_ops = ;
struct dvb_frontend * mt2131_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mt2131_config *cfg, u16 if1)
EXPORT_SYMBOL(mt2131_attach);
MODULE_AUTHOR("Steven Toth");
MODULE_DESCRIPTION("Microtune MT2131 silicon tuner driver");
MODULE_LICENSE("GPL");
