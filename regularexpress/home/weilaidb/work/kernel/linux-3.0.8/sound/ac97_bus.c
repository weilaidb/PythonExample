static int ac97_bus_match(struct device *dev, struct device_driver *drv)
static int ac97_bus_suspend(struct device *dev, pm_message_t state)
static int ac97_bus_resume(struct device *dev)
struct bus_type ac97_bus_type = ;
static int __init ac97_bus_init(void)
subsys_initcall(ac97_bus_init);
static void __exit ac97_bus_exit(void)
module_exit(ac97_bus_exit);
EXPORT_SYMBOL(ac97_bus_type);
MODULE_LICENSE("GPL");
