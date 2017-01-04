static DEFINE_MUTEX(bat_lock);
static struct work_struct bat_work;
static struct ucb1x00 *ucb;
struct collie_bat ;
static struct collie_bat collie_bat_main;
static unsigned long collie_read_bat(struct collie_bat *bat)
static unsigned long collie_read_temp(struct collie_bat *bat)
static int collie_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static void collie_bat_external_power_changed(struct power_supply *psy)
static irqreturn_t collie_bat_gpio_isr(int irq, void *data)
static void collie_bat_update(struct collie_bat *bat)
static void collie_bat_work(struct work_struct *work)
static enum power_supply_property collie_bat_main_props[] = ;
static enum power_supply_property collie_bat_bu_props[] = ;
static struct collie_bat collie_bat_main = ;
static struct collie_bat collie_bat_bu = ;
static struct  gpios[] = ;
static int collie_bat_suspend(struct ucb1x00_dev *dev, pm_message_t state)
static int collie_bat_resume(struct ucb1x00_dev *dev)
#define collie_bat_suspend NULL
#define collie_bat_resume NULL
static int __devinit collie_bat_probe(struct ucb1x00_dev *dev)
static void __devexit collie_bat_remove(struct ucb1x00_dev *dev)
static struct ucb1x00_driver collie_bat_driver = ;
static int __init collie_bat_init(void)
static void __exit collie_bat_exit(void)
module_init(collie_bat_init);
module_exit(collie_bat_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Kunze");
MODULE_DESCRIPTION("Collie battery driver");
