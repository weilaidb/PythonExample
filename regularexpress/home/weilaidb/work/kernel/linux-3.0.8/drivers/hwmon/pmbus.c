static void pmbus_find_sensor_groups(struct i2c_client *client,
struct pmbus_driver_info *info)
static int pmbus_identify(struct i2c_client *client,
struct pmbus_driver_info *info)
static int pmbus_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pmbus_remove(struct i2c_client *client)
static const struct i2c_device_id pmbus_id[] = ;
MODULE_DEVICE_TABLE(i2c, pmbus_id);
static struct i2c_driver pmbus_driver = ;
static int __init pmbus_init(void)
static void __exit pmbus_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("Generic PMBus driver");
MODULE_LICENSE("GPL");
module_init(pmbus_init);
module_exit(pmbus_exit);
