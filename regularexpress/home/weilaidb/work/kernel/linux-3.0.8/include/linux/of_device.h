#define _LINUX_OF_DEVICE_H
extern const struct of_device_id *of_match_device(
const struct of_device_id *matches, const struct device *dev);
extern void of_device_make_bus_id(struct device *dev);
static inline int of_driver_match_device(struct device *dev,
const struct device_driver *drv)
extern struct platform_device *of_dev_get(struct platform_device *dev);
extern void of_dev_put(struct platform_device *dev);
extern int of_device_add(struct platform_device *pdev);
extern int of_device_register(struct platform_device *ofdev);
extern void of_device_unregister(struct platform_device *ofdev);
extern ssize_t of_device_get_modalias(struct device *dev,
char *str, ssize_t len);
extern int of_device_uevent(struct device *dev, struct kobj_uevent_env *env);
static inline void of_device_node_put(struct device *dev)
static inline int of_driver_match_device(struct device *dev,
struct device_driver *drv)
static inline int of_device_uevent(struct device *dev,
struct kobj_uevent_env *env)
static inline void of_device_node_put(struct device *dev)
static inline const struct of_device_id *of_match_device(
const struct of_device_id *matches, const struct device *dev)
