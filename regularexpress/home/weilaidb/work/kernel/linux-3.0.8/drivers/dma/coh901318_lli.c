#if (defined(CONFIG_DEBUG_FS) && defined(CONFIG_U300_DEBUG))
#define DEBUGFS_POOL_COUNTER_RESET(pool) (pool->debugfs_pool_counter = 0)
#define DEBUGFS_POOL_COUNTER_ADD(pool, add) (pool->debugfs_pool_counter += add)
#define DEBUGFS_POOL_COUNTER_RESET(pool)
#define DEBUGFS_POOL_COUNTER_ADD(pool, add)
static struct coh901318_lli *
coh901318_lli_next(struct coh901318_lli *data)
int coh901318_pool_create(struct coh901318_pool *pool,
struct device *dev,
size_t size, size_t align)
int coh901318_pool_destroy(struct coh901318_pool *pool)
struct coh901318_lli *
coh901318_lli_alloc(struct coh901318_pool *pool, unsigned int len)
void coh901318_lli_free(struct coh901318_pool *pool,
struct coh901318_lli **lli)
int
coh901318_lli_fill_memcpy(struct coh901318_pool *pool,
struct coh901318_lli *lli,
dma_addr_t source, unsigned int size,
dma_addr_t destination, u32 ctrl_chained,
u32 ctrl_eom)
int
coh901318_lli_fill_single(struct coh901318_pool *pool,
struct coh901318_lli *lli,
dma_addr_t buf, unsigned int size,
dma_addr_t dev_addr, u32 ctrl_chained, u32 ctrl_eom,
enum dma_data_direction dir)
int
coh901318_lli_fill_sg(struct coh901318_pool *pool,
struct coh901318_lli *lli,
struct scatterlist *sgl, unsigned int nents,
dma_addr_t dev_addr, u32 ctrl_chained, u32 ctrl,
u32 ctrl_last,
enum dma_data_direction dir, u32 ctrl_irq_mask)
