static const int tps6105x_voltages[] = ;
static int tps6105x_regulator_enable(struct regulator_dev *rdev)
static int tps6105x_regulator_disable(struct regulator_dev *rdev)
static int tps6105x_regulator_is_enabled(struct regulator_dev *rdev)
static int tps6105x_regulator_get_voltage_sel(struct regulator_dev *rdev)
static int tps6105x_regulator_set_voltage_sel(struct regulator_dev *rdev,
unsigned selector)
static int tps6105x_regulator_list_voltage(struct regulator_dev *rdev,
unsigned selector)
static struct regulator_ops tps6105x_regulator_ops = ;
static struct regulator_desc tps6105x_regulator_desc = ;
static int __devinit tps6105x_regulator_probe(struct platform_device *pdev)
static int __devexit tps6105x_regulator_remove(struct platform_device *pdev)
static struct platform_driver tps6105x_regulator_driver = ;
static __init int tps6105x_regulator_init(void)
subsys_initcall(tps6105x_regulator_init);
static __exit void tps6105x_regulator_exit(void)
module_exit(tps6105x_regulator_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@linaro.org>");
MODULE_DESCRIPTION("TPS6105x regulator driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tps6105x-regulator");
