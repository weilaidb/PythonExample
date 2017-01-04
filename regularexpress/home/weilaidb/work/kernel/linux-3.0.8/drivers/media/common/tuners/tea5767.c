static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
struct tea5767_priv ;
#define TEA5767_MUTE		0x80
#define TEA5767_SEARCH		0x40
#define TEA5767_SEARCH_UP	0x80
#define TEA5767_SRCH_HIGH_LVL	0x60
#define TEA5767_SRCH_MID_LVL	0x40
#define TEA5767_SRCH_LOW_LVL	0x20
#define TEA5767_HIGH_LO_INJECT	0x10
#define TEA5767_MONO		0x08
#define TEA5767_MUTE_RIGHT	0x04
#define TEA5767_MUTE_LEFT	0x02
#define TEA5767_PORT1_HIGH	0x01
#define TEA5767_PORT2_HIGH	0x80
#define TEA5767_STDBY		0x40
#define TEA5767_JAPAN_BAND	0x20
#define TEA5767_XTAL_32768	0x10
#define TEA5767_SOFT_MUTE	0x08
#define TEA5767_HIGH_CUT_CTRL	0x04
#define TEA5767_ST_NOISE_CTL	0x02
#define TEA5767_SRCH_IND	0x01
#define TEA5767_PLLREF_ENABLE	0x80
#define TEA5767_DEEMPH_75	0X40
#define TEA5767_READY_FLAG_MASK	0x80
#define TEA5767_BAND_LIMIT_MASK	0X40
#define TEA5767_STEREO_MASK	0x80
#define TEA5767_IF_CNTR_MASK	0x7f
#define TEA5767_ADC_LEVEL_MASK	0xf0
#define TEA5767_CHIP_ID_MASK	0x0f
#define TEA5767_RESERVED_MASK	0xff
static void tea5767_status_dump(struct tea5767_priv *priv,
unsigned char *buffer)
static int set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int tea5767_read_status(struct dvb_frontend *fe, char *buffer)
static inline int tea5767_signal(struct dvb_frontend *fe, const char *buffer)
static inline int tea5767_stereo(struct dvb_frontend *fe, const char *buffer)
static int tea5767_get_status(struct dvb_frontend *fe, u32 *status)
static int tea5767_get_rf_strength(struct dvb_frontend *fe, u16 *strength)
static int tea5767_standby(struct dvb_frontend *fe)
int tea5767_autodetection(struct i2c_adapter* i2c_adap, u8 i2c_addr)
static int tea5767_release(struct dvb_frontend *fe)
static int tea5767_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int tea5767_set_config (struct dvb_frontend *fe, void *priv_cfg)
static struct dvb_tuner_ops tea5767_tuner_ops = ;
struct dvb_frontend *tea5767_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
EXPORT_SYMBOL_GPL(tea5767_attach);
EXPORT_SYMBOL_GPL(tea5767_autodetection);
MODULE_DESCRIPTION("Philips TEA5767 FM tuner driver");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
