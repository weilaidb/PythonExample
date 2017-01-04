static bool drm_kms_helper_poll = true;
module_param_named(poll, drm_kms_helper_poll, bool, 0600);
static void drm_mode_validate_flag(struct drm_connector *connector,
int flags)
int drm_helper_probe_single_connector_modes(struct drm_connector *connector,
uint32_t maxX, uint32_t maxY)
EXPORT_SYMBOL(drm_helper_probe_single_connector_modes);
bool drm_helper_encoder_in_use(struct drm_encoder *encoder)
EXPORT_SYMBOL(drm_helper_encoder_in_use);
bool drm_helper_crtc_in_use(struct drm_crtc *crtc)
EXPORT_SYMBOL(drm_helper_crtc_in_use);
static void
drm_encoder_disable(struct drm_encoder *encoder)
void drm_helper_disable_unused_functions(struct drm_device *dev)
EXPORT_SYMBOL(drm_helper_disable_unused_functions);
static bool drm_encoder_crtc_ok(struct drm_encoder *encoder,
struct drm_crtc *crtc)
static void
drm_crtc_prepare_encoders(struct drm_device *dev)
bool drm_crtc_helper_set_mode(struct drm_crtc *crtc,
struct drm_display_mode *mode,
int x, int y,
struct drm_framebuffer *old_fb)
EXPORT_SYMBOL(drm_crtc_helper_set_mode);
int drm_crtc_helper_set_config(struct drm_mode_set *set)
EXPORT_SYMBOL(drm_crtc_helper_set_config);
static int drm_helper_choose_encoder_dpms(struct drm_encoder *encoder)
static int drm_helper_choose_crtc_dpms(struct drm_crtc *crtc)
void drm_helper_connector_dpms(struct drm_connector *connector, int mode)
EXPORT_SYMBOL(drm_helper_connector_dpms);
int drm_helper_mode_fill_fb_struct(struct drm_framebuffer *fb,
struct drm_mode_fb_cmd *mode_cmd)
EXPORT_SYMBOL(drm_helper_mode_fill_fb_struct);
int drm_helper_resume_force_mode(struct drm_device *dev)
EXPORT_SYMBOL(drm_helper_resume_force_mode);
#define DRM_OUTPUT_POLL_PERIOD (10*HZ)
static void output_poll_execute(struct work_struct *work)
void drm_kms_helper_poll_disable(struct drm_device *dev)
EXPORT_SYMBOL(drm_kms_helper_poll_disable);
void drm_kms_helper_poll_enable(struct drm_device *dev)
EXPORT_SYMBOL(drm_kms_helper_poll_enable);
void drm_kms_helper_poll_init(struct drm_device *dev)
EXPORT_SYMBOL(drm_kms_helper_poll_init);
void drm_kms_helper_poll_fini(struct drm_device *dev)
EXPORT_SYMBOL(drm_kms_helper_poll_fini);
void drm_helper_hpd_irq_event(struct drm_device *dev)
EXPORT_SYMBOL(drm_helper_hpd_irq_event);
