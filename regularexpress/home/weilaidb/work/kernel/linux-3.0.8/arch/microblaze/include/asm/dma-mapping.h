#define _ASM_MICROBLAZE_DMA_MAPPING_H
#define DMA_ERROR_CODE		(~(dma_addr_t)0x0)
#define __dma_alloc_coherent(dev, gfp, size, handle)	NULL
#define __dma_free_coherent(size, addr)		((void)0)
#define __dma_sync(addr, size, rw)		((void)0)
static inline unsigned long device_to_mask(struct device *dev)
extern struct dma_map_ops *dma_ops;
extern struct dma_map_ops dma_direct_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline void set_dma_ops(struct device *dev, struct dma_map_ops *ops)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_set_mask(struct device *dev, u64 dma_mask)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_handle)
static inline void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
