struct gpio_charger ;
static irqreturn_t gpio_charger_irq(int irq, void *devid)
static inline struct gpio_charger *psy_to_gpio_charger(struct power_supply *psy)
static int gpio_charger_get_property(struct power_supply *psy,
enum power_supply_property psp, union power_supply_propval *val)
static enum power_supply_property gpio_charger_properties[] = ;
static int __devinit gpio_charger_probe(struct platform_device *pdev)
static int __devexit gpio_charger_remove(struct platform_device *pdev)
static int gpio_charger_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(gpio_charger_pm_ops, NULL, gpio_charger_resume);
static struct platform_driver gpio_charger_driver = ;
static int __init gpio_charger_init(void)
module_init(gpio_charger_init);
static void __exit gpio_charger_exit(void)
module_exit(gpio_charger_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("Driver for chargers which report their online status through a GPIO");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:gpio-charger");
