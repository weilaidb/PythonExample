struct i2c_smbus_alert ;
struct alert_data ;
static int smbus_do_alert(struct device *dev, void *addrp)
static void smbus_alert(struct work_struct *work)
static irqreturn_t smbalert_irq(int irq, void *d)
static int smbalert_probe(struct i2c_client *ara,
const struct i2c_device_id *id)
static int smbalert_remove(struct i2c_client *ara)
static const struct i2c_device_id smbalert_ids[] = ;
MODULE_DEVICE_TABLE(i2c, smbalert_ids);
static struct i2c_driver smbalert_driver = ;
struct i2c_client *i2c_setup_smbus_alert(struct i2c_adapter *adapter,
struct i2c_smbus_alert_setup *setup)
EXPORT_SYMBOL_GPL(i2c_setup_smbus_alert);
int i2c_handle_smbus_alert(struct i2c_client *ara)
EXPORT_SYMBOL_GPL(i2c_handle_smbus_alert);
static int __init i2c_smbus_init(void)
static void __exit i2c_smbus_exit(void)
module_init(i2c_smbus_init);
module_exit(i2c_smbus_exit);
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("SMBus protocol extensions support");
MODULE_LICENSE("GPL");
