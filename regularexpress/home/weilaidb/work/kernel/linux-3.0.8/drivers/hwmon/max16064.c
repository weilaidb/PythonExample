static struct pmbus_driver_info max16064_info = ;
static int max16064_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max16064_remove(struct i2c_client *client)
static const struct i2c_device_id max16064_id[] = ;
MODULE_DEVICE_TABLE(i2c, max16064_id);
static struct i2c_driver max16064_driver = ;
static int __init max16064_init(void)
static void __exit max16064_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for Maxim MAX16064");
MODULE_LICENSE("GPL");
module_init(max16064_init);
module_exit(max16064_exit);
