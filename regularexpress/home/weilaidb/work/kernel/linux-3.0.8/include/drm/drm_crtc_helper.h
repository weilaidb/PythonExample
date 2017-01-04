#define __DRM_CRTC_HELPER_H__
enum mode_set_atomic ;
struct drm_crtc_helper_funcs ;
struct drm_encoder_helper_funcs ;
struct drm_connector_helper_funcs ;
extern int drm_helper_probe_single_connector_modes(struct drm_connector *connector, uint32_t maxX, uint32_t maxY);
extern void drm_helper_disable_unused_functions(struct drm_device *dev);
extern int drm_crtc_helper_set_config(struct drm_mode_set *set);
extern bool drm_crtc_helper_set_mode(struct drm_crtc *crtc,
struct drm_display_mode *mode,
int x, int y,
struct drm_framebuffer *old_fb);
extern bool drm_helper_crtc_in_use(struct drm_crtc *crtc);
extern bool drm_helper_encoder_in_use(struct drm_encoder *encoder);
extern void drm_helper_connector_dpms(struct drm_connector *connector, int mode);
extern int drm_helper_mode_fill_fb_struct(struct drm_framebuffer *fb,
struct drm_mode_fb_cmd *mode_cmd);
static inline void drm_crtc_helper_add(struct drm_crtc *crtc,
const struct drm_crtc_helper_funcs *funcs)
static inline void drm_encoder_helper_add(struct drm_encoder *encoder,
const struct drm_encoder_helper_funcs *funcs)
static inline void drm_connector_helper_add(struct drm_connector *connector,
const struct drm_connector_helper_funcs *funcs)
extern int drm_helper_resume_force_mode(struct drm_device *dev);
extern void drm_kms_helper_poll_init(struct drm_device *dev);
extern void drm_kms_helper_poll_fini(struct drm_device *dev);
extern void drm_helper_hpd_irq_event(struct drm_device *dev);
extern void drm_kms_helper_poll_disable(struct drm_device *dev);
extern void drm_kms_helper_poll_enable(struct drm_device *dev);
