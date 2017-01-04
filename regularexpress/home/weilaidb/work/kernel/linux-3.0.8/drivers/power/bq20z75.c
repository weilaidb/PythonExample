enum ;
#define BATTERY_MODE_OFFSET		0x03
#define BATTERY_MODE_MASK		0x8000
enum bq20z75_battery_mode ;
#define MANUFACTURER_ACCESS_STATUS	0x0006
#define MANUFACTURER_ACCESS_SLEEP	0x0011
#define BATTERY_DISCHARGING		0x40
#define BATTERY_FULL_CHARGED		0x20
#define BATTERY_FULL_DISCHARGED		0x10
#define BQ20Z75_DATA(_psp, _addr, _min_value, _max_value)
static const struct bq20z75_device_data  bq20z75_data[] = ;
static enum power_supply_property bq20z75_properties[] = ;
struct bq20z75_info ;
static int bq20z75_read_word_data(struct i2c_client *client, u8 address)
static int bq20z75_write_word_data(struct i2c_client *client, u8 address,
u16 value)
static int bq20z75_get_battery_presence_and_health(
struct i2c_client *client, enum power_supply_property psp,
union power_supply_propval *val)
static int bq20z75_get_battery_property(struct i2c_client *client,
int reg_offset, enum power_supply_property psp,
union power_supply_propval *val)
static void  bq20z75_unit_adjustment(struct i2c_client *client,
enum power_supply_property psp, union power_supply_propval *val)
static enum bq20z75_battery_mode
bq20z75_set_battery_mode(struct i2c_client *client,
enum bq20z75_battery_mode mode)
static int bq20z75_get_battery_capacity(struct i2c_client *client,
int reg_offset, enum power_supply_property psp,
union power_supply_propval *val)
static char bq20z75_serial[5];
static int bq20z75_get_battery_serial_number(struct i2c_client *client,
union power_supply_propval *val)
static int bq20z75_get_property_index(struct i2c_client *client,
enum power_supply_property psp)
static int bq20z75_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static irqreturn_t bq20z75_irq(int irq, void *devid)
static int __devinit bq20z75_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit bq20z75_remove(struct i2c_client *client)
#if defined CONFIG_PM
static int bq20z75_suspend(struct i2c_client *client,
pm_message_t state)
#define bq20z75_suspend		NULL
#define bq20z75_resume		NULL
static const struct i2c_device_id bq20z75_id[] = ;
MODULE_DEVICE_TABLE(i2c, bq20z75_id);
static struct i2c_driver bq20z75_battery_driver = ;
static int __init bq20z75_battery_init(void)
module_init(bq20z75_battery_init);
static void __exit bq20z75_battery_exit(void)
module_exit(bq20z75_battery_exit);
MODULE_DESCRIPTION("BQ20z75 battery monitor driver");
MODULE_LICENSE("GPL");
