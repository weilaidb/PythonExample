#define list_to_page(head) (list_entry((head)->prev, struct page, lru))
struct cachefiles_lookup_data ;
static int cachefiles_attr_changed(struct fscache_object *_object);
static struct fscache_object *cachefiles_alloc_object(
struct fscache_cache *_cache,
struct fscache_cookie *cookie)
static int cachefiles_lookup_object(struct fscache_object *_object)
static void cachefiles_lookup_complete(struct fscache_object *_object)
static
struct fscache_object *cachefiles_grab_object(struct fscache_object *_object)
static void cachefiles_update_object(struct fscache_object *_object)
static void cachefiles_drop_object(struct fscache_object *_object)
static void cachefiles_put_object(struct fscache_object *_object)
static void cachefiles_sync_cache(struct fscache_cache *_cache)
static int cachefiles_attr_changed(struct fscache_object *_object)
static void cachefiles_dissociate_pages(struct fscache_cache *cache)
const struct fscache_cache_ops cachefiles_cache_ops = ;
