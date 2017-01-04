struct max8997_data ;
static inline void max8997_set_gpio(struct max8997_data *max8997)
struct voltage_map_desc ;
static const struct voltage_map_desc ldo_voltage_map_desc = ;
static const struct voltage_map_desc buck1245_voltage_map_desc = ;
static const struct voltage_map_desc buck37_voltage_map_desc = ;
static const struct voltage_map_desc charger_current_map_desc = ;
static const struct voltage_map_desc topoff_current_map_desc = ;
static const struct voltage_map_desc *reg_voltage_map[] = ;
static inline int max8997_get_rid(struct regulator_dev *rdev)
static int max8997_list_voltage_safeout(struct regulator_dev *rdev,
unsigned int selector)
static int max8997_list_voltage_charger_cv(struct regulator_dev *rdev,
unsigned int selector)
static int max8997_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int max8997_get_enable_register(struct regulator_dev *rdev,
int *reg, int *mask, int *pattern)
static int max8997_reg_is_enabled(struct regulator_dev *rdev)
static int max8997_reg_enable(struct regulator_dev *rdev)
static int max8997_reg_disable(struct regulator_dev *rdev)
static int max8997_get_voltage_register(struct regulator_dev *rdev,
int *_reg, int *_shift, int *_mask)
static int max8997_get_voltage(struct regulator_dev *rdev)
static inline int max8997_get_voltage_proper_val(
const struct voltage_map_desc *desc,
int min_vol, int max_vol)
static int max8997_set_voltage_charger_cv(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int max8997_set_voltage_ldobuck(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int max8997_assess_side_effect(struct regulator_dev *rdev,
u8 new_val, int *best)
static int max8997_set_voltage_buck(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static const int safeoutvolt[] = ;
static int max8997_set_voltage_safeout(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int max8997_reg_enable_suspend(struct regulator_dev *rdev)
static int max8997_reg_disable_suspend(struct regulator_dev *rdev)
static struct regulator_ops max8997_ldo_ops = ;
static struct regulator_ops max8997_buck_ops = ;
static struct regulator_ops max8997_fixedvolt_ops = ;
static struct regulator_ops max8997_safeout_ops = ;
static struct regulator_ops max8997_fixedstate_ops = ;
static int max8997_set_voltage_ldobuck_wrap(struct regulator_dev *rdev,
int min_uV, int max_uV)
static struct regulator_ops max8997_charger_ops = ;
static struct regulator_ops max8997_charger_fixedstate_ops = ;
#define regulator_desc_ldo(num)
#define regulator_desc_buck(num)
static struct regulator_desc regulators[] = ;
static __devinit int max8997_pmic_probe(struct platform_device *pdev)
static int __devexit max8997_pmic_remove(struct platform_device *pdev)
static const struct platform_device_id max8997_pmic_id[] = ;
MODULE_DEVICE_TABLE(platform, max8997_pmic_id);
static struct platform_driver max8997_pmic_driver = ;
static int __init max8997_pmic_init(void)
subsys_initcall(max8997_pmic_init);
static void __exit max8997_pmic_cleanup(void)
module_exit(max8997_pmic_cleanup);
MODULE_DESCRIPTION("MAXIM 8997/8966 Regulator Driver");
MODULE_AUTHOR("MyungJoo Ham <myungjoo.ham@samsung.com>");
MODULE_LICENSE("GPL");
