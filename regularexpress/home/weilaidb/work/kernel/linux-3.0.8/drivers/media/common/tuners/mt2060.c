static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
#define dprintk(args...) do  while (0)
static int mt2060_readreg(struct mt2060_priv *priv, u8 reg, u8 *val)
static int mt2060_writereg(struct mt2060_priv *priv, u8 reg, u8 val)
static int mt2060_writeregs(struct mt2060_priv *priv,u8 *buf, u8 len)
static u8 mt2060_config1[] = ;
static u8 mt2060_config2[] = ;
static int mt2060_spurcalc(u32 lo1,u32 lo2,u32 if2)
#define BANDWIDTH 4000
static int mt2060_spurcheck(u32 lo1,u32 lo2,u32 if2)
#define IF2  36150
#define FREF 16000
static int mt2060_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static void mt2060_calibrate(struct mt2060_priv *priv)
static int mt2060_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mt2060_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int mt2060_init(struct dvb_frontend *fe)
static int mt2060_sleep(struct dvb_frontend *fe)
static int mt2060_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops mt2060_tuner_ops = ;
struct dvb_frontend * mt2060_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, struct mt2060_config *cfg, u16 if1)
EXPORT_SYMBOL(mt2060_attach);
MODULE_AUTHOR("Olivier DANET");
MODULE_DESCRIPTION("Microtune MT2060 silicon tuner driver");
MODULE_LICENSE("GPL");
