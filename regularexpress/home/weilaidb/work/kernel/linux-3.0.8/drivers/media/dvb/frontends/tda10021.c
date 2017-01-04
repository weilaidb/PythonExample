struct tda10021_state ;
static int verbose;
#define XIN 57840000UL
#define FIN (XIN >> 4)
static int tda10021_inittab_size = 0x40;
static u8 tda10021_inittab[0x40]=
;
static int _tda10021_writereg (struct tda10021_state* state, u8 reg, u8 data)
static u8 tda10021_readreg (struct tda10021_state* state, u8 reg)
static int lock_tuner(struct tda10021_state* state)
static int unlock_tuner(struct tda10021_state* state)
static int tda10021_setup_reg0 (struct tda10021_state* state, u8 reg0,
fe_spectral_inversion_t inversion)
static int tda10021_set_symbolrate (struct tda10021_state* state, u32 symbolrate)
static int tda10021_init (struct dvb_frontend *fe)
static int tda10021_set_parameters (struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int tda10021_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int tda10021_read_ber(struct dvb_frontend* fe, u32* ber)
static int tda10021_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int tda10021_read_snr(struct dvb_frontend* fe, u16* snr)
static int tda10021_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int tda10021_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int tda10021_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int tda10021_sleep(struct dvb_frontend* fe)
static void tda10021_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops tda10021_ops;
struct dvb_frontend* tda10021_attach(const struct tda1002x_config* config,
struct i2c_adapter* i2c,
u8 pwm)
static struct dvb_frontend_ops tda10021_ops = ;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "print AFC offset after tuning for debugging the PWM setting");
MODULE_DESCRIPTION("Philips TDA10021 DVB-C demodulator driver");
MODULE_AUTHOR("Ralph Metzler, Holger Waechtler, Markus Schulz");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(tda10021_attach);
