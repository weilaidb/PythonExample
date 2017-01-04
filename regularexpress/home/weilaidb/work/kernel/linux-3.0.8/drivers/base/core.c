long sysfs_deprecated = 1;
long sysfs_deprecated = 0;
static __init int sysfs_deprecated_setup(char *arg)
early_param("sysfs.deprecated", sysfs_deprecated_setup);
int (*platform_notify)(struct device *dev) = NULL;
int (*platform_notify_remove)(struct device *dev) = NULL;
static struct kobject *dev_kobj;
struct kobject *sysfs_dev_char_kobj;
struct kobject *sysfs_dev_block_kobj;
static inline int device_is_not_partition(struct device *dev)
static inline int device_is_not_partition(struct device *dev)
const char *dev_driver_string(const struct device *dev)
EXPORT_SYMBOL(dev_driver_string);
#define to_dev(obj) container_of(obj, struct device, kobj)
#define to_dev_attr(_attr) container_of(_attr, struct device_attribute, attr)
static ssize_t dev_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t dev_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops dev_sysfs_ops = ;
static void device_release(struct kobject *kobj)
static const void *device_namespace(struct kobject *kobj)
static struct kobj_type device_ktype = ;
static int dev_uevent_filter(struct kset *kset, struct kobject *kobj)
static const char *dev_uevent_name(struct kset *kset, struct kobject *kobj)
static int dev_uevent(struct kset *kset, struct kobject *kobj,
struct kobj_uevent_env *env)
static const struct kset_uevent_ops device_uevent_ops = ;
static ssize_t show_uevent(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_uevent(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute uevent_attr =
__ATTR(uevent, S_IRUGO | S_IWUSR, show_uevent, store_uevent);
static int device_add_attributes(struct device *dev,
struct device_attribute *attrs)
static void device_remove_attributes(struct device *dev,
struct device_attribute *attrs)
static int device_add_bin_attributes(struct device *dev,
struct bin_attribute *attrs)
static void device_remove_bin_attributes(struct device *dev,
struct bin_attribute *attrs)
static int device_add_groups(struct device *dev,
const struct attribute_group **groups)
static void device_remove_groups(struct device *dev,
const struct attribute_group **groups)
static int device_add_attrs(struct device *dev)
static void device_remove_attrs(struct device *dev)
static ssize_t show_dev(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute devt_attr =
__ATTR(dev, S_IRUGO, show_dev, NULL);
struct kset *devices_kset;
int device_create_file(struct device *dev,
const struct device_attribute *attr)
void device_remove_file(struct device *dev,
const struct device_attribute *attr)
int device_create_bin_file(struct device *dev,
const struct bin_attribute *attr)
EXPORT_SYMBOL_GPL(device_create_bin_file);
void device_remove_bin_file(struct device *dev,
const struct bin_attribute *attr)
EXPORT_SYMBOL_GPL(device_remove_bin_file);
int device_schedule_callback_owner(struct device *dev,
void (*func)(struct device *), struct module *owner)
EXPORT_SYMBOL_GPL(device_schedule_callback_owner);
static void klist_children_get(struct klist_node *n)
static void klist_children_put(struct klist_node *n)
void device_initialize(struct device *dev)
static struct kobject *virtual_device_parent(struct device *dev)
struct class_dir ;
#define to_class_dir(obj) container_of(obj, struct class_dir, kobj)
static void class_dir_release(struct kobject *kobj)
static const
struct kobj_ns_type_operations *class_dir_child_ns_type(struct kobject *kobj)
static struct kobj_type class_dir_ktype = ;
static struct kobject *
class_dir_create_and_add(struct class *class, struct kobject *parent_kobj)
static struct kobject *get_device_parent(struct device *dev,
struct device *parent)
static void cleanup_glue_dir(struct device *dev, struct kobject *glue_dir)
static void cleanup_device_parent(struct device *dev)
static void setup_parent(struct device *dev, struct device *parent)
static int device_add_class_symlinks(struct device *dev)
static void device_remove_class_symlinks(struct device *dev)
int dev_set_name(struct device *dev, const char *fmt, ...)
EXPORT_SYMBOL_GPL(dev_set_name);
static struct kobject *device_to_dev_kobj(struct device *dev)
static int device_create_sys_dev_entry(struct device *dev)
static void device_remove_sys_dev_entry(struct device *dev)
int device_private_init(struct device *dev)
int device_add(struct device *dev)
int device_register(struct device *dev)
struct device *get_device(struct device *dev)
void put_device(struct device *dev)
void device_del(struct device *dev)
void device_unregister(struct device *dev)
static struct device *next_device(struct klist_iter *i)
const char *device_get_devnode(struct device *dev,
mode_t *mode, const char **tmp)
int device_for_each_child(struct device *parent, void *data,
int (*fn)(struct device *dev, void *data))
struct device *device_find_child(struct device *parent, void *data,
int (*match)(struct device *dev, void *data))
int __init devices_init(void)
EXPORT_SYMBOL_GPL(device_for_each_child);
EXPORT_SYMBOL_GPL(device_find_child);
EXPORT_SYMBOL_GPL(device_initialize);
EXPORT_SYMBOL_GPL(device_add);
EXPORT_SYMBOL_GPL(device_register);
EXPORT_SYMBOL_GPL(device_del);
EXPORT_SYMBOL_GPL(device_unregister);
EXPORT_SYMBOL_GPL(get_device);
EXPORT_SYMBOL_GPL(put_device);
EXPORT_SYMBOL_GPL(device_create_file);
EXPORT_SYMBOL_GPL(device_remove_file);
struct root_device ;
inline struct root_device *to_root_device(struct device *d)
static void root_device_release(struct device *dev)
struct device *__root_device_register(const char *name, struct module *owner)
EXPORT_SYMBOL_GPL(__root_device_register);
void root_device_unregister(struct device *dev)
EXPORT_SYMBOL_GPL(root_device_unregister);
static void device_create_release(struct device *dev)
struct device *device_create_vargs(struct class *class, struct device *parent,
dev_t devt, void *drvdata, const char *fmt,
va_list args)
EXPORT_SYMBOL_GPL(device_create_vargs);
struct device *device_create(struct class *class, struct device *parent,
dev_t devt, void *drvdata, const char *fmt, ...)
EXPORT_SYMBOL_GPL(device_create);
static int __match_devt(struct device *dev, void *data)
void device_destroy(struct class *class, dev_t devt)
EXPORT_SYMBOL_GPL(device_destroy);
int device_rename(struct device *dev, const char *new_name)
EXPORT_SYMBOL_GPL(device_rename);
static int device_move_class_links(struct device *dev,
struct device *old_parent,
struct device *new_parent)
int device_move(struct device *dev, struct device *new_parent,
enum dpm_order dpm_order)
EXPORT_SYMBOL_GPL(device_move);
void device_shutdown(void)
static int __dev_printk(const char *level, const struct device *dev,
struct va_format *vaf)
int dev_printk(const char *level, const struct device *dev,
const char *fmt, ...)
EXPORT_SYMBOL(dev_printk);
#define define_dev_printk_level(func, kern_level)		\
int func(const struct device *dev, const char *fmt, ...)	\
\
EXPORT_SYMBOL(func);
define_dev_printk_level(dev_emerg, KERN_EMERG);
define_dev_printk_level(dev_alert, KERN_ALERT);
define_dev_printk_level(dev_crit, KERN_CRIT);
define_dev_printk_level(dev_err, KERN_ERR);
define_dev_printk_level(dev_warn, KERN_WARNING);
define_dev_printk_level(dev_notice, KERN_NOTICE);
define_dev_printk_level(_dev_info, KERN_INFO);
