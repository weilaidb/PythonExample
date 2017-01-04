#define dprintk(args...) \
do  while (0)
static int debug;
static int fake_signal_str = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
module_param(fake_signal_str, int, 0644);
MODULE_PARM_DESC(fake_signal_str, "fake signal strength for LGS8913."
"Signal strength calculation is slow.(default:on).");
static int lgs8gxx_write_reg(struct lgs8gxx_state *priv, u8 reg, u8 data)
static int lgs8gxx_read_reg(struct lgs8gxx_state *priv, u8 reg, u8 *p_data)
static int lgs8gxx_soft_reset(struct lgs8gxx_state *priv)
static int wait_reg_mask(struct lgs8gxx_state *priv, u8 reg, u8 mask,
u8 val, u8 delay, u8 tries)
static int lgs8gxx_set_ad_mode(struct lgs8gxx_state *priv)
static int lgs8gxx_set_if_freq(struct lgs8gxx_state *priv, u32 freq)
static int lgs8gxx_get_afc_phase(struct lgs8gxx_state *priv)
static int lgs8gxx_set_mode_auto(struct lgs8gxx_state *priv)
static int lgs8gxx_set_mode_manual(struct lgs8gxx_state *priv)
static int lgs8gxx_is_locked(struct lgs8gxx_state *priv, u8 *locked)
static int lgs8gxx_wait_ca_lock(struct lgs8gxx_state *priv, u8 *locked)
static int lgs8gxx_is_autodetect_finished(struct lgs8gxx_state *priv,
u8 *finished)
static int lgs8gxx_autolock_gi(struct lgs8gxx_state *priv, u8 gi, u8 cpn,
u8 *locked)
static int lgs8gxx_auto_detect(struct lgs8gxx_state *priv,
u8 *detected_param, u8 *gi)
static void lgs8gxx_auto_lock(struct lgs8gxx_state *priv)
static int lgs8gxx_set_mpeg_mode(struct lgs8gxx_state *priv,
u8 serial, u8 clk_pol, u8 clk_gated)
static int lgs8g75_set_adc_vpp(struct lgs8gxx_state *priv,
u8 sel)
static int lgs8913_init(struct lgs8gxx_state *priv)
static int lgs8g75_init_data(struct lgs8gxx_state *priv)
static int lgs8gxx_init(struct dvb_frontend *fe)
static void lgs8gxx_release(struct dvb_frontend *fe)
static int lgs8gxx_write(struct dvb_frontend *fe, const u8 buf[], int len)
static int lgs8gxx_set_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fe_params)
static int lgs8gxx_get_fe(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fe_params)
static
int lgs8gxx_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static int lgs8gxx_read_status(struct dvb_frontend *fe, fe_status_t *fe_status)
static int lgs8gxx_read_signal_agc(struct lgs8gxx_state *priv, u16 *signal)
static int lgs8913_read_signal_strength(struct lgs8gxx_state *priv, u16 *signal)
static int lgs8g75_read_signal_strength(struct lgs8gxx_state *priv, u16 *signal)
static int lgs8gxx_read_signal_strength(struct dvb_frontend *fe, u16 *signal)
static int lgs8gxx_read_snr(struct dvb_frontend *fe, u16 *snr)
static int lgs8gxx_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static void packet_counter_start(struct lgs8gxx_state *priv)
static void packet_counter_stop(struct lgs8gxx_state *priv)
static int lgs8gxx_read_ber(struct dvb_frontend *fe, u32 *ber)
static int lgs8gxx_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static struct dvb_frontend_ops lgs8gxx_ops = ;
struct dvb_frontend *lgs8gxx_attach(const struct lgs8gxx_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(lgs8gxx_attach);
MODULE_DESCRIPTION("Legend Silicon LGS8913/LGS8GXX DMB-TH demodulator driver");
MODULE_AUTHOR("David T. L. Wong <davidtlwong@gmail.com>");
MODULE_LICENSE("GPL");
