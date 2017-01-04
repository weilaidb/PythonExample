#define TPS65910_REG_VRTC		0
#define TPS65910_REG_VIO		1
#define TPS65910_REG_VDD1		2
#define TPS65910_REG_VDD2		3
#define TPS65910_REG_VDD3		4
#define TPS65910_REG_VDIG1		5
#define TPS65910_REG_VDIG2		6
#define TPS65910_REG_VPLL		7
#define TPS65910_REG_VDAC		8
#define TPS65910_REG_VAUX1		9
#define TPS65910_REG_VAUX2		10
#define TPS65910_REG_VAUX33		11
#define TPS65910_REG_VMMC		12
#define TPS65911_REG_VDDCTRL		4
#define TPS65911_REG_LDO1		5
#define TPS65911_REG_LDO2		6
#define TPS65911_REG_LDO3		7
#define TPS65911_REG_LDO4		8
#define TPS65911_REG_LDO5		9
#define TPS65911_REG_LDO6		10
#define TPS65911_REG_LDO7		11
#define TPS65911_REG_LDO8		12
#define TPS65910_NUM_REGULATOR		13
#define TPS65910_SUPPLY_STATE_ENABLED	0x1
static const u16 VIO_VSEL_table[] = ;
static const u16 VDD3_VSEL_table[] = ;
static const u16 VDIG1_VSEL_table[] = ;
static const u16 VDIG2_VSEL_table[] = ;
static const u16 VPLL_VSEL_table[] = ;
static const u16 VDAC_VSEL_table[] = ;
static const u16 VAUX1_VSEL_table[] = ;
static const u16 VAUX2_VSEL_table[] = ;
static const u16 VAUX33_VSEL_table[] = ;
static const u16 VMMC_VSEL_table[] = ;
struct tps_info ;
static struct tps_info tps65910_regs[] = ;
static struct tps_info tps65911_regs[] = ;
struct tps65910_reg ;
static inline int tps65910_read(struct tps65910_reg *pmic, u8 reg)
static inline int tps65910_write(struct tps65910_reg *pmic, u8 reg, u8 val)
static int tps65910_modify_bits(struct tps65910_reg *pmic, u8 reg,
u8 set_mask, u8 clear_mask)
static int tps65910_reg_read(struct tps65910_reg *pmic, u8 reg)
static int tps65910_reg_write(struct tps65910_reg *pmic, u8 reg, u8 val)
static int tps65910_get_ctrl_register(int id)
static int tps65911_get_ctrl_register(int id)
static int tps65910_is_enabled(struct regulator_dev *dev)
static int tps65910_enable(struct regulator_dev *dev)
static int tps65910_disable(struct regulator_dev *dev)
static int tps65910_set_mode(struct regulator_dev *dev, unsigned int mode)
static unsigned int tps65910_get_mode(struct regulator_dev *dev)
static int tps65910_get_voltage_dcdc(struct regulator_dev *dev)
static int tps65910_get_voltage(struct regulator_dev *dev)
static int tps65910_get_voltage_vdd3(struct regulator_dev *dev)
static int tps65911_get_voltage(struct regulator_dev *dev)
static int tps65910_set_voltage_dcdc(struct regulator_dev *dev,
unsigned selector)
static int tps65910_set_voltage(struct regulator_dev *dev, unsigned selector)
static int tps65911_set_voltage(struct regulator_dev *dev, unsigned selector)
static int tps65910_list_voltage_dcdc(struct regulator_dev *dev,
unsigned selector)
static int tps65910_list_voltage(struct regulator_dev *dev,
unsigned selector)
static int tps65911_list_voltage(struct regulator_dev *dev, unsigned selector)
static struct regulator_ops tps65910_ops_dcdc = ;
static struct regulator_ops tps65910_ops_vdd3 = ;
static struct regulator_ops tps65910_ops = ;
static struct regulator_ops tps65911_ops = ;
static __devinit int tps65910_probe(struct platform_device *pdev)
static int __devexit tps65910_remove(struct platform_device *pdev)
static struct platform_driver tps65910_driver = ;
static int __init tps65910_init(void)
subsys_initcall(tps65910_init);
static void __exit tps65910_cleanup(void)
module_exit(tps65910_cleanup);
MODULE_AUTHOR("Graeme Gregory <gg@slimlogic.co.uk>");
MODULE_DESCRIPTION("TPS6507x voltage regulator driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tps65910-pmic");
