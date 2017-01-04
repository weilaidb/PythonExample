#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CFG 0
#if DEBUG_CFG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
static unsigned int
conf_read(unsigned long addr, unsigned char type1,
struct pci_controller *hose)
static void
conf_write(unsigned long addr, unsigned int value, unsigned char type1,
struct pci_controller *hose)
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int devfn, int where,
struct pci_controller *hose, unsigned long *pci_addr,
unsigned char *type1)
static int
mcpcia_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
mcpcia_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops mcpcia_pci_ops =
;
void
mcpcia_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
static int __init
mcpcia_probe_hose(int h)
static void __init
mcpcia_new_hose(int h)
static void
mcpcia_pci_clr_err(int mid)
static void __init
mcpcia_startup_hose(struct pci_controller *hose)
void __init
mcpcia_init_arch(void)
void __init
mcpcia_init_hoses(void)
static void
mcpcia_print_uncorrectable(struct el_MCPCIA_uncorrected_frame_mcheck *logout)
static void
mcpcia_print_system_area(unsigned long la_ptr)
void
mcpcia_machine_check(unsigned long vector, unsigned long la_ptr)
