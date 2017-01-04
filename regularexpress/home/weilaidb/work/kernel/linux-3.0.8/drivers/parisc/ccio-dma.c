#define MODULE_NAME "ccio"
#undef DEBUG_CCIO_RES
#undef DEBUG_CCIO_RUN
#undef DEBUG_CCIO_INIT
#undef DEBUG_CCIO_RUN_SG
#undef CCIO_COLLECT_STATS
#define DBG_INIT(x...)  printk(x)
#define DBG_INIT(x...)
#define DBG_RUN(x...)   printk(x)
#define DBG_RUN(x...)
#define DBG_RES(x...)   printk(x)
#define DBG_RES(x...)
#define DBG_RUN_SG(x...) printk(x)
#define DBG_RUN_SG(x...)
#define CCIO_INLINE	inline
#define WRITE_U32(value, addr) __raw_writel(value, addr)
#define READ_U32(addr) __raw_readl(addr)
#define U2_IOA_RUNWAY 0x580
#define U2_BC_GSC     0x501
#define UTURN_IOA_RUNWAY 0x581
#define UTURN_BC_GSC     0x502
#define IOA_NORMAL_MODE      0x00020080
#define CMD_TLB_DIRECT_WRITE 35
#define CMD_TLB_PURGE        33
struct ioa_registers ;
struct ioc ;
static struct ioc *ioc_list;
static int ioc_count;
#define IOVP_SIZE PAGE_SIZE
#define IOVP_SHIFT PAGE_SHIFT
#define IOVP_MASK PAGE_MASK
#define CCIO_IOVA(iovp,offset) ((iovp) | (offset))
#define CCIO_IOVP(iova) ((iova) & IOVP_MASK)
#define PDIR_INDEX(iovp)    ((iovp)>>IOVP_SHIFT)
#define MKIOVP(pdir_idx)    ((long)(pdir_idx) << IOVP_SHIFT)
#define MKIOVA(iovp,offset) (dma_addr_t)((long)iovp | (long)offset)
#define CCIO_SEARCH_LOOP(ioc, res_idx, mask, size)  \
for(; res_ptr < res_end; ++res_ptr)
#define CCIO_FIND_FREE_MAPPING(ioa, res_idx, mask, size) \
u##size *res_ptr = (u##size *)&((ioc)->res_map[ioa->res_hint & ~((size >> 3) - 1)]); \
u##size *res_end = (u##size *)&(ioc)->res_map[ioa->res_size]; \
CCIO_SEARCH_LOOP(ioc, res_idx, mask, size); \
res_ptr = (u##size *)&(ioc)->res_map[0]; \
CCIO_SEARCH_LOOP(ioa, res_idx, mask, size);
static int
ccio_alloc_range(struct ioc *ioc, struct device *dev, size_t size)
#define CCIO_FREE_MAPPINGS(ioc, res_idx, mask, size) \
u##size *res_ptr = (u##size *)&((ioc)->res_map[res_idx]); \
BUG_ON((*res_ptr & mask) != mask); \
*res_ptr &= ~(mask);
static void
ccio_free_range(struct ioc *ioc, dma_addr_t iova, unsigned long pages_mapped)
typedef unsigned long space_t;
#define KERNEL_SPACE 0
#define IOPDIR_VALID    0x01UL
#define HINT_SAFE_DMA   0x02UL
#define HINT_STOP_MOST  0x04UL
#define HINT_STOP_MOST  0x00UL
#define HINT_UDPATE_ENB 0x08UL
#define HINT_PREFETCH   0x10UL
static u32 hint_lookup[] = ;
static void CCIO_INLINE
ccio_io_pdir_entry(u64 *pdir_ptr, space_t sid, unsigned long vba,
unsigned long hints)
static CCIO_INLINE void
ccio_clear_io_tlb(struct ioc *ioc, dma_addr_t iovp, size_t byte_cnt)
static CCIO_INLINE void
ccio_mark_invalid(struct ioc *ioc, dma_addr_t iova, size_t byte_cnt)
static int
ccio_dma_supported(struct device *dev, u64 mask)
static dma_addr_t
ccio_map_single(struct device *dev, void *addr, size_t size,
enum dma_data_direction direction)
static void
ccio_unmap_single(struct device *dev, dma_addr_t iova, size_t size,
enum dma_data_direction direction)
static void *
ccio_alloc_consistent(struct device *dev, size_t size, dma_addr_t *dma_handle, gfp_t flag)
static void
ccio_free_consistent(struct device *dev, size_t size, void *cpu_addr,
dma_addr_t dma_handle)
#define PIDE_FLAG 0x80000000UL
#define IOMMU_MAP_STATS
static int
ccio_map_sg(struct device *dev, struct scatterlist *sglist, int nents,
enum dma_data_direction direction)
static void
ccio_unmap_sg(struct device *dev, struct scatterlist *sglist, int nents,
enum dma_data_direction direction)
static struct hppa_dma_ops ccio_ops = ;
static int ccio_proc_info(struct seq_file *m, void *p)
static int ccio_proc_info_open(struct inode *inode, struct file *file)
static const struct file_operations ccio_proc_info_fops = ;
static int ccio_proc_bitmap_info(struct seq_file *m, void *p)
static int ccio_proc_bitmap_open(struct inode *inode, struct file *file)
static const struct file_operations ccio_proc_bitmap_fops = ;
static struct ioc * ccio_find_ioc(int hw_path)
void * ccio_get_iommu(const struct parisc_device *dev)
#define CUJO_20_STEP       0x10000000
void ccio_cujo20_fixup(struct parisc_device *cujo, u32 iovp)
static const struct parisc_device_id ccio_tbl[] = ;
static int ccio_probe(struct parisc_device *dev);
static struct parisc_driver ccio_driver = ;
static void
ccio_ioc_init(struct ioc *ioc)
static void __init
ccio_init_resource(struct resource *res, char *name, void __iomem *ioaddr)
static void __init ccio_init_resources(struct ioc *ioc)
static int new_ioc_area(struct resource *res, unsigned long size,
unsigned long min, unsigned long max, unsigned long align)
static int expand_ioc_area(struct resource *res, unsigned long size,
unsigned long min, unsigned long max, unsigned long align)
int ccio_allocate_resource(const struct parisc_device *dev,
struct resource *res, unsigned long size,
unsigned long min, unsigned long max, unsigned long align)
int ccio_request_resource(const struct parisc_device *dev,
struct resource *res)
static int __init ccio_probe(struct parisc_device *dev)
void __init ccio_init(void)
