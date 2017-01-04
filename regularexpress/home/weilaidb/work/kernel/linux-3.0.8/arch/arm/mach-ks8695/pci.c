static int pci_dbg;
static int pci_cfg_dbg;
static void ks8695_pci_setupconfig(unsigned int bus_nr, unsigned int devfn, unsigned int where)
static int ks8695_pci_readconfig(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 *value)
static int ks8695_pci_writeconfig(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 value)
static void ks8695_local_writeconfig(int where, u32 value)
static struct pci_ops ks8695_pci_ops = ;
static struct pci_bus* __init ks8695_pci_scan_bus(int nr, struct pci_sys_data *sys)
static struct resource pci_mem = ;
static struct resource pci_io = ;
static int __init ks8695_pci_setup(int nr, struct pci_sys_data *sys)
static inline unsigned int size_mask(unsigned long size)
static int ks8695_pci_fault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static void __init ks8695_pci_preinit(void)
static void ks8695_show_pciregs(void)
static struct hw_pci ks8695_pci __initdata = ;
void __init ks8695_init_pci(struct ks8695_pci_cfg *cfg)
