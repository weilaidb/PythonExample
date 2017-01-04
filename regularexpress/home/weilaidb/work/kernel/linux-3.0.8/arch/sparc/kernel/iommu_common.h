#define _IOMMU_COMMON_H
#define IO_PAGE_SHIFT			13
#define IO_PAGE_SIZE			(1UL << IO_PAGE_SHIFT)
#define IO_PAGE_MASK			(~(IO_PAGE_SIZE-1))
#define IO_PAGE_ALIGN(addr)		ALIGN(addr, IO_PAGE_SIZE)
#define IO_TSB_ENTRIES			(128*1024)
#define IO_TSB_SIZE			(IO_TSB_ENTRIES * 8)
#define IOMMU_PAGE_SHIFT		13
#define SG_ENT_PHYS_ADDRESS(SG)	(__pa(sg_virt((SG))))
static inline int is_span_boundary(unsigned long entry,
unsigned long shift,
unsigned long boundary_size,
struct scatterlist *outs,
struct scatterlist *sg)
extern unsigned long iommu_range_alloc(struct device *dev,
struct iommu *iommu,
unsigned long npages,
unsigned long *handle);
extern void iommu_range_free(struct iommu *iommu,
dma_addr_t dma_addr,
unsigned long npages);
