static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
struct tea5761_priv ;
#define TEA5761_INTREG_IFFLAG		0x10
#define TEA5761_INTREG_LEVFLAG		0x8
#define TEA5761_INTREG_FRRFLAG		0x2
#define TEA5761_INTREG_BLFLAG		0x1
#define TEA5761_INTREG_IFMSK		0x10
#define TEA5761_INTREG_LEVMSK		0x8
#define TEA5761_INTREG_FRMSK		0x2
#define TEA5761_INTREG_BLMSK		0x1
#define TEA5761_FRQSET_SEARCH_UP 0x80
#define TEA5761_FRQSET_SEARCH_MODE 0x40
#define TEA5761_TNCTRL_PUPD_0	0x40
#define TEA5761_TNCTRL_BLIM	0X20
#define TEA5761_TNCTRL_SWPM	0x10
#define TEA5761_TNCTRL_IFCTC	0x08
#define TEA5761_TNCTRL_AFM	0x04
#define TEA5761_TNCTRL_SMUTE	0x02
#define TEA5761_TNCTRL_SNC	0x01
#define TEA5761_TNCTRL_MU	0x80
#define TEA5761_TNCTRL_SSL_1	0x40
#define TEA5761_TNCTRL_SSL_0	0x20
#define TEA5761_TNCTRL_HLSI	0x10
#define TEA5761_TNCTRL_MST	0x08
#define TEA5761_TNCTRL_SWP	0x04
#define TEA5761_TNCTRL_DTC	0x02
#define TEA5761_TNCTRL_AHLSI	0x01
#define TEA5761_TUNCHECK_IF_MASK	0x7e
#define TEA5761_TUNCHECK_TUNTO		0x01
#define TEA5761_TUNCHECK_LEV_MASK	0xf0
#define TEA5761_TUNCHECK_LD		0x08
#define TEA5761_TUNCHECK_STEREO		0x04
#define TEA5767_MANID_VERSION_MASK	0xf0
#define TEA5767_MANID_ID_MSB_MASK	0x0f
#define TEA5767_MANID_ID_LSB_MASK	0xfe
#define TEA5767_MANID_IDAV		0x01
#define FREQ_OFFSET 0
static void tea5761_status_dump(unsigned char *buffer)
static int __set_radio_freq(struct dvb_frontend *fe,
unsigned int freq,
bool mono)
static int set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int set_radio_sleep(struct dvb_frontend *fe)
static int tea5761_read_status(struct dvb_frontend *fe, char *buffer)
static inline int tea5761_signal(struct dvb_frontend *fe, const char *buffer)
static inline int tea5761_stereo(struct dvb_frontend *fe, const char *buffer)
static int tea5761_get_status(struct dvb_frontend *fe, u32 *status)
static int tea5761_get_rf_strength(struct dvb_frontend *fe, u16 *strength)
int tea5761_autodetection(struct i2c_adapter* i2c_adap, u8 i2c_addr)
static int tea5761_release(struct dvb_frontend *fe)
static int tea5761_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static struct dvb_tuner_ops tea5761_tuner_ops = ;
struct dvb_frontend *tea5761_attach(struct dvb_frontend *fe,
struct i2c_adapter* i2c_adap,
u8 i2c_addr)
EXPORT_SYMBOL_GPL(tea5761_attach);
EXPORT_SYMBOL_GPL(tea5761_autodetection);
MODULE_DESCRIPTION("Philips TEA5761 FM tuner driver");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
