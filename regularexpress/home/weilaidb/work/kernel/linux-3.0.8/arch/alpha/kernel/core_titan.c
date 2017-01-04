#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
struct
saved_config[4] __attribute__((common));
static int titan_pchip1_present;
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
static inline volatile unsigned long *
mk_tig_addr(int offset)
static inline u8
titan_read_tig(int offset, u8 value)
static inline void
titan_write_tig(int offset, u8 value)
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static int
titan_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
titan_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops titan_pci_ops =
;
void
titan_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
static int
titan_query_agp(titan_pachip_port *port)
static void __init
titan_init_one_pachip_port(titan_pachip_port *port, int index)
static void __init
titan_init_pachips(titan_pachip *pachip0, titan_pachip *pachip1)
void __init
titan_init_arch(void)
static void
titan_kill_one_pachip_port(titan_pachip_port *port, int index)
static void
titan_kill_pachips(titan_pachip *pachip0, titan_pachip *pachip1)
void
titan_kill_arch(int mode)
void __iomem *
titan_ioportmap(unsigned long addr)
void __iomem *
titan_ioremap(unsigned long addr, unsigned long size)
void
titan_iounmap(volatile void __iomem *xaddr)
int
titan_is_mmio(const volatile void __iomem *xaddr)
EXPORT_SYMBOL(titan_ioportmap);
EXPORT_SYMBOL(titan_ioremap);
EXPORT_SYMBOL(titan_iounmap);
EXPORT_SYMBOL(titan_is_mmio);
struct titan_agp_aperture ;
static int
titan_agp_setup(alpha_agp_info *agp)
static void
titan_agp_cleanup(alpha_agp_info *agp)
static int
titan_agp_configure(alpha_agp_info *agp)
static int
titan_agp_bind_memory(alpha_agp_info *agp, off_t pg_start, struct agp_memory *mem)
static int
titan_agp_unbind_memory(alpha_agp_info *agp, off_t pg_start, struct agp_memory *mem)
static unsigned long
titan_agp_translate(alpha_agp_info *agp, dma_addr_t addr)
struct alpha_agp_ops titan_agp_ops =
;
alpha_agp_info *
titan_agp_info(void)
