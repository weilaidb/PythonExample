#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBGC(args)	printk args
# define DBGC(args)
#define vuip	volatile unsigned int  *
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static unsigned int
conf_read(unsigned long addr, unsigned char type1)
static void
conf_write(unsigned long addr, unsigned int value, unsigned char type1)
static int
apecs_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
apecs_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops apecs_pci_ops =
;
void
apecs_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
void __init
apecs_init_arch(void)
void
apecs_pci_clr_err(void)
void
apecs_machine_check(unsigned long vector, unsigned long la_ptr)
