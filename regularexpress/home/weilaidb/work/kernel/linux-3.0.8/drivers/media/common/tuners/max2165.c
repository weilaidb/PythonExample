#define dprintk(args...) \
do  while (0)
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
static int max2165_write_reg(struct max2165_priv *priv, u8 reg, u8 data)
static int max2165_read_reg(struct max2165_priv *priv, u8 reg, u8 *p_data)
static int max2165_mask_write_reg(struct max2165_priv *priv, u8 reg,
u8 mask, u8 data)
static int max2165_read_rom_table(struct max2165_priv *priv)
static int max2165_set_osc(struct max2165_priv *priv, u8 osc)
static int max2165_set_bandwidth(struct max2165_priv *priv, u32 bw)
int fixpt_div32(u32 dividend, u32 divisor, u32 *quotient, u32 *fraction)
static int max2165_set_rf(struct max2165_priv *priv, u32 freq)
static void max2165_debug_status(struct max2165_priv *priv)
static int max2165_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int max2165_get_frequency(struct dvb_frontend *fe, u32 *freq)
static int max2165_get_bandwidth(struct dvb_frontend *fe, u32 *bw)
static int max2165_get_status(struct dvb_frontend *fe, u32 *status)
static int max2165_sleep(struct dvb_frontend *fe)
static int max2165_init(struct dvb_frontend *fe)
static int max2165_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops max2165_tuner_ops = ;
struct dvb_frontend *max2165_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct max2165_config *cfg)
EXPORT_SYMBOL(max2165_attach);
MODULE_AUTHOR("David T. L. Wong <davidtlwong@gmail.com>");
MODULE_DESCRIPTION("Maxim MAX2165 silicon tuner driver");
MODULE_LICENSE("GPL");
