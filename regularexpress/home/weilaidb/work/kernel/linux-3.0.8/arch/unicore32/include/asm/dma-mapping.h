#define __UNICORE_DMA_MAPPING_H__
extern struct dma_map_ops swiotlb_dma_map_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
static inline dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
static inline phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
static inline void dma_mark_clean(void *addr, size_t size)
static inline int dma_set_mask(struct device *dev, u64 dma_mask)
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_handle)
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
static inline void dma_cache_sync(struct device *dev, void *vaddr,
size_t size, enum dma_data_direction direction)
