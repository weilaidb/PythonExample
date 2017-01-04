static int
check_addr(char *name, struct device *hwdev, dma_addr_t bus, size_t size)
static dma_addr_t nommu_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static int nommu_map_sg(struct device *hwdev, struct scatterlist *sg,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void nommu_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_addr)
static void nommu_sync_single_for_device(struct device *dev,
dma_addr_t addr, size_t size,
enum dma_data_direction dir)
static void nommu_sync_sg_for_device(struct device *dev,
struct scatterlist *sg, int nelems,
enum dma_data_direction dir)
struct dma_map_ops nommu_dma_ops = ;
