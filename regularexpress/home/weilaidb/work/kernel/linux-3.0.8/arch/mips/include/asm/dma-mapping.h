#define _ASM_DMA_MAPPING_H
extern struct dma_map_ops *mips_dma_map_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
static inline void dma_mark_clean(void *addr, size_t size)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_mapping_error(struct device *dev, u64 mask)
static inline int
dma_set_mask(struct device *dev, u64 mask)
extern void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction);
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
void *dma_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag);
void dma_free_noncoherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle);
