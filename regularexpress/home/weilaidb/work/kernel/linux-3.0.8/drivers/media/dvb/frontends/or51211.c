#define OR51211_DEFAULT_FIRMWARE "dvb-fe-or51211.fw"
static int debug;
#define dprintk(args...) \
do  while (0)
static u8 run_buf[] = ;
static u8 cmd_buf[] = ;
struct or51211_state ;
static int i2c_writebytes (struct or51211_state* state, u8 reg, const u8 *buf,
int len)
static int i2c_readbytes(struct or51211_state *state, u8 reg, u8 *buf, int len)
static int or51211_load_firmware (struct dvb_frontend* fe,
const struct firmware *fw)
;
static int or51211_setmode(struct dvb_frontend* fe, int mode)
static int or51211_set_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int or51211_read_status(struct dvb_frontend* fe, fe_status_t* status)
static u32 calculate_snr(u32 mse, u32 c)
static int or51211_read_snr(struct dvb_frontend* fe, u16* snr)
static int or51211_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int or51211_read_ber(struct dvb_frontend* fe, u32* ber)
static int or51211_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int or51211_sleep(struct dvb_frontend* fe)
static int or51211_init(struct dvb_frontend* fe)
static int or51211_get_tune_settings(struct dvb_frontend* fe,
struct dvb_frontend_tune_settings* fesettings)
static void or51211_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops or51211_ops;
struct dvb_frontend* or51211_attach(const struct or51211_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops or51211_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Oren OR51211 VSB [pcHDTV HD-2000] Demodulator Driver");
MODULE_AUTHOR("Kirk Lapray");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(or51211_attach);
