static struct i2c_board_info nv04_tv_encoder_info[] = ;
int nv04_tv_identify(struct drm_device *dev, int i2c_index)
#define PLLSEL_TV_CRTC1_MASK				\
(NV_PRAMDAC_PLL_COEFF_SELECT_TV_VSCLK1		\
| NV_PRAMDAC_PLL_COEFF_SELECT_TV_PCLK1)
#define PLLSEL_TV_CRTC2_MASK				\
(NV_PRAMDAC_PLL_COEFF_SELECT_TV_VSCLK2		\
| NV_PRAMDAC_PLL_COEFF_SELECT_TV_PCLK2)
static void nv04_tv_dpms(struct drm_encoder *encoder, int mode)
static void nv04_tv_bind(struct drm_device *dev, int head, bool bind)
static void nv04_tv_prepare(struct drm_encoder *encoder)
static void nv04_tv_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void nv04_tv_commit(struct drm_encoder *encoder)
static void nv04_tv_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs nv04_tv_funcs = ;
int
nv04_tv_create(struct drm_connector *connector, struct dcb_entry *entry)
