#define _ALPHA_DMA_MAPPING_H
extern struct dma_map_ops *dma_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_set_mask(struct device *dev, u64 mask)
#define dma_alloc_noncoherent(d, s, h, f)	dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h)	dma_free_coherent(d, s, v, h)
#define dma_cache_sync(dev, va, size, dir)		  ((void)0)
