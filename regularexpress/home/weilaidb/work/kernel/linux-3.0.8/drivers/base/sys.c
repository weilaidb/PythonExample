#define to_sysdev(k) container_of(k, struct sys_device, kobj)
#define to_sysdev_attr(a) container_of(a, struct sysdev_attribute, attr)
static ssize_t
sysdev_show(struct kobject *kobj, struct attribute *attr, char *buffer)
static ssize_t
sysdev_store(struct kobject *kobj, struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops sysfs_ops = ;
static struct kobj_type ktype_sysdev = ;
int sysdev_create_file(struct sys_device *s, struct sysdev_attribute *a)
void sysdev_remove_file(struct sys_device *s, struct sysdev_attribute *a)
EXPORT_SYMBOL_GPL(sysdev_create_file);
EXPORT_SYMBOL_GPL(sysdev_remove_file);
#define to_sysdev_class(k) container_of(k, struct sysdev_class, kset.kobj)
#define to_sysdev_class_attr(a) container_of(a, \
struct sysdev_class_attribute, attr)
static ssize_t sysdev_class_show(struct kobject *kobj, struct attribute *attr,
char *buffer)
static ssize_t sysdev_class_store(struct kobject *kobj, struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops sysfs_class_ops = ;
static struct kobj_type ktype_sysdev_class = ;
int sysdev_class_create_file(struct sysdev_class *c,
struct sysdev_class_attribute *a)
EXPORT_SYMBOL_GPL(sysdev_class_create_file);
void sysdev_class_remove_file(struct sysdev_class *c,
struct sysdev_class_attribute *a)
EXPORT_SYMBOL_GPL(sysdev_class_remove_file);
static struct kset *system_kset;
int sysdev_class_register(struct sysdev_class *cls)
void sysdev_class_unregister(struct sysdev_class *cls)
EXPORT_SYMBOL_GPL(sysdev_class_register);
EXPORT_SYMBOL_GPL(sysdev_class_unregister);
static DEFINE_MUTEX(sysdev_drivers_lock);
static void __sysdev_driver_remove(struct sysdev_class *cls,
struct sysdev_driver *drv,
struct sys_device *from_dev)
int sysdev_driver_register(struct sysdev_class *cls, struct sysdev_driver *drv)
void sysdev_driver_unregister(struct sysdev_class *cls,
struct sysdev_driver *drv)
EXPORT_SYMBOL_GPL(sysdev_driver_register);
EXPORT_SYMBOL_GPL(sysdev_driver_unregister);
int sysdev_register(struct sys_device *sysdev)
void sysdev_unregister(struct sys_device *sysdev)
EXPORT_SYMBOL_GPL(sysdev_register);
EXPORT_SYMBOL_GPL(sysdev_unregister);
int __init system_bus_init(void)
#define to_ext_attr(x) container_of(x, struct sysdev_ext_attribute, attr)
ssize_t sysdev_store_ulong(struct sys_device *sysdev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
EXPORT_SYMBOL_GPL(sysdev_store_ulong);
ssize_t sysdev_show_ulong(struct sys_device *sysdev,
struct sysdev_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(sysdev_show_ulong);
ssize_t sysdev_store_int(struct sys_device *sysdev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
EXPORT_SYMBOL_GPL(sysdev_store_int);
ssize_t sysdev_show_int(struct sys_device *sysdev,
struct sysdev_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(sysdev_show_int);
