#define ___ASM_SPARC_DMA_MAPPING_H
#define DMA_ERROR_CODE	(~(dma_addr_t)0x0)
extern int dma_supported(struct device *dev, u64 mask);
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
extern struct dma_map_ops *dma_ops, pci32_dma_ops;
extern struct bus_type pci_bus_type;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_handle)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline int dma_set_mask(struct device *dev, u64 mask)
