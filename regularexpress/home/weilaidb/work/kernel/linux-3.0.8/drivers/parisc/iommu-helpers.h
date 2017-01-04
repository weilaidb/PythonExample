static inline unsigned int
iommu_fill_pdir(struct ioc *ioc, struct scatterlist *startsg, int nents,
unsigned long hint,
void (*iommu_io_pdir_entry)(u64 *, space_t, unsigned long,
unsigned long))
static inline unsigned int
iommu_coalesce_chunks(struct ioc *ioc, struct device *dev,
struct scatterlist *startsg, int nents,
int (*iommu_alloc_range)(struct ioc *, struct device *, size_t))
