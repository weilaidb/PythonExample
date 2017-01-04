#define MAX_DEV		3
#define IRQ_LINES	3
#define INTA	6
#define INTB	7
#define INTC	5
void __init fsg_pci_preinit(void)
static int __init fsg_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci fsg_pci __initdata = ;
int __init fsg_pci_init(void)
subsys_initcall(fsg_pci_init);
