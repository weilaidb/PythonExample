struct stv0288_state ;
#define STATUS_BER 0
#define STATUS_UCBLOCKS 1
static int debug;
static int debug_legacy_dish_switch;
#define dprintk(args...) \
do  while (0)
static int stv0288_writeregI(struct stv0288_state *state, u8 reg, u8 data)
static int stv0288_write(struct dvb_frontend *fe, const u8 buf[], int len)
static u8 stv0288_readreg(struct stv0288_state *state, u8 reg)
static int stv0288_set_symbolrate(struct dvb_frontend *fe, u32 srate)
static int stv0288_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *m)
static int stv0288_send_diseqc_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t burst)
static int stv0288_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static u8 stv0288_inittab[] = ;
static int stv0288_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t volt)
static int stv0288_init(struct dvb_frontend *fe)
static int stv0288_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int stv0288_read_ber(struct dvb_frontend *fe, u32 *ber)
static int stv0288_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int stv0288_sleep(struct dvb_frontend *fe)
static int stv0288_read_snr(struct dvb_frontend *fe, u16 *snr)
static int stv0288_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int stv0288_set_property(struct dvb_frontend *fe, struct dtv_property *p)
static int stv0288_get_property(struct dvb_frontend *fe, struct dtv_property *p)
static int stv0288_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *dfp)
static int stv0288_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static void stv0288_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops stv0288_ops = ;
struct dvb_frontend *stv0288_attach(const struct stv0288_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(stv0288_attach);
module_param(debug_legacy_dish_switch, int, 0444);
MODULE_PARM_DESC(debug_legacy_dish_switch,
"Enable timing analysis for Dish Network legacy switches");
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("ST STV0288 DVB Demodulator driver");
MODULE_AUTHOR("Georg Acher, Bob Liu, Igor liplianin");
MODULE_LICENSE("GPL");
