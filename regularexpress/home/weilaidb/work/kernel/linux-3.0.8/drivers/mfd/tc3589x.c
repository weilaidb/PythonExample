#define TC3589x_CLKMODE_MODCTL_SLEEP		0x0
#define TC3589x_CLKMODE_MODCTL_OPERATION	(1 << 0)
int tc3589x_reg_read(struct tc3589x *tc3589x, u8 reg)
EXPORT_SYMBOL_GPL(tc3589x_reg_read);
int tc3589x_reg_write(struct tc3589x *tc3589x, u8 reg, u8 data)
EXPORT_SYMBOL_GPL(tc3589x_reg_write);
int tc3589x_block_read(struct tc3589x *tc3589x, u8 reg, u8 length, u8 *values)
EXPORT_SYMBOL_GPL(tc3589x_block_read);
int tc3589x_block_write(struct tc3589x *tc3589x, u8 reg, u8 length,
const u8 *values)
EXPORT_SYMBOL_GPL(tc3589x_block_write);
int tc3589x_set_bits(struct tc3589x *tc3589x, u8 reg, u8 mask, u8 val)
EXPORT_SYMBOL_GPL(tc3589x_set_bits);
static struct resource gpio_resources[] = ;
static struct resource keypad_resources[] = ;
static struct mfd_cell tc3589x_dev_gpio[] = ;
static struct mfd_cell tc3589x_dev_keypad[] = ;
static irqreturn_t tc3589x_irq(int irq, void *data)
static int tc3589x_irq_init(struct tc3589x *tc3589x)
static void tc3589x_irq_remove(struct tc3589x *tc3589x)
static int tc3589x_chip_init(struct tc3589x *tc3589x)
static int __devinit tc3589x_device_init(struct tc3589x *tc3589x)
static int __devinit tc3589x_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit tc3589x_remove(struct i2c_client *client)
static int tc3589x_suspend(struct device *dev)
static int tc3589x_resume(struct device *dev)
static const SIMPLE_DEV_PM_OPS(tc3589x_dev_pm_ops, tc3589x_suspend,
tc3589x_resume);
static const struct i2c_device_id tc3589x_id[] = ;
MODULE_DEVICE_TABLE(i2c, tc3589x_id);
static struct i2c_driver tc3589x_driver = ;
static int __init tc3589x_init(void)
subsys_initcall(tc3589x_init);
static void __exit tc3589x_exit(void)
module_exit(tc3589x_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("TC3589x MFD core driver");
MODULE_AUTHOR("Hanumath Prasad, Rabin Vincent");
