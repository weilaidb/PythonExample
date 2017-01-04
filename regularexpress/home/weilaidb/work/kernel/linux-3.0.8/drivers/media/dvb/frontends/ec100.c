int ec100_debug;
module_param_named(debug, ec100_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
struct ec100_state ;
static int ec100_write_reg(struct ec100_state *state, u8 reg, u8 val)
static int ec100_read_reg(struct ec100_state *state, u8 reg, u8 *val)
static int ec100_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int ec100_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *fesettings)
static int ec100_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int ec100_read_ber(struct dvb_frontend *fe, u32 *ber)
static int ec100_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int ec100_read_snr(struct dvb_frontend *fe, u16 *snr)
static int ec100_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static void ec100_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops ec100_ops;
struct dvb_frontend *ec100_attach(const struct ec100_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(ec100_attach);
static struct dvb_frontend_ops ec100_ops = ;
MODULE_AUTHOR("Antti Palosaari <crope@iki.fi>");
MODULE_DESCRIPTION("E3C EC100 DVB-T demodulator driver");
MODULE_LICENSE("GPL");
