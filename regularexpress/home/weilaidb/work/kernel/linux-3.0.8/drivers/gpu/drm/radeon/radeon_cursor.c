#define CURSOR_WIDTH 64
#define CURSOR_HEIGHT 64
static void radeon_lock_cursor(struct drm_crtc *crtc, bool lock)
static void radeon_hide_cursor(struct drm_crtc *crtc)
static void radeon_show_cursor(struct drm_crtc *crtc)
static void radeon_set_cursor(struct drm_crtc *crtc, struct drm_gem_object *obj,
uint64_t gpu_addr)
int radeon_crtc_cursor_set(struct drm_crtc *crtc,
struct drm_file *file_priv,
uint32_t handle,
uint32_t width,
uint32_t height)
int radeon_crtc_cursor_move(struct drm_crtc *crtc,
int x, int y)
