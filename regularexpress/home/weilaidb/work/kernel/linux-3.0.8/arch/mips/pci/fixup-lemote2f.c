#define PCIA		4
#define PCIB		5
#define PCIC		6
#define PCID		7
static char irq_tab[][5] __initdata = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static void __init loongson_cs5536_isa_fixup(struct pci_dev *pdev)
static void __init loongson_cs5536_ide_fixup(struct pci_dev *pdev)
static void __init loongson_cs5536_acc_fixup(struct pci_dev *pdev)
static void __init loongson_cs5536_ohci_fixup(struct pci_dev *pdev)
static void __init loongson_cs5536_ehci_fixup(struct pci_dev *pdev)
static void __init loongson_nec_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AMD, PCI_DEVICE_ID_AMD_CS5536_ISA,
loongson_cs5536_isa_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AMD, PCI_DEVICE_ID_AMD_CS5536_OHC,
loongson_cs5536_ohci_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AMD, PCI_DEVICE_ID_AMD_CS5536_EHC,
loongson_cs5536_ehci_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AMD, PCI_DEVICE_ID_AMD_CS5536_AUDIO,
loongson_cs5536_acc_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AMD, PCI_DEVICE_ID_AMD_CS5536_IDE,
loongson_cs5536_ide_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_NEC, PCI_DEVICE_ID_NEC_USB,
loongson_nec_fixup);
