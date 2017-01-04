#define OFFSET(val,align) ((unsigned long)	\
( (val) & ( (align) - 1)))
#define SLABS_PER_PAGE (1 << (PAGE_SHIFT - IO_TLB_SHIFT))
#define IO_TLB_MIN_SLABS ((1<<20) >> IO_TLB_SHIFT)
int swiotlb_force;
static char *io_tlb_start, *io_tlb_end;
static unsigned long io_tlb_nslabs;
static unsigned long io_tlb_overflow = 32*1024;
static void *io_tlb_overflow_buffer;
static unsigned int *io_tlb_list;
static unsigned int io_tlb_index;
static phys_addr_t *io_tlb_orig_addr;
static DEFINE_SPINLOCK(io_tlb_lock);
static int late_alloc;
static int __init
setup_io_tlb_npages(char *str)
__setup("swiotlb=", setup_io_tlb_npages);
unsigned long swioltb_nr_tbl(void)
static dma_addr_t swiotlb_virt_to_bus(struct device *hwdev,
volatile void *address)
void swiotlb_print_info(void)
void __init swiotlb_init_with_tbl(char *tlb, unsigned long nslabs, int verbose)
void __init
swiotlb_init_with_default_size(size_t default_size, int verbose)
void __init
swiotlb_init(int verbose)
int
swiotlb_late_init_with_default_size(size_t default_size)
void __init swiotlb_free(void)
static int is_swiotlb_buffer(phys_addr_t paddr)
void swiotlb_bounce(phys_addr_t phys, char *dma_addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(swiotlb_bounce);
void *swiotlb_tbl_map_single(struct device *hwdev, dma_addr_t tbl_dma_addr,
phys_addr_t phys, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(swiotlb_tbl_map_single);
static void *
map_single(struct device *hwdev, phys_addr_t phys, size_t size,
enum dma_data_direction dir)
void
swiotlb_tbl_unmap_single(struct device *hwdev, char *dma_addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL_GPL(swiotlb_tbl_unmap_single);
void
swiotlb_tbl_sync_single(struct device *hwdev, char *dma_addr, size_t size,
enum dma_data_direction dir,
enum dma_sync_target target)
EXPORT_SYMBOL_GPL(swiotlb_tbl_sync_single);
void *
swiotlb_alloc_coherent(struct device *hwdev, size_t size,
dma_addr_t *dma_handle, gfp_t flags)
EXPORT_SYMBOL(swiotlb_alloc_coherent);
void
swiotlb_free_coherent(struct device *hwdev, size_t size, void *vaddr,
dma_addr_t dev_addr)
EXPORT_SYMBOL(swiotlb_free_coherent);
static void
swiotlb_full(struct device *dev, size_t size, enum dma_data_direction dir,
int do_panic)
dma_addr_t swiotlb_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(swiotlb_map_page);
static void unmap_single(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
void swiotlb_unmap_page(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
EXPORT_SYMBOL_GPL(swiotlb_unmap_page);
static void
swiotlb_sync_single(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir,
enum dma_sync_target target)
void
swiotlb_sync_single_for_cpu(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_sync_single_for_cpu);
void
swiotlb_sync_single_for_device(struct device *hwdev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_sync_single_for_device);
int
swiotlb_map_sg_attrs(struct device *hwdev, struct scatterlist *sgl, int nelems,
enum dma_data_direction dir, struct dma_attrs *attrs)
EXPORT_SYMBOL(swiotlb_map_sg_attrs);
int
swiotlb_map_sg(struct device *hwdev, struct scatterlist *sgl, int nelems,
enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_map_sg);
void
swiotlb_unmap_sg_attrs(struct device *hwdev, struct scatterlist *sgl,
int nelems, enum dma_data_direction dir, struct dma_attrs *attrs)
EXPORT_SYMBOL(swiotlb_unmap_sg_attrs);
void
swiotlb_unmap_sg(struct device *hwdev, struct scatterlist *sgl, int nelems,
enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_unmap_sg);
static void
swiotlb_sync_sg(struct device *hwdev, struct scatterlist *sgl,
int nelems, enum dma_data_direction dir,
enum dma_sync_target target)
void
swiotlb_sync_sg_for_cpu(struct device *hwdev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_sync_sg_for_cpu);
void
swiotlb_sync_sg_for_device(struct device *hwdev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
EXPORT_SYMBOL(swiotlb_sync_sg_for_device);
int
swiotlb_dma_mapping_error(struct device *hwdev, dma_addr_t dma_addr)
EXPORT_SYMBOL(swiotlb_dma_mapping_error);
int
swiotlb_dma_supported(struct device *hwdev, u64 mask)
EXPORT_SYMBOL(swiotlb_dma_supported);
