#define AVILA_MAX_DEV	4
#define LOFT_MAX_DEV	6
#define IRQ_LINES	4
#define INTA		11
#define INTB		10
#define INTC		9
#define INTD		8
void __init avila_pci_preinit(void)
static int __init avila_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci avila_pci __initdata = ;
int __init avila_pci_init(void)
subsys_initcall(avila_pci_init);
