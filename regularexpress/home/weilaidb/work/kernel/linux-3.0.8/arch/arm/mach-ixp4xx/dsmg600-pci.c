#define MAX_DEV		4
#define IRQ_LINES	3
#define INTA		11
#define INTB		10
#define INTC		9
#define INTD		8
#define INTE		7
#define INTF		6
void __init dsmg600_pci_preinit(void)
static int __init dsmg600_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci __initdata dsmg600_pci = ;
int __init dsmg600_pci_init(void)
subsys_initcall(dsmg600_pci_init);
