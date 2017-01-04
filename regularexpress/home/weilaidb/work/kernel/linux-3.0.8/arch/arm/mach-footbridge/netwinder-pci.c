static int __init netwinder_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci netwinder_pci __initdata = ;
static int __init netwinder_pci_init(void)
subsys_initcall(netwinder_pci_init);
