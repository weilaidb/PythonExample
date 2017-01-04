#define MODULE_NAME "SBA"
#undef DEBUG_SBA_INIT
#undef DEBUG_SBA_RUN
#undef DEBUG_SBA_RUN_SG
#undef DEBUG_SBA_RESOURCE
#undef ASSERT_PDIR_SANITY
#undef DEBUG_LARGE_SG_ENTRIES
#undef DEBUG_DMB_TRAP
#define DBG_INIT(x...)	printk(x)
#define DBG_INIT(x...)
#define DBG_RUN(x...)	printk(x)
#define DBG_RUN(x...)
#define DBG_RUN_SG(x...)	printk(x)
#define DBG_RUN_SG(x...)
#define DBG_RES(x...)	printk(x)
#define DBG_RES(x...)
#define SBA_INLINE	__inline__
#define DEFAULT_DMA_HINT_REG	0
struct sba_device *sba_list;
EXPORT_SYMBOL_GPL(sba_list);
static unsigned long ioc_needs_fdc = 0;
static unsigned int global_ioc_cnt = 0;
static unsigned long piranha_bad_128k = 0;
#define SBA_DEV(d) ((struct sba_device *) (d))
#define SBA_AGP_SUPPORT
static int sba_reserve_agpgart = 1;
module_param(sba_reserve_agpgart, int, 0444);
MODULE_PARM_DESC(sba_reserve_agpgart, "Reserve half of IO pdir as AGPGART");
#define READ_REG32(addr)	readl(addr)
#define READ_REG64(addr)	readq(addr)
#define WRITE_REG32(val, addr)	writel((val), (addr))
#define WRITE_REG64(val, addr)	writeq((val), (addr))
#define READ_REG(addr)		READ_REG64(addr)
#define WRITE_REG(value, addr)	WRITE_REG64(value, addr)
#define READ_REG(addr)		READ_REG32(addr)
#define WRITE_REG(value, addr)	WRITE_REG32(value, addr)
static void
sba_dump_ranges(void __iomem *hpa)
static void sba_dump_tlb(void __iomem *hpa)
#define sba_dump_ranges(x)
#define sba_dump_tlb(x)
static void
sba_dump_pdir_entry(struct ioc *ioc, char *msg, uint pide)
static int
sba_check_pdir(struct ioc *ioc, char *msg)
static void
sba_dump_sg( struct ioc *ioc, struct scatterlist *startsg, int nents)
#define PAGES_PER_RANGE 1
#define SBA_IOVA(ioc,iovp,offset,hint_reg) ((ioc->ibase) | (iovp) | (offset))
#define SBA_IOVP(ioc,iova) ((iova) & (ioc)->iovp_mask)
#define SBA_IOVA(ioc,iovp,offset,hint_reg) ((iovp) | (offset))
#define SBA_IOVP(ioc,iova) (iova)
#define PDIR_INDEX(iovp)   ((iovp)>>IOVP_SHIFT)
#define RESMAP_MASK(n)    (~0UL << (BITS_PER_LONG - (n)))
#define RESMAP_IDX_MASK   (sizeof(unsigned long) - 1)
static unsigned long ptr_to_pide(struct ioc *ioc, unsigned long *res_ptr,
unsigned int bitshiftcnt)
static SBA_INLINE unsigned long
sba_search_bitmap(struct ioc *ioc, struct device *dev,
unsigned long bits_wanted)
static int
sba_alloc_range(struct ioc *ioc, struct device *dev, size_t size)
static SBA_INLINE void
sba_free_range(struct ioc *ioc, dma_addr_t iova, size_t size)
#define SBA_DMA_HINT(ioc, val) ((val) << (ioc)->hint_shift_pdir)
typedef unsigned long space_t;
#define KERNEL_SPACE 0
static void SBA_INLINE
sba_io_pdir_entry(u64 *pdir_ptr, space_t sid, unsigned long vba,
unsigned long hint)
static SBA_INLINE void
sba_mark_invalid(struct ioc *ioc, dma_addr_t iova, size_t byte_cnt)
static int sba_dma_supported( struct device *dev, u64 mask)
static dma_addr_t
sba_map_single(struct device *dev, void *addr, size_t size,
enum dma_data_direction direction)
static void
sba_unmap_single(struct device *dev, dma_addr_t iova, size_t size,
enum dma_data_direction direction)
static void *sba_alloc_consistent(struct device *hwdev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static void
sba_free_consistent(struct device *hwdev, size_t size, void *vaddr,
dma_addr_t dma_handle)
#define PIDE_FLAG 0x80000000UL
#define IOMMU_MAP_STATS
int dump_run_sg = 0;
static int
sba_map_sg(struct device *dev, struct scatterlist *sglist, int nents,
enum dma_data_direction direction)
static void
sba_unmap_sg(struct device *dev, struct scatterlist *sglist, int nents,
enum dma_data_direction direction)
static struct hppa_dma_ops sba_ops = ;
static void
sba_get_pat_resources(struct sba_device *sba_dev)
#define PIRANHA_ADDR_MASK	0x00160000UL
#define PIRANHA_ADDR_VAL	0x00060000UL
static void *
sba_alloc_pdir(unsigned int pdir_size)
struct ibase_data_struct ;
static int setup_ibase_imask_callback(struct device *dev, void *data)
static void
setup_ibase_imask(struct parisc_device *sba, struct ioc *ioc, int ioc_num)
static int
sba_ioc_find_quicksilver(struct device *dev, void *data)
static void
sba_ioc_init_pluto(struct parisc_device *sba, struct ioc *ioc, int ioc_num)
static void
sba_ioc_init(struct parisc_device *sba, struct ioc *ioc, int ioc_num)
static void __iomem *ioc_remap(struct sba_device *sba_dev, unsigned int offset)
static void sba_hw_init(struct sba_device *sba_dev)
static void
sba_common_init(struct sba_device *sba_dev)
static int sba_proc_info(struct seq_file *m, void *p)
static int
sba_proc_open(struct inode *i, struct file *f)
static const struct file_operations sba_proc_fops = ;
static int
sba_proc_bitmap_info(struct seq_file *m, void *p)
static int
sba_proc_bitmap_open(struct inode *i, struct file *f)
static const struct file_operations sba_proc_bitmap_fops = ;
static struct parisc_device_id sba_tbl[] = ;
static int sba_driver_callback(struct parisc_device *);
static struct parisc_driver sba_driver = ;
static int sba_driver_callback(struct parisc_device *dev)
void __init sba_init(void)
void * sba_get_iommu(struct parisc_device *pci_hba)
void sba_directed_lmmio(struct parisc_device *pci_hba, struct resource *r)
void sba_distributed_lmmio(struct parisc_device *pci_hba, struct resource *r )
