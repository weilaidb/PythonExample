# define mb_debug(f...) do  while (0)
#define mb_assert(c) do  while(0)
# define mb_debug(f...) do  while(0)
# define mb_assert(c) do  while(0)
#define mb_error(f...) do  while(0)
#define MB_CACHE_WRITER ((unsigned short)~0U >> 1)
static DECLARE_WAIT_QUEUE_HEAD(mb_cache_queue);
MODULE_AUTHOR("Andreas Gruenbacher <a.gruenbacher@computer.org>");
MODULE_DESCRIPTION("Meta block cache (for extended attributes)");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(mb_cache_create);
EXPORT_SYMBOL(mb_cache_shrink);
EXPORT_SYMBOL(mb_cache_destroy);
EXPORT_SYMBOL(mb_cache_entry_alloc);
EXPORT_SYMBOL(mb_cache_entry_insert);
EXPORT_SYMBOL(mb_cache_entry_release);
EXPORT_SYMBOL(mb_cache_entry_free);
EXPORT_SYMBOL(mb_cache_entry_get);
#if !defined(MB_CACHE_INDEXES_COUNT) || (MB_CACHE_INDEXES_COUNT > 0)
EXPORT_SYMBOL(mb_cache_entry_find_first);
EXPORT_SYMBOL(mb_cache_entry_find_next);
static LIST_HEAD(mb_cache_list);
static LIST_HEAD(mb_cache_lru_list);
static DEFINE_SPINLOCK(mb_cache_spinlock);
static int mb_cache_shrink_fn(struct shrinker *shrink,
struct shrink_control *sc);
static struct shrinker mb_cache_shrinker = ;
static inline int
__mb_cache_entry_is_hashed(struct mb_cache_entry *ce)
static void
__mb_cache_entry_unhash(struct mb_cache_entry *ce)
static void
__mb_cache_entry_forget(struct mb_cache_entry *ce, gfp_t gfp_mask)
static void
__mb_cache_entry_release_unlock(struct mb_cache_entry *ce)
__releases(mb_cache_spinlock)
static int
mb_cache_shrink_fn(struct shrinker *shrink, struct shrink_control *sc)
struct mb_cache *
mb_cache_create(const char *name, int bucket_bits)
void
mb_cache_shrink(struct block_device *bdev)
void
mb_cache_destroy(struct mb_cache *cache)
struct mb_cache_entry *
mb_cache_entry_alloc(struct mb_cache *cache, gfp_t gfp_flags)
int
mb_cache_entry_insert(struct mb_cache_entry *ce, struct block_device *bdev,
sector_t block, unsigned int key)
void
mb_cache_entry_release(struct mb_cache_entry *ce)
void
mb_cache_entry_free(struct mb_cache_entry *ce)
struct mb_cache_entry *
mb_cache_entry_get(struct mb_cache *cache, struct block_device *bdev,
sector_t block)
#if !defined(MB_CACHE_INDEXES_COUNT) || (MB_CACHE_INDEXES_COUNT > 0)
static struct mb_cache_entry *
__mb_cache_entry_find(struct list_head *l, struct list_head *head,
struct block_device *bdev, unsigned int key)
struct mb_cache_entry *
mb_cache_entry_find_first(struct mb_cache *cache, struct block_device *bdev,
unsigned int key)
struct mb_cache_entry *
mb_cache_entry_find_next(struct mb_cache_entry *prev,
struct block_device *bdev, unsigned int key)
static int __init init_mbcache(void)
static void __exit exit_mbcache(void)
module_init(init_mbcache)
module_exit(exit_mbcache)
