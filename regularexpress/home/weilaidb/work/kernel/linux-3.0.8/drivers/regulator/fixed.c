struct fixed_voltage_data ;
static int fixed_voltage_is_enabled(struct regulator_dev *dev)
static int fixed_voltage_enable(struct regulator_dev *dev)
static int fixed_voltage_disable(struct regulator_dev *dev)
static int fixed_voltage_enable_time(struct regulator_dev *dev)
static int fixed_voltage_get_voltage(struct regulator_dev *dev)
static int fixed_voltage_list_voltage(struct regulator_dev *dev,
unsigned selector)
static struct regulator_ops fixed_voltage_ops = ;
static int __devinit reg_fixed_voltage_probe(struct platform_device *pdev)
static int __devexit reg_fixed_voltage_remove(struct platform_device *pdev)
static struct platform_driver regulator_fixed_voltage_driver = ;
static int __init regulator_fixed_voltage_init(void)
subsys_initcall(regulator_fixed_voltage_init);
static void __exit regulator_fixed_voltage_exit(void)
module_exit(regulator_fixed_voltage_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("Fixed voltage regulator");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:reg-fixed-voltage");
