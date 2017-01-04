static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
static int no_poweroff;
module_param(no_poweroff, int, 0644);
MODULE_PARM_DESC(no_poweroff, "0 (default) powers device off when not used.\n"
"\t\t1 keep device energized and with tuner ready all the times.\n"
"\t\tFaster, but consumes more power and keeps the device hotter");
static DEFINE_MUTEX(xc5000_list_mutex);
static LIST_HEAD(hybrid_tuner_instance_list);
#define dprintk(level, fmt, arg...) if (debug >= level) \
printk(KERN_INFO "%s: " fmt, "xc5000", ## arg)
#define XC5000_DEFAULT_FIRMWARE "dvb-fe-xc5000-1.6.114.fw"
#define XC5000_DEFAULT_FIRMWARE_SIZE 12401
struct xc5000_priv ;
#define MAX_TV_STANDARD			24
#define XC_MAX_I2C_WRITE_LENGTH		64
#define XC_RF_MODE_AIR			0
#define XC_RF_MODE_CABLE		1
#define XC_RESULT_SUCCESS		0
#define XC_RESULT_RESET_FAILURE		1
#define XC_RESULT_I2C_WRITE_FAILURE	2
#define XC_RESULT_I2C_READ_FAILURE	3
#define XC_RESULT_OUT_OF_RANGE		5
#define XC_PRODUCT_ID_FW_NOT_LOADED	0x2000
#define XC_PRODUCT_ID_FW_LOADED 	0x1388
#define XREG_INIT         0x00
#define XREG_VIDEO_MODE   0x01
#define XREG_AUDIO_MODE   0x02
#define XREG_RF_FREQ      0x03
#define XREG_D_CODE       0x04
#define XREG_IF_OUT       0x05
#define XREG_SEEK_MODE    0x07
#define XREG_POWER_DOWN   0x0A
#define XREG_OUTPUT_AMP   0x0B
#define XREG_SIGNALSOURCE 0x0D
#define XREG_SMOOTHEDCVBS 0x0E
#define XREG_XTALFREQ     0x0F
#define XREG_FINERFREQ    0x10
#define XREG_DDIMODE      0x11
#define XREG_ADC_ENV      0x00
#define XREG_QUALITY      0x01
#define XREG_FRAME_LINES  0x02
#define XREG_HSYNC_FREQ   0x03
#define XREG_LOCK         0x04
#define XREG_FREQ_ERROR   0x05
#define XREG_SNR          0x06
#define XREG_VERSION      0x07
#define XREG_PRODUCT_ID   0x08
#define XREG_BUSY         0x09
#define XREG_BUILD        0x0D
struct XC_TV_STANDARD ;
#define MN_NTSC_PAL_BTSC	0
#define MN_NTSC_PAL_A2		1
#define MN_NTSC_PAL_EIAJ	2
#define MN_NTSC_PAL_Mono	3
#define BG_PAL_A2		4
#define BG_PAL_NICAM		5
#define BG_PAL_MONO		6
#define I_PAL_NICAM		7
#define I_PAL_NICAM_MONO	8
#define DK_PAL_A2		9
#define DK_PAL_NICAM		10
#define DK_PAL_MONO		11
#define DK_SECAM_A2DK1		12
#define DK_SECAM_A2LDK3 	13
#define DK_SECAM_A2MONO 	14
#define L_SECAM_NICAM		15
#define LC_SECAM_NICAM		16
#define DTV6			17
#define DTV8			18
#define DTV7_8			19
#define DTV7			20
#define FM_Radio_INPUT2 	21
#define FM_Radio_INPUT1 	22
#define FM_Radio_INPUT1_MONO	23
static struct XC_TV_STANDARD XC5000_Standard[MAX_TV_STANDARD] = ;
static int xc_load_fw_and_init_tuner(struct dvb_frontend *fe);
static int xc5000_is_firmware_loaded(struct dvb_frontend *fe);
static int xc5000_readreg(struct xc5000_priv *priv, u16 reg, u16 *val);
static int xc5000_TunerReset(struct dvb_frontend *fe);
static int xc_send_i2c_data(struct xc5000_priv *priv, u8 *buf, int len)
static int xc5000_readreg(struct xc5000_priv *priv, u16 reg, u16 *val)
static void xc_wait(int wait_ms)
static int xc5000_TunerReset(struct dvb_frontend *fe)
static int xc_write_reg(struct xc5000_priv *priv, u16 regAddr, u16 i2cData)
static int xc_load_i2c_sequence(struct dvb_frontend *fe, const u8 *i2c_sequence)
static int xc_initialize(struct xc5000_priv *priv)
static int xc_SetTVStandard(struct xc5000_priv *priv,
u16 VideoMode, u16 AudioMode)
static int xc_SetSignalSource(struct xc5000_priv *priv, u16 rf_mode)
static const struct dvb_tuner_ops xc5000_tuner_ops;
static int xc_set_RF_frequency(struct xc5000_priv *priv, u32 freq_hz)
static int xc_set_IF_frequency(struct xc5000_priv *priv, u32 freq_khz)
static int xc_get_ADC_Envelope(struct xc5000_priv *priv, u16 *adc_envelope)
static int xc_get_frequency_error(struct xc5000_priv *priv, u32 *freq_error_hz)
static int xc_get_lock_status(struct xc5000_priv *priv, u16 *lock_status)
static int xc_get_version(struct xc5000_priv *priv,
u8 *hw_majorversion, u8 *hw_minorversion,
u8 *fw_majorversion, u8 *fw_minorversion)
static int xc_get_buildversion(struct xc5000_priv *priv, u16 *buildrev)
static int xc_get_hsync_freq(struct xc5000_priv *priv, u32 *hsync_freq_hz)
static int xc_get_frame_lines(struct xc5000_priv *priv, u16 *frame_lines)
static int xc_get_quality(struct xc5000_priv *priv, u16 *quality)
static u16 WaitForLock(struct xc5000_priv *priv)
#define XC_TUNE_ANALOG  0
#define XC_TUNE_DIGITAL 1
static int xc_tune_channel(struct xc5000_priv *priv, u32 freq_hz, int mode)
static int xc5000_fwupload(struct dvb_frontend *fe)
static void xc_debug_dump(struct xc5000_priv *priv)
#define MAX_SYMBOL_RATE_6MHz	5217391
static int xc5000_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int xc5000_is_firmware_loaded(struct dvb_frontend *fe)
static int xc5000_set_tv_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int xc5000_set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int xc5000_set_analog_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static int xc5000_get_frequency(struct dvb_frontend *fe, u32 *freq)
static int xc5000_get_bandwidth(struct dvb_frontend *fe, u32 *bw)
static int xc5000_get_status(struct dvb_frontend *fe, u32 *status)
static int xc_load_fw_and_init_tuner(struct dvb_frontend *fe)
static int xc5000_sleep(struct dvb_frontend *fe)
static int xc5000_init(struct dvb_frontend *fe)
static int xc5000_release(struct dvb_frontend *fe)
static int xc5000_set_config(struct dvb_frontend *fe, void *priv_cfg)
static const struct dvb_tuner_ops xc5000_tuner_ops = ;
struct dvb_frontend *xc5000_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
const struct xc5000_config *cfg)
EXPORT_SYMBOL(xc5000_attach);
MODULE_AUTHOR("Steven Toth");
MODULE_DESCRIPTION("Xceive xc5000 silicon tuner driver");
MODULE_LICENSE("GPL");
