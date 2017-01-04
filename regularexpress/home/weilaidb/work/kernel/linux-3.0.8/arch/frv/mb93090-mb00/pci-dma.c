void *dma_alloc_coherent(struct device *hwdev, size_t size, dma_addr_t *dma_handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void dma_free_coherent(struct device *hwdev, size_t size, void *vaddr, dma_addr_t dma_handle)
EXPORT_SYMBOL(dma_free_coherent);
dma_addr_t dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_single);
int dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_sg);
dma_addr_t dma_map_page(struct device *dev, struct page *page, unsigned long offset,
size_t size, enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_page);
