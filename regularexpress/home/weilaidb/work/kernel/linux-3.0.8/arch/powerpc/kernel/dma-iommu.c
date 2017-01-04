static void *dma_iommu_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void dma_iommu_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static dma_addr_t dma_iommu_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_iommu_unmap_page(struct device *dev, dma_addr_t dma_handle,
size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_iommu_map_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_iommu_unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_iommu_dma_supported(struct device *dev, u64 mask)
struct dma_map_ops dma_iommu_ops = ;
EXPORT_SYMBOL(dma_iommu_ops);
