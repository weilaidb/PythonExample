struct stv0297_state ;
#if 1
#define dprintk(x...) printk(x)
#define dprintk(x...)
#define STV0297_CLOCK_KHZ   28900
static int stv0297_writereg(struct stv0297_state *state, u8 reg, u8 data)
static int stv0297_readreg(struct stv0297_state *state, u8 reg)
static int stv0297_writereg_mask(struct stv0297_state *state, u8 reg, u8 mask, u8 data)
static int stv0297_readregs(struct stv0297_state *state, u8 reg1, u8 * b, u8 len)
static u32 stv0297_get_symbolrate(struct stv0297_state *state)
static void stv0297_set_symbolrate(struct stv0297_state *state, u32 srate)
static void stv0297_set_sweeprate(struct stv0297_state *state, short fshift, long symrate)
static void stv0297_set_carrieroffset(struct stv0297_state *state, long offset)
static void stv0297_set_initialdemodfreq(struct stv0297_state *state, long freq)
static int stv0297_set_qam(struct stv0297_state *state, fe_modulation_t modulation)
static int stv0297_set_inversion(struct stv0297_state *state, fe_spectral_inversion_t inversion)
static int stv0297_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int stv0297_init(struct dvb_frontend *fe)
static int stv0297_sleep(struct dvb_frontend *fe)
static int stv0297_read_status(struct dvb_frontend *fe, fe_status_t * status)
static int stv0297_read_ber(struct dvb_frontend *fe, u32 * ber)
static int stv0297_read_signal_strength(struct dvb_frontend *fe, u16 * strength)
static int stv0297_read_snr(struct dvb_frontend *fe, u16 * snr)
static int stv0297_read_ucblocks(struct dvb_frontend *fe, u32 * ucblocks)
static int stv0297_set_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int stv0297_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static void stv0297_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops stv0297_ops;
struct dvb_frontend *stv0297_attach(const struct stv0297_config *config,
struct i2c_adapter *i2c)
static struct dvb_frontend_ops stv0297_ops = ;
MODULE_DESCRIPTION("ST STV0297 DVB-C Demodulator driver");
MODULE_AUTHOR("Dennis Noermann and Andrew de Quincey");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(stv0297_attach);
