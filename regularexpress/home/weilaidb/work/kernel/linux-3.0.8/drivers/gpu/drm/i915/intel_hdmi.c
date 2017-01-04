struct intel_hdmi ;
static struct intel_hdmi *enc_to_intel_hdmi(struct drm_encoder *encoder)
static struct intel_hdmi *intel_attached_hdmi(struct drm_connector *connector)
void intel_dip_infoframe_csum(struct dip_infoframe *avi_if)
static void intel_hdmi_set_avi_infoframe(struct drm_encoder *encoder)
static void intel_hdmi_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_hdmi_dpms(struct drm_encoder *encoder, int mode)
static int intel_hdmi_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool intel_hdmi_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status
intel_hdmi_detect(struct drm_connector *connector, bool force)
static int intel_hdmi_get_modes(struct drm_connector *connector)
static bool
intel_hdmi_detect_audio(struct drm_connector *connector)
static int
intel_hdmi_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static void intel_hdmi_destroy(struct drm_connector *connector)
static const struct drm_encoder_helper_funcs intel_hdmi_helper_funcs = ;
static const struct drm_connector_funcs intel_hdmi_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_hdmi_connector_helper_funcs = ;
static const struct drm_encoder_funcs intel_hdmi_enc_funcs = ;
static void
intel_hdmi_add_properties(struct intel_hdmi *intel_hdmi, struct drm_connector *connector)
void intel_hdmi_init(struct drm_device *dev, int sdvox_reg)
