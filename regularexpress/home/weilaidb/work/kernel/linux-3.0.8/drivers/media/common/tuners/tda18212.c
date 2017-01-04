static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
static int tda18212_wr_regs(struct tda18212_priv *priv, u8 reg, u8 *val,
int len)
static int tda18212_rd_regs(struct tda18212_priv *priv, u8 reg, u8 *val,
int len)
static int tda18212_wr_reg(struct tda18212_priv *priv, u8 reg, u8 val)
static int tda18212_rd_reg(struct tda18212_priv *priv, u8 reg, u8 *val)
static int tda18212_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int tda18212_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops tda18212_tuner_ops = ;
struct dvb_frontend *tda18212_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18212_config *cfg)
EXPORT_SYMBOL(tda18212_attach);
MODULE_DESCRIPTION("NXP TDA18212HN silicon tuner driver");
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_LICENSE("GPL");
