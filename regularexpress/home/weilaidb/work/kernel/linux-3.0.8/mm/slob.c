#if PAGE_SIZE <= (32767 * 2)
typedef s16 slobidx_t;
typedef s32 slobidx_t;
struct slob_block ;
typedef struct slob_block slob_t;
struct slob_page ;
static inline void struct_slob_page_wrong_size(void)
static inline void free_slob_page(struct slob_page *sp)
#define SLOB_BREAK1 256
#define SLOB_BREAK2 1024
static LIST_HEAD(free_slob_small);
static LIST_HEAD(free_slob_medium);
static LIST_HEAD(free_slob_large);
static inline int is_slob_page(struct slob_page *sp)
static inline void set_slob_page(struct slob_page *sp)
static inline void clear_slob_page(struct slob_page *sp)
static inline struct slob_page *slob_page(const void *addr)
static inline int slob_page_free(struct slob_page *sp)
static void set_slob_page_free(struct slob_page *sp, struct list_head *list)
static inline void clear_slob_page_free(struct slob_page *sp)
#define SLOB_UNIT sizeof(slob_t)
#define SLOB_UNITS(size) (((size) + SLOB_UNIT - 1)/SLOB_UNIT)
#define SLOB_ALIGN L1_CACHE_BYTES
struct slob_rcu ;
static DEFINE_SPINLOCK(slob_lock);
static void set_slob(slob_t *s, slobidx_t size, slob_t *next)
static slobidx_t slob_units(slob_t *s)
static slob_t *slob_next(slob_t *s)
static int slob_last(slob_t *s)
static void *slob_new_pages(gfp_t gfp, int order, int node)
static void slob_free_pages(void *b, int order)
static void *slob_page_alloc(struct slob_page *sp, size_t size, int align)
static void *slob_alloc(size_t size, gfp_t gfp, int align, int node)
static void slob_free(void *block, int size)
void *__kmalloc_node(size_t size, gfp_t gfp, int node)
EXPORT_SYMBOL(__kmalloc_node);
void kfree(const void *block)
EXPORT_SYMBOL(kfree);
size_t ksize(const void *block)
EXPORT_SYMBOL(ksize);
struct kmem_cache ;
struct kmem_cache *kmem_cache_create(const char *name, size_t size,
size_t align, unsigned long flags, void (*ctor)(void *))
EXPORT_SYMBOL(kmem_cache_create);
void kmem_cache_destroy(struct kmem_cache *c)
EXPORT_SYMBOL(kmem_cache_destroy);
void *kmem_cache_alloc_node(struct kmem_cache *c, gfp_t flags, int node)
EXPORT_SYMBOL(kmem_cache_alloc_node);
static void __kmem_cache_free(void *b, int size)
static void kmem_rcu_free(struct rcu_head *head)
void kmem_cache_free(struct kmem_cache *c, void *b)
EXPORT_SYMBOL(kmem_cache_free);
unsigned int kmem_cache_size(struct kmem_cache *c)
EXPORT_SYMBOL(kmem_cache_size);
int kmem_cache_shrink(struct kmem_cache *d)
EXPORT_SYMBOL(kmem_cache_shrink);
static unsigned int slob_ready __read_mostly;
int slab_is_available(void)
void __init kmem_cache_init(void)
void __init kmem_cache_init_late(void)
