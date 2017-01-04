static DEFINE_MUTEX(bat_lock);
static struct work_struct bat_work;
static struct mutex work_lock;
static int bat_status = POWER_SUPPLY_STATUS_UNKNOWN;
static enum power_supply_property *prop;
static unsigned long wm97xx_read_bat(struct power_supply *bat_ps)
static unsigned long wm97xx_read_temp(struct power_supply *bat_ps)
static int wm97xx_bat_get_property(struct power_supply *bat_ps,
enum power_supply_property psp,
union power_supply_propval *val)
static void wm97xx_bat_external_power_changed(struct power_supply *bat_ps)
static void wm97xx_bat_update(struct power_supply *bat_ps)
static struct power_supply bat_ps = ;
static void wm97xx_bat_work(struct work_struct *work)
static irqreturn_t wm97xx_chrg_irq(int irq, void *data)
static int wm97xx_bat_suspend(struct device *dev)
static int wm97xx_bat_resume(struct device *dev)
static const struct dev_pm_ops wm97xx_bat_pm_ops = ;
static int __devinit wm97xx_bat_probe(struct platform_device *dev)
static int __devexit wm97xx_bat_remove(struct platform_device *dev)
static struct platform_driver wm97xx_bat_driver = ;
static int __init wm97xx_bat_init(void)
static void __exit wm97xx_bat_exit(void)
module_init(wm97xx_bat_init);
module_exit(wm97xx_bat_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("WM97xx battery driver");
