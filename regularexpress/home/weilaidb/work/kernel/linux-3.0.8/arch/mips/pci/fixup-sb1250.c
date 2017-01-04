static void __init quirk_sb1250_pci(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_SIBYTE, PCI_DEVICE_ID_BCM1250_PCI,
quirk_sb1250_pci);
static void __init quirk_sb1250_ht(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_SIBYTE, PCI_DEVICE_ID_BCM1250_HT,
quirk_sb1250_ht);
static void __init quirk_sp1011(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_SIPACKETS, PCI_DEVICE_ID_SP1011,
quirk_sp1011);
