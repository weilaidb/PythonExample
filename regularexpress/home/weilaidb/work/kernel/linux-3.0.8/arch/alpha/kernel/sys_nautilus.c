static void __init
nautilus_init_irq(void)
static int __init
nautilus_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
void
nautilus_kill_arch(int mode)
static void
naut_sys_machine_check(unsigned long vector, unsigned long la_ptr,
struct pt_regs *regs)
void
nautilus_machine_check(unsigned long vector, unsigned long la_ptr)
extern void free_reserved_mem(void *, void *);
extern void pcibios_claim_one_bus(struct pci_bus *);
static struct resource irongate_mem = ;
void __init
nautilus_init_pci(void)
struct alpha_machine_vector nautilus_mv __initmv = ;
ALIAS_MV(nautilus)
