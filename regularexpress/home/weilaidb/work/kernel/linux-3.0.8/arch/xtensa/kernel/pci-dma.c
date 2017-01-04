void *
dma_alloc_coherent(struct device *dev,size_t size,dma_addr_t *handle,gfp_t flag)
void dma_free_coherent(struct device *hwdev, size_t size,
void *vaddr, dma_addr_t dma_handle)
void consistent_sync(void *vaddr, size_t size, int direction)
