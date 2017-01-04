#define TPS6586X_SUPPLYENA	0x10
#define TPS6586X_SUPPLYENB	0x11
#define TPS6586X_SUPPLYENC	0x12
#define TPS6586X_SUPPLYEND	0x13
#define TPS6586X_SUPPLYENE	0x14
#define TPS6586X_VCC1		0x20
#define TPS6586X_VCC2		0x21
#define TPS6586X_SM1V1		0x23
#define TPS6586X_SM1V2		0x24
#define TPS6586X_SM1SL		0x25
#define TPS6586X_SM0V1		0x26
#define TPS6586X_SM0V2		0x27
#define TPS6586X_SM0SL		0x28
#define TPS6586X_LDO2AV1	0x29
#define TPS6586X_LDO2AV2	0x2A
#define TPS6586X_LDO2BV1	0x2F
#define TPS6586X_LDO2BV2	0x30
#define TPS6586X_LDO4V1		0x32
#define TPS6586X_LDO4V2		0x33
#define TPS6586X_SUPPLYV1	0x41
#define TPS6586X_SUPPLYV2	0x42
#define TPS6586X_SUPPLYV3	0x43
#define TPS6586X_SUPPLYV4	0x44
#define TPS6586X_SUPPLYV5	0x45
#define TPS6586X_SUPPLYV6	0x46
#define TPS6586X_SMODE1		0x47
#define TPS6586X_SMODE2		0x48
struct tps6586x_regulator ;
static inline struct device *to_tps6586x_dev(struct regulator_dev *rdev)
static int tps6586x_ldo_list_voltage(struct regulator_dev *rdev,
unsigned selector)
static int __tps6586x_ldo_set_voltage(struct device *parent,
struct tps6586x_regulator *ri,
int min_uV, int max_uV,
unsigned *selector)
static int tps6586x_ldo_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int tps6586x_ldo_get_voltage(struct regulator_dev *rdev)
static int tps6586x_dvm_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int tps6586x_regulator_enable(struct regulator_dev *rdev)
static int tps6586x_regulator_disable(struct regulator_dev *rdev)
static int tps6586x_regulator_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops tps6586x_regulator_ldo_ops = ;
static struct regulator_ops tps6586x_regulator_dvm_ops = ;
static int tps6586x_ldo_voltages[] = ;
static int tps6586x_ldo4_voltages[] = ;
static int tps6586x_sm2_voltages[] = ;
static int tps6586x_dvm_voltages[] = ;
#define TPS6586X_REGULATOR(_id, vdata, _ops, vreg, shift, nbits,	\
ereg0, ebit0, ereg1, ebit1)			\
.desc	= ,								\
.volt_reg	= TPS6586X_##vreg,				\
.volt_shift	= (shift),					\
.volt_nbits	= (nbits),					\
.enable_reg[0]	= TPS6586X_SUPPLY##ereg0,			\
.enable_bit[0]	= (ebit0),					\
.enable_reg[1]	= TPS6586X_SUPPLY##ereg1,			\
.enable_bit[1]	= (ebit1),					\
.voltages	= tps6586x_##vdata##_voltages,
#define TPS6586X_REGULATOR_DVM_GOREG(goreg, gobit)			\
.go_reg = TPS6586X_##goreg,					\
.go_bit = (gobit),
#define TPS6586X_LDO(_id, vdata, vreg, shift, nbits,			\
ereg0, ebit0, ereg1, ebit1)			\
#define TPS6586X_DVM(_id, vdata, vreg, shift, nbits,			\
ereg0, ebit0, ereg1, ebit1, goreg, gobit)		\
static struct tps6586x_regulator tps6586x_regulator[] = ;
static inline int tps6586x_regulator_preinit(struct device *parent,
struct tps6586x_regulator *ri)
static inline struct tps6586x_regulator *find_regulator_info(int id)
static int __devinit tps6586x_regulator_probe(struct platform_device *pdev)
static int __devexit tps6586x_regulator_remove(struct platform_device *pdev)
static struct platform_driver tps6586x_regulator_driver = ;
static int __init tps6586x_regulator_init(void)
subsys_initcall(tps6586x_regulator_init);
static void __exit tps6586x_regulator_exit(void)
module_exit(tps6586x_regulator_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("Regulator Driver for TI TPS6586X PMIC");
MODULE_ALIAS("platform:tps6586x-regulator");
