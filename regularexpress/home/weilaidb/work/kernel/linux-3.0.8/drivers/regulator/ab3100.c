#define AB3100_LDO_A		0x40
#define AB3100_LDO_C		0x41
#define AB3100_LDO_D		0x42
#define AB3100_LDO_E		0x43
#define AB3100_LDO_E_SLEEP	0x44
#define AB3100_LDO_F		0x45
#define AB3100_LDO_G		0x46
#define AB3100_LDO_H		0x47
#define AB3100_LDO_H_SLEEP_MODE	0
#define AB3100_LDO_H_SLEEP_EN	2
#define AB3100_LDO_ON		4
#define AB3100_LDO_H_VSEL_AC	5
#define AB3100_LDO_K		0x48
#define AB3100_LDO_EXT		0x49
#define AB3100_BUCK		0x4A
#define AB3100_BUCK_SLEEP	0x4B
#define AB3100_REG_ON_MASK	0x10
struct ab3100_regulator ;
static const u8 ab3100_reg_init_order[AB3100_NUM_REGULATORS+2] = ;
#define LDO_A_VOLTAGE 2750000
#define LDO_C_VOLTAGE 2650000
#define LDO_D_VOLTAGE 2650000
static const int ldo_e_buck_typ_voltages[] = ;
static const int ldo_f_typ_voltages[] = ;
static const int ldo_g_typ_voltages[] = ;
static const int ldo_h_typ_voltages[] = ;
static const int ldo_k_typ_voltages[] = ;
static struct ab3100_regulator
ab3100_regulators[AB3100_NUM_REGULATORS] = ;
static int ab3100_enable_regulator(struct regulator_dev *reg)
static int ab3100_disable_regulator(struct regulator_dev *reg)
static int ab3100_is_enabled_regulator(struct regulator_dev *reg)
static int ab3100_list_voltage_regulator(struct regulator_dev *reg,
unsigned selector)
static int ab3100_get_voltage_regulator(struct regulator_dev *reg)
static int ab3100_get_best_voltage_index(struct regulator_dev *reg,
int min_uV, int max_uV)
static int ab3100_set_voltage_regulator(struct regulator_dev *reg,
int min_uV, int max_uV,
unsigned *selector)
static int ab3100_set_suspend_voltage_regulator(struct regulator_dev *reg,
int uV)
static int ab3100_get_voltage_regulator_external(struct regulator_dev *reg)
static int ab3100_enable_time_regulator(struct regulator_dev *reg)
static struct regulator_ops regulator_ops_fixed = ;
static struct regulator_ops regulator_ops_variable = ;
static struct regulator_ops regulator_ops_variable_sleepable = ;
static struct regulator_ops regulator_ops_external = ;
static struct regulator_desc
ab3100_regulator_desc[AB3100_NUM_REGULATORS] = ;
static int __devinit ab3100_regulators_probe(struct platform_device *pdev)
static int __devexit ab3100_regulators_remove(struct platform_device *pdev)
static struct platform_driver ab3100_regulators_driver = ;
static __init int ab3100_regulators_init(void)
static __exit void ab3100_regulators_exit(void)
subsys_initcall(ab3100_regulators_init);
module_exit(ab3100_regulators_exit);
MODULE_AUTHOR("Mattias Wallin <mattias.wallin@stericsson.com>");
MODULE_DESCRIPTION("AB3100 Regulator driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ab3100-regulators");
