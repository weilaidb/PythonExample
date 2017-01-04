#define OR51132_VSB_FIRMWARE "dvb-fe-or51132-vsb.fw"
#define OR51132_QAM_FIRMWARE "dvb-fe-or51132-qam.fw"
static int debug;
#define dprintk(args...) \
do  while (0)
struct or51132_state
;
static int or51132_writebuf(struct or51132_state *state, const u8 *buf, int len)
#define or51132_writebytes(state, data...)  \
()
static int or51132_readbuf(struct or51132_state *state, u8 *buf, int len)
static int or51132_readreg(struct or51132_state *state, u8 reg)
static int or51132_load_firmware (struct dvb_frontend* fe, const struct firmware *fw)
;
static int or51132_init(struct dvb_frontend* fe)
static int or51132_read_ber(struct dvb_frontend* fe, u32* ber)
static int or51132_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int or51132_sleep(struct dvb_frontend* fe)
static int or51132_setmode(struct dvb_frontend* fe)
#define MOD_FWCLASS_UNKNOWN	0
#define MOD_FWCLASS_VSB		1
#define MOD_FWCLASS_QAM		2
static int modulation_fw_class(fe_modulation_t modulation)
static int or51132_set_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int or51132_get_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int or51132_read_status(struct dvb_frontend* fe, fe_status_t* status)
static u32 calculate_snr(u32 mse, u32 c)
static int or51132_read_snr(struct dvb_frontend* fe, u16* snr)
static int or51132_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int or51132_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fe_tune_settings)
static void or51132_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops or51132_ops;
struct dvb_frontend* or51132_attach(const struct or51132_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops or51132_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("OR51132 ATSC [pcHDTV HD-3000] (8VSB & ITU J83 AnnexB FEC QAM64/256) Demodulator Driver");
MODULE_AUTHOR("Kirk Lapray");
MODULE_AUTHOR("Trent Piepho");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(or51132_attach);
