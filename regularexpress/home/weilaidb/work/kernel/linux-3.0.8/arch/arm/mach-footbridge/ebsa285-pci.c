static int irqmap_ebsa285[] __initdata = ;
static int __init ebsa285_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci ebsa285_pci __initdata = ;
static int __init ebsa285_init_pci(void)
subsys_initcall(ebsa285_init_pci);
