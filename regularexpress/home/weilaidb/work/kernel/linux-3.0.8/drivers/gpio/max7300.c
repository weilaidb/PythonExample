static int max7300_i2c_write(struct device *dev, unsigned int reg,
unsigned int val)
static int max7300_i2c_read(struct device *dev, unsigned int reg)
static int __devinit max7300_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max7300_remove(struct i2c_client *client)
static const struct i2c_device_id max7300_id[] = ;
MODULE_DEVICE_TABLE(i2c, max7300_id);
static struct i2c_driver max7300_driver = ;
static int __init max7300_init(void)
subsys_initcall(max7300_init);
static void __exit max7300_exit(void)
module_exit(max7300_exit);
MODULE_AUTHOR("Wolfram Sang");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("MAX7300 GPIO-Expander");
