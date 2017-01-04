#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBG_CFG(args) printk args
# define DBG_CFG(args)
static struct io7 *io7_head = NULL;
static unsigned long __attribute__ ((unused))
read_ev7_csr(int pe, unsigned long offset)
static void __attribute__ ((unused))
write_ev7_csr(int pe, unsigned long offset, unsigned long q)
static char * __init
mk_resource_name(int pe, int port, char *str)
inline struct io7 *
marvel_next_io7(struct io7 *prev)
struct io7 *
marvel_find_io7(int pe)
static struct io7 * __init
alloc_io7(unsigned int pe)
void
io7_clear_errors(struct io7 *io7)
static void __init
io7_init_hose(struct io7 *io7, int port)
static void __init
marvel_init_io7(struct io7 *io7)
void
marvel_io7_present(gct6_node *node)
static void __init
marvel_find_console_vga_hose(void)
gct6_search_struct gct_wanted_node_list[] = ;
static int __init
marvel_specify_io7(char *str)
__setup("io7=", marvel_specify_io7);
void __init
marvel_init_arch(void)
void
marvel_kill_arch(int mode)
static inline unsigned long
build_conf_addr(struct pci_controller *hose, u8 bus,
unsigned int devfn, int where)
static unsigned long
mk_conf_addr(struct pci_bus *pbus, unsigned int devfn, int where)
static int
marvel_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
marvel_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops marvel_pci_ops =
;
void
marvel_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
struct marvel_rtc_access_info ;
static void
__marvel_access_rtc(void *info)
static u8
__marvel_rtc_io(u8 b, unsigned long addr, int write)
void __iomem *
marvel_ioremap(unsigned long addr, unsigned long size)
void
marvel_iounmap(volatile void __iomem *xaddr)
int
marvel_is_mmio(const volatile void __iomem *xaddr)
#define __marvel_is_port_kbd(a)	(((a) == 0x60) || ((a) == 0x64))
#define __marvel_is_port_rtc(a)	(((a) == 0x70) || ((a) == 0x71))
void __iomem *marvel_ioportmap (unsigned long addr)
unsigned int
marvel_ioread8(void __iomem *xaddr)
void
marvel_iowrite8(u8 b, void __iomem *xaddr)
EXPORT_SYMBOL(marvel_ioremap);
EXPORT_SYMBOL(marvel_iounmap);
EXPORT_SYMBOL(marvel_is_mmio);
EXPORT_SYMBOL(marvel_ioportmap);
EXPORT_SYMBOL(marvel_ioread8);
EXPORT_SYMBOL(marvel_iowrite8);
int
marvel_pa_to_nid(unsigned long pa)
int
marvel_cpuid_to_nid(int cpuid)
unsigned long
marvel_node_mem_start(int nid)
unsigned long
marvel_node_mem_size(int nid)
struct marvel_agp_aperture ;
static int
marvel_agp_setup(alpha_agp_info *agp)
static void
marvel_agp_cleanup(alpha_agp_info *agp)
static int
marvel_agp_configure(alpha_agp_info *agp)
static int
marvel_agp_bind_memory(alpha_agp_info *agp, off_t pg_start, struct agp_memory *mem)
static int
marvel_agp_unbind_memory(alpha_agp_info *agp, off_t pg_start, struct agp_memory *mem)
static unsigned long
marvel_agp_translate(alpha_agp_info *agp, dma_addr_t addr)
struct alpha_agp_ops marvel_agp_ops =
;
alpha_agp_info *
marvel_agp_info(void)
