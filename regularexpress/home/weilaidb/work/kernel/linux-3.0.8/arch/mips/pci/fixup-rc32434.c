static int __devinitdata irq_map[2][12] = ;
int __devinit pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
static void rc32434_pci_early_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, rc32434_pci_early_fixup);
int pcibios_plat_dev_init(struct pci_dev *dev)
