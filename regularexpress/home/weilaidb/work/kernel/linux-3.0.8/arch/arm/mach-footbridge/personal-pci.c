static int irqmap_personal_server[] __initdata = ;
static int __init personal_server_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci personal_server_pci __initdata = ;
static int __init personal_pci_init(void)
subsys_initcall(personal_pci_init);
