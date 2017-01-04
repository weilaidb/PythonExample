struct cachefiles_cache;
struct cachefiles_object;
extern unsigned cachefiles_debug;
#define CACHEFILES_DEBUG_KENTER	1
#define CACHEFILES_DEBUG_KLEAVE	2
#define CACHEFILES_DEBUG_KDEBUG	4
struct cachefiles_object ;
extern struct kmem_cache *cachefiles_object_jar;
struct cachefiles_cache ;
struct cachefiles_one_read ;
struct cachefiles_one_write ;
struct cachefiles_xattr ;
static inline void cachefiles_state_changed(struct cachefiles_cache *cache)
extern int cachefiles_daemon_bind(struct cachefiles_cache *cache, char *args);
extern void cachefiles_daemon_unbind(struct cachefiles_cache *cache);
extern const struct file_operations cachefiles_daemon_fops;
extern int cachefiles_has_space(struct cachefiles_cache *cache,
unsigned fnr, unsigned bnr);
extern const struct fscache_cache_ops cachefiles_cache_ops;
extern char *cachefiles_cook_key(const u8 *raw, int keylen, uint8_t type);
extern int cachefiles_delete_object(struct cachefiles_cache *cache,
struct cachefiles_object *object);
extern int cachefiles_walk_to_object(struct cachefiles_object *parent,
struct cachefiles_object *object,
const char *key,
struct cachefiles_xattr *auxdata);
extern struct dentry *cachefiles_get_directory(struct cachefiles_cache *cache,
struct dentry *dir,
const char *name);
extern int cachefiles_cull(struct cachefiles_cache *cache, struct dentry *dir,
char *filename);
extern int cachefiles_check_in_use(struct cachefiles_cache *cache,
struct dentry *dir, char *filename);
extern atomic_t cachefiles_lookup_histogram[HZ];
extern atomic_t cachefiles_mkdir_histogram[HZ];
extern atomic_t cachefiles_create_histogram[HZ];
extern int __init cachefiles_proc_init(void);
extern void cachefiles_proc_cleanup(void);
static inline
void cachefiles_hist(atomic_t histogram[], unsigned long start_jif)
#define cachefiles_proc_init()		(0)
#define cachefiles_proc_cleanup()	do  while (0)
#define cachefiles_hist(hist, start_jif) do  while (0)
extern int cachefiles_read_or_alloc_page(struct fscache_retrieval *,
struct page *, gfp_t);
extern int cachefiles_read_or_alloc_pages(struct fscache_retrieval *,
struct list_head *, unsigned *,
gfp_t);
extern int cachefiles_allocate_page(struct fscache_retrieval *, struct page *,
gfp_t);
extern int cachefiles_allocate_pages(struct fscache_retrieval *,
struct list_head *, unsigned *, gfp_t);
extern int cachefiles_write_page(struct fscache_storage *, struct page *);
extern void cachefiles_uncache_page(struct fscache_object *, struct page *);
extern int cachefiles_get_security_ID(struct cachefiles_cache *cache);
extern int cachefiles_determine_cache_security(struct cachefiles_cache *cache,
struct dentry *root,
const struct cred **_saved_cred);
static inline void cachefiles_begin_secure(struct cachefiles_cache *cache,
const struct cred **_saved_cred)
static inline void cachefiles_end_secure(struct cachefiles_cache *cache,
const struct cred *saved_cred)
extern int cachefiles_check_object_type(struct cachefiles_object *object);
extern int cachefiles_set_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata);
extern int cachefiles_update_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata);
extern int cachefiles_check_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata);
extern int cachefiles_remove_object_xattr(struct cachefiles_cache *cache,
struct dentry *dentry);
#define kerror(FMT, ...) printk(KERN_ERR "CacheFiles: "FMT"\n", ##__VA_ARGS__)
#define cachefiles_io_error(___cache, FMT, ...)		\
do  while (0)
#define cachefiles_io_error_obj(object, FMT, ...)			\
do  while (0)
#define dbgprintk(FMT, ...) \
printk(KERN_DEBUG "[%-6.6s] "FMT"\n", current->comm, ##__VA_ARGS__)
#define kenter(FMT, ...) dbgprintk("==> %s("FMT")", __func__, ##__VA_ARGS__)
#define kleave(FMT, ...) dbgprintk("<== %s()"FMT"", __func__, ##__VA_ARGS__)
#define kdebug(FMT, ...) dbgprintk(FMT, ##__VA_ARGS__)
#if defined(__KDEBUG)
#define _enter(FMT, ...) kenter(FMT, ##__VA_ARGS__)
#define _leave(FMT, ...) kleave(FMT, ##__VA_ARGS__)
#define _debug(FMT, ...) kdebug(FMT, ##__VA_ARGS__)
#elif defined(CONFIG_CACHEFILES_DEBUG)
#define _enter(FMT, ...)				\
do  while (0)
#define _leave(FMT, ...)				\
do  while (0)
#define _debug(FMT, ...)				\
do  while (0)
#define _enter(FMT, ...) no_printk("==> %s("FMT")", __func__, ##__VA_ARGS__)
#define _leave(FMT, ...) no_printk("<== %s()"FMT"", __func__, ##__VA_ARGS__)
#define _debug(FMT, ...) no_printk(FMT, ##__VA_ARGS__)
#if 1
#define ASSERT(X)							\
do  while (0)
#define ASSERTCMP(X, OP, Y)						\
do  while (0)
#define ASSERTIF(C, X)							\
do  while (0)
#define ASSERTIFCMP(C, X, OP, Y)					\
do  while (0)
#define ASSERT(X)			do  while (0)
#define ASSERTCMP(X, OP, Y)		do  while (0)
#define ASSERTIF(C, X)			do  while (0)
#define ASSERTIFCMP(C, X, OP, Y)	do  while (0)
