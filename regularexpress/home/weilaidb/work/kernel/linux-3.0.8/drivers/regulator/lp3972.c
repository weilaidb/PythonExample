struct lp3972 ;
#define LP3972_SCR_REG		0x07
#define LP3972_OVER1_REG	0x10
#define LP3972_OVSR1_REG	0x11
#define LP3972_OVER2_REG	0x12
#define LP3972_OVSR2_REG	0x13
#define LP3972_VCC1_REG		0x20
#define LP3972_ADTV1_REG	0x23
#define LP3972_ADTV2_REG	0x24
#define LP3972_AVRC_REG		0x25
#define LP3972_CDTC1_REG	0x26
#define LP3972_CDTC2_REG	0x27
#define LP3972_SDTV1_REG	0x29
#define LP3972_SDTV2_REG	0x2A
#define LP3972_MDTV1_REG	0x32
#define LP3972_MDTV2_REG	0x33
#define LP3972_L2VCR_REG	0x39
#define LP3972_L34VCR_REG	0x3A
#define LP3972_SCR1_REG		0x80
#define LP3972_SCR2_REG		0x81
#define LP3972_OEN3_REG		0x82
#define LP3972_OSR3_REG		0x83
#define LP3972_LOER4_REG	0x84
#define LP3972_B2TV_REG		0x85
#define LP3972_B3TV_REG		0x86
#define LP3972_B32RC_REG	0x87
#define LP3972_ISRA_REG		0x88
#define LP3972_BCCR_REG		0x89
#define LP3972_II1RR_REG	0x8E
#define LP3972_II2RR_REG	0x8F
#define LP3972_SYS_CONTROL1_REG		LP3972_SCR1_REG
#define SYS_CONTROL1_INIT_VAL		0x02
#define SYS_CONTROL1_INIT_MASK		0x1F
#define LP3972_VOL_CHANGE_REG		LP3972_VCC1_REG
#define LP3972_VOL_CHANGE_FLAG_GO	0x01
#define LP3972_VOL_CHANGE_FLAG_MASK	0x03
#define LP3972_OEN3_L1EN	BIT(0)
#define LP3972_OVER2_LDO2_EN	BIT(2)
#define LP3972_OVER2_LDO3_EN	BIT(3)
#define LP3972_OVER2_LDO4_EN	BIT(4)
#define LP3972_OVER1_S_EN	BIT(2)
static const int ldo1_voltage_map[] = ;
static const int ldo23_voltage_map[] = ;
static const int ldo4_voltage_map[] = ;
static const int ldo5_voltage_map[] = ;
static const int buck1_voltage_map[] = ;
static const int buck23_voltage_map[] = ;
static const int *ldo_voltage_map[] = ;
static const int *buck_voltage_map[] = ;
static const int ldo_output_enable_mask[] = ;
static const int ldo_output_enable_addr[] = ;
static const int ldo_vol_ctl_addr[] = ;
static const int buck_vol_enable_addr[] = ;
static const int buck_base_addr[] = ;
#define LP3972_LDO_VOL_VALUE_MAP(x) (ldo_voltage_map[x])
#define LP3972_LDO_OUTPUT_ENABLE_MASK(x) (ldo_output_enable_mask[x])
#define LP3972_LDO_OUTPUT_ENABLE_REG(x) (ldo_output_enable_addr[x])
#define LP3972_LDO_VOL_CONTR_SHIFT(x) (((x) & 1) << 2)
#define LP3972_LDO_VOL_CONTR_REG(x) (ldo_vol_ctl_addr[x])
#define LP3972_LDO_VOL_CHANGE_SHIFT(x) ((x) ? 4 : 6)
#define LP3972_LDO_VOL_MASK(x) (((x) % 4) ? 0x0f : 0x1f)
#define LP3972_LDO_VOL_MIN_IDX(x) (((x) == 4) ? 0x05 : 0x00)
#define LP3972_LDO_VOL_MAX_IDX(x) ((x) ? (((x) == 4) ? 0x1f : 0x0f) : 0x0c)
#define LP3972_BUCK_VOL_VALUE_MAP(x) (buck_voltage_map[x])
#define LP3972_BUCK_VOL_ENABLE_REG(x) (buck_vol_enable_addr[x])
#define LP3972_BUCK_VOL1_REG(x) (buck_base_addr[x])
#define LP3972_BUCK_VOL_MASK 0x1f
#define LP3972_BUCK_VOL_MIN_IDX(x) ((x) ? 0x01 : 0x00)
#define LP3972_BUCK_VOL_MAX_IDX(x) ((x) ? 0x19 : 0x1f)
static int lp3972_i2c_read(struct i2c_client *i2c, char reg, int count,
u16 *dest)
static int lp3972_i2c_write(struct i2c_client *i2c, char reg, int count,
const u16 *src)
static u8 lp3972_reg_read(struct lp3972 *lp3972, u8 reg)
static int lp3972_set_bits(struct lp3972 *lp3972, u8 reg, u16 mask, u16 val)
static int lp3972_ldo_list_voltage(struct regulator_dev *dev, unsigned index)
static int lp3972_ldo_is_enabled(struct regulator_dev *dev)
static int lp3972_ldo_enable(struct regulator_dev *dev)
static int lp3972_ldo_disable(struct regulator_dev *dev)
static int lp3972_ldo_get_voltage(struct regulator_dev *dev)
static int lp3972_ldo_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned int *selector)
static struct regulator_ops lp3972_ldo_ops = ;
static int lp3972_dcdc_list_voltage(struct regulator_dev *dev, unsigned index)
static int lp3972_dcdc_is_enabled(struct regulator_dev *dev)
static int lp3972_dcdc_enable(struct regulator_dev *dev)
static int lp3972_dcdc_disable(struct regulator_dev *dev)
static int lp3972_dcdc_get_voltage(struct regulator_dev *dev)
static int lp3972_dcdc_set_voltage(struct regulator_dev *dev,
int min_uV, int max_uV,
unsigned int *selector)
static struct regulator_ops lp3972_dcdc_ops = ;
static struct regulator_desc regulators[] = ;
static int __devinit setup_regulators(struct lp3972 *lp3972,
struct lp3972_platform_data *pdata)
static int __devinit lp3972_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit lp3972_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id lp3972_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, lp3972_i2c_id);
static struct i2c_driver lp3972_i2c_driver = ;
static int __init lp3972_module_init(void)
subsys_initcall(lp3972_module_init);
static void __exit lp3972_module_exit(void)
module_exit(lp3972_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Axel Lin <axel.lin@gmail.com>");
MODULE_DESCRIPTION("LP3972 PMIC driver");
