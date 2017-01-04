#define MAX8688_MFG_STATUS		0xd8
#define MAX8688_STATUS_OC_FAULT		(1 << 4)
#define MAX8688_STATUS_OV_FAULT		(1 << 5)
#define MAX8688_STATUS_OV_WARNING	(1 << 8)
#define MAX8688_STATUS_UV_FAULT		(1 << 9)
#define MAX8688_STATUS_UV_WARNING	(1 << 10)
#define MAX8688_STATUS_UC_FAULT		(1 << 11)
#define MAX8688_STATUS_OC_WARNING	(1 << 12)
#define MAX8688_STATUS_OT_FAULT		(1 << 13)
#define MAX8688_STATUS_OT_WARNING	(1 << 14)
static int max8688_read_byte_data(struct i2c_client *client, int page, int reg)
static struct pmbus_driver_info max8688_info = ;
static int max8688_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max8688_remove(struct i2c_client *client)
static const struct i2c_device_id max8688_id[] = ;
MODULE_DEVICE_TABLE(i2c, max8688_id);
static struct i2c_driver max8688_driver = ;
static int __init max8688_init(void)
static void __exit max8688_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for Maxim MAX8688");
MODULE_LICENSE("GPL");
module_init(max8688_init);
module_exit(max8688_exit);
