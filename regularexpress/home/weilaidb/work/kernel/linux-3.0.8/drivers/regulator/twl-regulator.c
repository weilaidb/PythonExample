struct twlreg_info ;
#define VREG_GRP		0
#define VREG_TYPE		1
#define VREG_REMAP		2
#define VREG_DEDICATED		3
#define VREG_TRANS		1
#define VREG_STATE		2
#define VREG_VOLTAGE		3
#define VREG_VOLTAGE_SMPS	4
#define VREG_BC_ALL		1
#define VREG_BC_REF		2
#define VREG_BC_PROC		3
#define VREG_BC_CLK_RST		4
#define TWL6030_CFG_STATE_OFF	0x00
#define TWL6030_CFG_STATE_ON	0x01
#define TWL6030_CFG_STATE_OFF2	0x02
#define TWL6030_CFG_STATE_SLEEP	0x03
#define TWL6030_CFG_STATE_GRP_SHIFT	5
#define TWL6030_CFG_STATE_APP_SHIFT	2
#define TWL6030_CFG_STATE_APP_MASK	(0x03 << TWL6030_CFG_STATE_APP_SHIFT)
#define TWL6030_CFG_STATE_APP(v)	(((v) & TWL6030_CFG_STATE_APP_MASK) >>\
TWL6030_CFG_STATE_APP_SHIFT)
#define SMPS_OFFSET_EN		BIT(0)
#define SMPS_EXTENDED_EN	BIT(1)
#define TWL6030_SMPS_OFFSET		0xB0
#define TWL6030_SMPS_MULT		0xB3
#define SMPS_MULTOFFSET_SMPS4	BIT(0)
#define SMPS_MULTOFFSET_VIO	BIT(1)
#define SMPS_MULTOFFSET_SMPS3	BIT(6)
static inline int
twlreg_read(struct twlreg_info *info, unsigned slave_subgp, unsigned offset)
static inline int
twlreg_write(struct twlreg_info *info, unsigned slave_subgp, unsigned offset,
u8 value)
static int twlreg_grp(struct regulator_dev *rdev)
#define P3_GRP_4030	BIT(7)
#define P2_GRP_4030	BIT(6)
#define P1_GRP_4030	BIT(5)
#define P3_GRP_6030	BIT(2)
#define P2_GRP_6030	BIT(1)
#define P1_GRP_6030	BIT(0)
static int twl4030reg_is_enabled(struct regulator_dev *rdev)
static int twl6030reg_is_enabled(struct regulator_dev *rdev)
static int twl4030reg_enable(struct regulator_dev *rdev)
static int twl6030reg_enable(struct regulator_dev *rdev)
static int twl4030reg_disable(struct regulator_dev *rdev)
static int twl6030reg_disable(struct regulator_dev *rdev)
static int twl4030reg_get_status(struct regulator_dev *rdev)
static int twl6030reg_get_status(struct regulator_dev *rdev)
static int twl4030reg_set_mode(struct regulator_dev *rdev, unsigned mode)
static int twl6030reg_set_mode(struct regulator_dev *rdev, unsigned mode)
#define UNSUP_MASK	0x0000
#define UNSUP_MASK	0x8000
#define UNSUP(x)	(UNSUP_MASK | (x))
#define IS_UNSUP(x)	(UNSUP_MASK & (x))
#define LDO_MV(x)	(~UNSUP_MASK & (x))
static const u16 VAUX1_VSEL_table[] = ;
static const u16 VAUX2_4030_VSEL_table[] = ;
static const u16 VAUX2_VSEL_table[] = ;
static const u16 VAUX3_VSEL_table[] = ;
static const u16 VAUX4_VSEL_table[] = ;
static const u16 VMMC1_VSEL_table[] = ;
static const u16 VMMC2_VSEL_table[] = ;
static const u16 VPLL1_VSEL_table[] = ;
static const u16 VPLL2_VSEL_table[] = ;
static const u16 VSIM_VSEL_table[] = ;
static const u16 VDAC_VSEL_table[] = ;
static const u16 VDD1_VSEL_table[] = ;
static const u16 VDD2_VSEL_table[] = ;
static const u16 VIO_VSEL_table[] = ;
static const u16 VINTANA2_VSEL_table[] = ;
static int twl4030ldo_list_voltage(struct regulator_dev *rdev, unsigned index)
static int
twl4030ldo_set_voltage(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned *selector)
static int twl4030ldo_get_voltage(struct regulator_dev *rdev)
static struct regulator_ops twl4030ldo_ops = ;
static int twl6030ldo_list_voltage(struct regulator_dev *rdev, unsigned index)
static int
twl6030ldo_set_voltage(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned *selector)
static int twl6030ldo_get_voltage(struct regulator_dev *rdev)
static struct regulator_ops twl6030ldo_ops = ;
static int twlfixed_list_voltage(struct regulator_dev *rdev, unsigned index)
static int twlfixed_get_voltage(struct regulator_dev *rdev)
static struct regulator_ops twl4030fixed_ops = ;
static struct regulator_ops twl6030fixed_ops = ;
static struct regulator_ops twl6030_fixed_resource = ;
static int twl6030smps_list_voltage(struct regulator_dev *rdev, unsigned index)
static int
twl6030smps_set_voltage(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned int *selector)
static int twl6030smps_get_voltage_sel(struct regulator_dev *rdev)
static struct regulator_ops twlsmps_ops = ;
#define TWL4030_FIXED_LDO(label, offset, mVolts, num, turnon_delay, \
remap_conf) \
TWL_FIXED_LDO(label, offset, mVolts, num, turnon_delay, \
remap_conf, TWL4030, twl4030fixed_ops)
#define TWL6030_FIXED_LDO(label, offset, mVolts, num, turnon_delay) \
TWL_FIXED_LDO(label, offset, mVolts, num, turnon_delay, \
0x0, TWL6030, twl6030fixed_ops)
#define TWL4030_ADJUSTABLE_LDO(label, offset, num, turnon_delay, remap_conf)
#define TWL6030_ADJUSTABLE_LDO(label, offset, min_mVolts, max_mVolts, num)
#define TWL6025_ADJUSTABLE_LDO(label, offset, min_mVolts, max_mVolts, num)
#define TWL_FIXED_LDO(label, offset, mVolts, num, turnon_delay, remap_conf, \
family, operations)
#define TWL6030_FIXED_RESOURCE(label, offset, num, turnon_delay)
#define TWL6025_ADJUSTABLE_SMPS(label, offset, num)
static struct twlreg_info twl_regs[] = ;
static u8 twl_get_smps_offset(void)
static u8 twl_get_smps_mult(void)
static int __devinit twlreg_probe(struct platform_device *pdev)
static int __devexit twlreg_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:twl_reg");
static struct platform_driver twlreg_driver = ;
static int __init twlreg_init(void)
subsys_initcall(twlreg_init);
static void __exit twlreg_exit(void)
module_exit(twlreg_exit)
MODULE_DESCRIPTION("TWL regulator driver");
MODULE_LICENSE("GPL");
