void *
kmem_zalloc_greedy(size_t *size, size_t minsize, size_t maxsize)
void *
kmem_alloc(size_t size, unsigned int __nocast flags)
void *
kmem_zalloc(size_t size, unsigned int __nocast flags)
void
kmem_free(const void *ptr)
void *
kmem_realloc(const void *ptr, size_t newsize, size_t oldsize,
unsigned int __nocast flags)
void *
kmem_zone_alloc(kmem_zone_t *zone, unsigned int __nocast flags)
void *
kmem_zone_zalloc(kmem_zone_t *zone, unsigned int __nocast flags)
