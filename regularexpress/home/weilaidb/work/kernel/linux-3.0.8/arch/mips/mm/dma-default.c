static inline unsigned long dma_addr_to_virt(struct device *dev,
dma_addr_t dma_addr)
static inline int cpu_is_noncoherent_r10000(struct device *dev)
static gfp_t massage_gfp_flags(const struct device *dev, gfp_t gfp)
void *dma_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t * dma_handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_noncoherent);
static void *mips_dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t * dma_handle, gfp_t gfp)
void dma_free_noncoherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
EXPORT_SYMBOL(dma_free_noncoherent);
static void mips_dma_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
static inline void __dma_sync(unsigned long addr, size_t size,
enum dma_data_direction direction)
static void mips_dma_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction direction, struct dma_attrs *attrs)
static int mips_dma_map_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction, struct dma_attrs *attrs)
static dma_addr_t mips_dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void mips_dma_unmap_sg(struct device *dev, struct scatterlist *sg,
int nhwentries, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void mips_dma_sync_single_for_cpu(struct device *dev,
dma_addr_t dma_handle, size_t size, enum dma_data_direction direction)
static void mips_dma_sync_single_for_device(struct device *dev,
dma_addr_t dma_handle, size_t size, enum dma_data_direction direction)
static void mips_dma_sync_sg_for_cpu(struct device *dev,
struct scatterlist *sg, int nelems, enum dma_data_direction direction)
static void mips_dma_sync_sg_for_device(struct device *dev,
struct scatterlist *sg, int nelems, enum dma_data_direction direction)
int mips_dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
int mips_dma_supported(struct device *dev, u64 mask)
void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_cache_sync);
static struct dma_map_ops mips_default_dma_map_ops = ;
struct dma_map_ops *mips_dma_map_ops = &mips_default_dma_map_ops;
EXPORT_SYMBOL(mips_dma_map_ops);
#define PREALLOC_DMA_DEBUG_ENTRIES (1 << 16)
static int __init mips_dma_init(void)
fs_initcall(mips_dma_init);
