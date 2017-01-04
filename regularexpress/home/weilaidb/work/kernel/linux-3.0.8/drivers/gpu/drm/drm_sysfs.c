#define to_drm_minor(d) container_of(d, struct drm_minor, kdev)
#define to_drm_connector(d) container_of(d, struct drm_connector, kdev)
static struct device_type drm_sysfs_device_minor = ;
static int drm_class_suspend(struct device *dev, pm_message_t state)
static int drm_class_resume(struct device *dev)
static char *drm_devnode(struct device *dev, mode_t *mode)
static CLASS_ATTR_STRING(version, S_IRUGO,
CORE_NAME " "
__stringify(CORE_MAJOR) "."
__stringify(CORE_MINOR) "."
__stringify(CORE_PATCHLEVEL) " "
CORE_DATE);
struct class *drm_sysfs_create(struct module *owner, char *name)
void drm_sysfs_destroy(void)
static void drm_sysfs_device_release(struct device *dev)
static ssize_t status_show(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t dpms_show(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t enabled_show(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t edid_show(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t off,
size_t count)
static ssize_t modes_show(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t subconnector_show(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t select_subconnector_show(struct device *device,
struct device_attribute *attr,
char *buf)
static struct device_attribute connector_attrs[] = ;
static struct device_attribute connector_attrs_opt1[] = ;
static struct bin_attribute edid_attr = ;
int drm_sysfs_connector_add(struct drm_connector *connector)
EXPORT_SYMBOL(drm_sysfs_connector_add);
void drm_sysfs_connector_remove(struct drm_connector *connector)
EXPORT_SYMBOL(drm_sysfs_connector_remove);
void drm_sysfs_hotplug_event(struct drm_device *dev)
EXPORT_SYMBOL(drm_sysfs_hotplug_event);
int drm_sysfs_device_add(struct drm_minor *minor)
void drm_sysfs_device_remove(struct drm_minor *minor)
int drm_class_device_register(struct device *dev)
EXPORT_SYMBOL_GPL(drm_class_device_register);
void drm_class_device_unregister(struct device *dev)
EXPORT_SYMBOL_GPL(drm_class_device_unregister);
