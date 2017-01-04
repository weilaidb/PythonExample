static int drm_version(struct drm_device *dev, void *data,
struct drm_file *file_priv);
#define DRM_IOCTL_DEF(ioctl, _func, _flags) \
[DRM_IOCTL_NR(ioctl)] =
static struct drm_ioctl_desc drm_ioctls[] = ;
#define DRM_CORE_IOCTL_COUNT	ARRAY_SIZE( drm_ioctls )
int drm_lastclose(struct drm_device * dev)
static const struct file_operations drm_stub_fops = ;
static int __init drm_core_init(void)
static void __exit drm_core_exit(void)
module_init(drm_core_init);
module_exit(drm_core_exit);
static int drm_copy_field(char *buf, size_t *buf_len, const char *value)
static int drm_version(struct drm_device *dev, void *data,
struct drm_file *file_priv)
long drm_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(drm_ioctl);
struct drm_local_map *drm_getsarea(struct drm_device *dev)
EXPORT_SYMBOL(drm_getsarea);
