struct pm8607_regulator_info ;
static const unsigned int BUCK1_table[] = ;
static const unsigned int BUCK1_suspend_table[] = ;
static const unsigned int BUCK2_table[] = ;
static const unsigned int BUCK2_suspend_table[] = ;
static const unsigned int BUCK3_table[] = ;
static const unsigned int BUCK3_suspend_table[] = ;
static const unsigned int LDO1_table[] = ;
static const unsigned int LDO1_suspend_table[] = ;
static const unsigned int LDO2_table[] = ;
static const unsigned int LDO2_suspend_table[] = ;
static const unsigned int LDO3_table[] = ;
static const unsigned int LDO3_suspend_table[] = ;
static const unsigned int LDO4_table[] = ;
static const unsigned int LDO4_suspend_table[] = ;
static const unsigned int LDO5_table[] = ;
static const unsigned int LDO5_suspend_table[] = ;
static const unsigned int LDO6_table[] = ;
static const unsigned int LDO6_suspend_table[] = ;
static const unsigned int LDO7_table[] = ;
static const unsigned int LDO7_suspend_table[] = ;
static const unsigned int LDO8_table[] = ;
static const unsigned int LDO8_suspend_table[] = ;
static const unsigned int LDO9_table[] = ;
static const unsigned int LDO9_suspend_table[] = ;
static const unsigned int LDO10_table[] = ;
static const unsigned int LDO10_suspend_table[] = ;
static const unsigned int LDO12_table[] = ;
static const unsigned int LDO12_suspend_table[] = ;
static const unsigned int LDO13_table[] = ;
static const unsigned int LDO13_suspend_table[] = ;
static const unsigned int LDO14_table[] = ;
static const unsigned int LDO14_suspend_table[] = ;
static int pm8607_list_voltage(struct regulator_dev *rdev, unsigned index)
static int choose_voltage(struct regulator_dev *rdev, int min_uV, int max_uV)
static int pm8607_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int pm8607_get_voltage(struct regulator_dev *rdev)
static int pm8607_enable(struct regulator_dev *rdev)
static int pm8607_disable(struct regulator_dev *rdev)
static int pm8607_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops pm8607_regulator_ops = ;
#define PM8607_DVC(vreg, nbits, ureg, ubit, ereg, ebit)			\
#define PM8607_LDO(_id, vreg, shift, nbits, ereg, ebit)			\
static struct pm8607_regulator_info pm8607_regulator_info[] = ;
static int __devinit pm8607_regulator_probe(struct platform_device *pdev)
static int __devexit pm8607_regulator_remove(struct platform_device *pdev)
static struct platform_driver pm8607_regulator_driver = ;
static int __init pm8607_regulator_init(void)
subsys_initcall(pm8607_regulator_init);
static void __exit pm8607_regulator_exit(void)
module_exit(pm8607_regulator_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_DESCRIPTION("Regulator Driver for Marvell 88PM8607 PMIC");
MODULE_ALIAS("platform:88pm8607-regulator");
