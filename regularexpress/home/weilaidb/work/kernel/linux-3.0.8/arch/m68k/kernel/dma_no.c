void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
void dma_sync_single_for_device(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(dma_sync_single_for_device);
dma_addr_t dma_map_single(struct device *dev, void *addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(dma_map_single);
dma_addr_t dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(dma_map_page);
