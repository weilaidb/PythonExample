#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
struct
saved_config[2] __attribute__((common));
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static int
tsunami_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
tsunami_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops tsunami_pci_ops =
;
void
tsunami_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
static long __init
tsunami_probe_read(volatile unsigned long *vaddr)
static long __init
tsunami_probe_write(volatile unsigned long *vaddr)
#define tsunami_probe_read(ADDR) 1
static void __init
tsunami_init_one_pchip(tsunami_pchip *pchip, int index)
void __iomem *
tsunami_ioportmap(unsigned long addr)
void __iomem *
tsunami_ioremap(unsigned long addr, unsigned long size)
EXPORT_SYMBOL(tsunami_ioportmap);
EXPORT_SYMBOL(tsunami_ioremap);
void __init
tsunami_init_arch(void)
static void
tsunami_kill_one_pchip(tsunami_pchip *pchip, int index)
void
tsunami_kill_arch(int mode)
static inline void
tsunami_pci_clr_err_1(tsunami_pchip *pchip)
static inline void
tsunami_pci_clr_err(void)
void
tsunami_machine_check(unsigned long vector, unsigned long la_ptr)
