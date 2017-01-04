#define CACHEFILES_KEYBUF_SIZE 512
static noinline
void __cachefiles_printk_object(struct cachefiles_object *object,
const char *prefix,
u8 *keybuf)
static noinline void cachefiles_printk_object(struct cachefiles_object *object,
struct cachefiles_object *xobject)
static void cachefiles_mark_object_buried(struct cachefiles_cache *cache,
struct dentry *dentry)
static int cachefiles_mark_object_active(struct cachefiles_cache *cache,
struct cachefiles_object *object)
static int cachefiles_bury_object(struct cachefiles_cache *cache,
struct dentry *dir,
struct dentry *rep,
bool preemptive)
int cachefiles_delete_object(struct cachefiles_cache *cache,
struct cachefiles_object *object)
int cachefiles_walk_to_object(struct cachefiles_object *parent,
struct cachefiles_object *object,
const char *key,
struct cachefiles_xattr *auxdata)
struct dentry *cachefiles_get_directory(struct cachefiles_cache *cache,
struct dentry *dir,
const char *dirname)
static struct dentry *cachefiles_check_active(struct cachefiles_cache *cache,
struct dentry *dir,
char *filename)
int cachefiles_cull(struct cachefiles_cache *cache, struct dentry *dir,
char *filename)
int cachefiles_check_in_use(struct cachefiles_cache *cache, struct dentry *dir,
char *filename)
