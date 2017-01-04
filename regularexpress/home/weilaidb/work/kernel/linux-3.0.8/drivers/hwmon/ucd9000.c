enum chips ;
#define UCD9000_MONITOR_CONFIG		0xd5
#define UCD9000_NUM_PAGES		0xd6
#define UCD9000_FAN_CONFIG_INDEX	0xe7
#define UCD9000_FAN_CONFIG		0xe8
#define UCD9000_DEVICE_ID		0xfd
#define UCD9000_MON_TYPE(x)	(((x) >> 5) & 0x07)
#define UCD9000_MON_PAGE(x)	((x) & 0x0f)
#define UCD9000_MON_VOLTAGE	1
#define UCD9000_MON_TEMPERATURE	2
#define UCD9000_MON_CURRENT	3
#define UCD9000_MON_VOLTAGE_HW	4
#define UCD9000_NUM_FAN		4
struct ucd9000_data ;
#define to_ucd9000_data(_info) container_of(_info, struct ucd9000_data, info)
static int ucd9000_get_fan_config(struct i2c_client *client, int fan)
static int ucd9000_read_byte_data(struct i2c_client *client, int page, int reg)
static const struct i2c_device_id ucd9000_id[] = ;
MODULE_DEVICE_TABLE(i2c, ucd9000_id);
static int ucd9000_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ucd9000_remove(struct i2c_client *client)
static struct i2c_driver ucd9000_driver = ;
static int __init ucd9000_init(void)
static void __exit ucd9000_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for TI UCD90xxx");
MODULE_LICENSE("GPL");
module_init(ucd9000_init);
module_exit(ucd9000_exit);
