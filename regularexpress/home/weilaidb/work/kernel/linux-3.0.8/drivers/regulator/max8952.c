enum ;
struct max8952_data ;
static int max8952_read_reg(struct max8952_data *max8952, u8 reg)
static int max8952_write_reg(struct max8952_data *max8952,
u8 reg, u8 value)
static int max8952_voltage(struct max8952_data *max8952, u8 mode)
static int max8952_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int max8952_is_enabled(struct regulator_dev *rdev)
static int max8952_enable(struct regulator_dev *rdev)
static int max8952_disable(struct regulator_dev *rdev)
static int max8952_get_voltage(struct regulator_dev *rdev)
static int max8952_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static struct regulator_ops max8952_ops = ;
static struct regulator_desc regulator = ;
static int __devinit max8952_pmic_probe(struct i2c_client *client,
const struct i2c_device_id *i2c_id)
static int __devexit max8952_pmic_remove(struct i2c_client *client)
static const struct i2c_device_id max8952_ids[] = ;
MODULE_DEVICE_TABLE(i2c, max8952_ids);
static struct i2c_driver max8952_pmic_driver = ;
static int __init max8952_pmic_init(void)
subsys_initcall(max8952_pmic_init);
static void __exit max8952_pmic_exit(void)
module_exit(max8952_pmic_exit);
MODULE_DESCRIPTION("MAXIM 8952 voltage regulator driver");
MODULE_AUTHOR("MyungJoo Ham <myungjoo.ham@samsung.com>");
MODULE_LICENSE("GPL");
