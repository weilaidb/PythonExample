#define FP_TG_CONTROL_ON  (NV_PRAMDAC_FP_TG_CONTROL_DISPEN_POS |	\
NV_PRAMDAC_FP_TG_CONTROL_HSYNC_POS |		\
NV_PRAMDAC_FP_TG_CONTROL_VSYNC_POS)
#define FP_TG_CONTROL_OFF (NV_PRAMDAC_FP_TG_CONTROL_DISPEN_DISABLE |	\
NV_PRAMDAC_FP_TG_CONTROL_HSYNC_DISABLE |	\
NV_PRAMDAC_FP_TG_CONTROL_VSYNC_DISABLE)
static inline bool is_fpc_off(uint32_t fpc)
int nv04_dfp_get_bound_head(struct drm_device *dev, struct dcb_entry *dcbent)
void nv04_dfp_bind_head(struct drm_device *dev, struct dcb_entry *dcbent,
int head, bool dl)
void nv04_dfp_disable(struct drm_device *dev, int head)
void nv04_dfp_update_fp_control(struct drm_encoder *encoder, int mode)
static struct drm_encoder *get_tmds_slave(struct drm_encoder *encoder)
static bool nv04_dfp_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void nv04_dfp_prepare_sel_clk(struct drm_device *dev,
struct nouveau_encoder *nv_encoder, int head)
static void nv04_dfp_prepare(struct drm_encoder *encoder)
static void nv04_dfp_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void nv04_dfp_commit(struct drm_encoder *encoder)
static void nv04_dfp_update_backlight(struct drm_encoder *encoder, int mode)
static inline bool is_powersaving_dpms(int mode)
static void nv04_lvds_dpms(struct drm_encoder *encoder, int mode)
static void nv04_tmds_dpms(struct drm_encoder *encoder, int mode)
static void nv04_dfp_save(struct drm_encoder *encoder)
static void nv04_dfp_restore(struct drm_encoder *encoder)
static void nv04_dfp_destroy(struct drm_encoder *encoder)
static void nv04_tmds_slave_init(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs nv04_lvds_helper_funcs = ;
static const struct drm_encoder_helper_funcs nv04_tmds_helper_funcs = ;
static const struct drm_encoder_funcs nv04_dfp_funcs = ;
int
nv04_dfp_create(struct drm_connector *connector, struct dcb_entry *entry)
