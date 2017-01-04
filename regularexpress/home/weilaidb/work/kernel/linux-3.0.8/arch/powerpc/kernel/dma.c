void *dma_direct_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
void dma_direct_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static int dma_direct_map_sg(struct device *dev, struct scatterlist *sgl,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_direct_unmap_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_direct_dma_supported(struct device *dev, u64 mask)
static inline dma_addr_t dma_direct_map_page(struct device *dev,
struct page *page,
unsigned long offset,
size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static inline void dma_direct_unmap_page(struct device *dev,
dma_addr_t dma_address,
size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static inline void dma_direct_sync_sg(struct device *dev,
struct scatterlist *sgl, int nents,
enum dma_data_direction direction)
static inline void dma_direct_sync_single(struct device *dev,
dma_addr_t dma_handle, size_t size,
enum dma_data_direction direction)
struct dma_map_ops dma_direct_ops = ;
EXPORT_SYMBOL(dma_direct_ops);
#define PREALLOC_DMA_DEBUG_ENTRIES (1 << 16)
int dma_set_mask(struct device *dev, u64 dma_mask)
EXPORT_SYMBOL(dma_set_mask);
static int __init dma_init(void)
fs_initcall(dma_init);
int dma_mmap_coherent(struct device *dev, struct vm_area_struct *vma,
void *cpu_addr, dma_addr_t handle, size_t size)
EXPORT_SYMBOL_GPL(dma_mmap_coherent);
