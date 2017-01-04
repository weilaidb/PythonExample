static int wm8350_read_battery_uvolts(struct wm8350 *wm8350)
static int wm8350_read_line_uvolts(struct wm8350 *wm8350)
static int wm8350_read_usb_uvolts(struct wm8350 *wm8350)
#define WM8350_BATT_SUPPLY	1
#define WM8350_USB_SUPPLY	2
#define WM8350_LINE_SUPPLY	4
static inline int wm8350_charge_time_min(struct wm8350 *wm8350, int min)
static int wm8350_get_supplies(struct wm8350 *wm8350)
static int wm8350_charger_config(struct wm8350 *wm8350,
struct wm8350_charger_policy *policy)
static int wm8350_batt_status(struct wm8350 *wm8350)
static ssize_t charger_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(charger_state, 0444, charger_state_show, NULL);
static irqreturn_t wm8350_charger_handler(int irq, void *data)
static int wm8350_ac_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm8350_ac_props[] = ;
static int wm8350_usb_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm8350_usb_props[] = ;
static int wm8350_bat_check_health(struct wm8350 *wm8350)
static int wm8350_bat_get_charge_type(struct wm8350 *wm8350)
static int wm8350_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm8350_bat_props[] = ;
static void wm8350_init_charger(struct wm8350 *wm8350)
static void free_charger_irq(struct wm8350 *wm8350)
static __devinit int wm8350_power_probe(struct platform_device *pdev)
static __devexit int wm8350_power_remove(struct platform_device *pdev)
static struct platform_driver wm8350_power_driver = ;
static int __init wm8350_power_init(void)
module_init(wm8350_power_init);
static void __exit wm8350_power_exit(void)
module_exit(wm8350_power_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Power supply driver for WM8350");
MODULE_ALIAS("platform:wm8350-power");
