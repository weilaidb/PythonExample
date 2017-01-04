static int wm8400_ldo_is_enabled(struct regulator_dev *dev)
static int wm8400_ldo_enable(struct regulator_dev *dev)
static int wm8400_ldo_disable(struct regulator_dev *dev)
static int wm8400_ldo_list_voltage(struct regulator_dev *dev,
unsigned selector)
static int wm8400_ldo_get_voltage_sel(struct regulator_dev *dev)
static int wm8400_ldo_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV, unsigned *selector)
static struct regulator_ops wm8400_ldo_ops = ;
static int wm8400_dcdc_is_enabled(struct regulator_dev *dev)
static int wm8400_dcdc_enable(struct regulator_dev *dev)
static int wm8400_dcdc_disable(struct regulator_dev *dev)
static int wm8400_dcdc_list_voltage(struct regulator_dev *dev,
unsigned selector)
static int wm8400_dcdc_get_voltage_sel(struct regulator_dev *dev)
static int wm8400_dcdc_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV, unsigned *selector)
static unsigned int wm8400_dcdc_get_mode(struct regulator_dev *dev)
static int wm8400_dcdc_set_mode(struct regulator_dev *dev, unsigned int mode)
static unsigned int wm8400_dcdc_get_optimum_mode(struct regulator_dev *dev,
int input_uV, int output_uV,
int load_uA)
static struct regulator_ops wm8400_dcdc_ops = ;
static struct regulator_desc regulators[] = ;
static int __devinit wm8400_regulator_probe(struct platform_device *pdev)
static int __devexit wm8400_regulator_remove(struct platform_device *pdev)
static struct platform_driver wm8400_regulator_driver = ;
int wm8400_register_regulator(struct device *dev, int reg,
struct regulator_init_data *initdata)
EXPORT_SYMBOL_GPL(wm8400_register_regulator);
static int __init wm8400_regulator_init(void)
subsys_initcall(wm8400_regulator_init);
static void __exit wm8400_regulator_exit(void)
module_exit(wm8400_regulator_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM8400 regulator driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8400-regulator");
