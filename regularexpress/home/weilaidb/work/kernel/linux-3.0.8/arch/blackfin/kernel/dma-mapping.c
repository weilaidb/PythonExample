static spinlock_t dma_page_lock;
static unsigned long *dma_page;
static unsigned int dma_pages;
static unsigned long dma_base;
static unsigned long dma_size;
static unsigned int dma_initialized;
static void dma_alloc_init(unsigned long start, unsigned long end)
static inline unsigned int get_pages(size_t size)
static unsigned long __alloc_dma_pages(unsigned int pages)
static void __free_dma_pages(unsigned long addr, unsigned int pages)
void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void
dma_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
EXPORT_SYMBOL(dma_free_coherent);
void __dma_sync(dma_addr_t addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(__dma_sync);
int
dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_map_sg);
void dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction direction)
EXPORT_SYMBOL(dma_sync_sg_for_device);
