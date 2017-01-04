#define SLOT0_DEVID	0
#define SLOT1_DEVID	1
#define INTA		10
#define INTB		11
void __init gtwx5715_pci_preinit(void)
static int __init gtwx5715_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci gtwx5715_pci __initdata = ;
int __init gtwx5715_pci_init(void)
subsys_initcall(gtwx5715_pci_init);
