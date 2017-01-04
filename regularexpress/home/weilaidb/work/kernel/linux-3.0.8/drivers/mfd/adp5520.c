struct adp5520_chip ;
static int __adp5520_read(struct i2c_client *client,
int reg, uint8_t *val)
static int __adp5520_write(struct i2c_client *client,
int reg, uint8_t val)
static int __adp5520_ack_bits(struct i2c_client *client, int reg,
uint8_t bit_mask)
int adp5520_write(struct device *dev, int reg, uint8_t val)
EXPORT_SYMBOL_GPL(adp5520_write);
int adp5520_read(struct device *dev, int reg, uint8_t *val)
EXPORT_SYMBOL_GPL(adp5520_read);
int adp5520_set_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(adp5520_set_bits);
int adp5520_clr_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(adp5520_clr_bits);
int adp5520_register_notifier(struct device *dev, struct notifier_block *nb,
unsigned int events)
EXPORT_SYMBOL_GPL(adp5520_register_notifier);
int adp5520_unregister_notifier(struct device *dev, struct notifier_block *nb,
unsigned int events)
EXPORT_SYMBOL_GPL(adp5520_unregister_notifier);
static irqreturn_t adp5520_irq_thread(int irq, void *data)
static int __remove_subdev(struct device *dev, void *unused)
static int adp5520_remove_subdevs(struct adp5520_chip *chip)
static int __devinit adp5520_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp5520_remove(struct i2c_client *client)
static int adp5520_suspend(struct device *dev)
static int adp5520_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(adp5520_pm, adp5520_suspend, adp5520_resume);
static const struct i2c_device_id adp5520_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp5520_id);
static struct i2c_driver adp5520_driver = ;
static int __init adp5520_init(void)
module_init(adp5520_init);
static void __exit adp5520_exit(void)
module_exit(adp5520_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP5520(01) PMIC-MFD Driver");
MODULE_LICENSE("GPL");
