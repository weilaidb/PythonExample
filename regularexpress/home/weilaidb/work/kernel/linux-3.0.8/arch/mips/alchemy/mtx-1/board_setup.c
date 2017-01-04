char irq_tab_alchemy[][5] __initdata = ;
extern int (*board_pci_idsel)(unsigned int devsel, int assert);
int mtx1_pci_idsel(unsigned int devsel, int assert);
static void mtx1_reset(char *c)
static void mtx1_power_off(void)
void __init board_setup(void)
int
mtx1_pci_idsel(unsigned int devsel, int assert)
static int __init mtx1_init_irq(void)
arch_initcall(mtx1_init_irq);
