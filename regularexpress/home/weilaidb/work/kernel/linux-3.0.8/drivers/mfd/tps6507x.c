static struct mfd_cell tps6507x_devs[] = ;
static int tps6507x_i2c_read_device(struct tps6507x_dev *tps6507x, char reg,
int bytes, void *dest)
static int tps6507x_i2c_write_device(struct tps6507x_dev *tps6507x, char reg,
int bytes, void *src)
static int tps6507x_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int tps6507x_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id tps6507x_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, tps6507x_i2c_id);
static struct i2c_driver tps6507x_i2c_driver = ;
static int __init tps6507x_i2c_init(void)
subsys_initcall(tps6507x_i2c_init);
static void __exit tps6507x_i2c_exit(void)
module_exit(tps6507x_i2c_exit);
MODULE_DESCRIPTION("TPS6507x chip family multi-function driver");
MODULE_LICENSE("GPL");
