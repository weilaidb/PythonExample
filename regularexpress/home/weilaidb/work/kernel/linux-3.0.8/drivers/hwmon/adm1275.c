#define ADM1275_PMON_CONFIG		0xd4
#define ADM1275_VIN_VOUT_SELECT		(1 << 6)
#define ADM1275_VRANGE			(1 << 5)
static int adm1275_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adm1275_remove(struct i2c_client *client)
static const struct i2c_device_id adm1275_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1275_id);
static struct i2c_driver adm1275_driver = ;
static int __init adm1275_init(void)
static void __exit adm1275_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for Analog Devices ADM1275");
MODULE_LICENSE("GPL");
module_init(adm1275_init);
module_exit(adm1275_exit);
