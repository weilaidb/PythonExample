static void radeon_overscan_setup(struct drm_crtc *crtc,
struct drm_display_mode *mode)
static void radeon_legacy_rmx_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode)
void radeon_restore_common_regs(struct drm_device *dev)
static void radeon_pll_wait_for_read_update_complete(struct drm_device *dev)
static void radeon_pll_write_update(struct drm_device *dev)
static void radeon_pll2_wait_for_read_update_complete(struct drm_device *dev)
static void radeon_pll2_write_update(struct drm_device *dev)
static uint8_t radeon_compute_pll_gain(uint16_t ref_freq, uint16_t ref_div,
uint16_t fb_div)
void radeon_crtc_dpms(struct drm_crtc *crtc, int mode)
int radeon_crtc_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb)
int radeon_crtc_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, enum mode_set_atomic state)
int radeon_crtc_do_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, int atomic)
static bool radeon_set_crtc_timing(struct drm_crtc *crtc, struct drm_display_mode *mode)
static void radeon_set_pll(struct drm_crtc *crtc, struct drm_display_mode *mode)
static bool radeon_crtc_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int radeon_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y, struct drm_framebuffer *old_fb)
static void radeon_crtc_prepare(struct drm_crtc *crtc)
static void radeon_crtc_commit(struct drm_crtc *crtc)
static const struct drm_crtc_helper_funcs legacy_helper_funcs = ;
void radeon_legacy_init_crtc(struct drm_device *dev,
struct radeon_crtc *radeon_crtc)
