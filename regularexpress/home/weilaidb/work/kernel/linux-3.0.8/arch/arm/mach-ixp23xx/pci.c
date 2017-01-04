extern int (*external_fault) (unsigned long, struct pt_regs *);
static volatile int pci_master_aborts = 0;
#define DBG(x...)	printk(x)
#define DBG(x...)
int clear_master_aborts(void);
static u32
*ixp23xx_pci_config_addr(unsigned int bus_nr, unsigned int devfn, int where)
static u32 bytemask[] = ;
static int ixp23xx_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *value)
static int ixp23xx_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 value)
struct pci_ops ixp23xx_pci_ops = ;
struct pci_bus *ixp23xx_pci_scan_bus(int nr, struct pci_sys_data *sysdata)
int ixp23xx_pci_abort_handler(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
int clear_master_aborts(void)
static void __init ixp23xx_pci_common_init(void)
void __init ixp23xx_pci_preinit(void)
static void __devinit pci_fixup_ixp23xx(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, 0x9002, pci_fixup_ixp23xx);
static struct resource ixp23xx_pci_mem_space = ;
static struct resource ixp23xx_pci_io_space = ;
int ixp23xx_pci_setup(int nr, struct pci_sys_data *sys)
void __init ixp23xx_pci_slave_init(void)
