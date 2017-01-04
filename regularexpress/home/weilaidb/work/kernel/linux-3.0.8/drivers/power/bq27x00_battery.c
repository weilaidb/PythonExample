#define DRIVER_VERSION			"1.2.0"
#define BQ27x00_REG_TEMP		0x06
#define BQ27x00_REG_VOLT		0x08
#define BQ27x00_REG_AI			0x14
#define BQ27x00_REG_FLAGS		0x0A
#define BQ27x00_REG_TTE			0x16
#define BQ27x00_REG_TTF			0x18
#define BQ27x00_REG_TTECP		0x26
#define BQ27x00_REG_NAC			0x0C
#define BQ27x00_REG_LMD			0x12
#define BQ27x00_REG_CYCT		0x2A
#define BQ27x00_REG_AE			0x22
#define BQ27000_REG_RSOC		0x0B
#define BQ27000_REG_ILMD		0x76
#define BQ27000_FLAG_CHGS		BIT(7)
#define BQ27000_FLAG_FC			BIT(5)
#define BQ27500_REG_SOC			0x2C
#define BQ27500_REG_DCAP		0x3C
#define BQ27500_FLAG_DSC		BIT(0)
#define BQ27500_FLAG_FC			BIT(9)
#define BQ27000_RS			20
struct bq27x00_device_info;
struct bq27x00_access_methods ;
enum bq27x00_chip ;
struct bq27x00_reg_cache ;
struct bq27x00_device_info ;
static enum power_supply_property bq27x00_battery_props[] = ;
static unsigned int poll_interval = 360;
module_param(poll_interval, uint, 0644);
MODULE_PARM_DESC(poll_interval, "battery poll interval in seconds - " \
"0 disables polling");
static inline int bq27x00_read(struct bq27x00_device_info *di, u8 reg,
bool single)
static int bq27x00_battery_read_rsoc(struct bq27x00_device_info *di)
static int bq27x00_battery_read_charge(struct bq27x00_device_info *di, u8 reg)
static inline int bq27x00_battery_read_nac(struct bq27x00_device_info *di)
static inline int bq27x00_battery_read_lmd(struct bq27x00_device_info *di)
static int bq27x00_battery_read_ilmd(struct bq27x00_device_info *di)
static int bq27x00_battery_read_cyct(struct bq27x00_device_info *di)
static int bq27x00_battery_read_time(struct bq27x00_device_info *di, u8 reg)
static void bq27x00_update(struct bq27x00_device_info *di)
static void bq27x00_battery_poll(struct work_struct *work)
static int bq27x00_battery_temperature(struct bq27x00_device_info *di,
union power_supply_propval *val)
static int bq27x00_battery_current(struct bq27x00_device_info *di,
union power_supply_propval *val)
static int bq27x00_battery_status(struct bq27x00_device_info *di,
union power_supply_propval *val)
static int bq27x00_battery_voltage(struct bq27x00_device_info *di,
union power_supply_propval *val)
static int bq27x00_battery_energy(struct bq27x00_device_info *di,
union power_supply_propval *val)
static int bq27x00_simple_value(int value,
union power_supply_propval *val)
#define to_bq27x00_device_info(x) container_of((x), \
struct bq27x00_device_info, bat);
static int bq27x00_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static void bq27x00_external_power_changed(struct power_supply *psy)
static int bq27x00_powersupply_init(struct bq27x00_device_info *di)
static void bq27x00_powersupply_unregister(struct bq27x00_device_info *di)
static DEFINE_IDR(battery_id);
static DEFINE_MUTEX(battery_mutex);
static int bq27x00_read_i2c(struct bq27x00_device_info *di, u8 reg, bool single)
static int bq27x00_battery_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int bq27x00_battery_remove(struct i2c_client *client)
static const struct i2c_device_id bq27x00_id[] = ;
MODULE_DEVICE_TABLE(i2c, bq27x00_id);
static struct i2c_driver bq27x00_battery_driver = ;
static inline int bq27x00_battery_i2c_init(void)
static inline void bq27x00_battery_i2c_exit(void)
static inline int bq27x00_battery_i2c_init(void)
static inline void bq27x00_battery_i2c_exit(void) ;
static int bq27000_read_platform(struct bq27x00_device_info *di, u8 reg,
bool single)
static int __devinit bq27000_battery_probe(struct platform_device *pdev)
static int __devexit bq27000_battery_remove(struct platform_device *pdev)
static struct platform_driver bq27000_battery_driver = ;
static inline int bq27x00_battery_platform_init(void)
static inline void bq27x00_battery_platform_exit(void)
static inline int bq27x00_battery_platform_init(void)
static inline void bq27x00_battery_platform_exit(void) ;
static int __init bq27x00_battery_init(void)
module_init(bq27x00_battery_init);
static void __exit bq27x00_battery_exit(void)
module_exit(bq27x00_battery_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("BQ27x00 battery monitor driver");
MODULE_LICENSE("GPL");
