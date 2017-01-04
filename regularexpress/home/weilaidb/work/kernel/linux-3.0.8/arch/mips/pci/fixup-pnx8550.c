#undef	DEBUG
#define	DBG(x...)	printk(x)
#define	DBG(x...)
extern char pnx8550_irq_tab[][5];
void __init pcibios_fixup_resources(struct pci_dev *dev)
void __init pcibios_fixup(void)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
