struct jz_battery ;
static inline struct jz_battery *psy_to_jz_battery(struct power_supply *psy)
static irqreturn_t jz_battery_irq_handler(int irq, void *devid)
static long jz_battery_read_voltage(struct jz_battery *battery)
static int jz_battery_get_capacity(struct power_supply *psy)
static int jz_battery_get_property(struct power_supply *psy,
enum power_supply_property psp, union power_supply_propval *val)
static void jz_battery_external_power_changed(struct power_supply *psy)
static irqreturn_t jz_battery_charge_irq(int irq, void *data)
static void jz_battery_update(struct jz_battery *jz_battery)
static enum power_supply_property jz_battery_properties[] = ;
static void jz_battery_work(struct work_struct *work)
static int __devinit jz_battery_probe(struct platform_device *pdev)
static int __devexit jz_battery_remove(struct platform_device *pdev)
static int jz_battery_suspend(struct device *dev)
static int jz_battery_resume(struct device *dev)
static const struct dev_pm_ops jz_battery_pm_ops = ;
#define JZ_BATTERY_PM_OPS (&jz_battery_pm_ops)
#define JZ_BATTERY_PM_OPS NULL
static struct platform_driver jz_battery_driver = ;
static int __init jz_battery_init(void)
module_init(jz_battery_init);
static void __exit jz_battery_exit(void)
module_exit(jz_battery_exit);
MODULE_ALIAS("platform:jz4740-battery");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("JZ4740 SoC battery driver");
