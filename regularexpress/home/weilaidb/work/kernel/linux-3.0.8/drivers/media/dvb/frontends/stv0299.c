struct stv0299_state ;
#define STATUS_BER 0
#define STATUS_UCBLOCKS 1
static int debug;
static int debug_legacy_dish_switch;
#define dprintk(args...) \
do  while (0)
static int stv0299_writeregI (struct stv0299_state* state, u8 reg, u8 data)
static int stv0299_write(struct dvb_frontend* fe, const u8 buf[], int len)
static u8 stv0299_readreg (struct stv0299_state* state, u8 reg)
static int stv0299_readregs (struct stv0299_state* state, u8 reg1, u8 *b, u8 len)
static int stv0299_set_FEC (struct stv0299_state* state, fe_code_rate_t fec)
static fe_code_rate_t stv0299_get_fec (struct stv0299_state* state)
static int stv0299_wait_diseqc_fifo (struct stv0299_state* state, int timeout)
static int stv0299_wait_diseqc_idle (struct stv0299_state* state, int timeout)
static int stv0299_set_symbolrate (struct dvb_frontend* fe, u32 srate)
static int stv0299_get_symbolrate (struct stv0299_state* state)
static int stv0299_send_diseqc_msg (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd *m)
static int stv0299_send_diseqc_burst (struct dvb_frontend* fe, fe_sec_mini_cmd_t burst)
static int stv0299_set_tone (struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int stv0299_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int stv0299_send_legacy_dish_cmd (struct dvb_frontend* fe, unsigned long cmd)
static int stv0299_init (struct dvb_frontend* fe)
static int stv0299_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int stv0299_read_ber(struct dvb_frontend* fe, u32* ber)
static int stv0299_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int stv0299_read_snr(struct dvb_frontend* fe, u16* snr)
static int stv0299_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int stv0299_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters * p)
static int stv0299_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters * p)
static int stv0299_sleep(struct dvb_frontend* fe)
static int stv0299_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int stv0299_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void stv0299_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops stv0299_ops;
struct dvb_frontend* stv0299_attach(const struct stv0299_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops stv0299_ops = ;
module_param(debug_legacy_dish_switch, int, 0444);
MODULE_PARM_DESC(debug_legacy_dish_switch, "Enable timing analysis for Dish Network legacy switches");
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("ST STV0299 DVB Demodulator driver");
MODULE_AUTHOR("Ralph Metzler, Holger Waechtler, Peter Schildmann, Felix Domke, "
"Andreas Oberritter, Andrew de Quincey, Kenneth Aafly");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(stv0299_attach);
