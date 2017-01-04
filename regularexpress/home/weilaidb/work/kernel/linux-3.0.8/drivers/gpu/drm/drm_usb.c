int drm_get_usb_dev(struct usb_interface *interface,
const struct usb_device_id *id,
struct drm_driver *driver)
EXPORT_SYMBOL(drm_get_usb_dev);
static int drm_usb_get_irq(struct drm_device *dev)
static const char *drm_usb_get_name(struct drm_device *dev)
static int drm_usb_set_busid(struct drm_device *dev,
struct drm_master *master)
static struct drm_bus drm_usb_bus = ;
int drm_usb_init(struct drm_driver *driver, struct usb_driver *udriver)
EXPORT_SYMBOL(drm_usb_init);
void drm_usb_exit(struct drm_driver *driver,
struct usb_driver *udriver)
EXPORT_SYMBOL(drm_usb_exit);
