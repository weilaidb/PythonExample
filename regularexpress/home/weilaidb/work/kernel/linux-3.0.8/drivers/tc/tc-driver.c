int tc_register_driver(struct tc_driver *tdrv)
EXPORT_SYMBOL(tc_register_driver);
void tc_unregister_driver(struct tc_driver *tdrv)
EXPORT_SYMBOL(tc_unregister_driver);
const struct tc_device_id *tc_match_device(struct tc_driver *tdrv,
struct tc_dev *tdev)
EXPORT_SYMBOL(tc_match_device);
static int tc_bus_match(struct device *dev, struct device_driver *drv)
struct bus_type tc_bus_type = ;
EXPORT_SYMBOL(tc_bus_type);
static int __init tc_driver_init(void)
postcore_initcall(tc_driver_init);
