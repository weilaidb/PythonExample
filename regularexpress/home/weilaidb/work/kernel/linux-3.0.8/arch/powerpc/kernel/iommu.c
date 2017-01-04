#define DBG(...)
static int novmerge;
static void __iommu_free(struct iommu_table *, dma_addr_t, unsigned int);
static int __init setup_iommu(char *str)
__setup("iommu=", setup_iommu);
static unsigned long iommu_range_alloc(struct device *dev,
struct iommu_table *tbl,
unsigned long npages,
unsigned long *handle,
unsigned long mask,
unsigned int align_order)
static dma_addr_t iommu_alloc(struct device *dev, struct iommu_table *tbl,
void *page, unsigned int npages,
enum dma_data_direction direction,
unsigned long mask, unsigned int align_order,
struct dma_attrs *attrs)
static void __iommu_free(struct iommu_table *tbl, dma_addr_t dma_addr,
unsigned int npages)
static void iommu_free(struct iommu_table *tbl, dma_addr_t dma_addr,
unsigned int npages)
int iommu_map_sg(struct device *dev, struct iommu_table *tbl,
struct scatterlist *sglist, int nelems,
unsigned long mask, enum dma_data_direction direction,
struct dma_attrs *attrs)
void iommu_unmap_sg(struct iommu_table *tbl, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void iommu_table_clear(struct iommu_table *tbl)
struct iommu_table *iommu_init_table(struct iommu_table *tbl, int nid)
void iommu_free_table(struct iommu_table *tbl, const char *node_name)
dma_addr_t iommu_map_page(struct device *dev, struct iommu_table *tbl,
struct page *page, unsigned long offset, size_t size,
unsigned long mask, enum dma_data_direction direction,
struct dma_attrs *attrs)
void iommu_unmap_page(struct iommu_table *tbl, dma_addr_t dma_handle,
size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
void *iommu_alloc_coherent(struct device *dev, struct iommu_table *tbl,
size_t size,	dma_addr_t *dma_handle,
unsigned long mask, gfp_t flag, int node)
void iommu_free_coherent(struct iommu_table *tbl, size_t size,
void *vaddr, dma_addr_t dma_handle)
