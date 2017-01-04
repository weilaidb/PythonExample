static u8 __init integrator_swizzle(struct pci_dev *dev, u8 *pinp)
static int irq_tab[4] __initdata = ;
static int __init integrator_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
extern void pci_v3_init(void *);
static struct hw_pci integrator_pci __initdata = ;
static int __init integrator_pci_init(void)
subsys_initcall(integrator_pci_init);
