struct wm831x_backup ;
static int wm831x_backup_read_voltage(struct wm831x *wm831x,
enum wm831x_auxadc src,
union power_supply_propval *val)
static void wm831x_config_backup(struct wm831x *wm831x)
static int wm831x_backup_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property wm831x_backup_props[] = ;
static __devinit int wm831x_backup_probe(struct platform_device *pdev)
static __devexit int wm831x_backup_remove(struct platform_device *pdev)
static struct platform_driver wm831x_backup_driver = ;
static int __init wm831x_backup_init(void)
module_init(wm831x_backup_init);
static void __exit wm831x_backup_exit(void)
module_exit(wm831x_backup_exit);
MODULE_DESCRIPTION("Backup battery charger driver for WM831x PMICs");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-backup");
