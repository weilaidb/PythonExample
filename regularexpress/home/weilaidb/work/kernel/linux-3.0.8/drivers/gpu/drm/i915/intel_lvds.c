struct intel_lvds ;
static struct intel_lvds *to_intel_lvds(struct drm_encoder *encoder)
static struct intel_lvds *intel_attached_lvds(struct drm_connector *connector)
static void intel_lvds_enable(struct intel_lvds *intel_lvds)
static void intel_lvds_disable(struct intel_lvds *intel_lvds)
static void intel_lvds_dpms(struct drm_encoder *encoder, int mode)
static int intel_lvds_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static void
centre_horizontally(struct drm_display_mode *mode,
int width)
static void
centre_vertically(struct drm_display_mode *mode,
int height)
static inline u32 panel_fitter_scaling(u32 source, u32 target)
static bool intel_lvds_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_lvds_prepare(struct drm_encoder *encoder)
static void intel_lvds_commit(struct drm_encoder *encoder)
static void intel_lvds_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status
intel_lvds_detect(struct drm_connector *connector, bool force)
static int intel_lvds_get_modes(struct drm_connector *connector)
static int intel_no_modeset_on_lid_dmi_callback(const struct dmi_system_id *id)
static const struct dmi_system_id intel_no_modeset_on_lid[] = ;
static int intel_lid_notify(struct notifier_block *nb, unsigned long val,
void *unused)
static void intel_lvds_destroy(struct drm_connector *connector)
static int intel_lvds_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t value)
static const struct drm_encoder_helper_funcs intel_lvds_helper_funcs = ;
static const struct drm_connector_helper_funcs intel_lvds_connector_helper_funcs = ;
static const struct drm_connector_funcs intel_lvds_connector_funcs = ;
static const struct drm_encoder_funcs intel_lvds_enc_funcs = ;
static int __init intel_no_lvds_dmi_callback(const struct dmi_system_id *id)
static const struct dmi_system_id intel_no_lvds[] = ;
static void intel_find_lvds_downclock(struct drm_device *dev,
struct drm_display_mode *fixed_mode,
struct drm_connector *connector)
static bool lvds_is_present_in_vbt(struct drm_device *dev,
u8 *i2c_pin)
bool intel_lvds_init(struct drm_device *dev)
