#define DPRINTK(fmt, args...)				\
pr_debug("xenbus_probe (%s:%d) " fmt ".\n",	\
__func__, __LINE__, ##args)
int xen_store_evtchn;
EXPORT_SYMBOL_GPL(xen_store_evtchn);
struct xenstore_domain_interface *xen_store_interface;
EXPORT_SYMBOL_GPL(xen_store_interface);
static unsigned long xen_store_mfn;
static BLOCKING_NOTIFIER_HEAD(xenstore_chain);
static const struct xenbus_device_id *
match_device(const struct xenbus_device_id *arr, struct xenbus_device *dev)
int xenbus_match(struct device *_dev, struct device_driver *_drv)
EXPORT_SYMBOL_GPL(xenbus_match);
static void free_otherend_details(struct xenbus_device *dev)
static void free_otherend_watch(struct xenbus_device *dev)
static int talk_to_otherend(struct xenbus_device *dev)
static int watch_otherend(struct xenbus_device *dev)
int xenbus_read_otherend_details(struct xenbus_device *xendev,
char *id_node, char *path_node)
EXPORT_SYMBOL_GPL(xenbus_read_otherend_details);
void xenbus_otherend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len,
int ignore_on_shutdown)
EXPORT_SYMBOL_GPL(xenbus_otherend_changed);
int xenbus_dev_probe(struct device *_dev)
EXPORT_SYMBOL_GPL(xenbus_dev_probe);
int xenbus_dev_remove(struct device *_dev)
EXPORT_SYMBOL_GPL(xenbus_dev_remove);
void xenbus_dev_shutdown(struct device *_dev)
EXPORT_SYMBOL_GPL(xenbus_dev_shutdown);
int xenbus_register_driver_common(struct xenbus_driver *drv,
struct xen_bus_type *bus,
struct module *owner,
const char *mod_name)
EXPORT_SYMBOL_GPL(xenbus_register_driver_common);
void xenbus_unregister_driver(struct xenbus_driver *drv)
EXPORT_SYMBOL_GPL(xenbus_unregister_driver);
struct xb_find_info
;
static int cmp_dev(struct device *dev, void *data)
struct xenbus_device *xenbus_device_find(const char *nodename,
struct bus_type *bus)
static int cleanup_dev(struct device *dev, void *data)
static void xenbus_cleanup_devices(const char *path, struct bus_type *bus)
static void xenbus_dev_release(struct device *dev)
static ssize_t xendev_show_nodename(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(nodename, S_IRUSR | S_IRGRP | S_IROTH, xendev_show_nodename, NULL);
static ssize_t xendev_show_devtype(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(devtype, S_IRUSR | S_IRGRP | S_IROTH, xendev_show_devtype, NULL);
static ssize_t xendev_show_modalias(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(modalias, S_IRUSR | S_IRGRP | S_IROTH, xendev_show_modalias, NULL);
int xenbus_probe_node(struct xen_bus_type *bus,
const char *type,
const char *nodename)
EXPORT_SYMBOL_GPL(xenbus_probe_node);
static int xenbus_probe_device_type(struct xen_bus_type *bus, const char *type)
int xenbus_probe_devices(struct xen_bus_type *bus)
EXPORT_SYMBOL_GPL(xenbus_probe_devices);
static unsigned int char_count(const char *str, char c)
static int strsep_len(const char *str, char c, unsigned int len)
void xenbus_dev_changed(const char *node, struct xen_bus_type *bus)
EXPORT_SYMBOL_GPL(xenbus_dev_changed);
int xenbus_dev_suspend(struct device *dev)
EXPORT_SYMBOL_GPL(xenbus_dev_suspend);
int xenbus_dev_resume(struct device *dev)
EXPORT_SYMBOL_GPL(xenbus_dev_resume);
int xenbus_dev_cancel(struct device *dev)
EXPORT_SYMBOL_GPL(xenbus_dev_cancel);
int xenstored_ready = 0;
int register_xenstore_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_xenstore_notifier);
void unregister_xenstore_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_xenstore_notifier);
void xenbus_probe(struct work_struct *unused)
EXPORT_SYMBOL_GPL(xenbus_probe);
static int __init xenbus_probe_initcall(void)
device_initcall(xenbus_probe_initcall);
static int __init xenbus_init(void)
postcore_initcall(xenbus_init);
MODULE_LICENSE("GPL");
