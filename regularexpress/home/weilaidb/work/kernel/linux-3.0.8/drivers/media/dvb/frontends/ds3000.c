static int debug;
#define dprintk(args...) \
do  while (0)
#define DS3000_DEFAULT_FIRMWARE "dvb-fe-ds3000.fw"
#define DS3000_SAMPLE_RATE 96000
#define DS3000_XTAL_FREQ   27000
static u8 ds3000_dvbs_init_tab[] = ;
static u8 ds3000_dvbs2_init_tab[] = ;
struct ds3000_state ;
static int ds3000_writereg(struct ds3000_state *state, int reg, int data)
static int ds3000_tuner_writereg(struct ds3000_state *state, int reg, int data)
static int ds3000_writeFW(struct ds3000_state *state, int reg,
const u8 *data, u16 len)
static int ds3000_readreg(struct ds3000_state *state, u8 reg)
static int ds3000_tuner_readreg(struct ds3000_state *state, u8 reg)
static int ds3000_load_firmware(struct dvb_frontend *fe,
const struct firmware *fw);
static int ds3000_firmware_ondemand(struct dvb_frontend *fe)
static int ds3000_load_firmware(struct dvb_frontend *fe,
const struct firmware *fw)
static int ds3000_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int ds3000_read_status(struct dvb_frontend *fe, fe_status_t* status)
static int ds3000_read_ber(struct dvb_frontend *fe, u32* ber)
static int ds3000_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int ds3000_read_snr(struct dvb_frontend *fe, u16 *snr)
static int ds3000_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int ds3000_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static int ds3000_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *d)
static int ds3000_diseqc_send_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t burst)
static void ds3000_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops ds3000_ops;
struct dvb_frontend *ds3000_attach(const struct ds3000_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(ds3000_attach);
static int ds3000_set_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int ds3000_get_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int ds3000_set_carrier_offset(struct dvb_frontend *fe,
s32 carrier_offset_khz)
static int ds3000_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int ds3000_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p,
unsigned int mode_flags,
unsigned int *delay,
fe_status_t *status)
static enum dvbfe_algo ds3000_get_algo(struct dvb_frontend *fe)
static int ds3000_initfe(struct dvb_frontend *fe)
static int ds3000_sleep(struct dvb_frontend *fe)
static struct dvb_frontend_ops ds3000_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
MODULE_DESCRIPTION("DVB Frontend module for Montage Technology "
"DS3000/TS2020 hardware");
MODULE_AUTHOR("Konstantin Dimitrov");
MODULE_LICENSE("GPL");
