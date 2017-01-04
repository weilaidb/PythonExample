#define NOUVEAU_DMA_DEBUG (nouveau_reg_debug & NOUVEAU_REG_DEBUG_EVO)
static void
nv50_sor_disconnect(struct drm_encoder *encoder)
static void
nv50_sor_dpms(struct drm_encoder *encoder, int mode)
static void
nv50_sor_save(struct drm_encoder *encoder)
static void
nv50_sor_restore(struct drm_encoder *encoder)
static bool
nv50_sor_mode_fixup(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
nv50_sor_prepare(struct drm_encoder *encoder)
static void
nv50_sor_commit(struct drm_encoder *encoder)
static void
nv50_sor_mode_set(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static struct drm_crtc *
nv50_sor_crtc_get(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs nv50_sor_helper_funcs = ;
static void
nv50_sor_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs nv50_sor_encoder_funcs = ;
int
nv50_sor_create(struct drm_connector *connector, struct dcb_entry *entry)
