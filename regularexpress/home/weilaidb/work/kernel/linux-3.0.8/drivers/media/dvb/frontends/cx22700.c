struct cx22700_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static u8 init_tab [] = ;
static int cx22700_writereg (struct cx22700_state* state, u8 reg, u8 data)
static int cx22700_readreg (struct cx22700_state* state, u8 reg)
static int cx22700_set_inversion (struct cx22700_state* state, int inversion)
static int cx22700_set_tps (struct cx22700_state *state, struct dvb_ofdm_parameters *p)
static int cx22700_get_tps (struct cx22700_state* state, struct dvb_ofdm_parameters *p)
static int cx22700_init (struct dvb_frontend* fe)
static int cx22700_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int cx22700_read_ber(struct dvb_frontend* fe, u32* ber)
static int cx22700_read_signal_strength(struct dvb_frontend* fe, u16* signal_strength)
static int cx22700_read_snr(struct dvb_frontend* fe, u16* snr)
static int cx22700_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int cx22700_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int cx22700_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int cx22700_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int cx22700_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void cx22700_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops cx22700_ops;
struct dvb_frontend* cx22700_attach(const struct cx22700_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops cx22700_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Conexant CX22700 DVB-T Demodulator driver");
MODULE_AUTHOR("Holger Waechtler");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(cx22700_attach);
