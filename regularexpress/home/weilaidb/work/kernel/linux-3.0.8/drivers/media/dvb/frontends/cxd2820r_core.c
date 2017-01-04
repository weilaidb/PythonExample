int cxd2820r_debug;
module_param_named(debug, cxd2820r_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
static int cxd2820r_wr_regs_i2c(struct cxd2820r_priv *priv, u8 i2c, u8 reg,
u8 *val, int len)
static int cxd2820r_rd_regs_i2c(struct cxd2820r_priv *priv, u8 i2c, u8 reg,
u8 *val, int len)
int cxd2820r_wr_regs(struct cxd2820r_priv *priv, u32 reginfo, u8 *val,
int len)
int cxd2820r_rd_regs(struct cxd2820r_priv *priv, u32 reginfo, u8 *val,
int len)
int cxd2820r_wr_reg(struct cxd2820r_priv *priv, u32 reg, u8 val)
int cxd2820r_rd_reg(struct cxd2820r_priv *priv, u32 reg, u8 *val)
int cxd2820r_wr_reg_mask(struct cxd2820r_priv *priv, u32 reg, u8 val,
u8 mask)
int cxd2820r_gpio(struct dvb_frontend *fe)
static int cxd2820r_lock(struct cxd2820r_priv *priv, int active_fe)
static void cxd2820r_unlock(struct cxd2820r_priv *priv, int active_fe)
u32 cxd2820r_div_u64_round_closest(u64 dividend, u32 divisor)
static int cxd2820r_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cxd2820r_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int cxd2820r_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cxd2820r_read_ber(struct dvb_frontend *fe, u32 *ber)
static int cxd2820r_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int cxd2820r_read_snr(struct dvb_frontend *fe, u16 *snr)
static int cxd2820r_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int cxd2820r_init(struct dvb_frontend *fe)
static int cxd2820r_sleep(struct dvb_frontend *fe)
static int cxd2820r_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *s)
static enum dvbfe_search cxd2820r_search(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cxd2820r_get_frontend_algo(struct dvb_frontend *fe)
static void cxd2820r_release(struct dvb_frontend *fe)
static u32 cxd2820r_tuner_i2c_func(struct i2c_adapter *adapter)
static int cxd2820r_tuner_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msg[], int num)
static struct i2c_algorithm cxd2820r_tuner_i2c_algo = ;
struct i2c_adapter *cxd2820r_get_tuner_i2c_adapter(struct dvb_frontend *fe)
EXPORT_SYMBOL(cxd2820r_get_tuner_i2c_adapter);
static struct dvb_frontend_ops cxd2820r_ops[2];
struct dvb_frontend *cxd2820r_attach(const struct cxd2820r_config *cfg,
struct i2c_adapter *i2c, struct dvb_frontend *fe)
EXPORT_SYMBOL(cxd2820r_attach);
static struct dvb_frontend_ops cxd2820r_ops[2] = ;
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Sony CXD2820R demodulator driver");
MODULE_LICENSE("GPL");
