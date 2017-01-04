struct wm8994_ldo ;
#define WM8994_LDO1_MAX_SELECTOR 0x7
#define WM8994_LDO2_MAX_SELECTOR 0x3
static int wm8994_ldo_enable(struct regulator_dev *rdev)
static int wm8994_ldo_disable(struct regulator_dev *rdev)
static int wm8994_ldo_is_enabled(struct regulator_dev *rdev)
static int wm8994_ldo_enable_time(struct regulator_dev *rdev)
static int wm8994_ldo1_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int wm8994_ldo1_get_voltage_sel(struct regulator_dev *rdev)
static int wm8994_ldo1_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *s)
static struct regulator_ops wm8994_ldo1_ops = ;
static int wm8994_ldo2_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int wm8994_ldo2_get_voltage_sel(struct regulator_dev *rdev)
static int wm8994_ldo2_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *s)
static struct regulator_ops wm8994_ldo2_ops = ;
static struct regulator_desc wm8994_ldo_desc[] = ;
static __devinit int wm8994_ldo_probe(struct platform_device *pdev)
static __devexit int wm8994_ldo_remove(struct platform_device *pdev)
static struct platform_driver wm8994_ldo_driver = ;
static int __init wm8994_ldo_init(void)
subsys_initcall(wm8994_ldo_init);
static void __exit wm8994_ldo_exit(void)
module_exit(wm8994_ldo_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM8994 LDO driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8994-ldo");
