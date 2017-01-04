#define _BLACKFIN_DMA_MAPPING_H
struct scatterlist;
void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp);
void dma_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle);
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
#define dma_supported(d, m)         (1)
static inline int
dma_set_mask(struct device *dev, u64 dma_mask)
static inline int
dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
extern void
__dma_sync(dma_addr_t addr, size_t size, enum dma_data_direction dir);
static inline void
__dma_sync_inline(dma_addr_t addr, size_t size, enum dma_data_direction dir)
static inline void
_dma_sync(dma_addr_t addr, size_t size, enum dma_data_direction dir)
static inline dma_addr_t
dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction dir)
static inline dma_addr_t
dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir)
static inline void
dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction dir)
static inline void
dma_unmap_page(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction dir)
extern int dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir);
static inline void
dma_unmap_sg(struct device *dev, struct scatterlist *sg,
int nhwentries, enum dma_data_direction dir)
static inline void
dma_sync_single_range_for_cpu(struct device *dev, dma_addr_t handle,
unsigned long offset, size_t size,
enum dma_data_direction dir)
static inline void
dma_sync_single_range_for_device(struct device *dev, dma_addr_t handle,
unsigned long offset, size_t size,
enum dma_data_direction dir)
static inline void
dma_sync_single_for_cpu(struct device *dev, dma_addr_t handle, size_t size,
enum dma_data_direction dir)
static inline void
dma_sync_single_for_device(struct device *dev, dma_addr_t handle, size_t size,
enum dma_data_direction dir)
static inline void
dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir)
extern void
dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir);
static inline void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction dir)
