#define AD5398_CURRENT_EN_MASK	0x8000
struct ad5398_chip_info ;
static int ad5398_calc_current(struct ad5398_chip_info *chip,
unsigned selector)
static int ad5398_read_reg(struct i2c_client *client, unsigned short *data)
static int ad5398_write_reg(struct i2c_client *client, const unsigned short data)
static int ad5398_get_current_limit(struct regulator_dev *rdev)
static int ad5398_set_current_limit(struct regulator_dev *rdev, int min_uA, int max_uA)
static int ad5398_is_enabled(struct regulator_dev *rdev)
static int ad5398_enable(struct regulator_dev *rdev)
static int ad5398_disable(struct regulator_dev *rdev)
static struct regulator_ops ad5398_ops = ;
static struct regulator_desc ad5398_reg = ;
struct ad5398_current_data_format ;
static const struct ad5398_current_data_format df_10_4_120 = ;
static const struct i2c_device_id ad5398_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad5398_id);
static int __devinit ad5398_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad5398_remove(struct i2c_client *client)
static struct i2c_driver ad5398_driver = ;
static int __init ad5398_init(void)
subsys_initcall(ad5398_init);
static void __exit ad5398_exit(void)
module_exit(ad5398_exit);
MODULE_DESCRIPTION("AD5398 and AD5821 current regulator driver");
MODULE_AUTHOR("Sonic Zhang");
MODULE_LICENSE("GPL");
MODULE_ALIAS("i2c:ad5398-regulator");
