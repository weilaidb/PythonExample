#define __EXTERN_INLINE
#undef __EXTERN_INLINE
#define DEBUG_PRINT_INITIAL_SETTINGS 0
#define DEBUG_PRINT_FINAL_SETTINGS 0
#define T2_DIRECTMAP_2G 1
#if T2_DIRECTMAP_2G
# define T2_DIRECTMAP_START	0x80000000UL
# define T2_DIRECTMAP_LENGTH	0x80000000UL
# define T2_DIRECTMAP_START	0x40000000UL
# define T2_DIRECTMAP_LENGTH	0x40000000UL
#define T2_ISA_SG_START		0x00800000UL
#define T2_ISA_SG_LENGTH	0x00800000UL
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG(args)	printk args
# define DBG(args)
static volatile unsigned int t2_mcheck_any_expected;
static volatile unsigned int t2_mcheck_last_taken;
static struct
t2_saved_config __attribute((common));
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static unsigned int
conf_read(unsigned long addr, unsigned char type1)
static void
conf_write(unsigned long addr, unsigned int value, unsigned char type1)
static int
t2_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
t2_write_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 value)
struct pci_ops t2_pci_ops =
;
static void __init
t2_direct_map_window1(unsigned long base, unsigned long length)
static void __init
t2_sg_map_window2(struct pci_controller *hose,
unsigned long base,
unsigned long length)
static void __init
t2_save_configuration(void)
void __init
t2_init_arch(void)
void
t2_kill_arch(int mode)
void
t2_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
#define SIC_SEIC (1UL << 33)
static void
t2_clear_errors(int cpu)
void
t2_machine_check(unsigned long vector, unsigned long la_ptr)
