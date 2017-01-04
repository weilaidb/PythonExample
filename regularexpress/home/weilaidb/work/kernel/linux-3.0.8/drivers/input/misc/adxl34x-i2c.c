static int adxl34x_smbus_read(struct device *dev, unsigned char reg)
static int adxl34x_smbus_write(struct device *dev,
unsigned char reg, unsigned char val)
static int adxl34x_smbus_read_block(struct device *dev,
unsigned char reg, int count,
void *buf)
static int adxl34x_i2c_read_block(struct device *dev,
unsigned char reg, int count,
void *buf)
static const struct adxl34x_bus_ops adxl34x_smbus_bops = ;
static const struct adxl34x_bus_ops adxl34x_i2c_bops = ;
static int __devinit adxl34x_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adxl34x_i2c_remove(struct i2c_client *client)
static int adxl34x_i2c_suspend(struct device *dev)
static int adxl34x_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(adxl34x_i2c_pm, adxl34x_i2c_suspend,
adxl34x_i2c_resume);
static const struct i2c_device_id adxl34x_id[] = ;
MODULE_DEVICE_TABLE(i2c, adxl34x_id);
static struct i2c_driver adxl34x_driver = ;
static int __init adxl34x_i2c_init(void)
module_init(adxl34x_i2c_init);
static void __exit adxl34x_i2c_exit(void)
module_exit(adxl34x_i2c_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADXL345/346 Three-Axis Digital Accelerometer I2C Bus Driver");
MODULE_LICENSE("GPL");
