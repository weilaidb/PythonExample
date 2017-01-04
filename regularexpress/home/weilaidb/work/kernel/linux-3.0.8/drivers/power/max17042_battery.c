enum max17042_register ;
struct max17042_chip ;
static int max17042_write_reg(struct i2c_client *client, u8 reg, u16 value)
static int max17042_read_reg(struct i2c_client *client, u8 reg)
static enum power_supply_property max17042_battery_props[] = ;
static int max17042_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int __devinit max17042_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max17042_remove(struct i2c_client *client)
static const struct i2c_device_id max17042_id[] = ;
MODULE_DEVICE_TABLE(i2c, max17042_id);
static struct i2c_driver max17042_i2c_driver = ;
static int __init max17042_init(void)
module_init(max17042_init);
static void __exit max17042_exit(void)
module_exit(max17042_exit);
MODULE_AUTHOR("MyungJoo Ham <myungjoo.ham@samsung.com>");
MODULE_DESCRIPTION("MAX17042 Fuel Gauge");
MODULE_LICENSE("GPL");
