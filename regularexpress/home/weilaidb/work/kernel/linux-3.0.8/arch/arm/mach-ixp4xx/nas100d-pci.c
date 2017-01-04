#define MAX_DEV		3
#define IRQ_LINES	3
#define INTA		11
#define INTB		10
#define INTC		9
#define INTD		8
#define INTE		7
void __init nas100d_pci_preinit(void)
static int __init nas100d_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci __initdata nas100d_pci = ;
int __init nas100d_pci_init(void)
subsys_initcall(nas100d_pci_init);
