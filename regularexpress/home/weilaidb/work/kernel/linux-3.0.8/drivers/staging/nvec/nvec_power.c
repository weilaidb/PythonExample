struct nvec_power
;
enum ;
enum ;
struct bat_response ;
static struct power_supply nvec_bat_psy;
static struct power_supply nvec_psy;
static int nvec_power_notifier(struct notifier_block *nb,
unsigned long event_type, void *data)
static const int bat_init[] =
;
static void get_bat_mfg_data(struct nvec_power *power)
static int nvec_power_bat_notifier(struct notifier_block *nb,
unsigned long event_type, void *data)
static int nvec_power_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int nvec_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property nvec_power_props[] = ;
static enum power_supply_property nvec_battery_props[] = ;
static char *nvec_power_supplied_to[] = ;
static struct power_supply nvec_bat_psy = ;
static struct power_supply nvec_psy = ;
static int counter = 0;
static int const bat_iter[] =
;
static void nvec_power_poll(struct work_struct *work)
;
static int __devinit nvec_power_probe(struct platform_device *pdev)
static struct platform_driver nvec_power_driver = ;
static int __init nvec_power_init(void)
module_init(nvec_power_init);
MODULE_AUTHOR("Ilya Petrov <ilya.muromec@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("NVEC battery and AC driver");
MODULE_ALIAS("platform:nvec-power");
