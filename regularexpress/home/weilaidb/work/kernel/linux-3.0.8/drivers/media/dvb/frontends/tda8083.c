struct tda8083_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static u8 tda8083_init_tab [] = ;
static int tda8083_writereg (struct tda8083_state* state, u8 reg, u8 data)
static int tda8083_readregs (struct tda8083_state* state, u8 reg1, u8 *b, u8 len)
static inline u8 tda8083_readreg (struct tda8083_state* state, u8 reg)
static int tda8083_set_inversion (struct tda8083_state* state, fe_spectral_inversion_t inversion)
static int tda8083_set_fec (struct tda8083_state* state, fe_code_rate_t fec)
static fe_code_rate_t tda8083_get_fec (struct tda8083_state* state)
static int tda8083_set_symbolrate (struct tda8083_state* state, u32 srate)
static void tda8083_wait_diseqc_fifo (struct tda8083_state* state, int timeout)
static int tda8083_set_tone (struct tda8083_state* state, fe_sec_tone_mode_t tone)
static int tda8083_set_voltage (struct tda8083_state* state, fe_sec_voltage_t voltage)
static int tda8083_send_diseqc_burst (struct tda8083_state* state, fe_sec_mini_cmd_t burst)
static int tda8083_send_diseqc_msg (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd *m)
static int tda8083_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int tda8083_read_ber(struct dvb_frontend* fe, u32* ber)
static int tda8083_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int tda8083_read_snr(struct dvb_frontend* fe, u16* snr)
static int tda8083_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int tda8083_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int tda8083_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int tda8083_sleep(struct dvb_frontend* fe)
static int tda8083_init(struct dvb_frontend* fe)
static int tda8083_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t burst)
static int tda8083_diseqc_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int tda8083_diseqc_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static void tda8083_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops tda8083_ops;
struct dvb_frontend* tda8083_attach(const struct tda8083_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops tda8083_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Philips TDA8083 DVB-S Demodulator");
MODULE_AUTHOR("Ralph Metzler, Holger Waechtler");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(tda8083_attach);
