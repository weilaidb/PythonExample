static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
#define TUNER_SIMPLE_MAX 64
static unsigned int simple_devcount;
static int offset;
module_param(offset, int, 0664);
MODULE_PARM_DESC(offset, "Allows to specify an offset for tuner");
static unsigned int atv_input[TUNER_SIMPLE_MAX] = \
;
static unsigned int dtv_input[TUNER_SIMPLE_MAX] = \
;
module_param_array(atv_input, int, NULL, 0644);
module_param_array(dtv_input, int, NULL, 0644);
MODULE_PARM_DESC(atv_input, "specify atv rf input, 0 for autoselect");
MODULE_PARM_DESC(dtv_input, "specify dtv rf input, 0 for autoselect");
#define TEMIC_SET_PAL_I         0x05
#define TEMIC_SET_PAL_DK        0x09
#define TEMIC_SET_PAL_L         0x0a
#define TEMIC_SET_PAL_L2        0x0b
#define TEMIC_SET_PAL_BG        0x0c
#define PHILIPS_SET_PAL_I	0x01
#define PHILIPS_SET_PAL_BGDK	0x09
#define PHILIPS_SET_PAL_L2	0x0a
#define PHILIPS_SET_PAL_L	0x0b
#define PHILIPS_MF_SET_STD_BG	0x01
#define PHILIPS_MF_SET_STD_L	0x03
#define PHILIPS_MF_SET_STD_LC	0x02
#define TUNER_RATIO_MASK        0x06
#define TUNER_RATIO_SELECT_50   0x00
#define TUNER_RATIO_SELECT_32   0x02
#define TUNER_RATIO_SELECT_166  0x04
#define TUNER_RATIO_SELECT_62   0x06
#define TUNER_CHARGE_PUMP       0x40
#define TUNER_POR	  0x80
#define TUNER_FL          0x40
#define TUNER_MODE        0x38
#define TUNER_AFC         0x07
#define TUNER_SIGNAL      0x07
#define TUNER_STEREO      0x10
#define TUNER_PLL_LOCKED   0x40
#define TUNER_STEREO_MK3   0x04
static DEFINE_MUTEX(tuner_simple_list_mutex);
static LIST_HEAD(hybrid_tuner_instance_list);
struct tuner_simple_priv ;
static int tuner_read_status(struct dvb_frontend *fe)
static inline int tuner_signal(const int status)
static inline int tuner_stereo(const int type, const int status)
static inline int tuner_islocked(const int status)
static inline int tuner_afcstatus(const int status)
static int simple_get_status(struct dvb_frontend *fe, u32 *status)
static int simple_get_rf_strength(struct dvb_frontend *fe, u16 *strength)
static inline char *tuner_param_name(enum param_type type)
static struct tuner_params *simple_tuner_params(struct dvb_frontend *fe,
enum param_type desired_type)
static int simple_config_lookup(struct dvb_frontend *fe,
struct tuner_params *t_params,
unsigned *frequency, u8 *config, u8 *cb)
static void simple_set_rf_input(struct dvb_frontend *fe,
u8 *config, u8 *cb, unsigned int rf)
static int simple_std_setup(struct dvb_frontend *fe,
struct analog_parameters *params,
u8 *config, u8 *cb)
static int simple_set_aux_byte(struct dvb_frontend *fe, u8 config, u8 aux)
static int simple_post_tune(struct dvb_frontend *fe, u8 *buffer,
u16 div, u8 config, u8 cb)
static int simple_radio_bandswitch(struct dvb_frontend *fe, u8 *buffer)
static int simple_set_tv_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int simple_set_radio_freq(struct dvb_frontend *fe,
struct analog_parameters *params)
static int simple_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static void simple_set_dvb(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static u32 simple_dvb_configure(struct dvb_frontend *fe, u8 *buf,
const struct dvb_frontend_parameters *params)
static int simple_dvb_calc_regs(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
u8 *buf, int buf_len)
static int simple_dvb_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int simple_init(struct dvb_frontend *fe)
static int simple_sleep(struct dvb_frontend *fe)
static int simple_release(struct dvb_frontend *fe)
static int simple_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int simple_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static struct dvb_tuner_ops simple_tuner_ops = ;
struct dvb_frontend *simple_tuner_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr,
unsigned int type)
EXPORT_SYMBOL_GPL(simple_tuner_attach);
MODULE_DESCRIPTION("Simple 4-control-bytes style tuner driver");
MODULE_AUTHOR("Ralph Metzler, Gerd Knorr, Gunther Mayer");
MODULE_LICENSE("GPL");
