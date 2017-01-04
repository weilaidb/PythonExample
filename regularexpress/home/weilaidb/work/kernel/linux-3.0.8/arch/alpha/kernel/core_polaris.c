#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, u8 *type1)
static int
polaris_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
polaris_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops polaris_pci_ops =
;
void __init
polaris_init_arch(void)
static inline void
polaris_pci_clr_err(void)
void
polaris_machine_check(unsigned long vector, unsigned long la_ptr)
