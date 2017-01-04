#define REG0_INIT_VAL 0x23
struct tda10023_state ;
#define dprintk(x...)
static int verbose;
static u8 tda10023_readreg (struct tda10023_state* state, u8 reg)
static int tda10023_writereg (struct tda10023_state* state, u8 reg, u8 data)
static int tda10023_writebit (struct tda10023_state* state, u8 reg, u8 mask,u8 data)
static void tda10023_writetab(struct tda10023_state* state, u8* tab)
static int lock_tuner(struct tda10023_state* state)
static int unlock_tuner(struct tda10023_state* state)
static int tda10023_setup_reg0 (struct tda10023_state* state, u8 reg0)
static int tda10023_set_symbolrate (struct tda10023_state* state, u32 sr)
static int tda10023_init (struct dvb_frontend *fe)
static int tda10023_set_parameters (struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int tda10023_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int tda10023_read_ber(struct dvb_frontend* fe, u32* ber)
static int tda10023_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int tda10023_read_snr(struct dvb_frontend* fe, u16* snr)
static int tda10023_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int tda10023_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int tda10023_sleep(struct dvb_frontend* fe)
static int tda10023_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static void tda10023_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops tda10023_ops;
struct dvb_frontend *tda10023_attach(const struct tda10023_config *config,
struct i2c_adapter *i2c,
u8 pwm)
static struct dvb_frontend_ops tda10023_ops = ;
MODULE_DESCRIPTION("Philips TDA10023 DVB-C demodulator driver");
MODULE_AUTHOR("Georg Acher, Hartmut Birr");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(tda10023_attach);
