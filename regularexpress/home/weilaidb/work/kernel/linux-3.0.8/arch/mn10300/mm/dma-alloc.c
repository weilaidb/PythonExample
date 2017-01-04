static unsigned long pci_sram_allocated = 0xbc000000;
void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, int gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void dma_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
EXPORT_SYMBOL(dma_free_coherent);
