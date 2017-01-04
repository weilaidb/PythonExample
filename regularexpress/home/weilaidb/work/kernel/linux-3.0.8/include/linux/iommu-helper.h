#define _LINUX_IOMMU_HELPER_H
static inline unsigned long iommu_device_max_index(unsigned long size,
unsigned long offset,
u64 dma_mask)
extern int iommu_is_span_boundary(unsigned int index, unsigned int nr,
unsigned long shift,
unsigned long boundary_size);
extern unsigned long iommu_area_alloc(unsigned long *map, unsigned long size,
unsigned long start, unsigned int nr,
unsigned long shift,
unsigned long boundary_size,
unsigned long align_mask);
static inline unsigned long iommu_num_pages(unsigned long addr,
unsigned long len,
unsigned long io_page_size)
