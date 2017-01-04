#define	_LINUX_SLAB_H
#define SLAB_DEBUG_FREE		0x00000100UL
#define SLAB_RED_ZONE		0x00000400UL
#define SLAB_POISON		0x00000800UL
#define SLAB_HWCACHE_ALIGN	0x00002000UL
#define SLAB_CACHE_DMA		0x00004000UL
#define SLAB_STORE_USER		0x00010000UL
#define SLAB_PANIC		0x00040000UL
#define SLAB_DESTROY_BY_RCU	0x00080000UL
#define SLAB_MEM_SPREAD		0x00100000UL
#define SLAB_TRACE		0x00200000UL
# define SLAB_DEBUG_OBJECTS	0x00400000UL
# define SLAB_DEBUG_OBJECTS	0x00000000UL
#define SLAB_NOLEAKTRACE	0x00800000UL
# define SLAB_NOTRACK		0x01000000UL
# define SLAB_NOTRACK		0x00000000UL
# define SLAB_FAILSLAB		0x02000000UL
# define SLAB_FAILSLAB		0x00000000UL
#define SLAB_RECLAIM_ACCOUNT	0x00020000UL
#define SLAB_TEMPORARY		SLAB_RECLAIM_ACCOUNT
#define ZERO_SIZE_PTR ((void *)16)
#define ZERO_OR_NULL_PTR(x) ((unsigned long)(x) <= \
(unsigned long)ZERO_SIZE_PTR)
void __init kmem_cache_init(void);
int slab_is_available(void);
struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
unsigned long,
void (*)(void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
#define KMEM_CACHE(__struct, __flags) kmem_cache_create(#__struct,\
sizeof(struct __struct), __alignof__(struct __struct),\
(__flags), NULL)
#define KMALLOC_SHIFT_HIGH	((MAX_ORDER + PAGE_SHIFT - 1) <= 25 ? \
(MAX_ORDER + PAGE_SHIFT - 1) : 25)
#define KMALLOC_MAX_SIZE	(1UL << KMALLOC_SHIFT_HIGH)
#define KMALLOC_MAX_ORDER	(KMALLOC_SHIFT_HIGH - PAGE_SHIFT)
void * __must_check __krealloc(const void *, size_t, gfp_t);
void * __must_check krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
void kzfree(const void *);
size_t ksize(const void *);
#elif defined(CONFIG_SLOB)
static inline void *kcalloc(size_t n, size_t size, gfp_t flags)
#if !defined(CONFIG_NUMA) && !defined(CONFIG_SLOB)
static inline void *kmalloc_node(size_t size, gfp_t flags, int node)
static inline void *__kmalloc_node(size_t size, gfp_t flags, int node)
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
static inline void *kmem_cache_alloc_node(struct kmem_cache *cachep,
gfp_t flags, int node)
#if defined(CONFIG_DEBUG_SLAB) || defined(CONFIG_SLUB) || \
(defined(CONFIG_SLAB) && defined(CONFIG_TRACING))
extern void *__kmalloc_track_caller(size_t, gfp_t, unsigned long);
#define kmalloc_track_caller(size, flags) \
__kmalloc_track_caller(size, flags, _RET_IP_)
#define kmalloc_track_caller(size, flags) \
__kmalloc(size, flags)
#if defined(CONFIG_DEBUG_SLAB) || defined(CONFIG_SLUB) || \
(defined(CONFIG_SLAB) && defined(CONFIG_TRACING))
extern void *__kmalloc_node_track_caller(size_t, gfp_t, int, unsigned long);
#define kmalloc_node_track_caller(size, flags, node) \
__kmalloc_node_track_caller(size, flags, node, \
_RET_IP_)
#define kmalloc_node_track_caller(size, flags, node) \
__kmalloc_node(size, flags, node)
#define kmalloc_node_track_caller(size, flags, node) \
kmalloc_track_caller(size, flags)
static inline void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
static inline void *kzalloc(size_t size, gfp_t flags)
static inline void *kzalloc_node(size_t size, gfp_t flags, int node)
void __init kmem_cache_init_late(void);
