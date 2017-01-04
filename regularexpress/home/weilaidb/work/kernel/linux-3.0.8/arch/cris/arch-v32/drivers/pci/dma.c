void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
