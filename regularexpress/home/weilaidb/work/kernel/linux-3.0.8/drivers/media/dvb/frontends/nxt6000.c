struct nxt6000_state ;
static int debug;
#define dprintk if (debug) printk
static int nxt6000_writereg(struct nxt6000_state* state, u8 reg, u8 data)
static u8 nxt6000_readreg(struct nxt6000_state* state, u8 reg)
static void nxt6000_reset(struct nxt6000_state* state)
static int nxt6000_set_bandwidth(struct nxt6000_state* state, fe_bandwidth_t bandwidth)
static int nxt6000_set_guard_interval(struct nxt6000_state* state, fe_guard_interval_t guard_interval)
static int nxt6000_set_inversion(struct nxt6000_state* state, fe_spectral_inversion_t inversion)
static int nxt6000_set_transmission_mode(struct nxt6000_state* state, fe_transmit_mode_t transmission_mode)
static void nxt6000_setup(struct dvb_frontend* fe)
static void nxt6000_dump_status(struct nxt6000_state *state)
static int nxt6000_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int nxt6000_init(struct dvb_frontend* fe)
static int nxt6000_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *param)
static void nxt6000_release(struct dvb_frontend* fe)
static int nxt6000_read_snr(struct dvb_frontend* fe, u16* snr)
static int nxt6000_read_ber(struct dvb_frontend* fe, u32* ber)
static int nxt6000_read_signal_strength(struct dvb_frontend* fe, u16* signal_strength)
static int nxt6000_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static int nxt6000_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static struct dvb_frontend_ops nxt6000_ops;
struct dvb_frontend* nxt6000_attach(const struct nxt6000_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops nxt6000_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("NxtWave NXT6000 DVB-T demodulator driver");
MODULE_AUTHOR("Florian Schirmer");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(nxt6000_attach);
