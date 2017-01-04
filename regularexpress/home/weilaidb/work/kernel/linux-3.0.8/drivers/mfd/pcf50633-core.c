static int __pcf50633_read(struct pcf50633 *pcf, u8 reg, int num, u8 *data)
static int __pcf50633_write(struct pcf50633 *pcf, u8 reg, int num, u8 *data)
int pcf50633_read_block(struct pcf50633 *pcf, u8 reg,
int nr_regs, u8 *data)
EXPORT_SYMBOL_GPL(pcf50633_read_block);
int pcf50633_write_block(struct pcf50633 *pcf , u8 reg,
int nr_regs, u8 *data)
EXPORT_SYMBOL_GPL(pcf50633_write_block);
u8 pcf50633_reg_read(struct pcf50633 *pcf, u8 reg)
EXPORT_SYMBOL_GPL(pcf50633_reg_read);
int pcf50633_reg_write(struct pcf50633 *pcf, u8 reg, u8 val)
EXPORT_SYMBOL_GPL(pcf50633_reg_write);
int pcf50633_reg_set_bit_mask(struct pcf50633 *pcf, u8 reg, u8 mask, u8 val)
EXPORT_SYMBOL_GPL(pcf50633_reg_set_bit_mask);
int pcf50633_reg_clear_bits(struct pcf50633 *pcf, u8 reg, u8 val)
EXPORT_SYMBOL_GPL(pcf50633_reg_clear_bits);
static ssize_t show_dump_regs(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(dump_regs, 0400, show_dump_regs, NULL);
static ssize_t show_resume_reason(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(resume_reason, 0400, show_resume_reason, NULL);
static struct attribute *pcf_sysfs_entries[] = ;
static struct attribute_group pcf_attr_group = ;
static void
pcf50633_client_dev_register(struct pcf50633 *pcf, const char *name,
struct platform_device **pdev)
static int pcf50633_suspend(struct device *dev)
static int pcf50633_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(pcf50633_pm, pcf50633_suspend, pcf50633_resume);
static int __devinit pcf50633_probe(struct i2c_client *client,
const struct i2c_device_id *ids)
static int __devexit pcf50633_remove(struct i2c_client *client)
static const struct i2c_device_id pcf50633_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, pcf50633_id_table);
static struct i2c_driver pcf50633_driver = ;
static int __init pcf50633_init(void)
static void __exit pcf50633_exit(void)
MODULE_DESCRIPTION("I2C chip driver for NXP PCF50633 PMU");
MODULE_AUTHOR("Harald Welte <laforge@openmoko.org>");
MODULE_LICENSE("GPL");
subsys_initcall(pcf50633_init);
module_exit(pcf50633_exit);
