#define NXT2002_DEFAULT_FIRMWARE "dvb-fe-nxt2002.fw"
#define NXT2004_DEFAULT_FIRMWARE "dvb-fe-nxt2004.fw"
#define CRC_CCIT_MASK 0x1021
struct nxt200x_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int i2c_writebytes (struct nxt200x_state* state, u8 addr, u8 *buf, u8 len)
static int i2c_readbytes(struct nxt200x_state *state, u8 addr, u8 *buf, u8 len)
static int nxt200x_writebytes (struct nxt200x_state* state, u8 reg,
const u8 *buf, u8 len)
static int nxt200x_readbytes(struct nxt200x_state *state, u8 reg, u8 *buf, u8 len)
static u16 nxt200x_crc(u16 crc, u8 c)
static int nxt200x_writereg_multibyte (struct nxt200x_state* state, u8 reg, u8* data, u8 len)
static int nxt200x_readreg_multibyte (struct nxt200x_state* state, u8 reg, u8* data, u8 len)
static void nxt200x_microcontroller_stop (struct nxt200x_state* state)
static void nxt200x_microcontroller_start (struct nxt200x_state* state)
static void nxt2004_microcontroller_init (struct nxt200x_state* state)
static int nxt200x_writetuner (struct nxt200x_state* state, u8* data)
static void nxt200x_agc_reset(struct nxt200x_state* state)
static int nxt2002_load_firmware (struct dvb_frontend* fe, const struct firmware *fw)
;
static int nxt2004_load_firmware (struct dvb_frontend* fe, const struct firmware *fw)
;
static int nxt200x_setup_frontend_parameters (struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int nxt200x_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int nxt200x_read_ber(struct dvb_frontend* fe, u32* ber)
static int nxt200x_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int nxt200x_read_snr(struct dvb_frontend* fe, u16* snr)
static int nxt200x_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int nxt200x_sleep(struct dvb_frontend* fe)
static int nxt2002_init(struct dvb_frontend* fe)
static int nxt2004_init(struct dvb_frontend* fe)
static int nxt200x_init(struct dvb_frontend* fe)
static int nxt200x_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void nxt200x_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops nxt200x_ops;
struct dvb_frontend* nxt200x_attach(const struct nxt200x_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops nxt200x_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("NXT200X (ATSC 8VSB & ITU-T J.83 AnnexB 64/256 QAM) Demodulator Driver");
MODULE_AUTHOR("Kirk Lapray, Michael Krufky, Jean-Francois Thibert, and Taylor Jacob");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(nxt200x_attach);
