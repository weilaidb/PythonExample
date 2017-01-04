#define DPRINTK(fmt, args...)				\
pr_debug("xenbus_probe (%s:%d) " fmt ".\n",	\
__func__, __LINE__, ##args)
static int frontend_bus_id(char bus_id[XEN_BUS_ID_SIZE], const char *nodename)
static int xenbus_probe_frontend(struct xen_bus_type *bus, const char *type,
const char *name)
static int xenbus_uevent_frontend(struct device *_dev,
struct kobj_uevent_env *env)
static void backend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static struct device_attribute xenbus_frontend_dev_attrs[] = ;
static const struct dev_pm_ops xenbus_pm_ops = ;
static struct xen_bus_type xenbus_frontend = ;
static void frontend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static struct xenbus_watch fe_watch = ;
static int read_backend_details(struct xenbus_device *xendev)
static int is_device_connecting(struct device *dev, void *data)
static int exists_connecting_device(struct device_driver *drv)
static int print_device_status(struct device *dev, void *data)
static int ready_to_wait_for_devices;
static void wait_for_devices(struct xenbus_driver *xendrv)
int __xenbus_register_frontend(struct xenbus_driver *drv,
struct module *owner, const char *mod_name)
EXPORT_SYMBOL_GPL(__xenbus_register_frontend);
static int frontend_probe_and_watch(struct notifier_block *notifier,
unsigned long event,
void *data)
static int __init xenbus_probe_frontend_init(void)
subsys_initcall(xenbus_probe_frontend_init);
static int __init boot_wait_for_devices(void)
late_initcall(boot_wait_for_devices);
MODULE_LICENSE("GPL");
