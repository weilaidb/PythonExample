struct ves1x93_state ;
static int debug;
#define dprintk	if (debug) printk
#define DEMOD_VES1893		0
#define DEMOD_VES1993		1
static u8 init_1893_tab [] = ;
static u8 init_1993_tab [] = ;
static u8 init_1893_wtab[] =
;
static u8 init_1993_wtab[] =
;
static int ves1x93_writereg (struct ves1x93_state* state, u8 reg, u8 data)
static u8 ves1x93_readreg (struct ves1x93_state* state, u8 reg)
static int ves1x93_clr_bit (struct ves1x93_state* state)
static int ves1x93_set_inversion (struct ves1x93_state* state, fe_spectral_inversion_t inversion)
static int ves1x93_set_fec (struct ves1x93_state* state, fe_code_rate_t fec)
static fe_code_rate_t ves1x93_get_fec (struct ves1x93_state* state)
static int ves1x93_set_symbolrate (struct ves1x93_state* state, u32 srate)
static int ves1x93_init (struct dvb_frontend* fe)
static int ves1x93_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int ves1x93_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int ves1x93_read_ber(struct dvb_frontend* fe, u32* ber)
static int ves1x93_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int ves1x93_read_snr(struct dvb_frontend* fe, u16* snr)
static int ves1x93_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int ves1x93_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ves1x93_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ves1x93_sleep(struct dvb_frontend* fe)
static void ves1x93_release(struct dvb_frontend* fe)
static int ves1x93_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static struct dvb_frontend_ops ves1x93_ops;
struct dvb_frontend* ves1x93_attach(const struct ves1x93_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops ves1x93_ops = ;
module_param(debug, int, 0644);
MODULE_DESCRIPTION("VLSI VES1x93 DVB-S Demodulator driver");
MODULE_AUTHOR("Ralph Metzler");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ves1x93_attach);
