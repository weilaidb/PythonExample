static int umc_bus_pre_reset_helper(struct device *dev, void *data)
static int umc_bus_post_reset_helper(struct device *dev, void *data)
int umc_controller_reset(struct umc_dev *umc)
EXPORT_SYMBOL_GPL(umc_controller_reset);
int umc_match_pci_id(struct umc_driver *umc_drv, struct umc_dev *umc)
EXPORT_SYMBOL_GPL(umc_match_pci_id);
static int umc_bus_rescan_helper(struct device *dev, void *data)
static void umc_bus_rescan(struct device *parent)
static int umc_bus_match(struct device *dev, struct device_driver *drv)
static int umc_device_probe(struct device *dev)
static int umc_device_remove(struct device *dev)
static int umc_device_suspend(struct device *dev, pm_message_t state)
static int umc_device_resume(struct device *dev)
static ssize_t capability_id_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t version_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute umc_dev_attrs[] = ;
struct bus_type umc_bus_type = ;
EXPORT_SYMBOL_GPL(umc_bus_type);
static int __init umc_bus_init(void)
module_init(umc_bus_init);
static void __exit umc_bus_exit(void)
module_exit(umc_bus_exit);
MODULE_DESCRIPTION("UWB Multi-interface Controller capability bus");
MODULE_AUTHOR("Cambridge Silicon Radio Ltd.");
MODULE_LICENSE("GPL");
