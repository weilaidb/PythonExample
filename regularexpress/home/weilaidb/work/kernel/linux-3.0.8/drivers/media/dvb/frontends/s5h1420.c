#define TONE_FREQ 22000
struct s5h1420_state ;
static u32 s5h1420_getsymbolrate(struct s5h1420_state* state);
static int s5h1420_get_tune_settings(struct dvb_frontend* fe,
struct dvb_frontend_tune_settings* fesettings);
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debugging");
#define dprintk(x...) do  while (0)
static u8 s5h1420_readreg(struct s5h1420_state *state, u8 reg)
static int s5h1420_writereg (struct s5h1420_state* state, u8 reg, u8 data)
static int s5h1420_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int s5h1420_set_tone (struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int s5h1420_send_master_cmd (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd* cmd)
static int s5h1420_recv_slave_reply (struct dvb_frontend* fe,
struct dvb_diseqc_slave_reply* reply)
static int s5h1420_send_burst (struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static fe_status_t s5h1420_get_status_bits(struct s5h1420_state* state)
static int s5h1420_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int s5h1420_read_ber(struct dvb_frontend* fe, u32* ber)
static int s5h1420_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int s5h1420_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static void s5h1420_reset(struct s5h1420_state* state)
static void s5h1420_setsymbolrate(struct s5h1420_state* state,
struct dvb_frontend_parameters *p)
static u32 s5h1420_getsymbolrate(struct s5h1420_state* state)
static void s5h1420_setfreqoffset(struct s5h1420_state* state, int freqoffset)
static int s5h1420_getfreqoffset(struct s5h1420_state* state)
static void s5h1420_setfec_inversion(struct s5h1420_state* state,
struct dvb_frontend_parameters *p)
static fe_code_rate_t s5h1420_getfec(struct s5h1420_state* state)
static fe_spectral_inversion_t s5h1420_getinversion(struct s5h1420_state* state)
static int s5h1420_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int s5h1420_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int s5h1420_get_tune_settings(struct dvb_frontend* fe,
struct dvb_frontend_tune_settings* fesettings)
static int s5h1420_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int s5h1420_init (struct dvb_frontend* fe)
static int s5h1420_sleep(struct dvb_frontend* fe)
static void s5h1420_release(struct dvb_frontend* fe)
static u32 s5h1420_tuner_i2c_func(struct i2c_adapter *adapter)
static int s5h1420_tuner_i2c_tuner_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static struct i2c_algorithm s5h1420_tuner_i2c_algo = ;
struct i2c_adapter *s5h1420_get_tuner_i2c_adapter(struct dvb_frontend *fe)
EXPORT_SYMBOL(s5h1420_get_tuner_i2c_adapter);
static struct dvb_frontend_ops s5h1420_ops;
struct dvb_frontend *s5h1420_attach(const struct s5h1420_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(s5h1420_attach);
static struct dvb_frontend_ops s5h1420_ops = ;
MODULE_DESCRIPTION("Samsung S5H1420/PnpNetwork PN1010 DVB-S Demodulator driver");
MODULE_AUTHOR("Andrew de Quincey, Patrick Boettcher");
MODULE_LICENSE("GPL");
