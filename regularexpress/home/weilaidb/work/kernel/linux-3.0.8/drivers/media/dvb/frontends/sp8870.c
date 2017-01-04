#define SP8870_DEFAULT_FIRMWARE "dvb-fe-sp8870.fw"
struct sp8870_state ;
static int debug;
#define dprintk(args...) \
do  while (0)
#define SP8870_FIRMWARE_SIZE 16382
#define SP8870_FIRMWARE_OFFSET 0x0A
static int sp8870_writereg (struct sp8870_state* state, u16 reg, u16 data)
static int sp8870_readreg (struct sp8870_state* state, u16 reg)
static int sp8870_firmware_upload (struct sp8870_state* state, const struct firmware *fw)
;
static void sp8870_microcontroller_stop (struct sp8870_state* state)
static void sp8870_microcontroller_start (struct sp8870_state* state)
static int sp8870_read_data_valid_signal(struct sp8870_state* state)
static int configure_reg0xc05 (struct dvb_frontend_parameters *p, u16 *reg0xc05)
static int sp8870_wake_up(struct sp8870_state* state)
static int sp8870_set_frontend_parameters (struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int sp8870_init (struct dvb_frontend* fe)
static int sp8870_read_status (struct dvb_frontend* fe, fe_status_t * fe_status)
static int sp8870_read_ber (struct dvb_frontend* fe, u32 * ber)
static int sp8870_read_signal_strength(struct dvb_frontend* fe,  u16 * signal)
static int sp8870_read_uncorrected_blocks (struct dvb_frontend* fe, u32* ublocks)
#define MAXTRIALS 5
#define MAXCHECKS 100
static int lockups;
static int switches;
static int sp8870_set_frontend (struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int sp8870_sleep(struct dvb_frontend* fe)
static int sp8870_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static int sp8870_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static void sp8870_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops sp8870_ops;
struct dvb_frontend* sp8870_attach(const struct sp8870_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops sp8870_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Spase SP8870 DVB-T Demodulator driver");
MODULE_AUTHOR("Juergen Peitz");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(sp8870_attach);
