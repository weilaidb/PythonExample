#define SD1_DVM_VMIN		850000
#define SD1_DVM_VMAX		1000000
#define SD1_DVM_STEP		50000
#define SD1_DVM_SHIFT		5
#define SD1_DVM_EN		6
#define OUT_ENABLE   		0x1f
#define OUT_DISABLE		0x1e
struct max8925_regulator_info ;
static inline int check_range(struct max8925_regulator_info *info,
int min_uV, int max_uV)
static int max8925_list_voltage(struct regulator_dev *rdev, unsigned index)
static int max8925_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned int *selector)
static int max8925_get_voltage(struct regulator_dev *rdev)
static int max8925_enable(struct regulator_dev *rdev)
static int max8925_disable(struct regulator_dev *rdev)
static int max8925_is_enabled(struct regulator_dev *rdev)
static int max8925_set_dvm_voltage(struct regulator_dev *rdev, int uV)
static int max8925_set_dvm_enable(struct regulator_dev *rdev)
static int max8925_set_dvm_disable(struct regulator_dev *rdev)
static struct regulator_ops max8925_regulator_sdv_ops = ;
static struct regulator_ops max8925_regulator_ldo_ops = ;
#define MAX8925_SDV(_id, min, max, step)			\
#define MAX8925_LDO(_id, min, max, step)			\
static struct max8925_regulator_info max8925_regulator_info[] = ;
static struct max8925_regulator_info * __devinit find_regulator_info(int id)
static int __devinit max8925_regulator_probe(struct platform_device *pdev)
static int __devexit max8925_regulator_remove(struct platform_device *pdev)
static struct platform_driver max8925_regulator_driver = ;
static int __init max8925_regulator_init(void)
subsys_initcall(max8925_regulator_init);
static void __exit max8925_regulator_exit(void)
module_exit(max8925_regulator_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_DESCRIPTION("Regulator Driver for Maxim 8925 PMIC");
MODULE_ALIAS("platform:max8925-regulator");
