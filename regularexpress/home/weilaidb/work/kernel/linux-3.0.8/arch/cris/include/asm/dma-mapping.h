#define _ASM_CRIS_DMA_MAPPING_H
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag);
void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle);
static inline void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
gfp_t flag)
static inline void
dma_free_coherent(struct device *dev, size_t size, void *cpu_addr,
dma_addr_t dma_handle)
static inline dma_addr_t
dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction direction)
static inline void
dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction direction)
static inline int
dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction direction)
static inline dma_addr_t
dma_map_page(struct device *dev, struct page *page, unsigned long offset,
size_t size, enum dma_data_direction direction)
static inline void
dma_unmap_page(struct device *dev, dma_addr_t dma_address, size_t size,
enum dma_data_direction direction)
static inline void
dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nhwentries,
enum dma_data_direction direction)
static inline void
dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle, size_t size,
enum dma_data_direction direction)
static inline void
dma_sync_single_for_device(struct device *dev, dma_addr_t dma_handle, size_t size,
enum dma_data_direction direction)
static inline void
dma_sync_single_range_for_cpu(struct device *dev, dma_addr_t dma_handle,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static inline void
dma_sync_single_range_for_device(struct device *dev, dma_addr_t dma_handle,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static inline void
dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg, int nelems,
enum dma_data_direction direction)
static inline void
dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg, int nelems,
enum dma_data_direction direction)
static inline int
dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline int
dma_supported(struct device *dev, u64 mask)
static inline int
dma_set_mask(struct device *dev, u64 mask)
static inline void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
