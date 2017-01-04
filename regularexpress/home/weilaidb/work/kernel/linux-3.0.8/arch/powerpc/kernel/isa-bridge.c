#define DEBUG
unsigned long isa_io_base;
EXPORT_SYMBOL(isa_io_base);
static struct device_node *isa_bridge_devnode;
struct pci_dev *isa_bridge_pcidev;
EXPORT_SYMBOL_GPL(isa_bridge_pcidev);
#define ISA_SPACE_MASK 0x1
#define ISA_SPACE_IO 0x1
static void __devinit pci_process_ISA_OF_ranges(struct device_node *isa_node,
unsigned long phb_io_base_phys)
void __init isa_bridge_find_early(struct pci_controller *hose)
static void __devinit isa_bridge_find_late(struct pci_dev *pdev,
struct device_node *devnode)
static void isa_bridge_remove(void)
static int __devinit isa_bridge_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block isa_bridge_notifier = ;
static int __init isa_bridge_init(void)
arch_initcall(isa_bridge_init);
