#define DRV_NAME "pcf8574_keypad"
static const unsigned char pcf8574_kp_btncode[] = ;
struct kp_data ;
static short read_state(struct kp_data *lp)
static irqreturn_t pcf8574_kp_irq_handler(int irq, void *dev_id)
static int __devinit pcf8574_kp_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int __devexit pcf8574_kp_remove(struct i2c_client *client)
static int pcf8574_kp_resume(struct device *dev)
static int pcf8574_kp_suspend(struct device *dev)
static const struct dev_pm_ops pcf8574_kp_pm_ops = ;
# define pcf8574_kp_resume  NULL
# define pcf8574_kp_suspend NULL
static const struct i2c_device_id pcf8574_kp_id[] = ;
MODULE_DEVICE_TABLE(i2c, pcf8574_kp_id);
static struct i2c_driver pcf8574_kp_driver = ;
static int __init pcf8574_kp_init(void)
module_init(pcf8574_kp_init);
static void __exit pcf8574_kp_exit(void)
module_exit(pcf8574_kp_exit);
MODULE_AUTHOR("Michael Hennerich");
MODULE_DESCRIPTION("Keypad input driver for 16 keys connected to PCF8574");
MODULE_LICENSE("GPL");
