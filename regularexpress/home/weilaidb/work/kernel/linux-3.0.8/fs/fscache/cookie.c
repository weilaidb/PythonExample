#define FSCACHE_DEBUG_LEVEL COOKIE
struct kmem_cache *fscache_cookie_jar;
static atomic_t fscache_object_debug_id = ATOMIC_INIT(0);
static int fscache_acquire_non_index_cookie(struct fscache_cookie *cookie);
static int fscache_alloc_object(struct fscache_cache *cache,
struct fscache_cookie *cookie);
static int fscache_attach_object(struct fscache_cookie *cookie,
struct fscache_object *object);
void fscache_cookie_init_once(void *_cookie)
struct fscache_cookie *__fscache_acquire_cookie(
struct fscache_cookie *parent,
const struct fscache_cookie_def *def,
void *netfs_data)
EXPORT_SYMBOL(__fscache_acquire_cookie);
static int fscache_acquire_non_index_cookie(struct fscache_cookie *cookie)
static int fscache_alloc_object(struct fscache_cache *cache,
struct fscache_cookie *cookie)
static int fscache_attach_object(struct fscache_cookie *cookie,
struct fscache_object *object)
void __fscache_update_cookie(struct fscache_cookie *cookie)
EXPORT_SYMBOL(__fscache_update_cookie);
void __fscache_relinquish_cookie(struct fscache_cookie *cookie, int retire)
EXPORT_SYMBOL(__fscache_relinquish_cookie);
void __fscache_cookie_put(struct fscache_cookie *cookie)
