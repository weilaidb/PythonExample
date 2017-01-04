extern int swiotlb_late_init_with_default_size (size_t size);
#define PFX "IOC: "
#undef PDIR_SEARCH_TIMING
#define ALLOW_IOV_BYPASS
#undef ALLOW_IOV_BYPASS_SG
#undef FULL_VALID_PDIR
#define ENABLE_MARK_CLEAN
#undef DEBUG_SBA_INIT
#undef DEBUG_SBA_RUN
#undef DEBUG_SBA_RUN_SG
#undef DEBUG_SBA_RESOURCE
#undef ASSERT_PDIR_SANITY
#undef DEBUG_LARGE_SG_ENTRIES
#undef DEBUG_BYPASS
#if defined(FULL_VALID_PDIR) && defined(ASSERT_PDIR_SANITY)
#error FULL_VALID_PDIR and ASSERT_PDIR_SANITY are mutually exclusive
#define SBA_INLINE	__inline__
#define DBG_INIT(x...)	printk(x)
#define DBG_INIT(x...)
#define DBG_RUN(x...)	printk(x)
#define DBG_RUN(x...)
#define DBG_RUN_SG(x...)	printk(x)
#define DBG_RUN_SG(x...)
#define DBG_RES(x...)	printk(x)
#define DBG_RES(x...)
#define DBG_BYPASS(x...)	printk(x)
#define DBG_BYPASS(x...)
#define ASSERT(expr) \
if(!(expr))
#define ASSERT(expr)
#define DELAYED_RESOURCE_CNT	64
#define PCI_DEVICE_ID_HP_SX2000_IOC	0x12ec
#define ZX1_IOC_ID	((PCI_DEVICE_ID_HP_ZX1_IOC << 16) | PCI_VENDOR_ID_HP)
#define ZX2_IOC_ID	((PCI_DEVICE_ID_HP_ZX2_IOC << 16) | PCI_VENDOR_ID_HP)
#define REO_IOC_ID	((PCI_DEVICE_ID_HP_REO_IOC << 16) | PCI_VENDOR_ID_HP)
#define SX1000_IOC_ID	((PCI_DEVICE_ID_HP_SX1000_IOC << 16) | PCI_VENDOR_ID_HP)
#define SX2000_IOC_ID	((PCI_DEVICE_ID_HP_SX2000_IOC << 16) | PCI_VENDOR_ID_HP)
#define ZX1_IOC_OFFSET	0x1000
#define IOC_FUNC_ID	0x000
#define IOC_FCLASS	0x008
#define IOC_IBASE	0x300
#define IOC_IMASK	0x308
#define IOC_PCOM	0x310
#define IOC_TCNFG	0x318
#define IOC_PDIR_BASE	0x320
#define IOC_ROPE0_CFG	0x500
#define   IOC_ROPE_AO	  0x10
#define ZX1_SBA_IOMMU_COOKIE	0x0000badbadc0ffeeUL
static unsigned long iovp_size;
static unsigned long iovp_shift;
static unsigned long iovp_mask;
struct ioc ;
static struct ioc *ioc_list;
static int reserve_sba_gart = 1;
static SBA_INLINE void sba_mark_invalid(struct ioc *, dma_addr_t, size_t);
static SBA_INLINE void sba_free_range(struct ioc *, dma_addr_t, size_t);
#define sba_sg_address(sg)	sg_virt((sg))
static u64 prefetch_spill_page;
# define GET_IOC(dev)	(((dev)->bus == &pci_bus_type)						\
? ((struct ioc *) PCI_CONTROLLER(to_pci_dev(dev))->iommu) : NULL)
# define GET_IOC(dev)	NULL
#define DMA_CHUNK_SIZE  (BITS_PER_LONG*iovp_size)
#define ROUNDUP(x,y) ((x + ((y)-1)) & ~((y)-1))
#define READ_REG(addr)       __raw_readq(addr)
#define WRITE_REG(val, addr) __raw_writeq(val, addr)
static void
sba_dump_tlb(char *hpa)
static void
sba_dump_pdir_entry(struct ioc *ioc, char *msg, uint pide)
static int
sba_check_pdir(struct ioc *ioc, char *msg)
static void
sba_dump_sg( struct ioc *ioc, struct scatterlist *startsg, int nents)
static void
sba_check_sg( struct ioc *ioc, struct scatterlist *startsg, int nents)
#define PAGES_PER_RANGE 1
#define SBA_IOVA(ioc,iovp,offset) ((ioc->ibase) | (iovp) | (offset))
#define SBA_IOVP(ioc,iova) ((iova) & ~(ioc->ibase))
#define PDIR_ENTRY_SIZE	sizeof(u64)
#define PDIR_INDEX(iovp)   ((iovp)>>iovp_shift)
#define RESMAP_MASK(n)    ~(~0UL << (n))
#define RESMAP_IDX_MASK   (sizeof(unsigned long) - 1)
static SBA_INLINE int
get_iovp_order (unsigned long size)
static unsigned long ptr_to_pide(struct ioc *ioc, unsigned long *res_ptr,
unsigned int bitshiftcnt)
static SBA_INLINE unsigned long
sba_search_bitmap(struct ioc *ioc, struct device *dev,
unsigned long bits_wanted, int use_hint)
static int
sba_alloc_range(struct ioc *ioc, struct device *dev, size_t size)
static SBA_INLINE void
sba_free_range(struct ioc *ioc, dma_addr_t iova, size_t size)
#if 1
#define sba_io_pdir_entry(pdir_ptr, vba) *pdir_ptr = ((vba & ~0xE000000000000FFFULL)	\
| 0x8000000000000000ULL)
void SBA_INLINE
sba_io_pdir_entry(u64 *pdir_ptr, unsigned long vba)
static void
mark_clean (void *addr, size_t size)
static SBA_INLINE void
sba_mark_invalid(struct ioc *ioc, dma_addr_t iova, size_t byte_cnt)
static dma_addr_t sba_map_page(struct device *dev, struct page *page,
unsigned long poff, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static dma_addr_t sba_map_single_attrs(struct device *dev, void *addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static SBA_INLINE void
sba_mark_clean(struct ioc *ioc, dma_addr_t iova, size_t size)
static void sba_unmap_page(struct device *dev, dma_addr_t iova, size_t size,
enum dma_data_direction dir, struct dma_attrs *attrs)
void sba_unmap_single_attrs(struct device *dev, dma_addr_t iova, size_t size,
enum dma_data_direction dir, struct dma_attrs *attrs)
static void *
sba_alloc_coherent (struct device *dev, size_t size, dma_addr_t *dma_handle, gfp_t flags)
static void sba_free_coherent (struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
#define PIDE_FLAG 0x1UL
int dump_run_sg = 0;
static SBA_INLINE int
sba_fill_pdir(
struct ioc *ioc,
struct scatterlist *startsg,
int nents)
#define DMA_CONTIG(__X, __Y) \
(((((unsigned long) __X) | ((unsigned long) __Y)) << (BITS_PER_LONG - iovp_shift)) == 0UL)
static SBA_INLINE int
sba_coalesce_chunks(struct ioc *ioc, struct device *dev,
struct scatterlist *startsg,
int nents)
static void sba_unmap_sg_attrs(struct device *dev, struct scatterlist *sglist,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs);
static int sba_map_sg_attrs(struct device *dev, struct scatterlist *sglist,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void sba_unmap_sg_attrs(struct device *dev, struct scatterlist *sglist,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void __init
ioc_iova_init(struct ioc *ioc)
static void __init
ioc_resource_init(struct ioc *ioc)
static void __init
ioc_sac_init(struct ioc *ioc)
static void __init
ioc_zx1_init(struct ioc *ioc)
typedef void (initfunc)(struct ioc *);
struct ioc_iommu ;
static struct ioc_iommu ioc_iommu_info[] __initdata = ;
static struct ioc * __init
ioc_init(unsigned long hpa, void *handle)
static void *
ioc_start(struct seq_file *s, loff_t *pos)
static void *
ioc_next(struct seq_file *s, void *v, loff_t *pos)
static void
ioc_stop(struct seq_file *s, void *v)
static int
ioc_show(struct seq_file *s, void *v)
static const struct seq_operations ioc_seq_ops = ;
static int
ioc_open(struct inode *inode, struct file *file)
static const struct file_operations ioc_fops = ;
static void __init
ioc_proc_init(void)
static void
sba_connect_bus(struct pci_bus *bus)
static void __init
sba_map_ioc_to_node(struct ioc *ioc, acpi_handle handle)
#define sba_map_ioc_to_node(ioc, handle)
static int __init
acpi_sba_ioc_add(struct acpi_device *device)
static const struct acpi_device_id hp_ioc_iommu_device_ids[] = ;
static struct acpi_driver acpi_sba_ioc_driver = ;
extern struct dma_map_ops swiotlb_dma_ops;
static int __init
sba_init(void)
subsys_initcall(sba_init);
static int __init
nosbagart(char *str)
static int sba_dma_supported (struct device *dev, u64 mask)
static int sba_dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
__setup("nosbagart", nosbagart);
static int __init
sba_page_override(char *str)
__setup("sbapagesize=",sba_page_override);
struct dma_map_ops sba_dma_ops = ;
void sba_dma_init(void)
