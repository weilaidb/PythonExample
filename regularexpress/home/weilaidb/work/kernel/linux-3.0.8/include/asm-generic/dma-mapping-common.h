#define _ASM_GENERIC_DMA_MAPPING_H
static inline dma_addr_t dma_map_single_attrs(struct device *dev, void *ptr,
size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static inline void dma_unmap_single_attrs(struct device *dev, dma_addr_t addr,
size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static inline int dma_map_sg_attrs(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static inline void dma_unmap_sg_attrs(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static inline dma_addr_t dma_map_page(struct device *dev, struct page *page,
size_t offset, size_t size,
enum dma_data_direction dir)
static inline void dma_unmap_page(struct device *dev, dma_addr_t addr,
size_t size, enum dma_data_direction dir)
static inline void dma_sync_single_for_cpu(struct device *dev, dma_addr_t addr,
size_t size,
enum dma_data_direction dir)
static inline void dma_sync_single_for_device(struct device *dev,
dma_addr_t addr, size_t size,
enum dma_data_direction dir)
static inline void dma_sync_single_range_for_cpu(struct device *dev,
dma_addr_t addr,
unsigned long offset,
size_t size,
enum dma_data_direction dir)
static inline void dma_sync_single_range_for_device(struct device *dev,
dma_addr_t addr,
unsigned long offset,
size_t size,
enum dma_data_direction dir)
static inline void
dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
static inline void
dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
#define dma_map_single(d, a, s, r) dma_map_single_attrs(d, a, s, r, NULL)
#define dma_unmap_single(d, a, s, r) dma_unmap_single_attrs(d, a, s, r, NULL)
#define dma_map_sg(d, s, n, r) dma_map_sg_attrs(d, s, n, r, NULL)
#define dma_unmap_sg(d, s, n, r) dma_unmap_sg_attrs(d, s, n, r, NULL)
