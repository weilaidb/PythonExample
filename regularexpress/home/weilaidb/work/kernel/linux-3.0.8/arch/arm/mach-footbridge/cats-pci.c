static int irqmap_cats[] __initdata = ;
static int __init cats_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci cats_pci __initdata = ;
static int __init cats_pci_init(void)
subsys_initcall(cats_pci_init);
