#define __LINUX_SLOB_DEF_H
#define ARCH_KMALLOC_MINALIGN ARCH_DMA_MINALIGN
#define ARCH_KMALLOC_MINALIGN __alignof__(unsigned long)
#define ARCH_SLAB_MINALIGN __alignof__(unsigned long)
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);
static __always_inline void *kmem_cache_alloc(struct kmem_cache *cachep,
gfp_t flags)
void *__kmalloc_node(size_t size, gfp_t flags, int node);
static __always_inline void *kmalloc_node(size_t size, gfp_t flags, int node)
static __always_inline void *kmalloc(size_t size, gfp_t flags)
static __always_inline void *__kmalloc(size_t size, gfp_t flags)
