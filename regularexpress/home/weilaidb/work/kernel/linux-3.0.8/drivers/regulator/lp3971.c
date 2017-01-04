struct lp3971 ;
static u8 lp3971_reg_read(struct lp3971 *lp3971, u8 reg);
static int lp3971_set_bits(struct lp3971 *lp3971, u8 reg, u16 mask, u16 val);
#define LP3971_SYS_CONTROL1_REG 0x07
#define SYS_CONTROL1_INIT_VAL 0x40
#define SYS_CONTROL1_INIT_MASK 0xCF
#define LP3971_BUCK_VOL_ENABLE_REG 0x10
#define LP3971_BUCK_VOL_CHANGE_REG 0x20
#define BUCK_VOL_CHANGE_SHIFT(x) (((!!x) << 2) | (x & ~0x01))
#define BUCK_VOL_CHANGE_FLAG_GO 0x01
#define BUCK_VOL_CHANGE_FLAG_TARGET 0x02
#define BUCK_VOL_CHANGE_FLAG_MASK 0x03
#define LP3971_BUCK1_BASE 0x23
#define LP3971_BUCK2_BASE 0x29
#define LP3971_BUCK3_BASE 0x32
static const int buck_base_addr[] = ;
#define LP3971_BUCK_TARGET_VOL1_REG(x) (buck_base_addr[x])
#define LP3971_BUCK_TARGET_VOL2_REG(x) (buck_base_addr[x]+1)
static const int buck_voltage_map[] = ;
#define BUCK_TARGET_VOL_MASK 0x3f
#define BUCK_TARGET_VOL_MIN_IDX 0x01
#define BUCK_TARGET_VOL_MAX_IDX 0x19
#define LP3971_BUCK_RAMP_REG(x)	(buck_base_addr[x]+2)
#define LP3971_LDO_ENABLE_REG 0x12
#define LP3971_LDO_VOL_CONTR_BASE 0x39
#define LP3971_LDO_VOL_CONTR_REG(x)	(LP3971_LDO_VOL_CONTR_BASE + (x >> 1))
#define LDO_VOL_CONTR_SHIFT(x) ((x & 1) << 2)
#define LDO_VOL_CONTR_MASK 0x0f
static const int ldo45_voltage_map[] = ;
static const int ldo123_voltage_map[] = ;
static const int *ldo_voltage_map[] = ;
#define LDO_VOL_VALUE_MAP(x) (ldo_voltage_map[(x - LP3971_LDO1)])
#define LDO_VOL_MIN_IDX 0x00
#define LDO_VOL_MAX_IDX 0x0f
static int lp3971_ldo_list_voltage(struct regulator_dev *dev, unsigned index)
static int lp3971_ldo_is_enabled(struct regulator_dev *dev)
static int lp3971_ldo_enable(struct regulator_dev *dev)
static int lp3971_ldo_disable(struct regulator_dev *dev)
static int lp3971_ldo_get_voltage(struct regulator_dev *dev)
static int lp3971_ldo_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned int *selector)
static struct regulator_ops lp3971_ldo_ops = ;
static int lp3971_dcdc_list_voltage(struct regulator_dev *dev, unsigned index)
static int lp3971_dcdc_is_enabled(struct regulator_dev *dev)
static int lp3971_dcdc_enable(struct regulator_dev *dev)
static int lp3971_dcdc_disable(struct regulator_dev *dev)
static int lp3971_dcdc_get_voltage(struct regulator_dev *dev)
static int lp3971_dcdc_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned int *selector)
static struct regulator_ops lp3971_dcdc_ops = ;
static struct regulator_desc regulators[] = ;
static int lp3971_i2c_read(struct i2c_client *i2c, char reg, int count,
u16 *dest)
static int lp3971_i2c_write(struct i2c_client *i2c, char reg, int count,
const u16 *src)
static u8 lp3971_reg_read(struct lp3971 *lp3971, u8 reg)
static int lp3971_set_bits(struct lp3971 *lp3971, u8 reg, u16 mask, u16 val)
static int __devinit setup_regulators(struct lp3971 *lp3971,
struct lp3971_platform_data *pdata)
static int __devinit lp3971_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit lp3971_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id lp3971_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, lp3971_i2c_id);
static struct i2c_driver lp3971_i2c_driver = ;
static int __init lp3971_module_init(void)
module_init(lp3971_module_init);
static void __exit lp3971_module_exit(void)
module_exit(lp3971_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marek Szyprowski <m.szyprowski@samsung.com>");
MODULE_DESCRIPTION("LP3971 PMIC driver");
