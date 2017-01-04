#define _PARISC_DMA_MAPPING_H
struct hppa_dma_ops ;
extern struct hppa_dma_ops pcxl_dma_ops;
extern struct hppa_dma_ops pcx_dma_ops;
extern struct hppa_dma_ops *hppa_dma_ops;
static inline void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
gfp_t flag)
static inline void *
dma_alloc_noncoherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
gfp_t flag)
static inline void
dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static inline void
dma_free_noncoherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static inline dma_addr_t
dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction direction)
static inline void
dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction direction)
static inline int
dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction direction)
static inline void
dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nhwentries,
enum dma_data_direction direction)
static inline dma_addr_t
dma_map_page(struct device *dev, struct page *page, unsigned long offset,
size_t size, enum dma_data_direction direction)
static inline void
dma_unmap_page(struct device *dev, dma_addr_t dma_address, size_t size,
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
dma_supported(struct device *dev, u64 mask)
static inline int
dma_set_mask(struct device *dev, u64 mask)
static inline void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
static inline void *
parisc_walk_tree(struct device *dev)
#define GET_IOC(dev) (HBA_DATA(parisc_walk_tree(dev))->iommu);
struct parisc_device;
struct ioc;
void * ccio_get_iommu(const struct parisc_device *dev);
int ccio_request_resource(const struct parisc_device *dev,
struct resource *res);
int ccio_allocate_resource(const struct parisc_device *dev,
struct resource *res, unsigned long size,
unsigned long min, unsigned long max, unsigned long align);
#define ccio_get_iommu(dev) NULL
#define ccio_request_resource(dev, res) insert_resource(&iomem_resource, res)
#define ccio_allocate_resource(dev, res, size, min, max, align) \
allocate_resource(&iomem_resource, res, size, min, max, \
align, NULL, NULL)
struct parisc_device;
void * sba_get_iommu(struct parisc_device *dev);
#define dma_mapping_error(dev, x)	0
