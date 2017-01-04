static int write_d8(void *client, u8 val)
static int write_r8d8(void *client, u8 reg, u8 val)
static int write_r8d16(void *client, u8 reg, u16 val)
static int read_d8(void *client)
static int read_r8d8(void *client, u8 reg)
static int read_r8d16(void *client, u8 reg)
static const struct ad_dpot_bus_ops bops = ;
static int __devinit ad_dpot_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad_dpot_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ad_dpot_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad_dpot_id);
static struct i2c_driver ad_dpot_i2c_driver = ;
static int __init ad_dpot_i2c_init(void)
module_init(ad_dpot_i2c_init);
static void __exit ad_dpot_i2c_exit(void)
module_exit(ad_dpot_i2c_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("digital potentiometer I2C bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("i2c:ad_dpot");
