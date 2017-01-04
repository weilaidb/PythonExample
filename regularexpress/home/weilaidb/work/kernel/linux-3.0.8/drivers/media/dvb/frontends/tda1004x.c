#define TDA10045_DEFAULT_FIRMWARE "dvb-fe-tda10045.fw"
#define TDA10046_DEFAULT_FIRMWARE "dvb-fe-tda10046.fw"
static int debug;
#define dprintk(args...) \
do  while (0)
#define TDA1004X_CHIPID		 0x00
#define TDA1004X_AUTO		 0x01
#define TDA1004X_IN_CONF1	 0x02
#define TDA1004X_IN_CONF2	 0x03
#define TDA1004X_OUT_CONF1	 0x04
#define TDA1004X_OUT_CONF2	 0x05
#define TDA1004X_STATUS_CD	 0x06
#define TDA1004X_CONFC4		 0x07
#define TDA1004X_DSSPARE2	 0x0C
#define TDA10045H_CODE_IN	 0x0D
#define TDA10045H_FWPAGE	 0x0E
#define TDA1004X_SCAN_CPT	 0x10
#define TDA1004X_DSP_CMD	 0x11
#define TDA1004X_DSP_ARG	 0x12
#define TDA1004X_DSP_DATA1	 0x13
#define TDA1004X_DSP_DATA2	 0x14
#define TDA1004X_CONFADC1	 0x15
#define TDA1004X_CONFC1		 0x16
#define TDA10045H_S_AGC		 0x1a
#define TDA10046H_AGC_TUN_LEVEL	 0x1a
#define TDA1004X_SNR		 0x1c
#define TDA1004X_CONF_TS1	 0x1e
#define TDA1004X_CONF_TS2	 0x1f
#define TDA1004X_CBER_RESET	 0x20
#define TDA1004X_CBER_MSB	 0x21
#define TDA1004X_CBER_LSB	 0x22
#define TDA1004X_CVBER_LUT	 0x23
#define TDA1004X_VBER_MSB	 0x24
#define TDA1004X_VBER_MID	 0x25
#define TDA1004X_VBER_LSB	 0x26
#define TDA1004X_UNCOR		 0x27
#define TDA10045H_CONFPLL_P	 0x2D
#define TDA10045H_CONFPLL_M_MSB	 0x2E
#define TDA10045H_CONFPLL_M_LSB	 0x2F
#define TDA10045H_CONFPLL_N	 0x30
#define TDA10046H_CONFPLL1	 0x2D
#define TDA10046H_CONFPLL2	 0x2F
#define TDA10046H_CONFPLL3	 0x30
#define TDA10046H_TIME_WREF1	 0x31
#define TDA10046H_TIME_WREF2	 0x32
#define TDA10046H_TIME_WREF3	 0x33
#define TDA10046H_TIME_WREF4	 0x34
#define TDA10046H_TIME_WREF5	 0x35
#define TDA10045H_UNSURW_MSB	 0x31
#define TDA10045H_UNSURW_LSB	 0x32
#define TDA10045H_WREF_MSB	 0x33
#define TDA10045H_WREF_MID	 0x34
#define TDA10045H_WREF_LSB	 0x35
#define TDA10045H_MUXOUT	 0x36
#define TDA1004X_CONFADC2	 0x37
#define TDA10045H_IOFFSET	 0x38
#define TDA10046H_CONF_TRISTATE1 0x3B
#define TDA10046H_CONF_TRISTATE2 0x3C
#define TDA10046H_CONF_POLARITY	 0x3D
#define TDA10046H_FREQ_OFFSET	 0x3E
#define TDA10046H_GPIO_OUT_SEL	 0x41
#define TDA10046H_GPIO_SELECT	 0x42
#define TDA10046H_AGC_CONF	 0x43
#define TDA10046H_AGC_THR	 0x44
#define TDA10046H_AGC_RENORM	 0x45
#define TDA10046H_AGC_GAINS	 0x46
#define TDA10046H_AGC_TUN_MIN	 0x47
#define TDA10046H_AGC_TUN_MAX	 0x48
#define TDA10046H_AGC_IF_MIN	 0x49
#define TDA10046H_AGC_IF_MAX	 0x4A
#define TDA10046H_FREQ_PHY2_MSB	 0x4D
#define TDA10046H_FREQ_PHY2_LSB	 0x4E
#define TDA10046H_CVBER_CTRL	 0x4F
#define TDA10046H_AGC_IF_LEVEL	 0x52
#define TDA10046H_CODE_CPT	 0x57
#define TDA10046H_CODE_IN	 0x58
static int tda1004x_write_byteI(struct tda1004x_state *state, int reg, int data)
static int tda1004x_read_byte(struct tda1004x_state *state, int reg)
static int tda1004x_write_mask(struct tda1004x_state *state, int reg, int mask, int data)
static int tda1004x_write_buf(struct tda1004x_state *state, int reg, unsigned char *buf, int len)
static int tda1004x_enable_tuner_i2c(struct tda1004x_state *state)
static int tda1004x_disable_tuner_i2c(struct tda1004x_state *state)
static int tda10045h_set_bandwidth(struct tda1004x_state *state,
fe_bandwidth_t bandwidth)
static int tda10046h_set_bandwidth(struct tda1004x_state *state,
fe_bandwidth_t bandwidth)
static int tda1004x_do_upload(struct tda1004x_state *state,
const unsigned char *mem, unsigned int len,
u8 dspCodeCounterReg, u8 dspCodeInReg)
static int tda1004x_check_upload_ok(struct tda1004x_state *state)
static int tda10045_fwupload(struct dvb_frontend* fe)
static void tda10046_init_plls(struct dvb_frontend* fe)
static int tda10046_fwupload(struct dvb_frontend* fe)
static int tda1004x_encode_fec(int fec)
static int tda1004x_decode_fec(int tdafec)
static int tda1004x_write(struct dvb_frontend* fe, const u8 buf[], int len)
static int tda10045_init(struct dvb_frontend* fe)
static int tda10046_init(struct dvb_frontend* fe)
static int tda1004x_set_fe(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fe_params)
static int tda1004x_get_fe(struct dvb_frontend* fe, struct dvb_frontend_parameters *fe_params)
static int tda1004x_read_status(struct dvb_frontend* fe, fe_status_t * fe_status)
static int tda1004x_read_signal_strength(struct dvb_frontend* fe, u16 * signal)
static int tda1004x_read_snr(struct dvb_frontend* fe, u16 * snr)
static int tda1004x_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int tda1004x_read_ber(struct dvb_frontend* fe, u32* ber)
static int tda1004x_sleep(struct dvb_frontend* fe)
static int tda1004x_i2c_gate_ctrl(struct dvb_frontend* fe, int enable)
static int tda1004x_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
static void tda1004x_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops tda10045_ops = ;
struct dvb_frontend* tda10045_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c)
static struct dvb_frontend_ops tda10046_ops = ;
struct dvb_frontend* tda10046_attach(const struct tda1004x_config* config,
struct i2c_adapter* i2c)
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off frontend debugging (default:off).");
MODULE_DESCRIPTION("Philips TDA10045H & TDA10046H DVB-T Demodulator");
MODULE_AUTHOR("Andrew de Quincey & Robert Schlabbach");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(tda10045_attach);
EXPORT_SYMBOL(tda10046_attach);
