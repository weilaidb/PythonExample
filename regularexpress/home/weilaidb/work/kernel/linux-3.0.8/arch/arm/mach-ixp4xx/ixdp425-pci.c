#define MAX_DEV		4
#define IRQ_LINES	4
#define INTA		11
#define INTB		10
#define INTC		9
#define INTD		8
void __init ixdp425_pci_preinit(void)
static int __init ixdp425_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci ixdp425_pci __initdata = ;
int __init ixdp425_pci_init(void)
subsys_initcall(ixdp425_pci_init);
