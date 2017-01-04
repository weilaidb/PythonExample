#undef STATS
#define DO_STATS(X) do  while (0)
#define DO_STATS(X) do  while (0)
struct safe_buffer ;
struct dmabounce_pool ;
struct dmabounce_device_info ;
static ssize_t dmabounce_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(dmabounce_stats, 0400, dmabounce_show, NULL);
static inline struct safe_buffer *
alloc_safe_buffer(struct dmabounce_device_info *device_info, void *ptr,
size_t size, enum dma_data_direction dir)
static inline struct safe_buffer *
find_safe_buffer(struct dmabounce_device_info *device_info, dma_addr_t safe_dma_addr)
static inline void
free_safe_buffer(struct dmabounce_device_info *device_info, struct safe_buffer *buf)
static struct safe_buffer *find_safe_buffer_dev(struct device *dev,
dma_addr_t dma_addr, const char *where)
static inline dma_addr_t map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction dir)
static inline void unmap_single(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction dir)
dma_addr_t __dma_map_single(struct device *dev, void *ptr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(__dma_map_single);
void __dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(__dma_unmap_single);
dma_addr_t __dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(__dma_map_page);
void __dma_unmap_page(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(__dma_unmap_page);
int dmabounce_sync_for_cpu(struct device *dev, dma_addr_t addr,
unsigned long off, size_t sz, enum dma_data_direction dir)
EXPORT_SYMBOL(dmabounce_sync_for_cpu);
int dmabounce_sync_for_device(struct device *dev, dma_addr_t addr,
unsigned long off, size_t sz, enum dma_data_direction dir)
EXPORT_SYMBOL(dmabounce_sync_for_device);
static int dmabounce_init_pool(struct dmabounce_pool *pool, struct device *dev,
const char *name, unsigned long size)
int dmabounce_register_dev(struct device *dev, unsigned long small_buffer_size,
unsigned long large_buffer_size)
EXPORT_SYMBOL(dmabounce_register_dev);
void dmabounce_unregister_dev(struct device *dev)
EXPORT_SYMBOL(dmabounce_unregister_dev);
MODULE_AUTHOR("Christopher Hoover <ch@hpl.hp.com>, Deepak Saxena <dsaxena@plexity.net>");
MODULE_DESCRIPTION("Special dma__* routines for systems with limited DMA windows");
MODULE_LICENSE("GPL");
