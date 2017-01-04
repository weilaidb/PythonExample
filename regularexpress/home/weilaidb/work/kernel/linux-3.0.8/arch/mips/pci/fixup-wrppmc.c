#define PCI_INTA		1
#define PCI_INTB		2
#define PCI_INTC		3
#define PCI_INTD		4
#define PCI_SLOT_MAXNR	32
static char pci_irq_tab[PCI_SLOT_MAXNR][5] __initdata = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
