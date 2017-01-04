struct subsys_private ;
#define to_subsys_private(obj) container_of(obj, struct subsys_private, subsys.kobj)
struct driver_private ;
#define to_driver(obj) container_of(obj, struct driver_private, kobj)
struct device_private ;
#define to_device_private_parent(obj)	\
container_of(obj, struct device_private, knode_parent)
#define to_device_private_driver(obj)	\
container_of(obj, struct device_private, knode_driver)
#define to_device_private_bus(obj)	\
container_of(obj, struct device_private, knode_bus)
extern int device_private_init(struct device *dev);
extern int devices_init(void);
extern int buses_init(void);
extern int classes_init(void);
extern int firmware_init(void);
extern int hypervisor_init(void);
static inline int hypervisor_init(void)
extern int platform_bus_init(void);
extern int system_bus_init(void);
extern int cpu_dev_init(void);
extern int bus_add_device(struct device *dev);
extern void bus_probe_device(struct device *dev);
extern void bus_remove_device(struct device *dev);
extern int bus_add_driver(struct device_driver *drv);
extern void bus_remove_driver(struct device_driver *drv);
extern void driver_detach(struct device_driver *drv);
extern int driver_probe_device(struct device_driver *drv, struct device *dev);
static inline int driver_match_device(struct device_driver *drv,
struct device *dev)
extern char *make_class_name(const char *name, struct kobject *kobj);
extern int devres_release_all(struct device *dev);
extern struct kset *devices_kset;
#if defined(CONFIG_MODULES) && defined(CONFIG_SYSFS)
extern void module_add_driver(struct module *mod, struct device_driver *drv);
extern void module_remove_driver(struct device_driver *drv);
static inline void module_add_driver(struct module *mod,
struct device_driver *drv)
static inline void module_remove_driver(struct device_driver *drv)
extern int devtmpfs_init(void);
static inline int devtmpfs_init(void)
