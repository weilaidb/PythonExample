#define TPS6507X_DCDC_1				0
#define TPS6507X_DCDC_2				1
#define TPS6507X_DCDC_3				2
#define TPS6507X_LDO_1				3
#define TPS6507X_LDO_2				4
#define TPS6507X_MAX_REG_ID			TPS6507X_LDO_2
#define TPS6507X_NUM_DCDC			3
#define TPS6507X_NUM_LDO			2
#define TPS6507X_NUM_REGULATOR		(TPS6507X_NUM_DCDC + TPS6507X_NUM_LDO)
static const u16 VDCDCx_VSEL_table[] = ;
static const u16 LDO1_VSEL_table[] = ;
static const u16 LDO2_VSEL_table[] = ;
static unsigned int num_voltages[] = ;
struct tps_info ;
static struct tps_info tps6507x_pmic_regs[] = ;
struct tps6507x_pmic ;
static inline int tps6507x_pmic_read(struct tps6507x_pmic *tps, u8 reg)
static inline int tps6507x_pmic_write(struct tps6507x_pmic *tps, u8 reg, u8 val)
static int tps6507x_pmic_set_bits(struct tps6507x_pmic *tps, u8 reg, u8 mask)
static int tps6507x_pmic_clear_bits(struct tps6507x_pmic *tps, u8 reg, u8 mask)
static int tps6507x_pmic_reg_read(struct tps6507x_pmic *tps, u8 reg)
static int tps6507x_pmic_reg_write(struct tps6507x_pmic *tps, u8 reg, u8 val)
static int tps6507x_pmic_dcdc_is_enabled(struct regulator_dev *dev)
static int tps6507x_pmic_ldo_is_enabled(struct regulator_dev *dev)
static int tps6507x_pmic_dcdc_enable(struct regulator_dev *dev)
static int tps6507x_pmic_dcdc_disable(struct regulator_dev *dev)
static int tps6507x_pmic_ldo_enable(struct regulator_dev *dev)
static int tps6507x_pmic_ldo_disable(struct regulator_dev *dev)
static int tps6507x_pmic_dcdc_get_voltage(struct regulator_dev *dev)
static int tps6507x_pmic_dcdc_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned *selector)
static int tps6507x_pmic_ldo_get_voltage(struct regulator_dev *dev)
static int tps6507x_pmic_ldo_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned *selector)
static int tps6507x_pmic_dcdc_list_voltage(struct regulator_dev *dev,
unsigned selector)
static int tps6507x_pmic_ldo_list_voltage(struct regulator_dev *dev,
unsigned selector)
static struct regulator_ops tps6507x_pmic_dcdc_ops = ;
static struct regulator_ops tps6507x_pmic_ldo_ops = ;
static __devinit
int tps6507x_pmic_probe(struct platform_device *pdev)
static int __devexit tps6507x_pmic_remove(struct platform_device *pdev)
static struct platform_driver tps6507x_pmic_driver = ;
static int __init tps6507x_pmic_init(void)
subsys_initcall(tps6507x_pmic_init);
static void __exit tps6507x_pmic_cleanup(void)
module_exit(tps6507x_pmic_cleanup);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("TPS6507x voltage regulator driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tps6507x-pmic");
