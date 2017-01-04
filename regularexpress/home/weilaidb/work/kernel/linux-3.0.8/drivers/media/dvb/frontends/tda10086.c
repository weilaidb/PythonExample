#define SACLK 96000000
struct tda10086_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
static int tda10086_write_byte(struct tda10086_state *state, int reg, int data)
static int tda10086_read_byte(struct tda10086_state *state, int reg)
static int tda10086_write_mask(struct tda10086_state *state, int reg, int mask, int data)
static int tda10086_init(struct dvb_frontend* fe)
static void tda10086_diseqc_wait(struct tda10086_state *state)
static int tda10086_set_tone (struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int tda10086_send_master_cmd (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd* cmd)
static int tda10086_send_burst (struct dvb_frontend* fe, fe_sec_mini_cmd_t minicmd)
static int tda10086_set_inversion(struct tda10086_state *state,
struct dvb_frontend_parameters *fe_params)
static int tda10086_set_symbol_rate(struct tda10086_state *state,
struct dvb_frontend_parameters *fe_params)
static int tda10086_set_fec(struct tda10086_state *state,
struct dvb_frontend_parameters *fe_params)
static int tda10086_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fe_params)
static int tda10086_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *fe_params)
static int tda10086_read_status(struct dvb_frontend* fe, fe_status_t *fe_status)
static int tda10086_read_signal_strength(struct dvb_frontend* fe, u16 * signal)
static int tda10086_read_snr(struct dvb_frontend* fe, u16 * snr)
static int tda10086_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int tda10086_read_ber(struct dvb_frontend* fe, u32* ber)
static int tda10086_sleep(struct dvb_frontend* fe)
static int tda10086_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int tda10086_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void tda10086_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops tda10086_ops = ;
struct dvb_frontend* tda10086_attach(const struct tda10086_config* config,
struct i2c_adapter* i2c)
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Philips TDA10086 DVB-S Demodulator");
MODULE_AUTHOR("Andrew de Quincey");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(tda10086_attach);
