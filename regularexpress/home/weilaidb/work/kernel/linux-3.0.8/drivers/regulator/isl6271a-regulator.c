#define	ISL6271A_VOLTAGE_MIN	850000
#define	ISL6271A_VOLTAGE_MAX	1600000
#define	ISL6271A_VOLTAGE_STEP	50000
struct isl_pmic ;
static int isl6271a_get_voltage(struct regulator_dev *dev)
static int isl6271a_set_voltage(struct regulator_dev *dev,
int minuV, int maxuV,
unsigned *selector)
static int isl6271a_list_voltage(struct regulator_dev *dev, unsigned selector)
static struct regulator_ops isl_core_ops = ;
static int isl6271a_get_fixed_voltage(struct regulator_dev *dev)
static int isl6271a_list_fixed_voltage(struct regulator_dev *dev, unsigned selector)
static struct regulator_ops isl_fixed_ops = ;
static struct regulator_desc isl_rd[] = ;
static int __devinit isl6271a_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit isl6271a_remove(struct i2c_client *i2c)
static const struct i2c_device_id isl6271a_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl6271a_id);
static struct i2c_driver isl6271a_i2c_driver = ;
static int __init isl6271a_init(void)
static void __exit isl6271a_cleanup(void)
subsys_initcall(isl6271a_init);
module_exit(isl6271a_cleanup);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("Intersil ISL6271A voltage regulator driver");
MODULE_LICENSE("GPL v2");
