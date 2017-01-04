static int ac_online			= 1;
static int battery_status		= POWER_SUPPLY_STATUS_DISCHARGING;
static int battery_health		= POWER_SUPPLY_HEALTH_GOOD;
static int battery_present		= 1;
static int battery_technology		= POWER_SUPPLY_TECHNOLOGY_LION;
static int battery_capacity		= 50;
static int test_power_get_ac_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int test_power_get_battery_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property test_power_ac_props[] = ;
static enum power_supply_property test_power_battery_props[] = ;
static char *test_power_ac_supplied_to[] = ;
static struct power_supply test_power_supplies[] = ;
static int __init test_power_init(void)
module_init(test_power_init);
static void __exit test_power_exit(void)
module_exit(test_power_exit);
#define MAX_KEYLENGTH 256
struct battery_property_map ;
static struct battery_property_map map_ac_online[] = ;
static struct battery_property_map map_status[] = ;
static struct battery_property_map map_health[] = ;
static struct battery_property_map map_present[] = ;
static struct battery_property_map map_technology[] = ;
static int map_get_value(struct battery_property_map *map, const char *key,
int def_val)
static const char *map_get_key(struct battery_property_map *map, int value,
const char *def_key)
static int param_set_ac_online(const char *key, const struct kernel_param *kp)
static int param_get_ac_online(char *buffer, const struct kernel_param *kp)
static int param_set_battery_status(const char *key,
const struct kernel_param *kp)
static int param_get_battery_status(char *buffer, const struct kernel_param *kp)
static int param_set_battery_health(const char *key,
const struct kernel_param *kp)
static int param_get_battery_health(char *buffer, const struct kernel_param *kp)
static int param_set_battery_present(const char *key,
const struct kernel_param *kp)
static int param_get_battery_present(char *buffer,
const struct kernel_param *kp)
static int param_set_battery_technology(const char *key,
const struct kernel_param *kp)
static int param_get_battery_technology(char *buffer,
const struct kernel_param *kp)
static int param_set_battery_capacity(const char *key,
const struct kernel_param *kp)
#define param_get_battery_capacity param_get_int
static struct kernel_param_ops param_ops_ac_online = ;
static struct kernel_param_ops param_ops_battery_status = ;
static struct kernel_param_ops param_ops_battery_present = ;
static struct kernel_param_ops param_ops_battery_technology = ;
static struct kernel_param_ops param_ops_battery_health = ;
static struct kernel_param_ops param_ops_battery_capacity = ;
#define param_check_ac_online(name, p) __param_check(name, p, void);
#define param_check_battery_status(name, p) __param_check(name, p, void);
#define param_check_battery_present(name, p) __param_check(name, p, void);
#define param_check_battery_technology(name, p) __param_check(name, p, void);
#define param_check_battery_health(name, p) __param_check(name, p, void);
#define param_check_battery_capacity(name, p) __param_check(name, p, void);
module_param(ac_online, ac_online, 0644);
MODULE_PARM_DESC(ac_online, "AC charging state <on|off>");
module_param(battery_status, battery_status, 0644);
MODULE_PARM_DESC(battery_status,
"battery status <charging|discharging|not-charging|full>");
module_param(battery_present, battery_present, 0644);
MODULE_PARM_DESC(battery_present,
"battery presence state <good|overheat|dead|overvoltage|failure>");
module_param(battery_technology, battery_technology, 0644);
MODULE_PARM_DESC(battery_technology,
"battery technology <NiMH|LION|LIPO|LiFe|NiCd|LiMn>");
module_param(battery_health, battery_health, 0644);
MODULE_PARM_DESC(battery_health,
"battery health state <good|overheat|dead|overvoltage|failure>");
module_param(battery_capacity, battery_capacity, 0644);
MODULE_PARM_DESC(battery_capacity, "battery capacity (percentage)");
MODULE_DESCRIPTION("Power supply driver for testing");
MODULE_AUTHOR("Anton Vorontsov <cbouatmailru@gmail.com>");
MODULE_LICENSE("GPL");
