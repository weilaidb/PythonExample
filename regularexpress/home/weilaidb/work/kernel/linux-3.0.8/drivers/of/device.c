const struct of_device_id *of_match_device(const struct of_device_id *matches,
const struct device *dev)
EXPORT_SYMBOL(of_match_device);
struct platform_device *of_dev_get(struct platform_device *dev)
EXPORT_SYMBOL(of_dev_get);
void of_dev_put(struct platform_device *dev)
EXPORT_SYMBOL(of_dev_put);
int of_device_add(struct platform_device *ofdev)
int of_device_register(struct platform_device *pdev)
EXPORT_SYMBOL(of_device_register);
void of_device_unregister(struct platform_device *ofdev)
EXPORT_SYMBOL(of_device_unregister);
ssize_t of_device_get_modalias(struct device *dev, char *str, ssize_t len)
int of_device_uevent(struct device *dev, struct kobj_uevent_env *env)
