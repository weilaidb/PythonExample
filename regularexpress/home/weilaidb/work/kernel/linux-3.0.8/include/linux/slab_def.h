#define	_LINUX_SLAB_DEF_H
#define ARCH_KMALLOC_MINALIGN ARCH_DMA_MINALIGN
#define ARCH_KMALLOC_MINALIGN __alignof__(unsigned long long)
#define ARCH_SLAB_MINALIGN 0
struct kmem_cache ;
struct cache_sizes ;
extern struct cache_sizes malloc_sizes[];
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);
extern void *kmem_cache_alloc_trace(size_t size,
struct kmem_cache *cachep, gfp_t flags);
extern size_t slab_buffer_size(struct kmem_cache *cachep);
static __always_inline void *
kmem_cache_alloc_trace(size_t size, struct kmem_cache *cachep, gfp_t flags)
static inline size_t slab_buffer_size(struct kmem_cache *cachep)
static __always_inline void *kmalloc(size_t size, gfp_t flags)
extern void *__kmalloc_node(size_t size, gfp_t flags, int node);
extern void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);
extern void *kmem_cache_alloc_node_trace(size_t size,
struct kmem_cache *cachep,
gfp_t flags,
int nodeid);
static __always_inline void *
kmem_cache_alloc_node_trace(size_t size,
struct kmem_cache *cachep,
gfp_t flags,
int nodeid)
static __always_inline void *kmalloc_node(size_t size, gfp_t flags, int node)
