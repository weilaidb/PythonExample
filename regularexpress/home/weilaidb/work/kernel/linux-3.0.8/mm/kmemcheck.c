void kmemcheck_alloc_shadow(struct page *page, int order, gfp_t flags, int node)
void kmemcheck_free_shadow(struct page *page, int order)
void kmemcheck_slab_alloc(struct kmem_cache *s, gfp_t gfpflags, void *object,
size_t size)
void kmemcheck_slab_free(struct kmem_cache *s, void *object, size_t size)
void kmemcheck_pagealloc_alloc(struct page *page, unsigned int order,
gfp_t gfpflags)
