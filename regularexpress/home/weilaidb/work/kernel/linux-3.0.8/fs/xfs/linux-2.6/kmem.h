#define __XFS_SUPPORT_KMEM_H__
#define KM_SLEEP	0x0001u
#define KM_NOSLEEP	0x0002u
#define KM_NOFS		0x0004u
#define KM_MAYFAIL	0x0008u
static inline gfp_t
kmem_flags_convert(unsigned int __nocast flags)
extern void *kmem_alloc(size_t, unsigned int __nocast);
extern void *kmem_zalloc(size_t, unsigned int __nocast);
extern void *kmem_realloc(const void *, size_t, size_t, unsigned int __nocast);
extern void  kmem_free(const void *);
static inline void *kmem_zalloc_large(size_t size)
static inline void kmem_free_large(void *ptr)
extern void *kmem_zalloc_greedy(size_t *, size_t, size_t);
#define KM_ZONE_HWALIGN	SLAB_HWCACHE_ALIGN
#define KM_ZONE_RECLAIM	SLAB_RECLAIM_ACCOUNT
#define KM_ZONE_SPREAD	SLAB_MEM_SPREAD
#define kmem_zone	kmem_cache
#define kmem_zone_t	struct kmem_cache
static inline kmem_zone_t *
kmem_zone_init(int size, char *zone_name)
static inline kmem_zone_t *
kmem_zone_init_flags(int size, char *zone_name, unsigned long flags,
void (*construct)(void *))
static inline void
kmem_zone_free(kmem_zone_t *zone, void *ptr)
static inline void
kmem_zone_destroy(kmem_zone_t *zone)
extern void *kmem_zone_alloc(kmem_zone_t *, unsigned int __nocast);
extern void *kmem_zone_zalloc(kmem_zone_t *, unsigned int __nocast);
static inline int
kmem_shake_allow(gfp_t gfp_mask)
