struct wm831x_power ;
static int wm831x_power_check_online(struct wm831x *wm831x, int supply,
union power_supply_propval *val)
static int wm831x_power_read_voltage(struct wm831x *wm831x,
enum wm831x_auxadc src,
union power_supply_propval *val)
static int wm831x_wall_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm831x_wall_props[] = ;
static int wm831x_usb_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm831x_usb_props[] = ;
struct chg_map ;
static struct chg_map trickle_ilims[] = ;
static struct chg_map vsels[] = ;
static struct chg_map fast_ilims[] = ;
static struct chg_map eoc_iterms[] = ;
static struct chg_map chg_times[] = ;
static void wm831x_battey_apply_config(struct wm831x *wm831x,
struct chg_map *map, int count, int val,
int *reg, const char *name,
const char *units)
static void wm831x_config_battery(struct wm831x *wm831x)
static int wm831x_bat_check_status(struct wm831x *wm831x, int *status)
static int wm831x_bat_check_type(struct wm831x *wm831x, int *type)
static int wm831x_bat_check_health(struct wm831x *wm831x, int *health)
static int wm831x_bat_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm831x_bat_props[] = ;
static const char *wm831x_bat_irqs[] = ;
static irqreturn_t wm831x_bat_irq(int irq, void *data)
static irqreturn_t wm831x_syslo_irq(int irq, void *data)
static irqreturn_t wm831x_pwr_src_irq(int irq, void *data)
static __devinit int wm831x_power_probe(struct platform_device *pdev)
static __devexit int wm831x_power_remove(struct platform_device *pdev)
static struct platform_driver wm831x_power_driver = ;
static int __init wm831x_power_init(void)
module_init(wm831x_power_init);
static void __exit wm831x_power_exit(void)
module_exit(wm831x_power_exit);
MODULE_DESCRIPTION("Power supply driver for WM831x PMICs");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-power");
