struct dma_coherent_mem ;
int dma_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
dma_addr_t device_addr, size_t size, int flags)
EXPORT_SYMBOL(dma_declare_coherent_memory);
void dma_release_declared_memory(struct device *dev)
EXPORT_SYMBOL(dma_release_declared_memory);
void *dma_mark_declared_memory_occupied(struct device *dev,
dma_addr_t device_addr, size_t size)
EXPORT_SYMBOL(dma_mark_declared_memory_occupied);
int dma_alloc_from_coherent(struct device *dev, ssize_t size,
dma_addr_t *dma_handle, void **ret)
EXPORT_SYMBOL(dma_alloc_from_coherent);
int dma_release_from_coherent(struct device *dev, int order, void *vaddr)
EXPORT_SYMBOL(dma_release_from_coherent);
