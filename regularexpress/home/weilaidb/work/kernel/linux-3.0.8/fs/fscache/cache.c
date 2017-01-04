#define FSCACHE_DEBUG_LEVEL CACHE
LIST_HEAD(fscache_cache_list);
DECLARE_RWSEM(fscache_addremove_sem);
DECLARE_WAIT_QUEUE_HEAD(fscache_cache_cleared_wq);
EXPORT_SYMBOL(fscache_cache_cleared_wq);
static LIST_HEAD(fscache_cache_tag_list);
struct fscache_cache_tag *__fscache_lookup_cache_tag(const char *name)
void __fscache_release_cache_tag(struct fscache_cache_tag *tag)
struct fscache_cache *fscache_select_cache_for_object(
struct fscache_cookie *cookie)
void fscache_init_cache(struct fscache_cache *cache,
const struct fscache_cache_ops *ops,
const char *idfmt,
...)
EXPORT_SYMBOL(fscache_init_cache);
int fscache_add_cache(struct fscache_cache *cache,
struct fscache_object *ifsdef,
const char *tagname)
EXPORT_SYMBOL(fscache_add_cache);
void fscache_io_error(struct fscache_cache *cache)
EXPORT_SYMBOL(fscache_io_error);
static void fscache_withdraw_all_objects(struct fscache_cache *cache,
struct list_head *dying_objects)
void fscache_withdraw_cache(struct fscache_cache *cache)
EXPORT_SYMBOL(fscache_withdraw_cache);
