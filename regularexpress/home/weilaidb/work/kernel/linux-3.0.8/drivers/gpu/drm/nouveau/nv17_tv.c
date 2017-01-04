static uint32_t nv42_tv_sample_load(struct drm_encoder *encoder)
static bool
get_tv_detect_quirks(struct drm_device *dev, uint32_t *pin_mask)
static enum drm_connector_status
nv17_tv_detect(struct drm_encoder *encoder, struct drm_connector *connector)
static int nv17_tv_get_ld_modes(struct drm_encoder *encoder,
struct drm_connector *connector)
static int nv17_tv_get_hd_modes(struct drm_encoder *encoder,
struct drm_connector *connector)
static int nv17_tv_get_modes(struct drm_encoder *encoder,
struct drm_connector *connector)
static int nv17_tv_mode_valid(struct drm_encoder *encoder,
struct drm_display_mode *mode)
static bool nv17_tv_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void  nv17_tv_dpms(struct drm_encoder *encoder, int mode)
static void nv17_tv_prepare(struct drm_encoder *encoder)
static void nv17_tv_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *drm_mode,
struct drm_display_mode *adjusted_mode)
static void nv17_tv_commit(struct drm_encoder *encoder)
static void nv17_tv_save(struct drm_encoder *encoder)
static void nv17_tv_restore(struct drm_encoder *encoder)
static int nv17_tv_create_resources(struct drm_encoder *encoder,
struct drm_connector *connector)
static int nv17_tv_set_property(struct drm_encoder *encoder,
struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static void nv17_tv_destroy(struct drm_encoder *encoder)
static struct drm_encoder_helper_funcs nv17_tv_helper_funcs = ;
static struct drm_encoder_slave_funcs nv17_tv_slave_funcs = ;
static struct drm_encoder_funcs nv17_tv_funcs = ;
int
nv17_tv_create(struct drm_connector *connector, struct dcb_entry *entry)
