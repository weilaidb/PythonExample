#define NOUVEAU_DMA_DEBUG (nouveau_reg_debug & NOUVEAU_REG_DEBUG_EVO)
static void
nv50_dac_disconnect(struct drm_encoder *encoder)
static enum drm_connector_status
nv50_dac_detect(struct drm_encoder *encoder, struct drm_connector *connector)
static void
nv50_dac_dpms(struct drm_encoder *encoder, int mode)
static void
nv50_dac_save(struct drm_encoder *encoder)
static void
nv50_dac_restore(struct drm_encoder *encoder)
static bool
nv50_dac_mode_fixup(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
nv50_dac_prepare(struct drm_encoder *encoder)
static void
nv50_dac_commit(struct drm_encoder *encoder)
static void
nv50_dac_mode_set(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static struct drm_crtc *
nv50_dac_crtc_get(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs nv50_dac_helper_funcs = ;
static void
nv50_dac_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs nv50_dac_encoder_funcs = ;
int
nv50_dac_create(struct drm_connector *connector, struct dcb_entry *entry)
