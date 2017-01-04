#define v3_writeb(o,v) __raw_writeb(v, PCI_V3_VADDR + (unsigned int)(o))
#define v3_readb(o)    (__raw_readb(PCI_V3_VADDR + (unsigned int)(o)))
#define v3_writew(o,v) __raw_writew(v, PCI_V3_VADDR + (unsigned int)(o))
#define v3_readw(o)    (__raw_readw(PCI_V3_VADDR + (unsigned int)(o)))
#define v3_writel(o,v) __raw_writel(v, PCI_V3_VADDR + (unsigned int)(o))
#define v3_readl(o)    (__raw_readl(PCI_V3_VADDR + (unsigned int)(o)))
static DEFINE_SPINLOCK(v3_lock);
#define PCI_BUS_NONMEM_START	0x00000000
#define PCI_BUS_NONMEM_SIZE	SZ_256M
#define PCI_BUS_PREMEM_START	PCI_BUS_NONMEM_START + PCI_BUS_NONMEM_SIZE
#define PCI_BUS_PREMEM_SIZE	SZ_256M
#if PCI_BUS_NONMEM_START & 0x000fffff
#error PCI_BUS_NONMEM_START must be megabyte aligned
#if PCI_BUS_PREMEM_START & 0x000fffff
#error PCI_BUS_PREMEM_START must be megabyte aligned
#undef V3_LB_BASE_PREFETCH
#define V3_LB_BASE_PREFETCH 0
static unsigned long v3_open_config_window(struct pci_bus *bus,
unsigned int devfn, int offset)
static void v3_close_config_window(void)
static int v3_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
static int v3_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
static struct pci_ops pci_v3_ops = ;
static struct resource non_mem = ;
static struct resource pre_mem = ;
static int __init pci_v3_setup_resources(struct resource **resource)
#define SC_PCI     IO_ADDRESS(INTEGRATOR_SC_PCIENABLE)
#define SC_LBFADDR IO_ADDRESS(INTEGRATOR_SC_BASE + 0x20)
#define SC_LBFCODE IO_ADDRESS(INTEGRATOR_SC_BASE + 0x24)
static int
v3_pci_fault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static irqreturn_t v3_irq(int dummy, void *devid)
int __init pci_v3_setup(int nr, struct pci_sys_data *sys)
struct pci_bus * __init pci_v3_scan_bus(int nr, struct pci_sys_data *sys)
void __init pci_v3_preinit(void)
void __init pci_v3_postinit(void)
