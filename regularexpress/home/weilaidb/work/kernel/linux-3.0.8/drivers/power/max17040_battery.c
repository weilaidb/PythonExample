#define MAX17040_VCELL_MSB	0x02
#define MAX17040_VCELL_LSB	0x03
#define MAX17040_SOC_MSB	0x04
#define MAX17040_SOC_LSB	0x05
#define MAX17040_MODE_MSB	0x06
#define MAX17040_MODE_LSB	0x07
#define MAX17040_VER_MSB	0x08
#define MAX17040_VER_LSB	0x09
#define MAX17040_RCOMP_MSB	0x0C
#define MAX17040_RCOMP_LSB	0x0D
#define MAX17040_CMD_MSB	0xFE
#define MAX17040_CMD_LSB	0xFF
#define MAX17040_DELAY		1000
#define MAX17040_BATTERY_FULL	95
struct max17040_chip ;
static int max17040_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int max17040_write_reg(struct i2c_client *client, int reg, u8 value)
static int max17040_read_reg(struct i2c_client *client, int reg)
static void max17040_reset(struct i2c_client *client)
static void max17040_get_vcell(struct i2c_client *client)
static void max17040_get_soc(struct i2c_client *client)
static void max17040_get_version(struct i2c_client *client)
static void max17040_get_online(struct i2c_client *client)
static void max17040_get_status(struct i2c_client *client)
static void max17040_work(struct work_struct *work)
static enum power_supply_property max17040_battery_props[] = ;
static int __devinit max17040_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max17040_remove(struct i2c_client *client)
static int max17040_suspend(struct i2c_client *client,
pm_message_t state)
static int max17040_resume(struct i2c_client *client)
#define max17040_suspend NULL
#define max17040_resume NULL
static const struct i2c_device_id max17040_id[] = ;
MODULE_DEVICE_TABLE(i2c, max17040_id);
static struct i2c_driver max17040_i2c_driver = ;
static int __init max17040_init(void)
module_init(max17040_init);
static void __exit max17040_exit(void)
module_exit(max17040_exit);
MODULE_AUTHOR("Minkyu Kang <mk7.kang@samsung.com>");
MODULE_DESCRIPTION("MAX17040 Fuel Gauge");
MODULE_LICENSE("GPL");
