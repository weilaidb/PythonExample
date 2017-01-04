static char *xen_io_tlb_start, *xen_io_tlb_end;
static unsigned long xen_io_tlb_nslabs;
u64 start_dma_addr;
static dma_addr_t xen_phys_to_bus(phys_addr_t paddr)
static phys_addr_t xen_bus_to_phys(dma_addr_t baddr)
static dma_addr_t xen_virt_to_bus(void *address)
static int check_pages_physically_contiguous(unsigned long pfn,
unsigned int offset,
size_t length)
static int range_straddles_page_boundary(phys_addr_t p, size_t size)
static int is_xen_swiotlb_buffer(dma_addr_t dma_addr)
static int max_dma_bits = 32;
static int
xen_swiotlb_fixup(void *buf, size_t size, unsigned long nslabs)
void __init xen_swiotlb_init(int verbose)
void *
xen_swiotlb_alloc_coherent(struct device *hwdev, size_t size,
dma_addr_t *dma_handle, gfp_t flags)
EXPORT_SYMBOL_GPL(xen_swiotlb_alloc_coherent);
void
xen_swiotlb_free_coherent(struct device *hwdev, size_t size, void *vaddr,
dma_addr_t dev_addr)
EXPORT_SYMBOL_GPL(xen_swiotlb_free_coherent);
dma_addr_t xen_swiotlb_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(xen_swiotlb_map_page);
static void xen_unmap_single(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
void xen_swiotlb_unmap_page(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(xen_swiotlb_unmap_page);
static void
xen_swiotlb_sync_single(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir,
enum dma_sync_target target)
void
xen_swiotlb_sync_single_for_cpu(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_sync_single_for_cpu);
void
xen_swiotlb_sync_single_for_device(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_sync_single_for_device);
int
xen_swiotlb_map_sg_attrs(struct device *hwdev, struct scatterlist *sgl,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(xen_swiotlb_map_sg_attrs);
int
xen_swiotlb_map_sg(struct device *hwdev, struct scatterlist *sgl, int nelems,
enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_map_sg);
void
xen_swiotlb_unmap_sg_attrs(struct device *hwdev, struct scatterlist *sgl,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(xen_swiotlb_unmap_sg_attrs);
void
xen_swiotlb_unmap_sg(struct device *hwdev, struct scatterlist *sgl, int nelems,
enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_unmap_sg);
static void
xen_swiotlb_sync_sg(struct device *hwdev, struct scatterlist *sgl,
int nelems, enum dma_data_direction dir,
enum dma_sync_target target)
void
xen_swiotlb_sync_sg_for_cpu(struct device *hwdev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_sync_sg_for_cpu);
void
xen_swiotlb_sync_sg_for_device(struct device *hwdev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(xen_swiotlb_sync_sg_for_device);
int
xen_swiotlb_dma_mapping_error(struct device *hwdev, dma_addr_t dma_addr)
EXPORT_SYMBOL_GPL(xen_swiotlb_dma_mapping_error);
int
xen_swiotlb_dma_supported(struct device *hwdev, u64 mask)
EXPORT_SYMBOL_GPL(xen_swiotlb_dma_supported);
