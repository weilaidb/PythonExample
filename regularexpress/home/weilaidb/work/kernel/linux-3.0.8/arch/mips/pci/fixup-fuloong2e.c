static u8 sb_slot = 5;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
static void __init loongson2e_nec_fixup(struct pci_dev *pdev)
static void __init loongson2e_686b_func0_fixup(struct pci_dev *pdev)
static void __init loongson2e_686b_func1_fixup(struct pci_dev *pdev)
static void __init loongson2e_686b_func2_fixup(struct pci_dev *pdev)
static void __init loongson2e_686b_func3_fixup(struct pci_dev *pdev)
static void __init loongson2e_686b_func5_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C686,
loongson2e_686b_func0_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_1,
loongson2e_686b_func1_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_2,
loongson2e_686b_func2_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_3,
loongson2e_686b_func3_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C686_5,
loongson2e_686b_func5_fixup);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_NEC, PCI_DEVICE_ID_NEC_USB,
loongson2e_nec_fixup);
