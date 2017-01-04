#define DS2782_REG_RARC		0x06
#define DS278x_REG_VOLT_MSB	0x0c
#define DS278x_REG_TEMP_MSB	0x0a
#define DS278x_REG_CURRENT_MSB	0x0e
#define DS2782_REG_RSNSP	0x69
#define DS2782_CURRENT_UNITS	1563
#define DS2786_REG_RARC		0x02
#define DS2786_CURRENT_UNITS	25
struct ds278x_info;
struct ds278x_battery_ops ;
#define to_ds278x_info(x) container_of(x, struct ds278x_info, battery)
struct ds278x_info ;
static DEFINE_IDR(battery_id);
static DEFINE_MUTEX(battery_lock);
static inline int ds278x_read_reg(struct ds278x_info *info, int reg, u8 *val)
static inline int ds278x_read_reg16(struct ds278x_info *info, int reg_msb,
s16 *val)
static int ds278x_get_temp(struct ds278x_info *info, int *temp)
static int ds2782_get_current(struct ds278x_info *info, int *current_uA)
static int ds2782_get_voltage(struct ds278x_info *info, int *voltage_uV)
static int ds2782_get_capacity(struct ds278x_info *info, int *capacity)
static int ds2786_get_current(struct ds278x_info *info, int *current_uA)
static int ds2786_get_voltage(struct ds278x_info *info, int *voltage_uV)
static int ds2786_get_capacity(struct ds278x_info *info, int *capacity)
static int ds278x_get_status(struct ds278x_info *info, int *status)
static int ds278x_battery_get_property(struct power_supply *psy,
enum power_supply_property prop,
union power_supply_propval *val)
static enum power_supply_property ds278x_battery_props[] = ;
static void ds278x_power_supply_init(struct power_supply *battery)
static int ds278x_battery_remove(struct i2c_client *client)
enum ds278x_num_id ;
static struct ds278x_battery_ops ds278x_ops[] = ;
static int ds278x_battery_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id ds278x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds278x_id);
static struct i2c_driver ds278x_battery_driver = ;
static int __init ds278x_init(void)
module_init(ds278x_init);
static void __exit ds278x_exit(void)
module_exit(ds278x_exit);
MODULE_AUTHOR("Ryan Mallon <ryan@bluewatersys.com>");
MODULE_DESCRIPTION("Maxim/Dallas DS2782 Stand-Alone Fuel Gauage IC driver");
MODULE_LICENSE("GPL");
