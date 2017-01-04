static LIST_HEAD(abx500_list);
struct abx500_device_entry ;
static void lookup_ops(struct device *dev, struct abx500_ops **ops)
int abx500_register_ops(struct device *dev, struct abx500_ops *ops)
EXPORT_SYMBOL(abx500_register_ops);
void abx500_remove_ops(struct device *dev)
EXPORT_SYMBOL(abx500_remove_ops);
int abx500_set_register_interruptible(struct device *dev, u8 bank, u8 reg,
u8 value)
EXPORT_SYMBOL(abx500_set_register_interruptible);
int abx500_get_register_interruptible(struct device *dev, u8 bank, u8 reg,
u8 *value)
EXPORT_SYMBOL(abx500_get_register_interruptible);
int abx500_get_register_page_interruptible(struct device *dev, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs)
EXPORT_SYMBOL(abx500_get_register_page_interruptible);
int abx500_mask_and_set_register_interruptible(struct device *dev, u8 bank,
u8 reg, u8 bitmask, u8 bitvalues)
EXPORT_SYMBOL(abx500_mask_and_set_register_interruptible);
int abx500_get_chip_id(struct device *dev)
EXPORT_SYMBOL(abx500_get_chip_id);
int abx500_event_registers_startup_state_get(struct device *dev, u8 *event)
EXPORT_SYMBOL(abx500_event_registers_startup_state_get);
int abx500_startup_irq_enabled(struct device *dev, unsigned int irq)
EXPORT_SYMBOL(abx500_startup_irq_enabled);
MODULE_AUTHOR("Mattias Wallin <mattias.wallin@stericsson.com>");
MODULE_DESCRIPTION("ABX500 core driver");
MODULE_LICENSE("GPL");
