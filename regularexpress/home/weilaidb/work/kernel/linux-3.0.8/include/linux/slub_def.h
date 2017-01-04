#define _LINUX_SLUB_DEF_H
enum stat_item ;
struct kmem_cache_cpu ;
struct kmem_cache_node ;
struct kmem_cache_order_objects ;
struct kmem_cache ;
#if defined(ARCH_DMA_MINALIGN) && ARCH_DMA_MINALIGN > 8
#define KMALLOC_MIN_SIZE ARCH_DMA_MINALIGN
#define KMALLOC_MIN_SIZE 8
#define KMALLOC_SHIFT_LOW ilog2(KMALLOC_MIN_SIZE)
#define ARCH_KMALLOC_MINALIGN ARCH_DMA_MINALIGN
#define ARCH_KMALLOC_MINALIGN __alignof__(unsigned long long)
#define ARCH_SLAB_MINALIGN __alignof__(unsigned long long)
#define SLUB_MAX_SIZE (2 * PAGE_SIZE)
#define SLUB_PAGE_SHIFT (PAGE_SHIFT + 2)
#define SLUB_DMA __GFP_DMA
#define SLUB_DMA (__force gfp_t)0
extern struct kmem_cache *kmalloc_caches[SLUB_PAGE_SHIFT];
static __always_inline int kmalloc_index(size_t size)
static __always_inline struct kmem_cache *kmalloc_slab(size_t size)
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);
static __always_inline void *
kmalloc_order(size_t size, gfp_t flags, unsigned int order)
extern void *
kmem_cache_alloc_trace(struct kmem_cache *s, gfp_t gfpflags, size_t size);
extern void *kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order);
static __always_inline void *
kmem_cache_alloc_trace(struct kmem_cache *s, gfp_t gfpflags, size_t size)
static __always_inline void *
kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order)
static __always_inline void *kmalloc_large(size_t size, gfp_t flags)
static __always_inline void *kmalloc(size_t size, gfp_t flags)
void *__kmalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);
extern void *kmem_cache_alloc_node_trace(struct kmem_cache *s,
gfp_t gfpflags,
int node, size_t size);
static __always_inline void *
kmem_cache_alloc_node_trace(struct kmem_cache *s,
gfp_t gfpflags,
int node, size_t size)
static __always_inline void *kmalloc_node(size_t size, gfp_t flags, int node)
