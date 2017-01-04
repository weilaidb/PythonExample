static struct rb_root ima_iint_tree = RB_ROOT;
static DEFINE_SPINLOCK(ima_iint_lock);
static struct kmem_cache *iint_cache __read_mostly;
int iint_initialized = 0;
static struct ima_iint_cache *__ima_iint_find(struct inode *inode)
struct ima_iint_cache *ima_iint_find(struct inode *inode)
static void iint_free(struct ima_iint_cache *iint)
int ima_inode_alloc(struct inode *inode)
void ima_inode_free(struct inode *inode)
static void init_once(void *foo)
static int __init ima_iintcache_init(void)
security_initcall(ima_iintcache_init);
