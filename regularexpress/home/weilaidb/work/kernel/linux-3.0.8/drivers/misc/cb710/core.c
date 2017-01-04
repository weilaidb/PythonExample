static DEFINE_IDA(cb710_ida);
static DEFINE_SPINLOCK(cb710_ida_lock);
void cb710_pci_update_config_reg(struct pci_dev *pdev,
int reg, uint32_t mask, uint32_t xor)
EXPORT_SYMBOL_GPL(cb710_pci_update_config_reg);
static int __devinit cb710_pci_configure(struct pci_dev *pdev)
static irqreturn_t cb710_irq_handler(int irq, void *data)
static void cb710_release_slot(struct device *dev)
static int __devinit cb710_register_slot(struct cb710_chip *chip,
unsigned slot_mask, unsigned io_offset, const char *name)
static void cb710_unregister_slot(struct cb710_chip *chip,
unsigned slot_mask)
void cb710_set_irq_handler(struct cb710_slot *slot,
cb710_irq_handler_t handler)
EXPORT_SYMBOL_GPL(cb710_set_irq_handler);
static int cb710_suspend(struct pci_dev *pdev, pm_message_t state)
static int cb710_resume(struct pci_dev *pdev)
static int __devinit cb710_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cb710_remove_one(struct pci_dev *pdev)
static const struct pci_device_id cb710_pci_tbl[] = ;
static struct pci_driver cb710_driver = ;
static int __init cb710_init_module(void)
static void __exit cb710_cleanup_module(void)
module_init(cb710_init_module);
module_exit(cb710_cleanup_module);
MODULE_AUTHOR("Michał Mirosław <mirq-linux@rere.qmqm.pl>");
MODULE_DESCRIPTION("ENE CB710 memory card reader driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cb710_pci_tbl);
