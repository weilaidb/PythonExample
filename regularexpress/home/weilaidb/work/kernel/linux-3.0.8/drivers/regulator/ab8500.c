struct ab8500_regulator_info ;
static const int ldo_vauxn_voltages[] = ;
static const int ldo_vaux3_voltages[] = ;
static const int ldo_vintcore_voltages[] = ;
static int ab8500_regulator_enable(struct regulator_dev *rdev)
static int ab8500_regulator_disable(struct regulator_dev *rdev)
static int ab8500_regulator_is_enabled(struct regulator_dev *rdev)
static int ab8500_list_voltage(struct regulator_dev *rdev, unsigned selector)
static int ab8500_regulator_get_voltage(struct regulator_dev *rdev)
static int ab8500_get_best_voltage_index(struct regulator_dev *rdev,
int min_uV, int max_uV)
static int ab8500_regulator_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int ab8500_regulator_enable_time(struct regulator_dev *rdev)
static int ab8500_regulator_set_voltage_time_sel(struct regulator_dev *rdev,
unsigned int old_sel,
unsigned int new_sel)
static struct regulator_ops ab8500_regulator_ops = ;
static int ab8500_fixed_get_voltage(struct regulator_dev *rdev)
static struct regulator_ops ab8500_regulator_fixed_ops = ;
static struct ab8500_regulator_info
ab8500_regulator_info[AB8500_NUM_REGULATORS] = ;
struct ab8500_reg_init ;
#define REG_INIT(_id, _bank, _addr, _mask)	\
[_id] =
static struct ab8500_reg_init ab8500_reg_init[] = ;
static __devinit int ab8500_regulator_probe(struct platform_device *pdev)
static __devexit int ab8500_regulator_remove(struct platform_device *pdev)
static struct platform_driver ab8500_regulator_driver = ;
static int __init ab8500_regulator_init(void)
subsys_initcall(ab8500_regulator_init);
static void __exit ab8500_regulator_exit(void)
module_exit(ab8500_regulator_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sundar Iyer <sundar.iyer@stericsson.com>");
MODULE_DESCRIPTION("Regulator Driver for ST-Ericsson AB8500 Mixed-Sig PMIC");
MODULE_ALIAS("platform:ab8500-regulator");
