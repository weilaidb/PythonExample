#define dprintk(args...) \
do  while (0)
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
static int atbm8830_write_reg(struct atbm_state *priv, u16 reg, u8 data)
static int atbm8830_read_reg(struct atbm_state *priv, u16 reg, u8 *p_data)
static inline int atbm8830_reglatch_lock(struct atbm_state *priv, int lock)
static int set_osc_freq(struct atbm_state *priv, u32 freq)
static int set_if_freq(struct atbm_state *priv, u32 freq)
static int is_locked(struct atbm_state *priv, u8 *locked)
static int set_agc_config(struct atbm_state *priv,
u8 min, u8 max, u8 hold_loop)
static int set_static_channel_mode(struct atbm_state *priv)
static int set_ts_config(struct atbm_state *priv)
static int atbm8830_init(struct dvb_frontend *fe)
static void atbm8830_release(struct dvb_frontend *fe)
static int atbm8830_set_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fe_params)
static int atbm8830_get_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fe_params)
static int atbm8830_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static int atbm8830_read_status(struct dvb_frontend *fe, fe_status_t *fe_status)
static int atbm8830_read_ber(struct dvb_frontend *fe, u32 *ber)
static int atbm8830_read_signal_strength(struct dvb_frontend *fe, u16 *signal)
static int atbm8830_read_snr(struct dvb_frontend *fe, u16 *snr)
static int atbm8830_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int atbm8830_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static struct dvb_frontend_ops atbm8830_ops = ;
struct dvb_frontend *atbm8830_attach(const struct atbm8830_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(atbm8830_attach);
MODULE_DESCRIPTION("AltoBeam ATBM8830/8831 GB20600 demodulator driver");
MODULE_AUTHOR("David T. L. Wong <davidtlwong@gmail.com>");
MODULE_LICENSE("GPL");
