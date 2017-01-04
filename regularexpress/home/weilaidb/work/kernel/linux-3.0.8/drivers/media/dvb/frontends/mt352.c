struct mt352_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int mt352_single_write(struct dvb_frontend *fe, u8 reg, u8 val)
static int _mt352_write(struct dvb_frontend* fe, const u8 ibuf[], int ilen)
static int mt352_read_register(struct mt352_state* state, u8 reg)
static int mt352_sleep(struct dvb_frontend* fe)
static void mt352_calc_nominal_rate(struct mt352_state* state,
enum fe_bandwidth bandwidth,
unsigned char *buf)
static void mt352_calc_input_freq(struct mt352_state* state,
unsigned char *buf)
static int mt352_set_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int mt352_get_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int mt352_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int mt352_read_ber(struct dvb_frontend* fe, u32* ber)
static int mt352_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int mt352_read_snr(struct dvb_frontend* fe, u16* snr)
static int mt352_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int mt352_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fe_tune_settings)
static int mt352_init(struct dvb_frontend* fe)
static void mt352_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops mt352_ops;
struct dvb_frontend* mt352_attach(const struct mt352_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops mt352_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Zarlink MT352 DVB-T Demodulator driver");
MODULE_AUTHOR("Holger Waechtler, Daniel Mack, Antonio Mancuso");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(mt352_attach);
