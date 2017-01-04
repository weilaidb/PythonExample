#define mc_printk(level, format, arg...)	\
printk(level "mc44s803: " format , ## arg)
static int mc44s803_writereg(struct mc44s803_priv *priv, u32 val)
static int mc44s803_readreg(struct mc44s803_priv *priv, u8 reg, u32 *val)
static int mc44s803_release(struct dvb_frontend *fe)
static int mc44s803_init(struct dvb_frontend *fe)
static int mc44s803_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int mc44s803_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static const struct dvb_tuner_ops mc44s803_tuner_ops = ;
struct dvb_frontend *mc44s803_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, struct mc44s803_config *cfg)
EXPORT_SYMBOL(mc44s803_attach);
MODULE_AUTHOR("Jochen Friedrich");
MODULE_DESCRIPTION("Freescale MC44S803 silicon tuner driver");
MODULE_LICENSE("GPL");
