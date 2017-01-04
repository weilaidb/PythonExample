static void
nouveau_user_framebuffer_destroy(struct drm_framebuffer *drm_fb)
static int
nouveau_user_framebuffer_create_handle(struct drm_framebuffer *drm_fb,
struct drm_file *file_priv,
unsigned int *handle)
static const struct drm_framebuffer_funcs nouveau_framebuffer_funcs = ;
int
nouveau_framebuffer_init(struct drm_device *dev,
struct nouveau_framebuffer *nv_fb,
struct drm_mode_fb_cmd *mode_cmd,
struct nouveau_bo *nvbo)
static struct drm_framebuffer *
nouveau_user_framebuffer_create(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_mode_fb_cmd *mode_cmd)
const struct drm_mode_config_funcs nouveau_mode_config_funcs = ;
int
nouveau_vblank_enable(struct drm_device *dev, int crtc)
void
nouveau_vblank_disable(struct drm_device *dev, int crtc)
static int
nouveau_page_flip_reserve(struct nouveau_bo *old_bo,
struct nouveau_bo *new_bo)
static void
nouveau_page_flip_unreserve(struct nouveau_bo *old_bo,
struct nouveau_bo *new_bo,
struct nouveau_fence *fence)
static int
nouveau_page_flip_emit(struct nouveau_channel *chan,
struct nouveau_bo *old_bo,
struct nouveau_bo *new_bo,
struct nouveau_page_flip_state *s,
struct nouveau_fence **pfence)
int
nouveau_crtc_page_flip(struct drm_crtc *crtc, struct drm_framebuffer *fb,
struct drm_pending_vblank_event *event)
int
nouveau_finish_page_flip(struct nouveau_channel *chan,
struct nouveau_page_flip_state *ps)
