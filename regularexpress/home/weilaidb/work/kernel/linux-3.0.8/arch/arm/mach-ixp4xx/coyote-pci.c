#define SLOT0_DEVID	14
#define SLOT1_DEVID	15
#define SLOT0_INTA	6
#define SLOT1_INTA	11
void __init coyote_pci_preinit(void)
static int __init coyote_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci coyote_pci __initdata = ;
int __init coyote_pci_init(void)
subsys_initcall(coyote_pci_init);
