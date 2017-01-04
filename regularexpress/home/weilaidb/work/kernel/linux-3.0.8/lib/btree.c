#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define NODESIZE MAX(L1_CACHE_BYTES, 128)
struct btree_geo ;
struct btree_geo btree_geo32 = ;
EXPORT_SYMBOL_GPL(btree_geo32);
#define LONG_PER_U64 (64 / BITS_PER_LONG)
struct btree_geo btree_geo64 = ;
EXPORT_SYMBOL_GPL(btree_geo64);
struct btree_geo btree_geo128 = ;
EXPORT_SYMBOL_GPL(btree_geo128);
static struct kmem_cache *btree_cachep;
void *btree_alloc(gfp_t gfp_mask, void *pool_data)
EXPORT_SYMBOL_GPL(btree_alloc);
void btree_free(void *element, void *pool_data)
EXPORT_SYMBOL_GPL(btree_free);
static unsigned long *btree_node_alloc(struct btree_head *head, gfp_t gfp)
static int longcmp(const unsigned long *l1, const unsigned long *l2, size_t n)
static unsigned long *longcpy(unsigned long *dest, const unsigned long *src,
size_t n)
static unsigned long *longset(unsigned long *s, unsigned long c, size_t n)
static void dec_key(struct btree_geo *geo, unsigned long *key)
static unsigned long *bkey(struct btree_geo *geo, unsigned long *node, int n)
static void *bval(struct btree_geo *geo, unsigned long *node, int n)
static void setkey(struct btree_geo *geo, unsigned long *node, int n,
unsigned long *key)
static void setval(struct btree_geo *geo, unsigned long *node, int n,
void *val)
static void clearpair(struct btree_geo *geo, unsigned long *node, int n)
static inline void __btree_init(struct btree_head *head)
void btree_init_mempool(struct btree_head *head, mempool_t *mempool)
EXPORT_SYMBOL_GPL(btree_init_mempool);
int btree_init(struct btree_head *head)
EXPORT_SYMBOL_GPL(btree_init);
void btree_destroy(struct btree_head *head)
EXPORT_SYMBOL_GPL(btree_destroy);
void *btree_last(struct btree_head *head, struct btree_geo *geo,
unsigned long *key)
EXPORT_SYMBOL_GPL(btree_last);
static int keycmp(struct btree_geo *geo, unsigned long *node, int pos,
unsigned long *key)
static int keyzero(struct btree_geo *geo, unsigned long *key)
void *btree_lookup(struct btree_head *head, struct btree_geo *geo,
unsigned long *key)
EXPORT_SYMBOL_GPL(btree_lookup);
int btree_update(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, void *val)
EXPORT_SYMBOL_GPL(btree_update);
void *btree_get_prev(struct btree_head *head, struct btree_geo *geo,
unsigned long *__key)
static int getpos(struct btree_geo *geo, unsigned long *node,
unsigned long *key)
static int getfill(struct btree_geo *geo, unsigned long *node, int start)
static unsigned long *find_level(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, int level)
static int btree_grow(struct btree_head *head, struct btree_geo *geo,
gfp_t gfp)
static void btree_shrink(struct btree_head *head, struct btree_geo *geo)
static int btree_insert_level(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, void *val, int level,
gfp_t gfp)
int btree_insert(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, void *val, gfp_t gfp)
EXPORT_SYMBOL_GPL(btree_insert);
static void *btree_remove_level(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, int level);
static void merge(struct btree_head *head, struct btree_geo *geo, int level,
unsigned long *left, int lfill,
unsigned long *right, int rfill,
unsigned long *parent, int lpos)
static void rebalance(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, int level, unsigned long *child, int fill)
static void *btree_remove_level(struct btree_head *head, struct btree_geo *geo,
unsigned long *key, int level)
void *btree_remove(struct btree_head *head, struct btree_geo *geo,
unsigned long *key)
EXPORT_SYMBOL_GPL(btree_remove);
int btree_merge(struct btree_head *target, struct btree_head *victim,
struct btree_geo *geo, gfp_t gfp)
EXPORT_SYMBOL_GPL(btree_merge);
static size_t __btree_for_each(struct btree_head *head, struct btree_geo *geo,
unsigned long *node, unsigned long opaque,
void (*func)(void *elem, unsigned long opaque,
unsigned long *key, size_t index,
void *func2),
void *func2, int reap, int height, size_t count)
static void empty(void *elem, unsigned long opaque, unsigned long *key,
size_t index, void *func2)
void visitorl(void *elem, unsigned long opaque, unsigned long *key,
size_t index, void *__func)
EXPORT_SYMBOL_GPL(visitorl);
void visitor32(void *elem, unsigned long opaque, unsigned long *__key,
size_t index, void *__func)
EXPORT_SYMBOL_GPL(visitor32);
void visitor64(void *elem, unsigned long opaque, unsigned long *__key,
size_t index, void *__func)
EXPORT_SYMBOL_GPL(visitor64);
void visitor128(void *elem, unsigned long opaque, unsigned long *__key,
size_t index, void *__func)
EXPORT_SYMBOL_GPL(visitor128);
size_t btree_visitor(struct btree_head *head, struct btree_geo *geo,
unsigned long opaque,
void (*func)(void *elem, unsigned long opaque,
unsigned long *key,
size_t index, void *func2),
void *func2)
EXPORT_SYMBOL_GPL(btree_visitor);
size_t btree_grim_visitor(struct btree_head *head, struct btree_geo *geo,
unsigned long opaque,
void (*func)(void *elem, unsigned long opaque,
unsigned long *key,
size_t index, void *func2),
void *func2)
EXPORT_SYMBOL_GPL(btree_grim_visitor);
static int __init btree_module_init(void)
static void __exit btree_module_exit(void)
module_init(btree_module_init);
module_exit(btree_module_exit);
MODULE_AUTHOR("Joern Engel <joern@logfs.org>");
MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
