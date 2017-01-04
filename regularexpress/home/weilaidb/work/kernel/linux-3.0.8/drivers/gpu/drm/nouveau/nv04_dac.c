int nv04_dac_output_offset(struct drm_encoder *encoder)
#define MAX_HBLANK_OSC 20
#define MAX_SAMPLE_PAIRS 10
static int sample_load_twice(struct drm_device *dev, bool sense[2])
static enum drm_connector_status nv04_dac_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
uint32_t nv17_dac_sample_load(struct drm_encoder *encoder)
static enum drm_connector_status
nv17_dac_detect(struct drm_encoder *encoder, struct drm_connector *connector)
static bool nv04_dac_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void nv04_dac_prepare(struct drm_encoder *encoder)
static void nv04_dac_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void nv04_dac_commit(struct drm_encoder *encoder)
void nv04_dac_update_dacclk(struct drm_encoder *encoder, bool enable)
bool nv04_dac_in_use(struct drm_encoder *encoder)
static void nv04_dac_dpms(struct drm_encoder *encoder, int mode)
static void nv04_dac_save(struct drm_encoder *encoder)
static void nv04_dac_restore(struct drm_encoder *encoder)
static void nv04_dac_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs nv04_dac_helper_funcs = ;
static const struct drm_encoder_helper_funcs nv17_dac_helper_funcs = ;
static const struct drm_encoder_funcs nv04_dac_funcs = ;
int
nv04_dac_create(struct drm_connector *connector, struct dcb_entry *entry)
