#define __ASM_SH_DMA_MAPPING_H
extern struct dma_map_ops *dma_ops;
extern void no_iommu_init(void);
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_set_mask(struct device *dev, u64 mask)
void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction dir);
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
extern void *dma_generic_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addr, gfp_t flag);
extern void dma_generic_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle);
