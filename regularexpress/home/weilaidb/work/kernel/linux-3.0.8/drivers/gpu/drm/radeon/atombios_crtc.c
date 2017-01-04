static void atombios_overscan_setup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void atombios_scaler_setup(struct drm_crtc *crtc)
static void atombios_lock_crtc(struct drm_crtc *crtc, int lock)
static void atombios_enable_crtc(struct drm_crtc *crtc, int state)
static void atombios_enable_crtc_memreq(struct drm_crtc *crtc, int state)
static void atombios_blank_crtc(struct drm_crtc *crtc, int state)
void atombios_crtc_dpms(struct drm_crtc *crtc, int mode)
static void
atombios_set_crtc_dtd_timing(struct drm_crtc *crtc,
struct drm_display_mode *mode)
static void atombios_crtc_set_timing(struct drm_crtc *crtc,
struct drm_display_mode *mode)
static void atombios_disable_ss(struct drm_crtc *crtc)
union atom_enable_ss ;
static void atombios_crtc_program_ss(struct drm_crtc *crtc,
int enable,
int pll_id,
struct radeon_atom_ss *ss)
union adjust_pixel_clock ;
static u32 atombios_adjust_pll(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct radeon_pll *pll,
bool ss_enabled,
struct radeon_atom_ss *ss)
union set_pixel_clock ;
static void atombios_crtc_set_dcpll(struct drm_crtc *crtc,
u32 dispclk)
static void atombios_crtc_program_pll(struct drm_crtc *crtc,
int crtc_id,
int pll_id,
u32 encoder_mode,
u32 encoder_id,
u32 clock,
u32 ref_div,
u32 fb_div,
u32 frac_fb_div,
u32 post_div,
int bpc,
bool ss_enabled,
struct radeon_atom_ss *ss)
static void atombios_crtc_set_pll(struct drm_crtc *crtc, struct drm_display_mode *mode)
static int dce4_crtc_do_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, int atomic)
static int avivo_crtc_do_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, int atomic)
int atombios_crtc_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb)
int atombios_crtc_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, enum mode_set_atomic state)
static void radeon_legacy_atom_fixup(struct drm_crtc *crtc)
static int radeon_atom_pick_pll(struct drm_crtc *crtc)
int atombios_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y, struct drm_framebuffer *old_fb)
static bool atombios_crtc_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void atombios_crtc_prepare(struct drm_crtc *crtc)
static void atombios_crtc_commit(struct drm_crtc *crtc)
static void atombios_crtc_disable(struct drm_crtc *crtc)
static const struct drm_crtc_helper_funcs atombios_helper_funcs = ;
void radeon_atombios_init_crtc(struct drm_device *dev,
struct radeon_crtc *radeon_crtc)
