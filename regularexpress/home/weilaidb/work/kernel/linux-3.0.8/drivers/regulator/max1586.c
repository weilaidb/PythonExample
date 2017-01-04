#define MAX1586_V3_MAX_VSEL 31
#define MAX1586_V6_MAX_VSEL 3
#define MAX1586_V3_MIN_UV   700000
#define MAX1586_V3_MAX_UV  1475000
#define MAX1586_V6_MIN_UV        0
#define MAX1586_V6_MAX_UV  3000000
#define I2C_V3_SELECT (0 << 5)
#define I2C_V6_SELECT (1 << 5)
struct max1586_data ;
static int max1586_v3_calc_voltage(struct max1586_data *max1586,
unsigned selector)
static int max1586_v3_set(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned *selector)
static int max1586_v3_list(struct regulator_dev *rdev, unsigned selector)
static int max1586_v6_calc_voltage(unsigned selector)
static int max1586_v6_set(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned int *selector)
static int max1586_v6_list(struct regulator_dev *rdev, unsigned selector)
static struct regulator_ops max1586_v3_ops = ;
static struct regulator_ops max1586_v6_ops = ;
static struct regulator_desc max1586_reg[] = ;
static int __devinit max1586_pmic_probe(struct i2c_client *client,
const struct i2c_device_id *i2c_id)
static int __devexit max1586_pmic_remove(struct i2c_client *client)
static const struct i2c_device_id max1586_id[] = ;
MODULE_DEVICE_TABLE(i2c, max1586_id);
static struct i2c_driver max1586_pmic_driver = ;
static int __init max1586_pmic_init(void)
subsys_initcall(max1586_pmic_init);
static void __exit max1586_pmic_exit(void)
module_exit(max1586_pmic_exit);
MODULE_DESCRIPTION("MAXIM 1586 voltage regulator driver");
MODULE_AUTHOR("Robert Jarzmik");
MODULE_LICENSE("GPL");
