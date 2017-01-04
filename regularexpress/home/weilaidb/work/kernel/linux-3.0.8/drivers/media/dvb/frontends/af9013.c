int af9013_debug;
struct af9013_state ;
static u8 regmask[8] = ;
static int af9013_write_regs(struct af9013_state *state, u8 mbox, u16 reg,
u8 *val, u8 len)
static int af9013_write_ofdm_regs(struct af9013_state *state, u16 reg, u8 *val,
u8 len)
static int af9013_write_ofsm_regs(struct af9013_state *state, u16 reg, u8 *val,
u8 len)
static int af9013_write_reg(struct af9013_state *state, u16 reg, u8 val)
static int af9013_read_reg(struct af9013_state *state, u16 reg, u8 *val)
static int af9013_write_reg_bits(struct af9013_state *state, u16 reg, u8 pos,
u8 len, u8 val)
static int af9013_read_reg_bits(struct af9013_state *state, u16 reg, u8 pos,
u8 len, u8 *val)
static int af9013_set_gpio(struct af9013_state *state, u8 gpio, u8 gpioval)
static u32 af913_div(u32 a, u32 b, u32 x)
static int af9013_set_coeff(struct af9013_state *state, fe_bandwidth_t bw)
static int af9013_set_adc_ctrl(struct af9013_state *state)
static int af9013_set_freq_ctrl(struct af9013_state *state, fe_bandwidth_t bw)
static int af9013_set_ofdm_params(struct af9013_state *state,
struct dvb_ofdm_parameters *params, u8 *auto_mode)
static int af9013_reset(struct af9013_state *state, u8 sleep)
static int af9013_power_ctrl(struct af9013_state *state, u8 onoff)
static int af9013_lock_led(struct af9013_state *state, u8 onoff)
static int af9013_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int af9013_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int af9013_update_ber_unc(struct dvb_frontend *fe)
static int af9013_update_snr(struct dvb_frontend *fe)
static int af9013_update_signal_strength(struct dvb_frontend *fe)
static int af9013_update_statistics(struct dvb_frontend *fe)
static int af9013_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static int af9013_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int af9013_read_ber(struct dvb_frontend *fe, u32 *ber)
static int af9013_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int af9013_read_snr(struct dvb_frontend *fe, u16 *snr)
static int af9013_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int af9013_sleep(struct dvb_frontend *fe)
static int af9013_init(struct dvb_frontend *fe)
static struct dvb_frontend_ops af9013_ops;
static int af9013_download_firmware(struct af9013_state *state)
static int af9013_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static void af9013_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops af9013_ops;
struct dvb_frontend *af9013_attach(const struct af9013_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(af9013_attach);
static struct dvb_frontend_ops af9013_ops = ;
module_param_named(debug, af9013_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("Afatech AF9013 DVB-T demodulator driver");
MODULE_LICENSE("GPL");
