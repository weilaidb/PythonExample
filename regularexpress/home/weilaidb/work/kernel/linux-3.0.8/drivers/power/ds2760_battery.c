struct ds2760_device_info ;
static unsigned int cache_time = 1000;
module_param(cache_time, uint, 0644);
MODULE_PARM_DESC(cache_time, "cache time in milliseconds");
static unsigned int pmod_enabled;
module_param(pmod_enabled, bool, 0644);
MODULE_PARM_DESC(pmod_enabled, "PMOD enable bit");
static unsigned int rated_capacity;
module_param(rated_capacity, uint, 0644);
MODULE_PARM_DESC(rated_capacity, "rated battery capacity, 10*mAh or index");
static unsigned int current_accum;
module_param(current_accum, uint, 0644);
MODULE_PARM_DESC(current_accum, "current accumulator value");
static int rated_capacities[] = ;
static int battery_interpolate(int array[], int temp)
static int ds2760_battery_read_status(struct ds2760_device_info *di)
static void ds2760_battery_set_current_accum(struct ds2760_device_info *di,
unsigned int acr_val)
static void ds2760_battery_update_status(struct ds2760_device_info *di)
static void ds2760_battery_write_status(struct ds2760_device_info *di,
char status)
static void ds2760_battery_write_rated_capacity(struct ds2760_device_info *di,
unsigned char rated_capacity)
static void ds2760_battery_write_active_full(struct ds2760_device_info *di,
int active_full)
static void ds2760_battery_work(struct work_struct *work)
#define to_ds2760_device_info(x) container_of((x), struct ds2760_device_info, \
bat);
static void ds2760_battery_external_power_changed(struct power_supply *psy)
static void ds2760_battery_set_charged_work(struct work_struct *work)
static void ds2760_battery_set_charged(struct power_supply *psy)
static int ds2760_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int ds2760_battery_set_property(struct power_supply *psy,
enum power_supply_property psp,
const union power_supply_propval *val)
static int ds2760_battery_property_is_writeable(struct power_supply *psy,
enum power_supply_property psp)
static enum power_supply_property ds2760_battery_props[] = ;
static int ds2760_battery_probe(struct platform_device *pdev)
static int ds2760_battery_remove(struct platform_device *pdev)
static int ds2760_battery_suspend(struct platform_device *pdev,
pm_message_t state)
static int ds2760_battery_resume(struct platform_device *pdev)
#define ds2760_battery_suspend NULL
#define ds2760_battery_resume NULL
MODULE_ALIAS("platform:ds2760-battery");
static struct platform_driver ds2760_battery_driver = ;
static int __init ds2760_battery_init(void)
static void __exit ds2760_battery_exit(void)
module_init(ds2760_battery_init);
module_exit(ds2760_battery_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Szabolcs Gyurko <szabolcs.gyurko@tlt.hu>, "
"Matt Reimer <mreimer@vpop.net>, "
"Anton Vorontsov <cbou@mail.ru>");
MODULE_DESCRIPTION("ds2760 battery driver");
