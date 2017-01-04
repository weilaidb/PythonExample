#define vblanktimestamp(dev, crtc, count) ( \
(dev)->_vblank_time[(crtc) * DRM_VBLANKTIME_RBSIZE + \
((count) % DRM_VBLANKTIME_RBSIZE)])
#define DRM_TIMESTAMP_MAXRETRIES 3
#define DRM_REDUNDANT_VBLIRQ_THRESH_NS 1000000
int drm_irq_by_busid(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void clear_vblank_timestamps(struct drm_device *dev, int crtc)
static void vblank_disable_and_save(struct drm_device *dev, int crtc)
static void vblank_disable_fn(unsigned long arg)
void drm_vblank_cleanup(struct drm_device *dev)
EXPORT_SYMBOL(drm_vblank_cleanup);
int drm_vblank_init(struct drm_device *dev, int num_crtcs)
EXPORT_SYMBOL(drm_vblank_init);
static void drm_irq_vgaarb_nokms(void *cookie, bool state)
int drm_irq_install(struct drm_device *dev)
EXPORT_SYMBOL(drm_irq_install);
int drm_irq_uninstall(struct drm_device *dev)
EXPORT_SYMBOL(drm_irq_uninstall);
int drm_control(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void drm_calc_timestamping_constants(struct drm_crtc *crtc)
EXPORT_SYMBOL(drm_calc_timestamping_constants);
int drm_calc_vbltimestamp_from_scanoutpos(struct drm_device *dev, int crtc,
int *max_error,
struct timeval *vblank_time,
unsigned flags,
struct drm_crtc *refcrtc)
EXPORT_SYMBOL(drm_calc_vbltimestamp_from_scanoutpos);
u32 drm_get_last_vbltimestamp(struct drm_device *dev, int crtc,
struct timeval *tvblank, unsigned flags)
EXPORT_SYMBOL(drm_get_last_vbltimestamp);
u32 drm_vblank_count(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_count);
u32 drm_vblank_count_and_time(struct drm_device *dev, int crtc,
struct timeval *vblanktime)
EXPORT_SYMBOL(drm_vblank_count_and_time);
static void drm_update_vblank_count(struct drm_device *dev, int crtc)
int drm_vblank_get(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_get);
void drm_vblank_put(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_put);
void drm_vblank_off(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_off);
void drm_vblank_pre_modeset(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_pre_modeset);
void drm_vblank_post_modeset(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_vblank_post_modeset);
int drm_modeset_ctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int drm_queue_vblank_event(struct drm_device *dev, int pipe,
union drm_wait_vblank *vblwait,
struct drm_file *file_priv)
int drm_wait_vblank(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void drm_handle_vblank_events(struct drm_device *dev, int crtc)
bool drm_handle_vblank(struct drm_device *dev, int crtc)
EXPORT_SYMBOL(drm_handle_vblank);
