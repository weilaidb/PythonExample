#if defined(CONFIG_DEBUG_SLAB) || defined(CONFIG_SLUB_DEBUG_ON)
#define DMAPOOL_DEBUG 1
struct dma_pool ;
struct dma_page ;
#define	POOL_TIMEOUT_JIFFIES	((100 * HZ) / 1000)
static DEFINE_MUTEX(pools_lock);
static ssize_t
show_pools(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(pools, S_IRUGO, show_pools, NULL);
struct dma_pool *dma_pool_create(const char *name, struct device *dev,
size_t size, size_t align, size_t boundary)
EXPORT_SYMBOL(dma_pool_create);
static void pool_initialise_page(struct dma_pool *pool, struct dma_page *page)
static struct dma_page *pool_alloc_page(struct dma_pool *pool, gfp_t mem_flags)
static inline int is_page_busy(struct dma_page *page)
static void pool_free_page(struct dma_pool *pool, struct dma_page *page)
void dma_pool_destroy(struct dma_pool *pool)
EXPORT_SYMBOL(dma_pool_destroy);
void *dma_pool_alloc(struct dma_pool *pool, gfp_t mem_flags,
dma_addr_t *handle)
EXPORT_SYMBOL(dma_pool_alloc);
static struct dma_page *pool_find_page(struct dma_pool *pool, dma_addr_t dma)
void dma_pool_free(struct dma_pool *pool, void *vaddr, dma_addr_t dma)
EXPORT_SYMBOL(dma_pool_free);
static void dmam_pool_release(struct device *dev, void *res)
static int dmam_pool_match(struct device *dev, void *res, void *match_data)
struct dma_pool *dmam_pool_create(const char *name, struct device *dev,
size_t size, size_t align, size_t allocation)
EXPORT_SYMBOL(dmam_pool_create);
void dmam_pool_destroy(struct dma_pool *pool)
EXPORT_SYMBOL(dmam_pool_destroy);
