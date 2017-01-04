unsigned int drm_debug = 0;
EXPORT_SYMBOL(drm_debug);
unsigned int drm_vblank_offdelay = 5000;
EXPORT_SYMBOL(drm_vblank_offdelay);
unsigned int drm_timestamp_precision = 20;
EXPORT_SYMBOL(drm_timestamp_precision);
MODULE_AUTHOR(CORE_AUTHOR);
MODULE_DESCRIPTION(CORE_DESC);
MODULE_LICENSE("GPL and additional rights");
MODULE_PARM_DESC(debug, "Enable debug output");
MODULE_PARM_DESC(vblankoffdelay, "Delay until vblank irq auto-disable [msecs]");
MODULE_PARM_DESC(timestamp_precision_usec, "Max. error on timestamps [usecs]");
module_param_named(debug, drm_debug, int, 0600);
module_param_named(vblankoffdelay, drm_vblank_offdelay, int, 0600);
module_param_named(timestamp_precision_usec, drm_timestamp_precision, int, 0600);
struct idr drm_minors_idr;
struct class *drm_class;
struct proc_dir_entry *drm_proc_root;
struct dentry *drm_debugfs_root;
int drm_err(const char *func, const char *format, ...)
EXPORT_SYMBOL(drm_err);
void drm_ut_debug_printk(unsigned int request_level,
const char *prefix,
const char *function_name,
const char *format, ...)
EXPORT_SYMBOL(drm_ut_debug_printk);
static int drm_minor_get_id(struct drm_device *dev, int type)
struct drm_master *drm_master_create(struct drm_minor *minor)
struct drm_master *drm_master_get(struct drm_master *master)
EXPORT_SYMBOL(drm_master_get);
static void drm_master_destroy(struct kref *kref)
void drm_master_put(struct drm_master **master)
EXPORT_SYMBOL(drm_master_put);
int drm_setmaster_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_dropmaster_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_fill_in_dev(struct drm_device *dev,
const struct pci_device_id *ent,
struct drm_driver *driver)
int drm_get_minor(struct drm_device *dev, struct drm_minor **minor, int type)
int drm_put_minor(struct drm_minor **minor_p)
void drm_put_dev(struct drm_device *dev)
EXPORT_SYMBOL(drm_put_dev);
