#define DPRINTK(fmt, args...)				\
pr_debug("xenbus_probe (%s:%d) " fmt ".\n",	\
__func__, __LINE__, ##args)
static int backend_bus_id(char bus_id[XEN_BUS_ID_SIZE], const char *nodename)
static int xenbus_uevent_backend(struct device *dev,
struct kobj_uevent_env *env)
static int xenbus_probe_backend_unit(struct xen_bus_type *bus,
const char *dir,
const char *type,
const char *name)
static int xenbus_probe_backend(struct xen_bus_type *bus, const char *type,
const char *domid)
static void frontend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static struct device_attribute xenbus_backend_dev_attrs[] = ;
static struct xen_bus_type xenbus_backend = ;
static void backend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static struct xenbus_watch be_watch = ;
static int read_frontend_details(struct xenbus_device *xendev)
int xenbus_dev_is_online(struct xenbus_device *dev)
EXPORT_SYMBOL_GPL(xenbus_dev_is_online);
int __xenbus_register_backend(struct xenbus_driver *drv,
struct module *owner, const char *mod_name)
EXPORT_SYMBOL_GPL(__xenbus_register_backend);
static int backend_probe_and_watch(struct notifier_block *notifier,
unsigned long event,
void *data)
static int __init xenbus_probe_backend_init(void)
subsys_initcall(xenbus_probe_backend_init);
