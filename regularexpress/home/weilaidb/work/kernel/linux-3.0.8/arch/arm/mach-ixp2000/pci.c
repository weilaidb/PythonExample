static volatile int pci_master_aborts = 0;
static int clear_master_aborts(void);
u32 *
ixp2000_pci_config_addr(unsigned int bus_nr, unsigned int devfn, int where)
static u32 bytemask[] = ;
int ixp2000_pci_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
int ixp2000_pci_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops ixp2000_pci_ops = ;
struct pci_bus *ixp2000_pci_scan_bus(int nr, struct pci_sys_data *sysdata)
int ixp2000_pci_abort_handler(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
int
clear_master_aborts(void)
void __init
ixp2000_pci_preinit(void)
static struct resource ixp2000_pci_mem_space = ;
static struct resource ixp2000_pci_io_space = ;
int ixp2000_pci_setup(int nr, struct pci_sys_data *sys)
