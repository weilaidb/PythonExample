MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Apple Soundbus");
struct soundbus_dev *soundbus_dev_get(struct soundbus_dev *dev)
EXPORT_SYMBOL_GPL(soundbus_dev_get);
void soundbus_dev_put(struct soundbus_dev *dev)
EXPORT_SYMBOL_GPL(soundbus_dev_put);
static int soundbus_probe(struct device *dev)
static int soundbus_uevent(struct device *dev, struct kobj_uevent_env *env)
static int soundbus_device_remove(struct device *dev)
static void soundbus_device_shutdown(struct device *dev)
static int soundbus_device_suspend(struct device *dev, pm_message_t state)
static int soundbus_device_resume(struct device * dev)
static struct bus_type soundbus_bus_type = ;
int soundbus_add_one(struct soundbus_dev *dev)
EXPORT_SYMBOL_GPL(soundbus_add_one);
void soundbus_remove_one(struct soundbus_dev *dev)
EXPORT_SYMBOL_GPL(soundbus_remove_one);
int soundbus_register_driver(struct soundbus_driver *drv)
EXPORT_SYMBOL_GPL(soundbus_register_driver);
void soundbus_unregister_driver(struct soundbus_driver *drv)
EXPORT_SYMBOL_GPL(soundbus_unregister_driver);
static int __init soundbus_init(void)
static void __exit soundbus_exit(void)
subsys_initcall(soundbus_init);
module_exit(soundbus_exit);
