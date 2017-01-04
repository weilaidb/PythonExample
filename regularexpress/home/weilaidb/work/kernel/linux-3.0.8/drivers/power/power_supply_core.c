struct class *power_supply_class;
EXPORT_SYMBOL_GPL(power_supply_class);
static struct device_type power_supply_dev_type;
static int __power_supply_changed_work(struct device *dev, void *data)
static void power_supply_changed_work(struct work_struct *work)
void power_supply_changed(struct power_supply *psy)
EXPORT_SYMBOL_GPL(power_supply_changed);
static int __power_supply_am_i_supplied(struct device *dev, void *data)
int power_supply_am_i_supplied(struct power_supply *psy)
EXPORT_SYMBOL_GPL(power_supply_am_i_supplied);
static int __power_supply_is_system_supplied(struct device *dev, void *data)
int power_supply_is_system_supplied(void)
EXPORT_SYMBOL_GPL(power_supply_is_system_supplied);
int power_supply_set_battery_charged(struct power_supply *psy)
EXPORT_SYMBOL_GPL(power_supply_set_battery_charged);
static int power_supply_match_device_by_name(struct device *dev, void *data)
struct power_supply *power_supply_get_by_name(char *name)
EXPORT_SYMBOL_GPL(power_supply_get_by_name);
static void power_supply_dev_release(struct device *dev)
int power_supply_register(struct device *parent, struct power_supply *psy)
EXPORT_SYMBOL_GPL(power_supply_register);
void power_supply_unregister(struct power_supply *psy)
EXPORT_SYMBOL_GPL(power_supply_unregister);
static int __init power_supply_class_init(void)
static void __exit power_supply_class_exit(void)
subsys_initcall(power_supply_class_init);
module_exit(power_supply_class_exit);
MODULE_DESCRIPTION("Universal power supply monitor class");
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>, "
"Szabolcs Gyurko, "
"Anton Vorontsov <cbou@mail.ru>");
MODULE_LICENSE("GPL");
