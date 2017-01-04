#define DA9030_CHIP_ID		0x00
#define DA9030_EVENT_A		0x01
#define DA9030_EVENT_B		0x02
#define DA9030_EVENT_C		0x03
#define DA9030_STATUS		0x04
#define DA9030_IRQ_MASK_A	0x05
#define DA9030_IRQ_MASK_B	0x06
#define DA9030_IRQ_MASK_C	0x07
#define DA9030_SYS_CTRL_A	0x08
#define DA9030_SYS_CTRL_B	0x09
#define DA9030_FAULT_LOG	0x0a
#define DA9034_CHIP_ID		0x00
#define DA9034_EVENT_A		0x01
#define DA9034_EVENT_B		0x02
#define DA9034_EVENT_C		0x03
#define DA9034_EVENT_D		0x04
#define DA9034_STATUS_A		0x05
#define DA9034_STATUS_B		0x06
#define DA9034_IRQ_MASK_A	0x07
#define DA9034_IRQ_MASK_B	0x08
#define DA9034_IRQ_MASK_C	0x09
#define DA9034_IRQ_MASK_D	0x0a
#define DA9034_SYS_CTRL_A	0x0b
#define DA9034_SYS_CTRL_B	0x0c
#define DA9034_FAULT_LOG	0x0d
struct da903x_chip;
struct da903x_chip_ops ;
struct da903x_chip ;
static inline int __da903x_read(struct i2c_client *client,
int reg, uint8_t *val)
static inline int __da903x_reads(struct i2c_client *client, int reg,
int len, uint8_t *val)
static inline int __da903x_write(struct i2c_client *client,
int reg, uint8_t val)
static inline int __da903x_writes(struct i2c_client *client, int reg,
int len, uint8_t *val)
int da903x_register_notifier(struct device *dev, struct notifier_block *nb,
unsigned int events)
EXPORT_SYMBOL_GPL(da903x_register_notifier);
int da903x_unregister_notifier(struct device *dev, struct notifier_block *nb,
unsigned int events)
EXPORT_SYMBOL_GPL(da903x_unregister_notifier);
int da903x_write(struct device *dev, int reg, uint8_t val)
EXPORT_SYMBOL_GPL(da903x_write);
int da903x_writes(struct device *dev, int reg, int len, uint8_t *val)
EXPORT_SYMBOL_GPL(da903x_writes);
int da903x_read(struct device *dev, int reg, uint8_t *val)
EXPORT_SYMBOL_GPL(da903x_read);
int da903x_reads(struct device *dev, int reg, int len, uint8_t *val)
EXPORT_SYMBOL_GPL(da903x_reads);
int da903x_set_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(da903x_set_bits);
int da903x_clr_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(da903x_clr_bits);
int da903x_update(struct device *dev, int reg, uint8_t val, uint8_t mask)
EXPORT_SYMBOL_GPL(da903x_update);
int da903x_query_status(struct device *dev, unsigned int sbits)
EXPORT_SYMBOL(da903x_query_status);
static int __devinit da9030_init_chip(struct da903x_chip *chip)
static int da9030_unmask_events(struct da903x_chip *chip, unsigned int events)
static int da9030_mask_events(struct da903x_chip *chip, unsigned int events)
static int da9030_read_events(struct da903x_chip *chip, unsigned int *events)
static int da9030_read_status(struct da903x_chip *chip, unsigned int *status)
static int da9034_init_chip(struct da903x_chip *chip)
static int da9034_unmask_events(struct da903x_chip *chip, unsigned int events)
static int da9034_mask_events(struct da903x_chip *chip, unsigned int events)
static int da9034_read_events(struct da903x_chip *chip, unsigned int *events)
static int da9034_read_status(struct da903x_chip *chip, unsigned int *status)
static void da903x_irq_work(struct work_struct *work)
static irqreturn_t da903x_irq_handler(int irq, void *data)
static struct da903x_chip_ops da903x_ops[] = ;
static const struct i2c_device_id da903x_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, da903x_id_table);
static int __remove_subdev(struct device *dev, void *unused)
static int da903x_remove_subdevs(struct da903x_chip *chip)
static int __devinit da903x_add_subdevs(struct da903x_chip *chip,
struct da903x_platform_data *pdata)
static int __devinit da903x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit da903x_remove(struct i2c_client *client)
static struct i2c_driver da903x_driver = ;
static int __init da903x_init(void)
subsys_initcall(da903x_init);
static void __exit da903x_exit(void)
module_exit(da903x_exit);
MODULE_DESCRIPTION("PMIC Driver for Dialog Semiconductor DA9034");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>"
"Mike Rapoport <mike@compulab.co.il>");
MODULE_LICENSE("GPL");
