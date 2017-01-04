static unsigned short keycode_ak1[] =  ;
static unsigned short keycode_rk2[] =  ;
static unsigned short keycode_rk3[] =  ;
static unsigned short keycode_kore[] = ;
#define KONTROLX1_INPUTS	(40)
#define KONTROLS4_BUTTONS	(12 * 8)
#define KONTROLS4_AXIS		(46)
#define KONTROLS4_BUTTON(X)	((X) + BTN_MISC)
#define KONTROLS4_ABS(X)	((X) + ABS_HAT0X)
#define DEG90		(range / 2)
#define DEG180		(range)
#define DEG270		(DEG90 + DEG180)
#define DEG360		(DEG180 * 2)
#define HIGH_PEAK	(268)
#define LOW_PEAK	(-7)
static unsigned int decode_erp(unsigned char a, unsigned char b)
#undef DEG90
#undef DEG180
#undef DEG270
#undef DEG360
#undef HIGH_PEAK
#undef LOW_PEAK
static inline void snd_caiaq_input_report_abs(struct snd_usb_caiaqdev *dev,
int axis, const unsigned char *buf,
int offset)
static void snd_caiaq_input_read_analog(struct snd_usb_caiaqdev *dev,
const unsigned char *buf,
unsigned int len)
static void snd_caiaq_input_read_erp(struct snd_usb_caiaqdev *dev,
const char *buf, unsigned int len)
static void snd_caiaq_input_read_io(struct snd_usb_caiaqdev *dev,
unsigned char *buf, unsigned int len)
#define TKS4_MSGBLOCK_SIZE	16
static void snd_usb_caiaq_tks4_dispatch(struct snd_usb_caiaqdev *dev,
const unsigned char *buf,
unsigned int len)
static void snd_usb_caiaq_ep4_reply_dispatch(struct urb *urb)
static int snd_usb_caiaq_input_open(struct input_dev *idev)
static void snd_usb_caiaq_input_close(struct input_dev *idev)
void snd_usb_caiaq_input_dispatch(struct snd_usb_caiaqdev *dev,
char *buf,
unsigned int len)
int snd_usb_caiaq_input_init(struct snd_usb_caiaqdev *dev)
void snd_usb_caiaq_input_free(struct snd_usb_caiaqdev *dev)
