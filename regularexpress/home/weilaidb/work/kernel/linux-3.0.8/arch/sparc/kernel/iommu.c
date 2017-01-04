#define STC_CTXMATCH_ADDR(STC, CTX)	\
((STC)->strbuf_ctxmatch_base + ((CTX) << 3))
#define STC_FLUSHFLAG_INIT(STC) \
(*((STC)->strbuf_flushflag) = 0UL)
#define STC_FLUSHFLAG_SET(STC) \
(*((STC)->strbuf_flushflag) != 0UL)
#define iommu_read(__reg) \
()
#define iommu_write(__reg, __val) \
__asm__ __volatile__("stxa %0, [%1] %2" \
: \
: "r" (__val), "r" (__reg), \
"i" (ASI_PHYS_BYPASS_EC_E))
static void iommu_flushall(struct iommu *iommu)
#define IOPTE_CONSISTENT(CTX) \
(IOPTE_VALID | IOPTE_CACHE | \
(((CTX) << 47) & IOPTE_CONTEXT))
#define IOPTE_STREAMING(CTX) \
(IOPTE_CONSISTENT(CTX) | IOPTE_STBUF)
#define IOPTE_IS_DUMMY(iommu, iopte)	\
((iopte_val(*iopte) & IOPTE_PAGE) == (iommu)->dummy_page_pa)
static inline void iopte_make_dummy(struct iommu *iommu, iopte_t *iopte)
unsigned long iommu_range_alloc(struct device *dev,
struct iommu *iommu,
unsigned long npages,
unsigned long *handle)
void iommu_range_free(struct iommu *iommu, dma_addr_t dma_addr, unsigned long npages)
int iommu_table_init(struct iommu *iommu, int tsbsize,
u32 dma_offset, u32 dma_addr_mask,
int numa_node)
static inline iopte_t *alloc_npages(struct device *dev, struct iommu *iommu,
unsigned long npages)
static int iommu_alloc_ctx(struct iommu *iommu)
static inline void iommu_free_ctx(struct iommu *iommu, int ctx)
static void *dma_4u_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addrp, gfp_t gfp)
static void dma_4u_free_coherent(struct device *dev, size_t size,
void *cpu, dma_addr_t dvma)
static dma_addr_t dma_4u_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t sz,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void strbuf_flush(struct strbuf *strbuf, struct iommu *iommu,
u32 vaddr, unsigned long ctx, unsigned long npages,
enum dma_data_direction direction)
static void dma_4u_unmap_page(struct device *dev, dma_addr_t bus_addr,
size_t sz, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_4u_map_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static unsigned long fetch_sg_ctx(struct iommu *iommu, struct scatterlist *sg)
static void dma_4u_unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_4u_sync_single_for_cpu(struct device *dev,
dma_addr_t bus_addr, size_t sz,
enum dma_data_direction direction)
static void dma_4u_sync_sg_for_cpu(struct device *dev,
struct scatterlist *sglist, int nelems,
enum dma_data_direction direction)
static struct dma_map_ops sun4u_dma_ops = ;
struct dma_map_ops *dma_ops = &sun4u_dma_ops;
EXPORT_SYMBOL(dma_ops);
extern int pci64_dma_supported(struct pci_dev *pdev, u64 device_mask);
int dma_supported(struct device *dev, u64 device_mask)
EXPORT_SYMBOL(dma_supported);
