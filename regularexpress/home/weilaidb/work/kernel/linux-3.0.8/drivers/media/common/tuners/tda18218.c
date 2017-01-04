static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
static int tda18218_wr_regs(struct tda18218_priv *priv, u8 reg, u8 *val, u8 len)
static int tda18218_rd_regs(struct tda18218_priv *priv, u8 reg, u8 *val, u8 len)
static int tda18218_wr_reg(struct tda18218_priv *priv, u8 reg, u8 val)
static int tda18218_rd_reg(struct tda18218_priv *priv, u8 reg, u8 *val)
static int tda18218_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int tda18218_sleep(struct dvb_frontend *fe)
static int tda18218_init(struct dvb_frontend *fe)
static int tda18218_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops tda18218_tuner_ops = ;
struct dvb_frontend *tda18218_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct tda18218_config *cfg)
EXPORT_SYMBOL(tda18218_attach);
MODULE_DESCRIPTION("NXP TDA18218HN silicon tuner driver");
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_LICENSE("GPL");
