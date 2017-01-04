static struct fb_ops intelfb_ops = ;
static int intelfb_create(struct intel_fbdev *ifbdev,
struct drm_fb_helper_surface_size *sizes)
static int intel_fb_find_or_create_single(struct drm_fb_helper *helper,
struct drm_fb_helper_surface_size *sizes)
static struct drm_fb_helper_funcs intel_fb_helper_funcs = ;
static void intel_fbdev_destroy(struct drm_device *dev,
struct intel_fbdev *ifbdev)
int intel_fbdev_init(struct drm_device *dev)
void intel_fbdev_fini(struct drm_device *dev)
MODULE_LICENSE("GPL and additional rights");
void intel_fb_output_poll_changed(struct drm_device *dev)
void intel_fb_restore_mode(struct drm_device *dev)
