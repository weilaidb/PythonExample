static void add_element(mempool_t *pool, void *element)
static void *remove_element(mempool_t *pool)
static void free_pool(mempool_t *pool)
mempool_t *mempool_create(int min_nr, mempool_alloc_t *alloc_fn,
mempool_free_t *free_fn, void *pool_data)
EXPORT_SYMBOL(mempool_create);
mempool_t *mempool_create_node(int min_nr, mempool_alloc_t *alloc_fn,
mempool_free_t *free_fn, void *pool_data, int node_id)
EXPORT_SYMBOL(mempool_create_node);
int mempool_resize(mempool_t *pool, int new_min_nr, gfp_t gfp_mask)
EXPORT_SYMBOL(mempool_resize);
void mempool_destroy(mempool_t *pool)
EXPORT_SYMBOL(mempool_destroy);
void * mempool_alloc(mempool_t *pool, gfp_t gfp_mask)
EXPORT_SYMBOL(mempool_alloc);
void mempool_free(void *element, mempool_t *pool)
EXPORT_SYMBOL(mempool_free);
void *mempool_alloc_slab(gfp_t gfp_mask, void *pool_data)
EXPORT_SYMBOL(mempool_alloc_slab);
void mempool_free_slab(void *element, void *pool_data)
EXPORT_SYMBOL(mempool_free_slab);
void *mempool_kmalloc(gfp_t gfp_mask, void *pool_data)
EXPORT_SYMBOL(mempool_kmalloc);
void mempool_kfree(void *element, void *pool_data)
EXPORT_SYMBOL(mempool_kfree);
void *mempool_alloc_pages(gfp_t gfp_mask, void *pool_data)
EXPORT_SYMBOL(mempool_alloc_pages);
void mempool_free_pages(void *element, void *pool_data)
EXPORT_SYMBOL(mempool_free_pages);
