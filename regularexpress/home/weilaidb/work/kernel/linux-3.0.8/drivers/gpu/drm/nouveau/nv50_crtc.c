#define NOUVEAU_DMA_DEBUG (nouveau_reg_debug & NOUVEAU_REG_DEBUG_EVO)
static void
nv50_crtc_lut_load(struct drm_crtc *crtc)
int
nv50_crtc_blank(struct nouveau_crtc *nv_crtc, bool blanked)
static int
nv50_crtc_set_dither(struct nouveau_crtc *nv_crtc, bool on, bool update)
struct nouveau_connector *
nouveau_crtc_connector_get(struct nouveau_crtc *nv_crtc)
static int
nv50_crtc_set_scale(struct nouveau_crtc *nv_crtc, int scaling_mode, bool update)
int
nv50_crtc_set_clock(struct drm_device *dev, int head, int pclk)
static void
nv50_crtc_destroy(struct drm_crtc *crtc)
int
nv50_crtc_cursor_set(struct drm_crtc *crtc, struct drm_file *file_priv,
uint32_t buffer_handle, uint32_t width, uint32_t height)
int
nv50_crtc_cursor_move(struct drm_crtc *crtc, int x, int y)
static void
nv50_crtc_gamma_set(struct drm_crtc *crtc, u16 *r, u16 *g, u16 *b,
uint32_t start, uint32_t size)
static void
nv50_crtc_save(struct drm_crtc *crtc)
static void
nv50_crtc_restore(struct drm_crtc *crtc)
static const struct drm_crtc_funcs nv50_crtc_funcs = ;
static void
nv50_crtc_dpms(struct drm_crtc *crtc, int mode)
static int
nv50_crtc_wait_complete(struct drm_crtc *crtc)
static void
nv50_crtc_prepare(struct drm_crtc *crtc)
static void
nv50_crtc_commit(struct drm_crtc *crtc)
static bool
nv50_crtc_mode_fixup(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int
nv50_crtc_do_mode_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *passed_fb,
int x, int y, bool atomic)
static int
nv50_crtc_mode_set(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode, int x, int y,
struct drm_framebuffer *old_fb)
static int
nv50_crtc_mode_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb)
static int
nv50_crtc_mode_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, enum mode_set_atomic state)
static const struct drm_crtc_helper_funcs nv50_crtc_helper_funcs = ;
int
nv50_crtc_create(struct drm_device *dev, int index)
