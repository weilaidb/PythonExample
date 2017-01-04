static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activates frontend debugging (default:0)");
#define dprintk(args...) \
do  while (0)
#define CX24116_DEFAULT_FIRMWARE "dvb-fe-cx24116.fw"
#define CX24116_SEARCH_RANGE_KHZ 5000
#define CX24116_REG_COMMAND (0x00)
#define CX24116_REG_EXECUTE (0x1f)
#define CX24116_REG_MAILBOX (0x96)
#define CX24116_REG_RESET   (0x20)
#define CX24116_REG_SIGNAL  (0x9e)
#define CX24116_REG_SSTATUS (0x9d)
#define CX24116_REG_QUALITY8 (0xa3)
#define CX24116_REG_QSTATUS (0xbc)
#define CX24116_REG_QUALITY0 (0xd5)
#define CX24116_REG_BER0    (0xc9)
#define CX24116_REG_BER8    (0xc8)
#define CX24116_REG_BER16   (0xc7)
#define CX24116_REG_BER24   (0xc6)
#define CX24116_REG_UCB0    (0xcb)
#define CX24116_REG_UCB8    (0xca)
#define CX24116_REG_CLKDIV  (0xf3)
#define CX24116_REG_RATEDIV (0xf9)
#define CX24116_REG_FECSTATUS (0x9c)
#define CX24116_FEC_FECMASK   (0x1f)
#define CX24116_FEC_DVBS      (0x20)
#define CX24116_FEC_UNKNOWN   (0x40)
#define CX24116_FEC_PILOT     (0x80)
#define CX24116_ARGLEN (0x1e)
#define CX24116_ROLLOFF_020 (0x00)
#define CX24116_ROLLOFF_025 (0x01)
#define CX24116_ROLLOFF_035 (0x02)
#define CX24116_PILOT_OFF (0x00)
#define CX24116_PILOT_ON (0x40)
#define CX24116_HAS_SIGNAL   (0x01)
#define CX24116_HAS_CARRIER  (0x02)
#define CX24116_HAS_VITERBI  (0x04)
#define CX24116_HAS_SYNCLOCK (0x08)
#define CX24116_HAS_UNKNOWN1 (0x10)
#define CX24116_HAS_UNKNOWN2 (0x20)
#define CX24116_STATUS_MASK  (0x0f)
#define CX24116_SIGNAL_MASK  (0xc0)
#define CX24116_DISEQC_TONEOFF   (0)
#define CX24116_DISEQC_TONECACHE (1)
#define CX24116_DISEQC_MESGCACHE (2)
#define CX24116_DISEQC_BURST  (1)
#define CX24116_DISEQC_ARG2_2 (2)
#define CX24116_DISEQC_ARG3_0 (3)
#define CX24116_DISEQC_ARG4_0 (4)
#define CX24116_DISEQC_MSGLEN (5)
#define CX24116_DISEQC_MSGOFS (6)
#define CX24116_DISEQC_MINI_A (0)
#define CX24116_DISEQC_MINI_B (1)
static int toneburst = 1;
module_param(toneburst, int, 0644);
MODULE_PARM_DESC(toneburst, "DiSEqC toneburst 0=OFF, 1=TONE CACHE, "\
"2=MESSAGE CACHE (default:1)");
static int esno_snr;
module_param(esno_snr, int, 0644);
MODULE_PARM_DESC(esno_snr, "SNR return units, 0=PERCENTAGE 0-100, "\
"1=ESNO(db * 10) (default:0)");
enum cmds ;
struct cx24116_tuning ;
struct cx24116_cmd ;
struct cx24116_state ;
static int cx24116_writereg(struct cx24116_state *state, int reg, int data)
static int cx24116_writeregN(struct cx24116_state *state, int reg,
const u8 *data, u16 len)
static int cx24116_readreg(struct cx24116_state *state, u8 reg)
static int cx24116_set_inversion(struct cx24116_state *state,
fe_spectral_inversion_t inversion)
static struct cx24116_modfec  CX24116_MODFEC_MODES[] = ;
static int cx24116_lookup_fecmod(struct cx24116_state *state,
fe_delivery_system_t d, fe_modulation_t m, fe_code_rate_t f)
static int cx24116_set_fec(struct cx24116_state *state,
fe_delivery_system_t delsys, fe_modulation_t mod, fe_code_rate_t fec)
static int cx24116_set_symbolrate(struct cx24116_state *state, u32 rate)
static int cx24116_load_firmware(struct dvb_frontend *fe,
const struct firmware *fw);
static int cx24116_firmware_ondemand(struct dvb_frontend *fe)
static int cx24116_cmd_execute(struct dvb_frontend *fe, struct cx24116_cmd *cmd)
static int cx24116_load_firmware(struct dvb_frontend *fe,
const struct firmware *fw)
static int cx24116_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int cx24116_read_ber(struct dvb_frontend *fe, u32 *ber)
static int cx24116_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static int cx24116_read_snr_pct(struct dvb_frontend *fe, u16 *snr)
static int cx24116_read_snr_esno(struct dvb_frontend *fe, u16 *snr)
static int cx24116_read_snr(struct dvb_frontend *fe, u16 *snr)
static int cx24116_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static void cx24116_clone_params(struct dvb_frontend *fe)
static int cx24116_wait_for_lnb(struct dvb_frontend *fe)
static int cx24116_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int cx24116_set_tone(struct dvb_frontend *fe,
fe_sec_tone_mode_t tone)
static int cx24116_diseqc_init(struct dvb_frontend *fe)
static int cx24116_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *d)
static int cx24116_diseqc_send_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t burst)
static void cx24116_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops cx24116_ops;
struct dvb_frontend *cx24116_attach(const struct cx24116_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(cx24116_attach);
static int cx24116_initfe(struct dvb_frontend *fe)
static int cx24116_sleep(struct dvb_frontend *fe)
static int cx24116_set_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int cx24116_get_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int cx24116_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int cx24116_tune(struct dvb_frontend *fe, struct dvb_frontend_parameters *params,
unsigned int mode_flags, unsigned int *delay, fe_status_t *status)
static int cx24116_get_algo(struct dvb_frontend *fe)
static struct dvb_frontend_ops cx24116_ops = ;
MODULE_DESCRIPTION("DVB Frontend module for Conexant cx24116/cx24118 hardware");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
