extern struct dma_map_ops sba_dma_ops, swiotlb_dma_ops;
extern int swiotlb_late_init_with_default_size (size_t size);
static inline int use_swiotlb(struct device *dev)
struct dma_map_ops *hwsw_dma_get_ops(struct device *dev)
EXPORT_SYMBOL(hwsw_dma_get_ops);
void __init
hwsw_init (void)
