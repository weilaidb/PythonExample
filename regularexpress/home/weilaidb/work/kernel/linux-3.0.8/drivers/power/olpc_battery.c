#define EC_BAT_VOLTAGE	0x10
#define EC_BAT_CURRENT	0x11
#define EC_BAT_ACR	0x12
#define EC_BAT_TEMP	0x13
#define EC_AMB_TEMP	0x14
#define EC_BAT_STATUS	0x15
#define EC_BAT_SOC	0x16
#define EC_BAT_SERIAL	0x17
#define EC_BAT_EEPROM	0x18
#define EC_BAT_ERRCODE	0x1f
#define BAT_STAT_PRESENT	0x01
#define BAT_STAT_FULL		0x02
#define BAT_STAT_LOW		0x04
#define BAT_STAT_DESTROY	0x08
#define BAT_STAT_AC		0x10
#define BAT_STAT_CHARGING	0x20
#define BAT_STAT_DISCHARGING	0x40
#define BAT_STAT_TRICKLE	0x80
#define BAT_ERR_INFOFAIL	0x02
#define BAT_ERR_OVERVOLTAGE	0x04
#define BAT_ERR_OVERTEMP	0x05
#define BAT_ERR_GAUGESTOP	0x06
#define BAT_ERR_OUT_OF_CONTROL	0x07
#define BAT_ERR_ID_FAIL		0x09
#define BAT_ERR_ACR_FAIL	0x10
#define BAT_ADDR_MFR_TYPE	0x5F
static int olpc_ac_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property olpc_ac_props[] = ;
static struct power_supply olpc_ac = ;
static char bat_serial[17];
static int olpc_bat_get_status(union power_supply_propval *val, uint8_t ec_byte)
static int olpc_bat_get_health(union power_supply_propval *val)
static int olpc_bat_get_mfr(union power_supply_propval *val)
static int olpc_bat_get_tech(union power_supply_propval *val)
static int olpc_bat_get_charge_full_design(union power_supply_propval *val)
static int olpc_bat_get_charge_now(union power_supply_propval *val)
static int olpc_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property olpc_xo1_bat_props[] = ;
static enum power_supply_property olpc_xo15_bat_props[] = ;
#define EEPROM_START	0x20
#define EEPROM_END	0x80
#define EEPROM_SIZE	(EEPROM_END - EEPROM_START)
static ssize_t olpc_bat_eeprom_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t off, size_t count)
static struct bin_attribute olpc_bat_eeprom = ;
static ssize_t olpc_bat_error_read(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute olpc_bat_error = ;
static struct platform_device *bat_pdev;
static struct power_supply olpc_bat = ;
void olpc_battery_trigger_uevent(unsigned long cause)
static int __init olpc_bat_init(void)
static void __exit olpc_bat_exit(void)
module_init(olpc_bat_init);
module_exit(olpc_bat_exit);
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Battery driver for One Laptop Per Child 'XO' machine");
