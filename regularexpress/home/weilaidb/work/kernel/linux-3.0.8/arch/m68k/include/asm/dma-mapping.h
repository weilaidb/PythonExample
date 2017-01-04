#define _M68K_DMA_MAPPING_H
struct scatterlist;
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_set_mask(struct device *dev, u64 mask)
extern void *dma_alloc_coherent(struct device *, size_t,
dma_addr_t *, gfp_t);
extern void dma_free_coherent(struct device *, size_t,
void *, dma_addr_t);
static inline void *dma_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t flag)
static inline void dma_free_noncoherent(struct device *dev, size_t size,
void *addr, dma_addr_t handle)
static inline void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction dir)
extern dma_addr_t dma_map_single(struct device *, void *, size_t,
enum dma_data_direction);
static inline void dma_unmap_single(struct device *dev, dma_addr_t addr,
size_t size, enum dma_data_direction dir)
extern dma_addr_t dma_map_page(struct device *, struct page *,
unsigned long, size_t size,
enum dma_data_direction);
static inline void dma_unmap_page(struct device *dev, dma_addr_t address,
size_t size, enum dma_data_direction dir)
extern int dma_map_sg(struct device *, struct scatterlist *, int,
enum dma_data_direction);
static inline void dma_unmap_sg(struct device *dev, struct scatterlist *sg,
int nhwentries, enum dma_data_direction dir)
extern void dma_sync_single_for_device(struct device *, dma_addr_t, size_t,
enum dma_data_direction);
extern void dma_sync_sg_for_device(struct device *, struct scatterlist *, int,
enum dma_data_direction);
static inline void dma_sync_single_range_for_device(struct device *dev,
dma_addr_t dma_handle, unsigned long offset, size_t size,
enum dma_data_direction direction)
static inline void dma_sync_single_for_cpu(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
static inline void dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir)
static inline void dma_sync_single_range_for_cpu(struct device *dev,
dma_addr_t dma_handle, unsigned long offset, size_t size,
enum dma_data_direction direction)
static inline int dma_mapping_error(struct device *dev, dma_addr_t handle)
