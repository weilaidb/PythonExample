static int
nv04_crtc_mode_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb);
static void
crtc_wr_cio_state(struct drm_crtc *crtc, struct nv04_crtc_reg *crtcstate, int index)
static void nv_crtc_set_digital_vibrance(struct drm_crtc *crtc, int level)
static void nv_crtc_set_image_sharpening(struct drm_crtc *crtc, int level)
#define PLLSEL_VPLL1_MASK				\
(NV_PRAMDAC_PLL_COEFF_SELECT_SOURCE_PROG_VPLL	\
| NV_PRAMDAC_PLL_COEFF_SELECT_VCLK_RATIO_DB2)
#define PLLSEL_VPLL2_MASK				\
(NV_PRAMDAC_PLL_COEFF_SELECT_PLL_SOURCE_VPLL2		\
| NV_PRAMDAC_PLL_COEFF_SELECT_VCLK2_RATIO_DB2)
#define PLLSEL_TV_MASK					\
(NV_PRAMDAC_PLL_COEFF_SELECT_TV_VSCLK1		\
| NV_PRAMDAC_PLL_COEFF_SELECT_TV_PCLK1		\
| NV_PRAMDAC_PLL_COEFF_SELECT_TV_VSCLK2	\
| NV_PRAMDAC_PLL_COEFF_SELECT_TV_PCLK2)
static void nv_crtc_calc_state_ext(struct drm_crtc *crtc, struct drm_display_mode * mode, int dot_clock)
static void
nv_crtc_dpms(struct drm_crtc *crtc, int mode)
static bool
nv_crtc_mode_fixup(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
nv_crtc_mode_set_vga(struct drm_crtc *crtc, struct drm_display_mode *mode)
static void
nv_crtc_mode_set_regs(struct drm_crtc *crtc, struct drm_display_mode * mode)
static int
nv_crtc_mode_set(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y, struct drm_framebuffer *old_fb)
static void nv_crtc_save(struct drm_crtc *crtc)
static void nv_crtc_restore(struct drm_crtc *crtc)
static void nv_crtc_prepare(struct drm_crtc *crtc)
static void nv_crtc_commit(struct drm_crtc *crtc)
static void nv_crtc_destroy(struct drm_crtc *crtc)
static void
nv_crtc_gamma_load(struct drm_crtc *crtc)
static void
nv_crtc_gamma_set(struct drm_crtc *crtc, u16 *r, u16 *g, u16 *b, uint32_t start,
uint32_t size)
static int
nv04_crtc_do_mode_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *passed_fb,
int x, int y, bool atomic)
static int
nv04_crtc_mode_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb)
static int
nv04_crtc_mode_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, enum mode_set_atomic state)
static void nv04_cursor_upload(struct drm_device *dev, struct nouveau_bo *src,
struct nouveau_bo *dst)
static void nv11_cursor_upload(struct drm_device *dev, struct nouveau_bo *src,
struct nouveau_bo *dst)
static int
nv04_crtc_cursor_set(struct drm_crtc *crtc, struct drm_file *file_priv,
uint32_t buffer_handle, uint32_t width, uint32_t height)
static int
nv04_crtc_cursor_move(struct drm_crtc *crtc, int x, int y)
static const struct drm_crtc_funcs nv04_crtc_funcs = ;
static const struct drm_crtc_helper_funcs nv04_crtc_helper_funcs = ;
int
nv04_crtc_create(struct drm_device *dev, int crtc_num)
