#define MRST_BLC_MAX_PWM_REG_FREQ	    0xFFFF
#define BLC_PWM_PRECISION_FACTOR 100
#define BLC_PWM_FREQ_CALC_CONSTANT 32
#define MHz 1000000
#define BRIGHTNESS_MIN_LEVEL 1
#define BRIGHTNESS_MASK	0xFF
#define BLC_POLARITY_NORMAL 0
#define BLC_POLARITY_INVERSE 1
#define BLC_ADJUSTMENT_MAX 100
#define PSB_BLC_PWM_PRECISION_FACTOR    10
#define PSB_BLC_MAX_PWM_REG_FREQ        0xFFFE
#define PSB_BLC_MIN_PWM_REG_FREQ        0x2
#define PSB_BACKLIGHT_PWM_POLARITY_BIT_CLEAR (0xFFFE)
#define PSB_BACKLIGHT_PWM_CTL_SHIFT	(16)
static int psb_brightness;
static struct backlight_device *psb_backlight_device;
static u8 blc_brightnesscmd;
static u8 blc_pol;
static u8 blc_type;
int psb_set_brightness(struct backlight_device *bd)
int mrst_set_brightness(struct backlight_device *bd)
int psb_get_brightness(struct backlight_device *bd)
static const struct backlight_ops psb_ops = ;
static int device_backlight_init(struct drm_device *dev)
int psb_backlight_init(struct drm_device *dev)
void psb_backlight_exit(void)
struct backlight_device *psb_get_backlight_device(void)
