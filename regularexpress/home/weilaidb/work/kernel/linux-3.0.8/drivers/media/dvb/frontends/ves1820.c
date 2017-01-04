struct ves1820_state ;
static int verbose;
static u8 ves1820_inittab[] = ;
static int ves1820_writereg(struct ves1820_state *state, u8 reg, u8 data)
static u8 ves1820_readreg(struct ves1820_state *state, u8 reg)
static int ves1820_setup_reg0(struct ves1820_state *state, u8 reg0, fe_spectral_inversion_t inversion)
static int ves1820_set_symbolrate(struct ves1820_state *state, u32 symbolrate)
static int ves1820_init(struct dvb_frontend* fe)
static int ves1820_set_parameters(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ves1820_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int ves1820_read_ber(struct dvb_frontend* fe, u32* ber)
static int ves1820_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int ves1820_read_snr(struct dvb_frontend* fe, u16* snr)
static int ves1820_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int ves1820_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ves1820_sleep(struct dvb_frontend* fe)
static int ves1820_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void ves1820_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops ves1820_ops;
struct dvb_frontend* ves1820_attach(const struct ves1820_config* config,
struct i2c_adapter* i2c,
u8 pwm)
static struct dvb_frontend_ops ves1820_ops = ;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "print AFC offset after tuning for debugging the PWM setting");
MODULE_DESCRIPTION("VLSI VES1820 DVB-C Demodulator driver");
MODULE_AUTHOR("Ralph Metzler, Holger Waechtler");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ves1820_attach);
