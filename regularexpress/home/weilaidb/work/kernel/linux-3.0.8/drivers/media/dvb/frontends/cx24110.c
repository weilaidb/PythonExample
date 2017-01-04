struct cx24110_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static struct  cx24110_regdata[]=
;
static int cx24110_writereg (struct cx24110_state* state, int reg, int data)
static int cx24110_readreg (struct cx24110_state* state, u8 reg)
static int cx24110_set_inversion (struct cx24110_state* state, fe_spectral_inversion_t inversion)
static int cx24110_set_fec (struct cx24110_state* state, fe_code_rate_t fec)
static fe_code_rate_t cx24110_get_fec (struct cx24110_state* state)
static int cx24110_set_symbolrate (struct cx24110_state* state, u32 srate)
static int _cx24110_pll_write (struct dvb_frontend* fe, const u8 buf[], int len)
static int cx24110_initfe(struct dvb_frontend* fe)
static int cx24110_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int cx24110_diseqc_send_burst(struct dvb_frontend* fe, fe_sec_mini_cmd_t burst)
static int cx24110_send_diseqc_msg(struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd *cmd)
static int cx24110_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int cx24110_read_ber(struct dvb_frontend* fe, u32* ber)
static int cx24110_read_signal_strength(struct dvb_frontend* fe, u16* signal_strength)
static int cx24110_read_snr(struct dvb_frontend* fe, u16* snr)
static int cx24110_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int cx24110_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int cx24110_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int cx24110_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static void cx24110_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops cx24110_ops;
struct dvb_frontend* cx24110_attach(const struct cx24110_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops cx24110_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Conexant CX24110 DVB-S Demodulator driver");
MODULE_AUTHOR("Peter Hettkamp");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(cx24110_attach);
