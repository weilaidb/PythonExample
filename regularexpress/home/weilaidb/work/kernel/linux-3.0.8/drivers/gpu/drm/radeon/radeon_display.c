static int radeon_ddc_dump(struct drm_connector *connector);
static void avivo_crtc_load_lut(struct drm_crtc *crtc)
static void dce4_crtc_load_lut(struct drm_crtc *crtc)
static void dce5_crtc_load_lut(struct drm_crtc *crtc)
static void legacy_crtc_load_lut(struct drm_crtc *crtc)
void radeon_crtc_load_lut(struct drm_crtc *crtc)
void radeon_crtc_fb_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno)
void radeon_crtc_fb_gamma_get(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, int regno)
static void radeon_crtc_gamma_set(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, uint32_t start, uint32_t size)
static void radeon_crtc_destroy(struct drm_crtc *crtc)
static void radeon_unpin_work_func(struct work_struct *__work)
void radeon_crtc_handle_flip(struct radeon_device *rdev, int crtc_id)
static int radeon_crtc_page_flip(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_pending_vblank_event *event)
static const struct drm_crtc_funcs radeon_crtc_funcs = ;
static void radeon_crtc_init(struct drm_device *dev, int index)
static const char *encoder_names[36] = ;
static const char *connector_names[15] = ;
static const char *hpd_names[6] = ;
static void radeon_print_display_setup(struct drm_device *dev)
static bool radeon_setup_enc_conn(struct drm_device *dev)
int radeon_ddc_get_modes(struct radeon_connector *radeon_connector)
static int radeon_ddc_dump(struct drm_connector *connector)
static void avivo_get_fb_div(struct radeon_pll *pll,
u32 target_clock,
u32 post_div,
u32 ref_div,
u32 *fb_div,
u32 *frac_fb_div)
static u32 avivo_get_post_div(struct radeon_pll *pll,
u32 target_clock)
#define MAX_TOLERANCE 10
void radeon_compute_pll_avivo(struct radeon_pll *pll,
u32 freq,
u32 *dot_clock_p,
u32 *fb_div_p,
u32 *frac_fb_div_p,
u32 *ref_div_p,
u32 *post_div_p)
static inline uint32_t radeon_div(uint64_t n, uint32_t d)
void radeon_compute_pll_legacy(struct radeon_pll *pll,
uint64_t freq,
uint32_t *dot_clock_p,
uint32_t *fb_div_p,
uint32_t *frac_fb_div_p,
uint32_t *ref_div_p,
uint32_t *post_div_p)
static void radeon_user_framebuffer_destroy(struct drm_framebuffer *fb)
static int radeon_user_framebuffer_create_handle(struct drm_framebuffer *fb,
struct drm_file *file_priv,
unsigned int *handle)
static const struct drm_framebuffer_funcs radeon_fb_funcs = ;
void
radeon_framebuffer_init(struct drm_device *dev,
struct radeon_framebuffer *rfb,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_gem_object *obj)
static struct drm_framebuffer *
radeon_user_framebuffer_create(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_mode_fb_cmd *mode_cmd)
static void radeon_output_poll_changed(struct drm_device *dev)
static const struct drm_mode_config_funcs radeon_mode_funcs = ;
struct drm_prop_enum_list ;
static struct drm_prop_enum_list radeon_tmds_pll_enum_list[] =
;
static struct drm_prop_enum_list radeon_tv_std_enum_list[] =
;
static struct drm_prop_enum_list radeon_underscan_enum_list[] =
;
static int radeon_modeset_create_props(struct radeon_device *rdev)
void radeon_update_display_priority(struct radeon_device *rdev)
int radeon_modeset_init(struct radeon_device *rdev)
void radeon_modeset_fini(struct radeon_device *rdev)
static bool is_hdtv_mode(struct drm_display_mode *mode)
bool radeon_crtc_scaling_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
int radeon_get_crtc_scanoutpos(struct drm_device *dev, int crtc, int *vpos, int *hpos)
