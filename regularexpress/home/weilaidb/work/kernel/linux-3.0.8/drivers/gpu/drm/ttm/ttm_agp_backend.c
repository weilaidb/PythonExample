struct ttm_agp_backend ;
static int ttm_agp_populate(struct ttm_backend *backend,
unsigned long num_pages, struct page **pages,
struct page *dummy_read_page,
dma_addr_t *dma_addrs)
static int ttm_agp_bind(struct ttm_backend *backend, struct ttm_mem_reg *bo_mem)
static int ttm_agp_unbind(struct ttm_backend *backend)
static void ttm_agp_clear(struct ttm_backend *backend)
static void ttm_agp_destroy(struct ttm_backend *backend)
static struct ttm_backend_func ttm_agp_func = ;
struct ttm_backend *ttm_agp_backend_init(struct ttm_bo_device *bdev,
struct agp_bridge_data *bridge)
EXPORT_SYMBOL(ttm_agp_backend_init);
