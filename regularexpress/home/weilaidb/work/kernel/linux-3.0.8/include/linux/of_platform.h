#define _LINUX_OF_PLATFORM_H
struct of_platform_driver
;
#define	to_of_platform_driver(drv) \
container_of(drv,struct of_platform_driver, driver)
extern struct platform_device *of_device_alloc(struct device_node *np,
const char *bus_id,
struct device *parent);
extern struct platform_device *of_find_device_by_node(struct device_node *np);
#if !defined(CONFIG_SPARC)
extern struct platform_device *of_platform_device_create(struct device_node *np,
const char *bus_id,
struct device *parent);
extern int of_platform_bus_probe(struct device_node *root,
const struct of_device_id *matches,
struct device *parent);
