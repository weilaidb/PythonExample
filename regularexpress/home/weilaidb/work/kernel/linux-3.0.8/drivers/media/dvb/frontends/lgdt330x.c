static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"Turn on/off lgdt330x frontend debugging (default:off).");
#define dprintk(args...) \
do  while (0)
struct lgdt330x_state
;
static int i2c_write_demod_bytes (struct lgdt330x_state* state,
u8 *buf,
int len )
static u8 i2c_read_demod_bytes (struct lgdt330x_state* state,
enum I2C_REG reg, u8* buf, int len)
static int lgdt3302_SwReset(struct lgdt330x_state* state)
static int lgdt3303_SwReset(struct lgdt330x_state* state)
static int lgdt330x_SwReset(struct lgdt330x_state* state)
static int lgdt330x_init(struct dvb_frontend* fe)
static int lgdt330x_read_ber(struct dvb_frontend* fe, u32* ber)
static int lgdt330x_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int lgdt330x_set_parameters(struct dvb_frontend* fe,
struct dvb_frontend_parameters *param)
static int lgdt330x_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters* param)
static int lgdt3302_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int lgdt3303_read_status(struct dvb_frontend* fe, fe_status_t* status)
static u32 calculate_snr(u32 mse, u32 c)
static int lgdt3302_read_snr(struct dvb_frontend* fe, u16* snr)
static int lgdt3303_read_snr(struct dvb_frontend* fe, u16* snr)
static int lgdt330x_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int lgdt330x_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fe_tune_settings)
static void lgdt330x_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops lgdt3302_ops;
static struct dvb_frontend_ops lgdt3303_ops;
struct dvb_frontend* lgdt330x_attach(const struct lgdt330x_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops lgdt3302_ops = ;
static struct dvb_frontend_ops lgdt3303_ops = ;
MODULE_DESCRIPTION("LGDT330X (ATSC 8VSB & ITU-T J.83 AnnexB 64/256 QAM) Demodulator Driver");
MODULE_AUTHOR("Wilson Michaels");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(lgdt330x_attach);
