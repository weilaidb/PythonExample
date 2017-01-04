#define	TPS65023_REG_VERSION		0
#define	TPS65023_REG_PGOODZ		1
#define	TPS65023_REG_MASK		2
#define	TPS65023_REG_REG_CTRL		3
#define	TPS65023_REG_CON_CTRL		4
#define	TPS65023_REG_CON_CTRL2		5
#define	TPS65023_REG_DEF_CORE		6
#define	TPS65023_REG_DEFSLEW		7
#define	TPS65023_REG_LDO_CTRL		8
#define	TPS65023_PGOODZ_PWRFAILZ	BIT(7)
#define	TPS65023_PGOODZ_LOWBATTZ	BIT(6)
#define	TPS65023_PGOODZ_VDCDC1		BIT(5)
#define	TPS65023_PGOODZ_VDCDC2		BIT(4)
#define	TPS65023_PGOODZ_VDCDC3		BIT(3)
#define	TPS65023_PGOODZ_LDO2		BIT(2)
#define	TPS65023_PGOODZ_LDO1		BIT(1)
#define	TPS65023_MASK_PWRFAILZ		BIT(7)
#define	TPS65023_MASK_LOWBATTZ		BIT(6)
#define	TPS65023_MASK_VDCDC1		BIT(5)
#define	TPS65023_MASK_VDCDC2		BIT(4)
#define	TPS65023_MASK_VDCDC3		BIT(3)
#define	TPS65023_MASK_LDO2		BIT(2)
#define	TPS65023_MASK_LDO1		BIT(1)
#define TPS65023_REG_CTRL_VDCDC1_EN	BIT(5)
#define TPS65023_REG_CTRL_VDCDC2_EN	BIT(4)
#define TPS65023_REG_CTRL_VDCDC3_EN	BIT(3)
#define TPS65023_REG_CTRL_LDO2_EN	BIT(2)
#define TPS65023_REG_CTRL_LDO1_EN	BIT(1)
#define TPS65023_LDO_CTRL_LDOx_SHIFT(ldo_id)	((ldo_id)*4)
#define TPS65023_LDO_CTRL_LDOx_MASK(ldo_id)	(0xF0 >> ((ldo_id)*4))
#define TPS65023_NUM_DCDC		3
#define TPS65023_NUM_LDO		2
#define TPS65023_NUM_REGULATOR	(TPS65023_NUM_DCDC + TPS65023_NUM_LDO)
#define TPS65023_DCDC_1			0
#define TPS65023_DCDC_2			1
#define TPS65023_DCDC_3			2
#define TPS65023_LDO_1			3
#define TPS65023_LDO_2			4
#define TPS65023_MAX_REG_ID		TPS65023_LDO_2
static const u16 VDCDC1_VSEL_table[] = ;
static const u16 LDO1_VSEL_table[] = ;
static const u16 LDO2_VSEL_table[] = ;
static unsigned int num_voltages[] = ;
struct tps_info ;
struct tps_pmic ;
static inline int tps_65023_read(struct tps_pmic *tps, u8 reg)
static inline int tps_65023_write(struct tps_pmic *tps, u8 reg, u8 val)
static int tps_65023_set_bits(struct tps_pmic *tps, u8 reg, u8 mask)
static int tps_65023_clear_bits(struct tps_pmic *tps, u8 reg, u8 mask)
static int tps_65023_reg_read(struct tps_pmic *tps, u8 reg)
static int tps_65023_reg_write(struct tps_pmic *tps, u8 reg, u8 val)
static int tps65023_dcdc_is_enabled(struct regulator_dev *dev)
static int tps65023_ldo_is_enabled(struct regulator_dev *dev)
static int tps65023_dcdc_enable(struct regulator_dev *dev)
static int tps65023_dcdc_disable(struct regulator_dev *dev)
static int tps65023_ldo_enable(struct regulator_dev *dev)
static int tps65023_ldo_disable(struct regulator_dev *dev)
static int tps65023_dcdc_get_voltage(struct regulator_dev *dev)
static int tps65023_dcdc_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned *selector)
static int tps65023_ldo_get_voltage(struct regulator_dev *dev)
static int tps65023_ldo_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV, unsigned *selector)
static int tps65023_dcdc_list_voltage(struct regulator_dev *dev,
unsigned selector)
static int tps65023_ldo_list_voltage(struct regulator_dev *dev,
unsigned selector)
static struct regulator_ops tps65023_dcdc_ops = ;
static struct regulator_ops tps65023_ldo_ops = ;
static int __devinit tps_65023_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tps_65023_remove(struct i2c_client *client)
static const struct tps_info tps65023_regs[] = ;
static const struct i2c_device_id tps_65023_id[] = ;
MODULE_DEVICE_TABLE(i2c, tps_65023_id);
static struct i2c_driver tps_65023_i2c_driver = ;
static int __init tps_65023_init(void)
subsys_initcall(tps_65023_init);
static void __exit tps_65023_cleanup(void)
module_exit(tps_65023_cleanup);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("TPS65023 voltage regulator driver");
MODULE_LICENSE("GPL v2");
