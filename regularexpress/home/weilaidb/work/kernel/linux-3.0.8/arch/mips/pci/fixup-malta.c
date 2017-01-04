#define PCIA		1
#define PCIB		2
#define PCIC		3
#define PCID		4
static char pci_irq[5] __initdata;
static char irq_tab[][5] __initdata = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static void __init malta_piix_func0_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82371AB_0,
malta_piix_func0_fixup);
static void __init malta_piix_func1_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82371AB,
malta_piix_func1_fixup);
