static inline unsigned int get_irq_flags(struct resource *res)
static struct device *dev;
static struct pda_power_pdata *pdata;
static struct resource *ac_irq, *usb_irq;
static struct timer_list charger_timer;
static struct timer_list supply_timer;
static struct timer_list polling_timer;
static int polling;
static struct otg_transceiver *transceiver;
static struct regulator *ac_draw;
enum ;
static int new_ac_status = -1;
static int new_usb_status = -1;
static int ac_status = -1;
static int usb_status = -1;
static int pda_power_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property pda_power_props[] = ;
static char *pda_power_supplied_to[] = ;
static struct power_supply pda_psy_ac = ;
static struct power_supply pda_psy_usb = ;
static void update_status(void)
static void update_charger(void)
static void supply_timer_func(unsigned long unused)
static void psy_changed(void)
static void charger_timer_func(unsigned long unused)
static irqreturn_t power_changed_isr(int irq, void *power_supply)
static void polling_timer_func(unsigned long unused)
static int otg_is_usb_online(void)
static int pda_power_probe(struct platform_device *pdev)
static int pda_power_remove(struct platform_device *pdev)
static int ac_wakeup_enabled;
static int usb_wakeup_enabled;
static int pda_power_suspend(struct platform_device *pdev, pm_message_t state)
static int pda_power_resume(struct platform_device *pdev)
#define pda_power_suspend NULL
#define pda_power_resume NULL
MODULE_ALIAS("platform:pda-power");
static struct platform_driver pda_power_pdrv = ;
static int __init pda_power_init(void)
static void __exit pda_power_exit(void)
module_init(pda_power_init);
module_exit(pda_power_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anton Vorontsov <cbou@mail.ru>");
