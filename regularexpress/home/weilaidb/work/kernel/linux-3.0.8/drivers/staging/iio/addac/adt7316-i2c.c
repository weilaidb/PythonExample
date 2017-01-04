static int adt7316_i2c_read(void *client, u8 reg, u8 *data)
static int adt7316_i2c_write(void *client, u8 reg, u8 data)
static int adt7316_i2c_multi_read(void *client, u8 reg, u8 count, u8 *data)
static int adt7316_i2c_multi_write(void *client, u8 reg, u8 count, u8 *data)
static int __devinit adt7316_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adt7316_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id adt7316_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt7316_i2c_id);
static int adt7316_i2c_suspend(struct i2c_client *client, pm_message_t message)
static int adt7316_i2c_resume(struct i2c_client *client)
# define adt7316_i2c_suspend NULL
# define adt7316_i2c_resume  NULL
static struct i2c_driver adt7316_driver = ;
static __init int adt7316_i2c_init(void)
static __exit void adt7316_i2c_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("I2C bus driver for Analog Devices ADT7316/7/9 and"
"ADT7516/7/8 digital temperature sensor, ADC and DAC");
MODULE_LICENSE("GPL v2");
module_init(adt7316_i2c_init);
module_exit(adt7316_i2c_exit);
