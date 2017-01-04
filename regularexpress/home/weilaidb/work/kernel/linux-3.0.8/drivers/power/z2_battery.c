#define	Z2_DEFAULT_NAME	"Z2"
struct z2_charger ;
static unsigned long z2_read_bat(struct z2_charger *charger)
static int z2_batt_get_property(struct power_supply *batt_ps,
enum power_supply_property psp,
union power_supply_propval *val)
static void z2_batt_ext_power_changed(struct power_supply *batt_ps)
static void z2_batt_update(struct z2_charger *charger)
static void z2_batt_work(struct work_struct *work)
static irqreturn_t z2_charge_switch_irq(int irq, void *devid)
static int z2_batt_ps_init(struct z2_charger *charger, int props)
static int __devinit z2_batt_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit z2_batt_remove(struct i2c_client *client)
static int z2_batt_suspend(struct device *dev)
static int z2_batt_resume(struct device *dev)
static const struct dev_pm_ops z2_battery_pm_ops = ;
#define	Z2_BATTERY_PM_OPS	(&z2_battery_pm_ops)
#define	Z2_BATTERY_PM_OPS	(NULL)
static const struct i2c_device_id z2_batt_id[] = ;
MODULE_DEVICE_TABLE(i2c, z2_batt_id);
static struct i2c_driver z2_batt_driver = ;
static int __init z2_batt_init(void)
static void __exit z2_batt_exit(void)
module_init(z2_batt_init);
module_exit(z2_batt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter Edwards <sweetlilmre@gmail.com>");
MODULE_DESCRIPTION("Zipit Z2 battery driver");
