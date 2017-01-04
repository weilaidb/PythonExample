int drm_get_platform_dev(struct platform_device *platdev,
struct drm_driver *driver)
EXPORT_SYMBOL(drm_get_platform_dev);
static int drm_platform_get_irq(struct drm_device *dev)
static const char *drm_platform_get_name(struct drm_device *dev)
static int drm_platform_set_busid(struct drm_device *dev, struct drm_master *master)
static struct drm_bus drm_platform_bus = ;
int drm_platform_init(struct drm_driver *driver, struct platform_device *platform_device)
EXPORT_SYMBOL(drm_platform_init);
void drm_platform_exit(struct drm_driver *driver, struct platform_device *platform_device)
EXPORT_SYMBOL(drm_platform_exit);
