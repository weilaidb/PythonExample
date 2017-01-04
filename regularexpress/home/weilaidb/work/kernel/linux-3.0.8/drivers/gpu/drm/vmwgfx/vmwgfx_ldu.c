#define VMWGFX_LDU_NUM_DU 8
#define vmw_crtc_to_ldu(x) \
container_of(x, struct vmw_legacy_display_unit, base.crtc)
#define vmw_encoder_to_ldu(x) \
container_of(x, struct vmw_legacy_display_unit, base.encoder)
#define vmw_connector_to_ldu(x) \
container_of(x, struct vmw_legacy_display_unit, base.connector)
struct vmw_legacy_display ;
struct vmw_legacy_display_unit ;
static void vmw_ldu_destroy(struct vmw_legacy_display_unit *ldu)
static void vmw_ldu_crtc_save(struct drm_crtc *crtc)
static void vmw_ldu_crtc_restore(struct drm_crtc *crtc)
static void vmw_ldu_crtc_gamma_set(struct drm_crtc *crtc,
u16 *r, u16 *g, u16 *b,
uint32_t start, uint32_t size)
static void vmw_ldu_crtc_destroy(struct drm_crtc *crtc)
static int vmw_ldu_commit_list(struct vmw_private *dev_priv)
static int vmw_ldu_del_active(struct vmw_private *vmw_priv,
struct vmw_legacy_display_unit *ldu)
static int vmw_ldu_add_active(struct vmw_private *vmw_priv,
struct vmw_legacy_display_unit *ldu,
struct vmw_framebuffer *vfb)
static int vmw_ldu_crtc_set_config(struct drm_mode_set *set)
static struct drm_crtc_funcs vmw_legacy_crtc_funcs = ;
static void vmw_ldu_encoder_destroy(struct drm_encoder *encoder)
static struct drm_encoder_funcs vmw_legacy_encoder_funcs = ;
static void vmw_ldu_connector_dpms(struct drm_connector *connector, int mode)
static void vmw_ldu_connector_save(struct drm_connector *connector)
static void vmw_ldu_connector_restore(struct drm_connector *connector)
static enum drm_connector_status
vmw_ldu_connector_detect(struct drm_connector *connector,
bool force)
static const struct drm_display_mode vmw_ldu_connector_builtin[] = ;
static int vmw_ldu_connector_fill_modes(struct drm_connector *connector,
uint32_t max_width, uint32_t max_height)
static int vmw_ldu_connector_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static void vmw_ldu_connector_destroy(struct drm_connector *connector)
static struct drm_connector_funcs vmw_legacy_connector_funcs = ;
static int vmw_ldu_init(struct vmw_private *dev_priv, unsigned unit)
int vmw_kms_init_legacy_display_system(struct vmw_private *dev_priv)
int vmw_kms_close_legacy_display_system(struct vmw_private *dev_priv)
int vmw_kms_ldu_update_layout(struct vmw_private *dev_priv, unsigned num,
struct drm_vmw_rect *rects)
