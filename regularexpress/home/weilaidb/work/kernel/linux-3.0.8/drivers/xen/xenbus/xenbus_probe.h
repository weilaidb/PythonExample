#define _XENBUS_PROBE_H
#define XEN_BUS_ID_SIZE			20
struct xen_bus_type
;
extern int xenbus_match(struct device *_dev, struct device_driver *_drv);
extern int xenbus_dev_probe(struct device *_dev);
extern int xenbus_dev_remove(struct device *_dev);
extern int xenbus_register_driver_common(struct xenbus_driver *drv,
struct xen_bus_type *bus,
struct module *owner,
const char *mod_name);
extern int xenbus_probe_node(struct xen_bus_type *bus,
const char *type,
const char *nodename);
extern int xenbus_probe_devices(struct xen_bus_type *bus);
extern void xenbus_dev_changed(const char *node, struct xen_bus_type *bus);
extern void xenbus_dev_shutdown(struct device *_dev);
extern int xenbus_dev_suspend(struct device *dev);
extern int xenbus_dev_resume(struct device *dev);
extern int xenbus_dev_cancel(struct device *dev);
extern void xenbus_otherend_changed(struct xenbus_watch *watch,
const char **vec, unsigned int len,
int ignore_on_shutdown);
extern int xenbus_read_otherend_details(struct xenbus_device *xendev,
char *id_node, char *path_node);
