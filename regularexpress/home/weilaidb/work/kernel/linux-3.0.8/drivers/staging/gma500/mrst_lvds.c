#define MRST_BLC_MAX_PWM_REG_FREQ	    0xFFFF
#define BRIGHTNESS_MAX_LEVEL 100
static void mrst_lvds_set_power(struct drm_device *dev,
struct psb_intel_output *output, bool on)
static void mrst_lvds_dpms(struct drm_encoder *encoder, int mode)
static void mrst_lvds_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static const struct drm_encoder_helper_funcs mrst_lvds_helper_funcs = ;
static struct drm_display_mode lvds_configuration_modes[] = ;
static struct drm_display_mode *
mrst_lvds_get_configuration_mode(struct drm_device *dev)
void mrst_lvds_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev)
