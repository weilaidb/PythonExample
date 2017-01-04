struct l64781_state ;
#define dprintk(args...) \
do  while (0)
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
static int l64781_writereg (struct l64781_state* state, u8 reg, u8 data)
static int l64781_readreg (struct l64781_state* state, u8 reg)
static void apply_tps (struct l64781_state* state)
static void reset_afc (struct l64781_state* state)
static int reset_and_configure (struct l64781_state* state)
static int apply_frontend_param (struct dvb_frontend* fe, struct dvb_frontend_parameters *param)
static int get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters* param)
static int l64781_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int l64781_read_ber(struct dvb_frontend* fe, u32* ber)
static int l64781_read_signal_strength(struct dvb_frontend* fe, u16* signal_strength)
static int l64781_read_snr(struct dvb_frontend* fe, u16* snr)
static int l64781_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int l64781_sleep(struct dvb_frontend* fe)
static int l64781_init(struct dvb_frontend* fe)
static int l64781_get_tune_settings(struct dvb_frontend* fe,
struct dvb_frontend_tune_settings* fesettings)
static void l64781_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops l64781_ops;
struct dvb_frontend* l64781_attach(const struct l64781_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops l64781_ops = ;
MODULE_DESCRIPTION("LSI L64781 DVB-T Demodulator driver");
MODULE_AUTHOR("Holger Waechtler, Marko Kohtala");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(l64781_attach);
