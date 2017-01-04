static DEFINE_MUTEX(bat_lock);
static struct work_struct bat_work;
struct tosa_bat ;
static struct tosa_bat tosa_bat_main;
static struct tosa_bat tosa_bat_jacket;
static unsigned long tosa_read_bat(struct tosa_bat *bat)
static unsigned long tosa_read_temp(struct tosa_bat *bat)
static int tosa_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static bool tosa_jacket_bat_is_present(struct tosa_bat *bat)
static void tosa_bat_external_power_changed(struct power_supply *psy)
static irqreturn_t tosa_bat_gpio_isr(int irq, void *data)
static void tosa_bat_update(struct tosa_bat *bat)
static void tosa_bat_work(struct work_struct *work)
static enum power_supply_property tosa_bat_main_props[] = ;
static enum power_supply_property tosa_bat_bu_props[] = ;
static struct tosa_bat tosa_bat_main = ;
static struct tosa_bat tosa_bat_jacket = ;
static struct tosa_bat tosa_bat_bu = ;
static struct  gpios[] = ;
static int tosa_bat_suspend(struct platform_device *dev, pm_message_t state)
static int tosa_bat_resume(struct platform_device *dev)
#define tosa_bat_suspend NULL
#define tosa_bat_resume NULL
static int __devinit tosa_bat_probe(struct platform_device *dev)
static int __devexit tosa_bat_remove(struct platform_device *dev)
static struct platform_driver tosa_bat_driver = ;
static int __init tosa_bat_init(void)
static void __exit tosa_bat_exit(void)
module_init(tosa_bat_init);
module_exit(tosa_bat_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmitry Baryshkov");
MODULE_DESCRIPTION("Tosa battery driver");
MODULE_ALIAS("platform:wm97xx-battery");
