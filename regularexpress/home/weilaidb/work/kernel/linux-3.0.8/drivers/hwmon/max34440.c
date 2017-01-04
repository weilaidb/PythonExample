enum chips ;
#define MAX34440_STATUS_OC_WARN		(1 << 0)
#define MAX34440_STATUS_OC_FAULT	(1 << 1)
#define MAX34440_STATUS_OT_FAULT	(1 << 5)
#define MAX34440_STATUS_OT_WARN		(1 << 6)
static int max34440_read_byte_data(struct i2c_client *client, int page, int reg)
static struct pmbus_driver_info max34440_info[] = ;
static int max34440_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max34440_remove(struct i2c_client *client)
static const struct i2c_device_id max34440_id[] = ;
MODULE_DEVICE_TABLE(i2c, max34440_id);
static struct i2c_driver max34440_driver = ;
static int __init max34440_init(void)
static void __exit max34440_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for Maxim MAX34440/MAX34441");
MODULE_LICENSE("GPL");
module_init(max34440_init);
module_exit(max34440_exit);
