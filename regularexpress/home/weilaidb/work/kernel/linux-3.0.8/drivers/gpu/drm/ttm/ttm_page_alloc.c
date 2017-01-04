#define NUM_PAGES_TO_ALLOC		(PAGE_SIZE/sizeof(struct page *))
#define SMALL_ALLOCATION		16
#define FREE_ALL_PAGES			(~0U)
#define PAGE_FREE_INTERVAL		1000
struct ttm_page_pool ;
struct ttm_pool_opts ;
#define NUM_POOLS 4
struct ttm_pool_manager ;
static struct attribute ttm_page_pool_max = ;
static struct attribute ttm_page_pool_small = ;
static struct attribute ttm_page_pool_alloc_size = ;
static struct attribute *ttm_pool_attrs[] = ;
static void ttm_pool_kobj_release(struct kobject *kobj)
static ssize_t ttm_pool_store(struct kobject *kobj,
struct attribute *attr, const char *buffer, size_t size)
static ssize_t ttm_pool_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static const struct sysfs_ops ttm_pool_sysfs_ops = ;
static struct kobj_type ttm_pool_kobj_type = ;
static struct ttm_pool_manager *_manager;
static int set_pages_array_wb(struct page **pages, int addrinarray)
static int set_pages_array_wc(struct page **pages, int addrinarray)
static int set_pages_array_uc(struct page **pages, int addrinarray)
static struct ttm_page_pool *ttm_get_pool(int flags,
enum ttm_caching_state cstate)
static void ttm_pages_put(struct page *pages[], unsigned npages)
static void ttm_pool_update_free_locked(struct ttm_page_pool *pool,
unsigned freed_pages)
static int ttm_page_pool_free(struct ttm_page_pool *pool, unsigned nr_free)
static int ttm_pool_get_num_unused_pages(void)
static int ttm_pool_mm_shrink(struct shrinker *shrink,
struct shrink_control *sc)
static void ttm_pool_mm_shrink_init(struct ttm_pool_manager *manager)
static void ttm_pool_mm_shrink_fini(struct ttm_pool_manager *manager)
static int ttm_set_pages_caching(struct page **pages,
enum ttm_caching_state cstate, unsigned cpages)
static void ttm_handle_caching_state_failure(struct list_head *pages,
int ttm_flags, enum ttm_caching_state cstate,
struct page **failed_pages, unsigned cpages)
static int ttm_alloc_new_pages(struct list_head *pages, gfp_t gfp_flags,
int ttm_flags, enum ttm_caching_state cstate, unsigned count)
static void ttm_page_pool_fill_locked(struct ttm_page_pool *pool,
int ttm_flags, enum ttm_caching_state cstate, unsigned count,
unsigned long *irq_flags)
static unsigned ttm_page_pool_get_pages(struct ttm_page_pool *pool,
struct list_head *pages, int ttm_flags,
enum ttm_caching_state cstate, unsigned count)
int ttm_get_pages(struct list_head *pages, int flags,
enum ttm_caching_state cstate, unsigned count,
dma_addr_t *dma_address)
void ttm_put_pages(struct list_head *pages, unsigned page_count, int flags,
enum ttm_caching_state cstate, dma_addr_t *dma_address)
static void ttm_page_pool_init_locked(struct ttm_page_pool *pool, int flags,
char *name)
int ttm_page_alloc_init(struct ttm_mem_global *glob, unsigned max_pages)
void ttm_page_alloc_fini(void)
int ttm_page_alloc_debugfs(struct seq_file *m, void *data)
EXPORT_SYMBOL(ttm_page_alloc_debugfs);
