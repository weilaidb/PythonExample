static void umc_device_release(struct device *dev)
struct umc_dev *umc_device_create(struct device *parent, int n)
EXPORT_SYMBOL_GPL(umc_device_create);
int umc_device_register(struct umc_dev *umc)
EXPORT_SYMBOL_GPL(umc_device_register);
void umc_device_unregister(struct umc_dev *umc)
EXPORT_SYMBOL_GPL(umc_device_unregister);
