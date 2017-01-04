void *dma_alloc_coherent(struct device *dev,
size_t size,
dma_addr_t *dma_handle,
gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
EXPORT_SYMBOL(dma_free_coherent);
static void __dma_map_pa_range(dma_addr_t dma_addr, size_t size)
dma_addr_t dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_single);
void dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_unmap_single);
int dma_map_sg(struct device *dev, struct scatterlist *sglist, int nents,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_sg);
void dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nhwentries,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_unmap_sg);
dma_addr_t dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_page);
void dma_unmap_page(struct device *dev, dma_addr_t dma_address, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_unmap_page);
void dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle,
size_t size, enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_single_for_cpu);
void dma_sync_single_for_device(struct device *dev, dma_addr_t dma_handle,
size_t size, enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_single_for_device);
void dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg, int nelems,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_sg_for_cpu);
void dma_sync_sg_for_device(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_sg_for_device);
void dma_sync_single_range_for_cpu(struct device *dev, dma_addr_t dma_handle,
unsigned long offset, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_single_range_for_cpu);
void dma_sync_single_range_for_device(struct device *dev,
dma_addr_t dma_handle,
unsigned long offset, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_single_range_for_device);
void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_cache_sync);
