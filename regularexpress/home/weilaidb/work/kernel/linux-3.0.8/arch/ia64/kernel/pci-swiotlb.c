int swiotlb __read_mostly;
EXPORT_SYMBOL(swiotlb);
static void *ia64_swiotlb_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
struct dma_map_ops swiotlb_dma_ops = ;
void __init swiotlb_dma_init(void)
void __init pci_swiotlb_init(void)
