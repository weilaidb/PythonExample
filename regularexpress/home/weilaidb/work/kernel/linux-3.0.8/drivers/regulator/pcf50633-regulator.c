#define PCF50633_REGULATOR(_name, _id, _n) 		\
static const u8 pcf50633_regulator_registers[PCF50633_NUM_REGULATORS] = ;
static u8 auto_voltage_bits(unsigned int millivolts)
static u8 down_voltage_bits(unsigned int millivolts)
static u8 ldo_voltage_bits(unsigned int millivolts)
static unsigned int auto_voltage_value(u8 bits)
static unsigned int down_voltage_value(u8 bits)
static unsigned int ldo_voltage_value(u8 bits)
static int pcf50633_regulator_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int pcf50633_regulator_voltage_value(enum pcf50633_regulator_id id,
u8 bits)
static int pcf50633_regulator_get_voltage(struct regulator_dev *rdev)
static int pcf50633_regulator_list_voltage(struct regulator_dev *rdev,
unsigned int index)
static int pcf50633_regulator_enable(struct regulator_dev *rdev)
static int pcf50633_regulator_disable(struct regulator_dev *rdev)
static int pcf50633_regulator_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops pcf50633_regulator_ops = ;
static struct regulator_desc regulators[] = ;
static int __devinit pcf50633_regulator_probe(struct platform_device *pdev)
static int __devexit pcf50633_regulator_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_regulator_driver = ;
static int __init pcf50633_regulator_init(void)
subsys_initcall(pcf50633_regulator_init);
static void __exit pcf50633_regulator_exit(void)
module_exit(pcf50633_regulator_exit);
MODULE_AUTHOR("Balaji Rao <balajirrao@openmoko.org>");
MODULE_DESCRIPTION("PCF50633 regulator driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcf50633-regulator");
