#define ADPA_HOTPLUG_BITS (ADPA_CRT_HOTPLUG_PERIOD_128 |		\
ADPA_CRT_HOTPLUG_WARMUP_10MS |		\
ADPA_CRT_HOTPLUG_SAMPLE_4S |			\
ADPA_CRT_HOTPLUG_VOLTAGE_50 |		\
ADPA_CRT_HOTPLUG_VOLREF_325MV |		\
ADPA_CRT_HOTPLUG_ENABLE)
struct intel_crt ;
static struct intel_crt *intel_attached_crt(struct drm_connector *connector)
static void intel_crt_dpms(struct drm_encoder *encoder, int mode)
static int intel_crt_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool intel_crt_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_crt_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static bool intel_ironlake_crt_detect_hotplug(struct drm_connector *connector)
static bool intel_crt_detect_hotplug(struct drm_connector *connector)
static bool intel_crt_detect_ddc(struct drm_connector *connector)
static enum drm_connector_status
intel_crt_load_detect(struct intel_crt *crt)
static enum drm_connector_status
intel_crt_detect(struct drm_connector *connector, bool force)
static void intel_crt_destroy(struct drm_connector *connector)
static int intel_crt_get_modes(struct drm_connector *connector)
static int intel_crt_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t value)
static void intel_crt_reset(struct drm_connector *connector)
static const struct drm_encoder_helper_funcs intel_crt_helper_funcs = ;
static const struct drm_connector_funcs intel_crt_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_crt_connector_helper_funcs = ;
static const struct drm_encoder_funcs intel_crt_enc_funcs = ;
void intel_crt_init(struct drm_device *dev)
