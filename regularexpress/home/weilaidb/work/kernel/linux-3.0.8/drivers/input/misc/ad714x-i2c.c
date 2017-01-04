static int ad714x_i2c_suspend(struct device *dev)
static int ad714x_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ad714x_i2c_pm, ad714x_i2c_suspend, ad714x_i2c_resume);
static int ad714x_i2c_write(struct device *dev, unsigned short reg,
unsigned short data)
static int ad714x_i2c_read(struct device *dev, unsigned short reg,
unsigned short *data)
static int __devinit ad714x_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad714x_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ad714x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad714x_id);
static struct i2c_driver ad714x_i2c_driver = ;
static __init int ad714x_i2c_init(void)
module_init(ad714x_i2c_init);
static __exit void ad714x_i2c_exit(void)
module_exit(ad714x_i2c_exit);
MODULE_DESCRIPTION("Analog Devices AD714X Capacitance Touch Sensor I2C Bus Driver");
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
