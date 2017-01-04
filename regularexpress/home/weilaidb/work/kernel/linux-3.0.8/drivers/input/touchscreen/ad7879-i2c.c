#define AD7879_DEVID		0x79
static int ad7879_i2c_suspend(struct device *dev)
static int ad7879_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ad7879_i2c_pm, ad7879_i2c_suspend, ad7879_i2c_resume);
static int ad7879_i2c_read(struct device *dev, u8 reg)
static int ad7879_i2c_multi_read(struct device *dev,
u8 first_reg, u8 count, u16 *buf)
static int ad7879_i2c_write(struct device *dev, u8 reg, u16 val)
static const struct ad7879_bus_ops ad7879_i2c_bus_ops = ;
static int __devinit ad7879_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad7879_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ad7879_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7879_id);
static struct i2c_driver ad7879_i2c_driver = ;
static int __init ad7879_i2c_init(void)
module_init(ad7879_i2c_init);
static void __exit ad7879_i2c_exit(void)
module_exit(ad7879_i2c_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("AD7879(-1) touchscreen I2C bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("i2c:ad7879");
