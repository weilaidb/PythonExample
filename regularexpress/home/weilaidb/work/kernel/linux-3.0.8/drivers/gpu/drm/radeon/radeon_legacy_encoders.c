static void radeon_legacy_encoder_disable(struct drm_encoder *encoder)
static void radeon_legacy_lvds_update(struct drm_encoder *encoder, int mode)
static void radeon_legacy_lvds_dpms(struct drm_encoder *encoder, int mode)
static void radeon_legacy_lvds_prepare(struct drm_encoder *encoder)
static void radeon_legacy_lvds_commit(struct drm_encoder *encoder)
static void radeon_legacy_lvds_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static bool radeon_legacy_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static const struct drm_encoder_helper_funcs radeon_legacy_lvds_helper_funcs = ;
#if defined(CONFIG_BACKLIGHT_CLASS_DEVICE) || defined(CONFIG_BACKLIGHT_CLASS_DEVICE_MODULE)
#define MAX_RADEON_LEVEL 0xFF
struct radeon_backlight_privdata ;
static uint8_t radeon_legacy_lvds_level(struct backlight_device *bd)
static int radeon_legacy_backlight_update_status(struct backlight_device *bd)
static int radeon_legacy_backlight_get_brightness(struct backlight_device *bd)
static const struct backlight_ops radeon_backlight_ops = ;
void radeon_legacy_backlight_init(struct radeon_encoder *radeon_encoder,
struct drm_connector *drm_connector)
static void radeon_legacy_backlight_exit(struct radeon_encoder *radeon_encoder)
void radeon_legacy_backlight_init(struct radeon_encoder *encoder)
static void radeon_legacy_backlight_exit(struct radeon_encoder *encoder)
static void radeon_lvds_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs radeon_legacy_lvds_enc_funcs = ;
static void radeon_legacy_primary_dac_dpms(struct drm_encoder *encoder, int mode)
static void radeon_legacy_primary_dac_prepare(struct drm_encoder *encoder)
static void radeon_legacy_primary_dac_commit(struct drm_encoder *encoder)
static void radeon_legacy_primary_dac_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status radeon_legacy_primary_dac_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static const struct drm_encoder_helper_funcs radeon_legacy_primary_dac_helper_funcs = ;
static const struct drm_encoder_funcs radeon_legacy_primary_dac_enc_funcs = ;
static void radeon_legacy_tmds_int_dpms(struct drm_encoder *encoder, int mode)
static void radeon_legacy_tmds_int_prepare(struct drm_encoder *encoder)
static void radeon_legacy_tmds_int_commit(struct drm_encoder *encoder)
static void radeon_legacy_tmds_int_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static const struct drm_encoder_helper_funcs radeon_legacy_tmds_int_helper_funcs = ;
static const struct drm_encoder_funcs radeon_legacy_tmds_int_enc_funcs = ;
static void radeon_legacy_tmds_ext_dpms(struct drm_encoder *encoder, int mode)
static void radeon_legacy_tmds_ext_prepare(struct drm_encoder *encoder)
static void radeon_legacy_tmds_ext_commit(struct drm_encoder *encoder)
static void radeon_legacy_tmds_ext_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void radeon_ext_tmds_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs radeon_legacy_tmds_ext_helper_funcs = ;
static const struct drm_encoder_funcs radeon_legacy_tmds_ext_enc_funcs = ;
static void radeon_legacy_tv_dac_dpms(struct drm_encoder *encoder, int mode)
static void radeon_legacy_tv_dac_prepare(struct drm_encoder *encoder)
static void radeon_legacy_tv_dac_commit(struct drm_encoder *encoder)
static void radeon_legacy_tv_dac_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static bool r300_legacy_tv_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static bool radeon_legacy_tv_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static enum drm_connector_status radeon_legacy_tv_dac_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static const struct drm_encoder_helper_funcs radeon_legacy_tv_dac_helper_funcs = ;
static const struct drm_encoder_funcs radeon_legacy_tv_dac_enc_funcs = ;
static struct radeon_encoder_int_tmds *radeon_legacy_get_tmds_info(struct radeon_encoder *encoder)
static struct radeon_encoder_ext_tmds *radeon_legacy_get_ext_tmds_info(struct radeon_encoder *encoder)
void
radeon_add_legacy_encoder(struct drm_device *dev, uint32_t encoder_enum, uint32_t supported_device)
