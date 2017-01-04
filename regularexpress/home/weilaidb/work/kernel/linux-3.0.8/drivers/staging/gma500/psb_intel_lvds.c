u32 CoreClock;
u32 PWMControlRegFreq;
#define BRIGHTNESS_MAX_LEVEL 100
#define BRIGHTNESS_MASK 0xFF
#define BLC_I2C_TYPE	0x01
#define BLC_PWM_TYPT	0x02
#define BLC_POLARITY_NORMAL 0
#define BLC_POLARITY_INVERSE 1
#define PSB_BLC_MAX_PWM_REG_FREQ       (0xFFFE)
#define PSB_BLC_MIN_PWM_REG_FREQ	(0x2)
#define PSB_BLC_PWM_PRECISION_FACTOR	(10)
#define PSB_BACKLIGHT_PWM_CTL_SHIFT	(16)
#define PSB_BACKLIGHT_PWM_POLARITY_BIT_CLEAR (0xFFFE)
struct psb_intel_lvds_priv ;
static u32 psb_intel_lvds_get_max_backlight(struct drm_device *dev)
static int psb_lvds_i2c_set_brightness(struct drm_device *dev,
unsigned int level)
static int psb_lvds_pwm_set_brightness(struct drm_device *dev, int level)
void psb_intel_lvds_set_brightness(struct drm_device *dev, int level)
static void psb_intel_lvds_set_backlight(struct drm_device *dev, int level)
static void psb_intel_lvds_set_power(struct drm_device *dev,
struct psb_intel_output *output, bool on)
static void psb_intel_lvds_encoder_dpms(struct drm_encoder *encoder, int mode)
static void psb_intel_lvds_save(struct drm_connector *connector)
static void psb_intel_lvds_restore(struct drm_connector *connector)
int psb_intel_lvds_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
bool psb_intel_lvds_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
void psb_intel_lvds_prepare(struct drm_encoder *encoder)
void psb_intel_lvds_commit(struct drm_encoder *encoder)
static void psb_intel_lvds_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status psb_intel_lvds_detect(struct drm_connector
*connector, bool force)
static int psb_intel_lvds_get_modes(struct drm_connector *connector)
void psb_intel_lvds_destroy(struct drm_connector *connector)
int psb_intel_lvds_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t value)
static const struct drm_encoder_helper_funcs psb_intel_lvds_helper_funcs = ;
const struct drm_connector_helper_funcs
psb_intel_lvds_connector_helper_funcs = ;
const struct drm_connector_funcs psb_intel_lvds_connector_funcs = ;
static void psb_intel_lvds_enc_destroy(struct drm_encoder *encoder)
const struct drm_encoder_funcs psb_intel_lvds_enc_funcs = ;
void psb_intel_lvds_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev)
