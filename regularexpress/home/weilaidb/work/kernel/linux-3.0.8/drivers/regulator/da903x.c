#define DA9030_INVAL		(-1)
#define DA9030_LDO1011		(0x10)
#define DA9030_LDO15		(0x11)
#define DA9030_LDO1416		(0x12)
#define DA9030_LDO1819		(0x13)
#define DA9030_LDO17		(0x14)
#define DA9030_BUCK2DVM1	(0x15)
#define DA9030_BUCK2DVM2	(0x16)
#define DA9030_RCTL11		(0x17)
#define DA9030_RCTL21		(0x18)
#define DA9030_LDO1		(0x90)
#define DA9030_LDO23		(0x91)
#define DA9030_LDO45		(0x92)
#define DA9030_LDO6		(0x93)
#define DA9030_LDO78		(0x94)
#define DA9030_LDO912		(0x95)
#define DA9030_BUCK		(0x96)
#define DA9030_RCTL12		(0x97)
#define DA9030_RCTL22		(0x98)
#define DA9030_LDO_UNLOCK	(0xa0)
#define DA9030_LDO_UNLOCK_MASK	(0xe0)
#define DA9034_OVER1		(0x10)
#define DA9034_INVAL		(-1)
#define DA9034_OVER2		(0x11)
#define DA9034_OVER3		(0x12)
#define DA9034_LDO643		(0x13)
#define DA9034_LDO987		(0x14)
#define DA9034_LDO1110		(0x15)
#define DA9034_LDO1312		(0x16)
#define DA9034_LDO1514		(0x17)
#define DA9034_VCC1		(0x20)
#define DA9034_ADTV1		(0x23)
#define DA9034_ADTV2		(0x24)
#define DA9034_AVRC		(0x25)
#define DA9034_CDTV1		(0x26)
#define DA9034_CDTV2		(0x27)
#define DA9034_CVRC		(0x28)
#define DA9034_SDTV1		(0x29)
#define DA9034_SDTV2		(0x2a)
#define DA9034_SVRC		(0x2b)
#define DA9034_MDTV1		(0x32)
#define DA9034_MDTV2		(0x33)
#define DA9034_MVRC		(0x34)
#define DA9035_OVER3		(0x12)
#define DA9035_VCC2		(0x1f)
#define DA9035_3DTV1		(0x2c)
#define DA9035_3DTV2		(0x2d)
#define DA9035_3VRC		(0x2e)
#define DA9035_AUTOSKIP		(0x2f)
struct da903x_regulator_info ;
static int da9034_ldo12_data[] = ;
static inline struct device *to_da903x_dev(struct regulator_dev *rdev)
static inline int check_range(struct da903x_regulator_info *info,
int min_uV, int max_uV)
static int da903x_set_ldo_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int da903x_get_voltage(struct regulator_dev *rdev)
static int da903x_enable(struct regulator_dev *rdev)
static int da903x_disable(struct regulator_dev *rdev)
static int da903x_is_enabled(struct regulator_dev *rdev)
static int da903x_list_voltage(struct regulator_dev *rdev, unsigned selector)
static int da9030_set_ldo1_15_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int da9030_set_ldo14_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int da9030_get_ldo14_voltage(struct regulator_dev *rdev)
static int da9034_set_dvc_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int da9034_set_ldo12_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int da9034_get_ldo12_voltage(struct regulator_dev *rdev)
static int da9034_list_ldo12_voltage(struct regulator_dev *rdev,
unsigned selector)
static struct regulator_ops da903x_regulator_ldo_ops = ;
static struct regulator_ops da9030_regulator_ldo14_ops = ;
static struct regulator_ops da9030_regulator_ldo1_15_ops = ;
static struct regulator_ops da9034_regulator_dvc_ops = ;
static struct regulator_ops da9034_regulator_ldo12_ops = ;
#define DA903x_LDO(_pmic, _id, min, max, step, vreg, shift, nbits, ereg, ebit)	\
#define DA903x_DVC(_pmic, _id, min, max, step, vreg, nbits, ureg, ubit, ereg, ebit) \
#define DA9034_LDO(_id, min, max, step, vreg, shift, nbits, ereg, ebit)	\
DA903x_LDO(DA9034, _id, min, max, step, vreg, shift, nbits, ereg, ebit)
#define DA9030_LDO(_id, min, max, step, vreg, shift, nbits, ereg, ebit)	\
DA903x_LDO(DA9030, _id, min, max, step, vreg, shift, nbits, ereg, ebit)
#define DA9030_DVC(_id, min, max, step, vreg, nbits, ureg, ubit, ereg, ebit) \
DA903x_DVC(DA9030, _id, min, max, step, vreg, nbits, ureg, ubit, \
ereg, ebit)
#define DA9034_DVC(_id, min, max, step, vreg, nbits, ureg, ubit, ereg, ebit) \
DA903x_DVC(DA9034, _id, min, max, step, vreg, nbits, ureg, ubit, \
ereg, ebit)
#define DA9035_DVC(_id, min, max, step, vreg, nbits, ureg, ubit, ereg, ebit) \
DA903x_DVC(DA9035, _id, min, max, step, vreg, nbits, ureg, ubit, \
ereg, ebit)
static struct da903x_regulator_info da903x_regulator_info[] = ;
static inline struct da903x_regulator_info *find_regulator_info(int id)
static int __devinit da903x_regulator_probe(struct platform_device *pdev)
static int __devexit da903x_regulator_remove(struct platform_device *pdev)
static struct platform_driver da903x_regulator_driver = ;
static int __init da903x_regulator_init(void)
subsys_initcall(da903x_regulator_init);
static void __exit da903x_regulator_exit(void)
module_exit(da903x_regulator_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>"
"Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("Regulator Driver for Dialog Semiconductor DA903X PMIC");
MODULE_ALIAS("platform:da903x-regulator");
