struct s5h1411_state ;
static int debug;
#define dprintk(arg...) do  while (0)
static struct init_tab  init_tab[] = ;
static struct vsb_snr_tab  vsb_snr_tab[] = ;
static struct qam64_snr_tab  qam64_snr_tab[] = ;
static struct qam256_snr_tab  qam256_snr_tab[] = ;
static int s5h1411_writereg(struct s5h1411_state *state,
u8 addr, u8 reg, u16 data)
static u16 s5h1411_readreg(struct s5h1411_state *state, u8 addr, u8 reg)
static int s5h1411_softreset(struct dvb_frontend *fe)
static int s5h1411_set_if_freq(struct dvb_frontend *fe, int KHz)
static int s5h1411_set_mpeg_timing(struct dvb_frontend *fe, int mode)
static int s5h1411_set_spectralinversion(struct dvb_frontend *fe, int inversion)
static int s5h1411_set_serialmode(struct dvb_frontend *fe, int serial)
static int s5h1411_enable_modulation(struct dvb_frontend *fe,
fe_modulation_t m)
static int s5h1411_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int s5h1411_set_gpio(struct dvb_frontend *fe, int enable)
static int s5h1411_set_powerstate(struct dvb_frontend *fe, int enable)
static int s5h1411_sleep(struct dvb_frontend *fe)
static int s5h1411_register_reset(struct dvb_frontend *fe)
static int s5h1411_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s5h1411_init(struct dvb_frontend *fe)
static int s5h1411_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int s5h1411_qam256_lookup_snr(struct dvb_frontend *fe, u16 *snr, u16 v)
static int s5h1411_qam64_lookup_snr(struct dvb_frontend *fe, u16 *snr, u16 v)
static int s5h1411_vsb_lookup_snr(struct dvb_frontend *fe, u16 *snr, u16 v)
static int s5h1411_read_snr(struct dvb_frontend *fe, u16 *snr)
static int s5h1411_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int s5h1411_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int s5h1411_read_ber(struct dvb_frontend *fe, u32 *ber)
static int s5h1411_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int s5h1411_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static void s5h1411_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops s5h1411_ops;
struct dvb_frontend *s5h1411_attach(const struct s5h1411_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(s5h1411_attach);
static struct dvb_frontend_ops s5h1411_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable verbose debug messages");
MODULE_DESCRIPTION("Samsung S5H1411 QAM-B/ATSC Demodulator driver");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
