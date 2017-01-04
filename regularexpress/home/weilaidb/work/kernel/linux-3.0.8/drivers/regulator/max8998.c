struct max8998_data ;
struct voltage_map_desc ;
static const struct voltage_map_desc ldo23_voltage_map_desc = ;
static const struct voltage_map_desc ldo456711_voltage_map_desc = ;
static const struct voltage_map_desc ldo8_voltage_map_desc = ;
static const struct voltage_map_desc ldo9_voltage_map_desc = ;
static const struct voltage_map_desc ldo10_voltage_map_desc = ;
static const struct voltage_map_desc ldo1213_voltage_map_desc = ;
static const struct voltage_map_desc ldo1415_voltage_map_desc = ;
static const struct voltage_map_desc ldo1617_voltage_map_desc = ;
static const struct voltage_map_desc buck12_voltage_map_desc = ;
static const struct voltage_map_desc buck3_voltage_map_desc = ;
static const struct voltage_map_desc buck4_voltage_map_desc = ;
static const struct voltage_map_desc *ldo_voltage_map[] = ;
static inline int max8998_get_ldo(struct regulator_dev *rdev)
static int max8998_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int max8998_get_enable_register(struct regulator_dev *rdev,
int *reg, int *shift)
static int max8998_ldo_is_enabled(struct regulator_dev *rdev)
static int max8998_ldo_enable(struct regulator_dev *rdev)
static int max8998_ldo_disable(struct regulator_dev *rdev)
static int max8998_get_voltage_register(struct regulator_dev *rdev,
int *_reg, int *_shift, int *_mask)
static int max8998_get_voltage(struct regulator_dev *rdev)
static int max8998_set_voltage_ldo(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static inline void buck1_gpio_set(int gpio1, int gpio2, int v)
static inline void buck2_gpio_set(int gpio, int v)
static int max8998_set_voltage_buck(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static struct regulator_ops max8998_ldo_ops = ;
static struct regulator_ops max8998_buck_ops = ;
static struct regulator_ops max8998_others_ops = ;
static struct regulator_desc regulators[] = ;
static __devinit int max8998_pmic_probe(struct platform_device *pdev)
static int __devexit max8998_pmic_remove(struct platform_device *pdev)
static const struct platform_device_id max8998_pmic_id[] = ;
MODULE_DEVICE_TABLE(platform, max8998_pmic_id);
static struct platform_driver max8998_pmic_driver = ;
static int __init max8998_pmic_init(void)
subsys_initcall(max8998_pmic_init);
static void __exit max8998_pmic_cleanup(void)
module_exit(max8998_pmic_cleanup);
MODULE_DESCRIPTION("MAXIM 8998 voltage regulator driver");
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_LICENSE("GPL");
