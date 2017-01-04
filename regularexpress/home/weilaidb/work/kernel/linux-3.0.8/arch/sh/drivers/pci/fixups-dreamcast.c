static void __init gapspci_fixup_resources(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, gapspci_fixup_resources);
int __init pcibios_map_platform_irq(struct pci_dev *dev, u8 slot, u8 pin)
