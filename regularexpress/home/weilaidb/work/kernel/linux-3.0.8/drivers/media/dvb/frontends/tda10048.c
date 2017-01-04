#define TDA10048_DEFAULT_FIRMWARE "dvb-fe-tda10048-1.0.fw"
#define TDA10048_DEFAULT_FIRMWARE_SIZE 24878
#define TDA10048_IDENTITY          0x00
#define TDA10048_VERSION           0x01
#define TDA10048_DSP_CODE_CPT      0x0C
#define TDA10048_DSP_CODE_IN       0x0E
#define TDA10048_IN_CONF1          0x10
#define TDA10048_IN_CONF2          0x11
#define TDA10048_IN_CONF3          0x12
#define TDA10048_OUT_CONF1         0x14
#define TDA10048_OUT_CONF2         0x15
#define TDA10048_OUT_CONF3         0x16
#define TDA10048_AUTO              0x18
#define TDA10048_SYNC_STATUS       0x1A
#define TDA10048_CONF_C4_1         0x1E
#define TDA10048_CONF_C4_2         0x1F
#define TDA10048_CODE_IN_RAM       0x20
#define TDA10048_CHANNEL_INFO1_R   0x22
#define TDA10048_CHANNEL_INFO2_R   0x23
#define TDA10048_CHANNEL_INFO1     0x24
#define TDA10048_CHANNEL_INFO2     0x25
#define TDA10048_TIME_ERROR_R      0x26
#define TDA10048_TIME_ERROR        0x27
#define TDA10048_FREQ_ERROR_LSB_R  0x28
#define TDA10048_FREQ_ERROR_MSB_R  0x29
#define TDA10048_FREQ_ERROR_LSB    0x2A
#define TDA10048_FREQ_ERROR_MSB    0x2B
#define TDA10048_IT_SEL            0x30
#define TDA10048_IT_STAT           0x32
#define TDA10048_DSP_AD_LSB        0x3C
#define TDA10048_DSP_AD_MSB        0x3D
#define TDA10048_DSP_REG_LSB       0x3E
#define TDA10048_DSP_REG_MSB       0x3F
#define TDA10048_CONF_TRISTATE1    0x44
#define TDA10048_CONF_TRISTATE2    0x45
#define TDA10048_CONF_POLARITY     0x46
#define TDA10048_GPIO_SP_DS0       0x48
#define TDA10048_GPIO_SP_DS1       0x49
#define TDA10048_GPIO_SP_DS2       0x4A
#define TDA10048_GPIO_SP_DS3       0x4B
#define TDA10048_GPIO_OUT_SEL      0x4C
#define TDA10048_GPIO_SELECT       0x4D
#define TDA10048_IC_MODE           0x4E
#define TDA10048_CONF_XO           0x50
#define TDA10048_CONF_PLL1         0x51
#define TDA10048_CONF_PLL2         0x52
#define TDA10048_CONF_PLL3         0x53
#define TDA10048_CONF_ADC          0x54
#define TDA10048_CONF_ADC_2        0x55
#define TDA10048_CONF_C1_1         0x60
#define TDA10048_CONF_C1_3         0x62
#define TDA10048_AGC_CONF          0x70
#define TDA10048_AGC_THRESHOLD_LSB 0x72
#define TDA10048_AGC_THRESHOLD_MSB 0x73
#define TDA10048_AGC_RENORM        0x74
#define TDA10048_AGC_GAINS         0x76
#define TDA10048_AGC_TUN_MIN       0x78
#define TDA10048_AGC_TUN_MAX       0x79
#define TDA10048_AGC_IF_MIN        0x7A
#define TDA10048_AGC_IF_MAX        0x7B
#define TDA10048_AGC_TUN_LEVEL     0x7E
#define TDA10048_AGC_IF_LEVEL      0x7F
#define TDA10048_DIG_AGC_LEVEL     0x81
#define TDA10048_FREQ_PHY2_LSB     0x86
#define TDA10048_FREQ_PHY2_MSB     0x87
#define TDA10048_TIME_INVWREF_LSB  0x88
#define TDA10048_TIME_INVWREF_MSB  0x89
#define TDA10048_TIME_WREF_LSB     0x8A
#define TDA10048_TIME_WREF_MID1    0x8B
#define TDA10048_TIME_WREF_MID2    0x8C
#define TDA10048_TIME_WREF_MSB     0x8D
#define TDA10048_NP_OUT            0xA2
#define TDA10048_CELL_ID_LSB       0xA4
#define TDA10048_CELL_ID_MSB       0xA5
#define TDA10048_EXTTPS_ODD        0xAA
#define TDA10048_EXTTPS_EVEN       0xAB
#define TDA10048_TPS_LENGTH        0xAC
#define TDA10048_FREE_REG_1        0xB2
#define TDA10048_FREE_REG_2        0xB3
#define TDA10048_CONF_C3_1         0xC0
#define TDA10048_CVBER_CTRL        0xC2
#define TDA10048_CBER_NMAX_LSB     0xC4
#define TDA10048_CBER_NMAX_MSB     0xC5
#define TDA10048_CBER_LSB          0xC6
#define TDA10048_CBER_MSB          0xC7
#define TDA10048_VBER_LSB          0xC8
#define TDA10048_VBER_MID          0xC9
#define TDA10048_VBER_MSB          0xCA
#define TDA10048_CVBER_LUT         0xCC
#define TDA10048_UNCOR_CTRL        0xCD
#define TDA10048_UNCOR_CPT_LSB     0xCE
#define TDA10048_UNCOR_CPT_MSB     0xCF
#define TDA10048_SOFT_IT_C3        0xD6
#define TDA10048_CONF_TS2          0xE0
#define TDA10048_CONF_TS1          0xE1
static unsigned int debug;
#define dprintk(level, fmt, arg...)\
do  while (0)
struct tda10048_state ;
static struct init_tab  init_tab[] = ;
static struct pll_tab  pll_tab[] = ;
static int tda10048_writereg(struct tda10048_state *state, u8 reg, u8 data)
static u8 tda10048_readreg(struct tda10048_state *state, u8 reg)
static int tda10048_writeregbulk(struct tda10048_state *state, u8 reg,
const u8 *data, u16 len)
static int tda10048_set_phy2(struct dvb_frontend *fe, u32 sample_freq_hz,
u32 if_hz)
static int tda10048_set_wref(struct dvb_frontend *fe, u32 sample_freq_hz,
u32 bw)
static int tda10048_set_invwref(struct dvb_frontend *fe, u32 sample_freq_hz,
u32 bw)
static int tda10048_set_bandwidth(struct dvb_frontend *fe,
enum fe_bandwidth bw)
static int tda10048_set_if(struct dvb_frontend *fe, enum fe_bandwidth bw)
static int tda10048_firmware_upload(struct dvb_frontend *fe)
static int tda10048_set_inversion(struct dvb_frontend *fe, int inversion)
static int tda10048_get_tps(struct tda10048_state *state,
struct dvb_ofdm_parameters *p)
static int tda10048_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int tda10048_output_mode(struct dvb_frontend *fe, int serial)
static int tda10048_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int tda10048_init(struct dvb_frontend *fe)
static int tda10048_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int tda10048_read_ber(struct dvb_frontend *fe, u32 *ber)
static int tda10048_read_signal_strength(struct dvb_frontend *fe,
u16 *signal_strength)
static struct snr_tab  snr_tab[] = ;
static int tda10048_read_snr(struct dvb_frontend *fe, u16 *snr)
static int tda10048_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static int tda10048_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int tda10048_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static void tda10048_release(struct dvb_frontend *fe)
static void tda10048_establish_defaults(struct dvb_frontend *fe)
static struct dvb_frontend_ops tda10048_ops;
struct dvb_frontend *tda10048_attach(const struct tda10048_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(tda10048_attach);
static struct dvb_frontend_ops tda10048_ops = ;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable verbose debug messages");
MODULE_DESCRIPTION("NXP TDA10048HN DVB-T Demodulator driver");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
