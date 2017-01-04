static void __init
pdev_fixup_irq(struct pci_dev *dev,
u8 (*swizzle)(struct pci_dev *, u8 *),
int (*map_irq)(struct pci_dev *, u8, u8))
void __init
pci_fixup_irqs(u8 (*swizzle)(struct pci_dev *, u8 *),
int (*map_irq)(struct pci_dev *, u8, u8))
