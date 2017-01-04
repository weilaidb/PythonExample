#define PSY_PROP(psy, prop, val) psy->get_property(psy, \
POWER_SUPPLY_PROP_##prop, val)
#define _MPSY_PROP(prop, val) main_battery->get_property(main_battery, \
prop, val)
#define MPSY_PROP(prop, val) _MPSY_PROP(POWER_SUPPLY_PROP_##prop, val)
static DEFINE_MUTEX(apm_mutex);
static struct power_supply *main_battery;
enum apm_source ;
struct find_bat_param ;
static int __find_main_battery(struct device *dev, void *data)
static void find_main_battery(void)
static int do_calculate_time(int status, enum apm_source source)
static int calculate_time(int status)
static int calculate_capacity(enum apm_source source)
static void apm_battery_apm_get_power_status(struct apm_power_info *info)
static int __init apm_battery_init(void)
static void __exit apm_battery_exit(void)
module_init(apm_battery_init);
module_exit(apm_battery_exit);
MODULE_AUTHOR("Eugeny Boger <eugenyboger@dgap.mipt.ru>");
MODULE_DESCRIPTION("APM emulation driver for battery monitoring class");
MODULE_LICENSE("GPL");
