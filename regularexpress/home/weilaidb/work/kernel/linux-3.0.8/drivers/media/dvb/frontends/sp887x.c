#define SP887X_DEFAULT_FIRMWARE "dvb-fe-sp887x.fw"
struct sp887x_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int i2c_writebytes (struct sp887x_state* state, u8 *buf, u8 len)
static int sp887x_writereg (struct sp887x_state* state, u16 reg, u16 data)
static int sp887x_readreg (struct sp887x_state* state, u16 reg)
static void sp887x_microcontroller_stop (struct sp887x_state* state)
static void sp887x_microcontroller_start (struct sp887x_state* state)
static void sp887x_setup_agc (struct sp887x_state* state)
#define BLOCKSIZE 30
#define FW_SIZE 0x4000
static int sp887x_initial_setup (struct dvb_frontend* fe, const struct firmware *fw)
;
static int configure_reg0xc05 (struct dvb_frontend_parameters *p, u16 *reg0xc05)
static void divide (int n, int d, int *quotient_i, int *quotient_f)
static void sp887x_correct_offsets (struct sp887x_state* state,
struct dvb_frontend_parameters *p,
int actual_freq)
static int sp887x_setup_frontend_parameters (struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int sp887x_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int sp887x_read_ber(struct dvb_frontend* fe, u32* ber)
static int sp887x_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int sp887x_read_snr(struct dvb_frontend* fe, u16* snr)
static int sp887x_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int sp887x_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int sp887x_sleep(struct dvb_frontend* fe)
static int sp887x_init(struct dvb_frontend* fe)
static int sp887x_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void sp887x_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops sp887x_ops;
struct dvb_frontend* sp887x_attach(const struct sp887x_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops sp887x_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Spase sp887x DVB-T demodulator driver");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(sp887x_attach);
