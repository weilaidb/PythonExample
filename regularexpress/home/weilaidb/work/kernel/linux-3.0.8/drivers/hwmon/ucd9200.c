#define UCD9200_PHASE_INFO	0xd2
#define UCD9200_DEVICE_ID	0xfd
enum chips ;
static const struct i2c_device_id ucd9200_id[] = ;
MODULE_DEVICE_TABLE(i2c, ucd9200_id);
static int ucd9200_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ucd9200_remove(struct i2c_client *client)
static struct i2c_driver ucd9200_driver = ;
static int __init ucd9200_init(void)
static void __exit ucd9200_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus driver for TI UCD922x, UCD924x");
MODULE_LICENSE("GPL");
module_init(ucd9200_init);
module_exit(ucd9200_exit);
