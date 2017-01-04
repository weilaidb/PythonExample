static int __stmpe_enable(struct stmpe *stmpe, unsigned int blocks)
static int __stmpe_disable(struct stmpe *stmpe, unsigned int blocks)
static int __stmpe_reg_read(struct stmpe *stmpe, u8 reg)
static int __stmpe_reg_write(struct stmpe *stmpe, u8 reg, u8 val)
static int __stmpe_set_bits(struct stmpe *stmpe, u8 reg, u8 mask, u8 val)
static int __stmpe_block_read(struct stmpe *stmpe, u8 reg, u8 length,
u8 *values)
static int __stmpe_block_write(struct stmpe *stmpe, u8 reg, u8 length,
const u8 *values)
int stmpe_enable(struct stmpe *stmpe, unsigned int blocks)
EXPORT_SYMBOL_GPL(stmpe_enable);
int stmpe_disable(struct stmpe *stmpe, unsigned int blocks)
EXPORT_SYMBOL_GPL(stmpe_disable);
int stmpe_reg_read(struct stmpe *stmpe, u8 reg)
EXPORT_SYMBOL_GPL(stmpe_reg_read);
int stmpe_reg_write(struct stmpe *stmpe, u8 reg, u8 val)
EXPORT_SYMBOL_GPL(stmpe_reg_write);
int stmpe_set_bits(struct stmpe *stmpe, u8 reg, u8 mask, u8 val)
EXPORT_SYMBOL_GPL(stmpe_set_bits);
int stmpe_block_read(struct stmpe *stmpe, u8 reg, u8 length, u8 *values)
EXPORT_SYMBOL_GPL(stmpe_block_read);
int stmpe_block_write(struct stmpe *stmpe, u8 reg, u8 length,
const u8 *values)
EXPORT_SYMBOL_GPL(stmpe_block_write);
int stmpe_set_altfunc(struct stmpe *stmpe, u32 pins, enum stmpe_block block)
EXPORT_SYMBOL_GPL(stmpe_set_altfunc);
static struct resource stmpe_gpio_resources[] = ;
static struct mfd_cell stmpe_gpio_cell = ;
static struct resource stmpe_keypad_resources[] = ;
static struct mfd_cell stmpe_keypad_cell = ;
static struct resource stmpe_ts_resources[] = ;
static struct mfd_cell stmpe_ts_cell = ;
static const u8 stmpe811_regs[] = ;
static struct stmpe_variant_block stmpe811_blocks[] = ;
static int stmpe811_enable(struct stmpe *stmpe, unsigned int blocks,
bool enable)
static int stmpe811_get_altfunc(struct stmpe *stmpe, enum stmpe_block block)
static struct stmpe_variant_info stmpe811 = ;
static const u8 stmpe1601_regs[] = ;
static struct stmpe_variant_block stmpe1601_blocks[] = ;
static const int stmpe_autosleep_delay[] = ;
static int stmpe_round_timeout(int timeout)
static int stmpe_autosleep(struct stmpe *stmpe, int autosleep_timeout)
static int stmpe1601_autosleep(struct stmpe *stmpe,
int autosleep_timeout)
static int stmpe1601_enable(struct stmpe *stmpe, unsigned int blocks,
bool enable)
static int stmpe1601_get_altfunc(struct stmpe *stmpe, enum stmpe_block block)
static struct stmpe_variant_info stmpe1601 = ;
static const u8 stmpe24xx_regs[] = ;
static struct stmpe_variant_block stmpe24xx_blocks[] = ;
static int stmpe24xx_enable(struct stmpe *stmpe, unsigned int blocks,
bool enable)
static int stmpe24xx_get_altfunc(struct stmpe *stmpe, enum stmpe_block block)
static struct stmpe_variant_info stmpe2401 = ;
static struct stmpe_variant_info stmpe2403 = ;
static struct stmpe_variant_info *stmpe_variant_info[] = ;
static irqreturn_t stmpe_irq(int irq, void *data)
static void stmpe_irq_lock(struct irq_data *data)
static void stmpe_irq_sync_unlock(struct irq_data *data)
static void stmpe_irq_mask(struct irq_data *data)
static void stmpe_irq_unmask(struct irq_data *data)
static struct irq_chip stmpe_irq_chip = ;
static int __devinit stmpe_irq_init(struct stmpe *stmpe)
static void stmpe_irq_remove(struct stmpe *stmpe)
static int __devinit stmpe_chip_init(struct stmpe *stmpe)
static int __devinit stmpe_add_device(struct stmpe *stmpe,
struct mfd_cell *cell, int irq)
static int __devinit stmpe_devices_init(struct stmpe *stmpe)
static int stmpe_suspend(struct device *dev)
static int stmpe_resume(struct device *dev)
static int __devinit stmpe_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit stmpe_remove(struct i2c_client *client)
static const struct i2c_device_id stmpe_id[] = ;
MODULE_DEVICE_TABLE(i2c, stmpe_id);
static const struct dev_pm_ops stmpe_dev_pm_ops = ;
static struct i2c_driver stmpe_driver = ;
static int __init stmpe_init(void)
subsys_initcall(stmpe_init);
static void __exit stmpe_exit(void)
module_exit(stmpe_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("STMPE MFD core driver");
MODULE_AUTHOR("Rabin Vincent <rabin.vincent@stericsson.com>");
