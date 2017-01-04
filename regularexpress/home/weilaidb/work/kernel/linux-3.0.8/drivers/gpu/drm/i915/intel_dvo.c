#define SIL164_ADDR	0x38
#define CH7xxx_ADDR	0x76
#define TFP410_ADDR	0x38
static const struct intel_dvo_device intel_dvo_devices[] = ;
struct intel_dvo ;
static struct intel_dvo *enc_to_intel_dvo(struct drm_encoder *encoder)
static struct intel_dvo *intel_attached_dvo(struct drm_connector *connector)
static void intel_dvo_dpms(struct drm_encoder *encoder, int mode)
static int intel_dvo_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool intel_dvo_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_dvo_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status
intel_dvo_detect(struct drm_connector *connector, bool force)
static int intel_dvo_get_modes(struct drm_connector *connector)
static void intel_dvo_destroy(struct drm_connector *connector)
static const struct drm_encoder_helper_funcs intel_dvo_helper_funcs = ;
static const struct drm_connector_funcs intel_dvo_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_dvo_connector_helper_funcs = ;
static void intel_dvo_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs intel_dvo_enc_funcs = ;
static struct drm_display_mode *
intel_dvo_get_current_mode(struct drm_connector *connector)
void intel_dvo_init(struct drm_device *dev)
