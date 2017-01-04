struct cx22702_state ;
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable verbose debug messages");
#define dprintk	if (debug) printk
static const u8 init_tab[] = ;
static int cx22702_writereg(struct cx22702_state *state, u8 reg, u8 data)
static u8 cx22702_readreg(struct cx22702_state *state, u8 reg)
static int cx22702_set_inversion(struct cx22702_state *state, int inversion)
static int cx22702_get_tps(struct cx22702_state *state,
struct dvb_ofdm_parameters *p)
static int cx22702_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int cx22702_set_tps(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx22702_init(struct dvb_frontend *fe)
static int cx22702_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int cx22702_read_ber(struct dvb_frontend *fe, u32 *ber)
static int cx22702_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int cx22702_read_snr(struct dvb_frontend *fe, u16 *snr)
static int cx22702_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int cx22702_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx22702_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static void cx22702_release(struct dvb_frontend *fe)
static const struct dvb_frontend_ops cx22702_ops;
struct dvb_frontend *cx22702_attach(const struct cx22702_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(cx22702_attach);
static const struct dvb_frontend_ops cx22702_ops = ;
MODULE_DESCRIPTION("Conexant CX22702 DVB-T Demodulator driver");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
