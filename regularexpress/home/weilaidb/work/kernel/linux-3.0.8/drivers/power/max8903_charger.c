struct max8903_data ;
static enum power_supply_property max8903_charger_props[] = ;
static int max8903_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static irqreturn_t max8903_dcin(int irq, void *_data)
static irqreturn_t max8903_usbin(int irq, void *_data)
static irqreturn_t max8903_fault(int irq, void *_data)
static __devinit int max8903_probe(struct platform_device *pdev)
static __devexit int max8903_remove(struct platform_device *pdev)
static struct platform_driver max8903_driver = ;
static int __init max8903_init(void)
module_init(max8903_init);
static void __exit max8903_exit(void)
module_exit(max8903_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MAX8903 Charger Driver");
MODULE_AUTHOR("MyungJoo Ham <myungjoo.ham@samsung.com>");
MODULE_ALIAS("max8903-charger");
