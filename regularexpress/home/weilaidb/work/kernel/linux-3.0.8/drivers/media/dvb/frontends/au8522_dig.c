static int debug;
static LIST_HEAD(hybrid_tuner_instance_list);
static DEFINE_MUTEX(au8522_list_mutex);
#define dprintk(arg...)\
do  while (0)
int au8522_writereg(struct au8522_state *state, u16 reg, u8 data)
u8 au8522_readreg(struct au8522_state *state, u16 reg)
static int au8522_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
struct mse2snr_tab ;
static struct mse2snr_tab vsb_mse2snr_tab[] = ;
static struct mse2snr_tab qam64_mse2snr_tab[] = ;
static struct mse2snr_tab qam256_mse2snr_tab[] = ;
static int au8522_mse2snr_lookup(struct mse2snr_tab *tab, int sz, int mse,
u16 *snr)
static int au8522_set_if(struct dvb_frontend *fe, enum au8522_if_freq if_freq)
static struct  VSB_mod_tab[] = ;
static struct  QAM64_mod_tab[] = ;
static struct  QAM256_mod_tab[] = ;
static int au8522_enable_modulation(struct dvb_frontend *fe,
fe_modulation_t m)
static int au8522_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
int au8522_init(struct dvb_frontend *fe)
static int au8522_led_gpio_enable(struct au8522_state *state, int onoff)
static int au8522_led_ctrl(struct au8522_state *state, int led)
int au8522_sleep(struct dvb_frontend *fe)
static int au8522_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int au8522_led_status(struct au8522_state *state, const u16 *snr)
static int au8522_read_snr(struct dvb_frontend *fe, u16 *snr)
static int au8522_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int au8522_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int au8522_read_ber(struct dvb_frontend *fe, u32 *ber)
static int au8522_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int au8522_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static struct dvb_frontend_ops au8522_ops;
int au8522_get_state(struct au8522_state **state, struct i2c_adapter *i2c,
u8 client_address)
void au8522_release_state(struct au8522_state *state)
static void au8522_release(struct dvb_frontend *fe)
struct dvb_frontend *au8522_attach(const struct au8522_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(au8522_attach);
static struct dvb_frontend_ops au8522_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable verbose debug messages");
MODULE_DESCRIPTION("Auvitek AU8522 QAM-B/ATSC Demodulator driver");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
