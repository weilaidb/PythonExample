#define MAX_DEV		3
#define IRQ_LINES	3
#define INTA		11
#define INTB		10
#define INTC		9
#define INTD		8
void __init nslu2_pci_preinit(void)
static int __init nslu2_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci __initdata nslu2_pci = ;
int __init nslu2_pci_init(void)
subsys_initcall(nslu2_pci_init);
