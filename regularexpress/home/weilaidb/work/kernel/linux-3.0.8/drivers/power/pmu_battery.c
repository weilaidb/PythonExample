static struct pmu_battery_dev  *pbats[PMU_MAX_BATTERIES];
#define to_pmu_battery_dev(x) container_of(x, struct pmu_battery_dev, bat)
static int pmu_get_ac_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property pmu_ac_props[] = ;
static struct power_supply pmu_ac = ;
static char *pmu_batt_types[] = ;
static char *pmu_bat_get_model_name(struct pmu_battery_info *pbi)
static int pmu_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property pmu_bat_props[] = ;
static struct platform_device *bat_pdev;
static int __init pmu_bat_init(void)
static void __exit pmu_bat_exit(void)
module_init(pmu_bat_init);
module_exit(pmu_bat_exit);
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PMU battery driver");
