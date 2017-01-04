#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
igcsr32 *IronECC;
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static int
irongate_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
irongate_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops irongate_pci_ops =
;
int
irongate_pci_clr_err(void)
#define IRONGATE_3GB 0xc0000000UL
static void __init
albacore_init_arch(void)
static void __init
irongate_setup_agp(void)
void __init
irongate_init_arch(void)
#define GET_PAGE_DIR_OFF(addr) (addr >> 22)
#define GET_PAGE_DIR_IDX(addr) (GET_PAGE_DIR_OFF(addr))
#define GET_GATT_OFF(addr) ((addr & 0x003ff000) >> 12)
#define GET_GATT(addr) (gatt_pages[GET_PAGE_DIR_IDX(addr)])
void __iomem *
irongate_ioremap(unsigned long addr, unsigned long size)
EXPORT_SYMBOL(irongate_ioremap);
void
irongate_iounmap(volatile void __iomem *xaddr)
EXPORT_SYMBOL(irongate_iounmap);
