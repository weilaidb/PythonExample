#define REG_LDO_SET		0x0
#define LDO_ILIM_MASK		1
#define LDO_VSEL_MASK		0x0f
#define LDO2_ILIM_SHIFT		12
#define LDO2_VSEL_SHIFT		4
#define LDO1_ILIM_SHIFT		8
#define LDO1_VSEL_SHIFT		0
#define REG_BLOCK_EN		0x1
#define BLOCK_MASK		1
#define BLOCK_LDO1_SHIFT	0
#define BLOCK_LDO2_SHIFT	1
#define BLOCK_LCD_SHIFT		2
#define BLOCK_USB_SHIFT		3
#define REG_DCDC_SET		0x2
#define DCDC_VDCDC_MASK		0x1f
#define DCDC_VDCDC1_SHIFT	0
#define DCDC_VDCDC2_SHIFT	5
#define DCDC_VDCDC3_SHIFT	10
#define REG_DCDC_EN		0x3
#define DCDCDCDC_EN_MASK	0x1
#define DCDCDCDC1_EN_SHIFT	0
#define DCDCDCDC1_PG_MSK	BIT(1)
#define DCDCDCDC2_EN_SHIFT	2
#define DCDCDCDC2_PG_MSK	BIT(3)
#define DCDCDCDC3_EN_SHIFT	4
#define DCDCDCDC3_PG_MSK	BIT(5)
#define REG_USB			0x4
#define USB_ILIM_SHIFT		0
#define USB_ILIM_MASK		0x3
#define USB_TSD_SHIFT		2
#define USB_TSD_MASK		0x3
#define USB_TWARN_SHIFT		4
#define USB_TWARN_MASK		0x3
#define USB_IWARN_SD		BIT(6)
#define USB_FAST_LOOP		BIT(7)
#define REG_ALARM		0x5
#define ALARM_LDO1		BIT(0)
#define ALARM_DCDC1		BIT(1)
#define ALARM_DCDC2		BIT(2)
#define ALARM_DCDC3		BIT(3)
#define ALARM_LDO2		BIT(4)
#define ALARM_USB_WARN		BIT(5)
#define ALARM_USB_ALARM		BIT(6)
#define ALARM_LCD		BIT(9)
#define ALARM_TEMP_WARM		BIT(10)
#define ALARM_TEMP_HOT		BIT(11)
#define ALARM_NRST		BIT(14)
#define ALARM_POWERUP		BIT(15)
#define REG_INT_ENABLE		0x6
#define INT_LDO1		BIT(0)
#define INT_DCDC1		BIT(1)
#define INT_DCDC2		BIT(2)
#define INT_DCDC3		BIT(3)
#define INT_LDO2		BIT(4)
#define INT_USB_WARN		BIT(5)
#define INT_USB_ALARM		BIT(6)
#define INT_LCD			BIT(9)
#define INT_TEMP_WARM		BIT(10)
#define INT_TEMP_HOT		BIT(11)
#define INT_GLOBAL_EN		BIT(15)
#define REG_INT_STATUS		0x7
#define STATUS_LDO1		BIT(0)
#define STATUS_DCDC1		BIT(1)
#define STATUS_DCDC2		BIT(2)
#define STATUS_DCDC3		BIT(3)
#define STATUS_LDO2		BIT(4)
#define STATUS_USB_WARN		BIT(5)
#define STATUS_USB_ALARM	BIT(6)
#define STATUS_LCD		BIT(9)
#define STATUS_TEMP_WARM	BIT(10)
#define STATUS_TEMP_HOT		BIT(11)
#define REG_SOFTWARE_RESET	0xb
#define REG_WRITE_ENABLE	0xd
#define REG_REV_ID		0xf
#define N_DCDC			3
#define N_LDO			2
#define N_SWITCH		2
#define N_REGULATORS		(3 + \
2  + \
2)
#define FIXED_ILIMSEL		BIT(0)
#define FIXED_VOLTAGE		BIT(1)
#define CMD_READ(reg)		((reg) << 6)
#define CMD_WRITE(reg)		(BIT(5) | (reg) << 6)
#define STAT_CLK		BIT(3)
#define STAT_WRITE		BIT(2)
#define STAT_INVALID		BIT(1)
#define STAT_WP			BIT(0)
struct field ;
struct supply_info ;
struct tps6524x ;
static int __read_reg(struct tps6524x *hw, int reg)
static int read_reg(struct tps6524x *hw, int reg)
static int __write_reg(struct tps6524x *hw, int reg, int val)
static int __rmw_reg(struct tps6524x *hw, int reg, int mask, int val)
static int rmw_protect(struct tps6524x *hw, int reg, int mask, int val)
static int read_field(struct tps6524x *hw, const struct field *field)
static int write_field(struct tps6524x *hw, const struct field *field,
int val)
static const int dcdc1_voltages[] = ;
static const int dcdc2_voltages[] = ;
static const int dcdc3_voltages[] = ;
static const int ldo1_voltages[] = ;
static const int ldo2_voltages[] = ;
static const int ldo_ilimsel[] = ;
static const int usb_ilimsel[] = ;
#define __MK_FIELD(_reg, _mask, _shift) \
static const struct supply_info supply_info[N_REGULATORS] = ;
static int list_voltage(struct regulator_dev *rdev, unsigned selector)
static int set_voltage(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned *selector)
static int get_voltage(struct regulator_dev *rdev)
static int set_current_limit(struct regulator_dev *rdev, int min_uA,
int max_uA)
static int get_current_limit(struct regulator_dev *rdev)
static int enable_supply(struct regulator_dev *rdev)
static int disable_supply(struct regulator_dev *rdev)
static int is_supply_enabled(struct regulator_dev *rdev)
static struct regulator_ops regulator_ops = ;
static int pmic_remove(struct spi_device *spi)
static int __devinit pmic_probe(struct spi_device *spi)
static struct spi_driver pmic_driver = ;
static int __init pmic_driver_init(void)
module_init(pmic_driver_init);
static void __exit pmic_driver_exit(void)
module_exit(pmic_driver_exit);
MODULE_DESCRIPTION("TPS6524X PMIC Driver");
MODULE_AUTHOR("Cyril Chemparathy");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:tps6524x");
