#define _DEVICE_H_
struct device;
struct device_private;
struct device_driver;
struct driver_private;
struct class;
struct subsys_private;
struct bus_type;
struct device_node;
struct bus_attribute ;
#define BUS_ATTR(_name, _mode, _show, _store)	\
struct bus_attribute bus_attr_##_name = __ATTR(_name, _mode, _show, _store)
extern int __must_check bus_create_file(struct bus_type *,
struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);
struct bus_type ;
extern int __must_check bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);
extern int __must_check bus_rescan_devices(struct bus_type *bus);
int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
void *data,
int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
struct device *start,
const char *name);
int bus_for_each_drv(struct bus_type *bus, struct device_driver *start,
void *data, int (*fn)(struct device_driver *, void *));
void bus_sort_breadthfirst(struct bus_type *bus,
int (*compare)(const struct device *a,
const struct device *b));
struct notifier_block;
extern int bus_register_notifier(struct bus_type *bus,
struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
struct notifier_block *nb);
#define BUS_NOTIFY_ADD_DEVICE		0x00000001
#define BUS_NOTIFY_DEL_DEVICE		0x00000002
#define BUS_NOTIFY_BIND_DRIVER		0x00000003
#define BUS_NOTIFY_BOUND_DRIVER		0x00000004
#define BUS_NOTIFY_UNBIND_DRIVER	0x00000005
#define BUS_NOTIFY_UNBOUND_DRIVER	0x00000006
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);
struct device_driver ;
extern int __must_check driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);
extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
struct bus_type *bus);
extern int driver_probe_done(void);
extern void wait_for_device_probe(void);
struct driver_attribute ;
#define DRIVER_ATTR(_name, _mode, _show, _store)	\
struct driver_attribute driver_attr_##_name =		\
__ATTR(_name, _mode, _show, _store)
extern int __must_check driver_create_file(struct device_driver *driver,
const struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
const struct driver_attribute *attr);
extern int __must_check driver_add_kobj(struct device_driver *drv,
struct kobject *kobj,
const char *fmt, ...);
extern int __must_check driver_for_each_device(struct device_driver *drv,
struct device *start,
void *data,
int (*fn)(struct device *dev,
void *));
struct device *driver_find_device(struct device_driver *drv,
struct device *start, void *data,
int (*match)(struct device *dev, void *data));
struct class ;
struct class_dev_iter ;
extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __must_check __class_register(struct class *class,
struct lock_class_key *key);
extern void class_unregister(struct class *class);
#define class_register(class)			\
()
struct class_compat;
struct class_compat *class_compat_register(const char *name);
void class_compat_unregister(struct class_compat *cls);
int class_compat_create_link(struct class_compat *cls, struct device *dev,
struct device *device_link);
void class_compat_remove_link(struct class_compat *cls, struct device *dev,
struct device *device_link);
extern void class_dev_iter_init(struct class_dev_iter *iter,
struct class *class,
struct device *start,
const struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);
extern int class_for_each_device(struct class *class, struct device *start,
void *data,
int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class,
struct device *start, void *data,
int (*match)(struct device *, void *));
struct class_attribute ;
#define CLASS_ATTR(_name, _mode, _show, _store)			\
struct class_attribute class_attr_##_name = __ATTR(_name, _mode, _show, _store)
extern int __must_check class_create_file(struct class *class,
const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
const struct class_attribute *attr);
struct class_attribute_string ;
#define _CLASS_ATTR_STRING(_name, _mode, _str) \
#define CLASS_ATTR_STRING(_name, _mode, _str) \
struct class_attribute_string class_attr_##_name = \
_CLASS_ATTR_STRING(_name, _mode, _str)
extern ssize_t show_class_attr_string(struct class *class, struct class_attribute *attr,
char *buf);
struct class_interface ;
extern int __must_check class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);
extern struct class * __must_check __class_create(struct module *owner,
const char *name,
struct lock_class_key *key);
extern void class_destroy(struct class *cls);
#define class_create(owner, name)		\
()
struct device_type ;
struct device_attribute ;
#define DEVICE_ATTR(_name, _mode, _show, _store) \
struct device_attribute dev_attr_##_name = __ATTR(_name, _mode, _show, _store)
extern int __must_check device_create_file(struct device *device,
const struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
const struct device_attribute *attr);
extern int __must_check device_create_bin_file(struct device *dev,
const struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
const struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
void (*func)(struct device *dev), struct module *owner);
#define device_schedule_callback(dev, func)			\
device_schedule_callback_owner(dev, func, THIS_MODULE)
typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);
extern void *__devres_alloc(dr_release_t release, size_t size, gfp_t gfp,
const char *name);
#define devres_alloc(release, size, gfp) \
__devres_alloc(release, size, gfp, #release)
extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);
extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data);
extern void * __must_check devres_open_group(struct device *dev, void *id,
gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);
extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);
struct device_dma_parameters ;
struct device ;
static inline const char *dev_name(const struct device *dev)
extern int dev_set_name(struct device *dev, const char *name, ...)
__attribute__((format(printf, 2, 3)));
static inline int dev_to_node(struct device *dev)
static inline void set_dev_node(struct device *dev, int node)
static inline int dev_to_node(struct device *dev)
static inline void set_dev_node(struct device *dev, int node)
static inline unsigned int dev_get_uevent_suppress(const struct device *dev)
static inline void dev_set_uevent_suppress(struct device *dev, int val)
static inline int device_is_registered(struct device *dev)
static inline void device_enable_async_suspend(struct device *dev)
static inline void device_disable_async_suspend(struct device *dev)
static inline bool device_async_suspend_enabled(struct device *dev)
static inline void device_lock(struct device *dev)
static inline int device_trylock(struct device *dev)
static inline void device_unlock(struct device *dev)
void driver_init(void);
extern int __must_check device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int __must_check device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, const char *new_name);
extern int device_move(struct device *dev, struct device *new_parent,
enum dpm_order dpm_order);
extern const char *device_get_devnode(struct device *dev,
mode_t *mode, const char **tmp);
extern void *dev_get_drvdata(const struct device *dev);
extern int dev_set_drvdata(struct device *dev, void *data);
extern struct device *__root_device_register(const char *name,
struct module *owner);
static inline struct device *root_device_register(const char *name)
extern void root_device_unregister(struct device *root);
static inline void *dev_get_platdata(const struct device *dev)
extern int __must_check device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int  __must_check device_attach(struct device *dev);
extern int __must_check driver_attach(struct device_driver *drv);
extern int __must_check device_reprobe(struct device *dev);
extern struct device *device_create_vargs(struct class *cls,
struct device *parent,
dev_t devt,
void *drvdata,
const char *fmt,
va_list vargs);
extern struct device *device_create(struct class *cls, struct device *parent,
dev_t devt, void *drvdata,
const char *fmt, ...)
__attribute__((format(printf, 5, 6)));
extern void device_destroy(struct class *cls, dev_t devt);
extern int (*platform_notify)(struct device *dev);
extern int (*platform_notify_remove)(struct device *dev);
extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);
extern void wait_for_device_probe(void);
extern int devtmpfs_create_node(struct device *dev);
extern int devtmpfs_delete_node(struct device *dev);
extern int devtmpfs_mount(const char *mntdir);
static inline int devtmpfs_create_node(struct device *dev)
static inline int devtmpfs_delete_node(struct device *dev)
static inline int devtmpfs_mount(const char *mountpoint)
extern void device_shutdown(void);
extern const char *dev_driver_string(const struct device *dev);
extern int dev_printk(const char *level, const struct device *dev,
const char *fmt, ...)
__attribute__ ((format (printf, 3, 4)));
extern int dev_emerg(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int dev_alert(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int dev_crit(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int dev_err(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int dev_warn(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int dev_notice(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int _dev_info(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_printk(const char *level, const struct device *dev,
const char *fmt, ...)
__attribute__ ((format (printf, 3, 4)));
static inline int dev_printk(const char *level, const struct device *dev,
const char *fmt, ...)
static inline int dev_emerg(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_emerg(const struct device *dev, const char *fmt, ...)
static inline int dev_crit(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_crit(const struct device *dev, const char *fmt, ...)
static inline int dev_alert(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_alert(const struct device *dev, const char *fmt, ...)
static inline int dev_err(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_err(const struct device *dev, const char *fmt, ...)
static inline int dev_warn(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_warn(const struct device *dev, const char *fmt, ...)
static inline int dev_notice(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int dev_notice(const struct device *dev, const char *fmt, ...)
static inline int _dev_info(const struct device *dev, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
static inline int _dev_info(const struct device *dev, const char *fmt, ...)
#define dev_info(dev, fmt, arg...) _dev_info(dev, fmt, ##arg)
#if defined(DEBUG)
#define dev_dbg(dev, format, arg...)		\
dev_printk(KERN_DEBUG, dev, format, ##arg)
#elif defined(CONFIG_DYNAMIC_DEBUG)
#define dev_dbg(dev, format, ...)		     \
do  while (0)
#define dev_dbg(dev, format, arg...)				\
()
#define dev_vdbg	dev_dbg
#define dev_vdbg(dev, format, arg...)				\
()
#define dev_WARN(dev, format, arg...) \
WARN(1, "Device: %s\n" format, dev_driver_string(dev), ## arg);
#define dev_WARN_ONCE(dev, condition, format, arg...) \
WARN_ONCE(condition, "Device %s\n" format, \
dev_driver_string(dev), ## arg)
#define MODULE_ALIAS_CHARDEV(major,minor) \
MODULE_ALIAS("char-major-" __stringify(major) "-" __stringify(minor))
#define MODULE_ALIAS_CHARDEV_MAJOR(major) \
MODULE_ALIAS("char-major-" __stringify(major) "-*")
extern long sysfs_deprecated;
#define sysfs_deprecated 0
