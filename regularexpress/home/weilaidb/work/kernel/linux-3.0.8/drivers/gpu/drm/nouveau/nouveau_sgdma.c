#define NV_CTXDMA_PAGE_SHIFT 12
#define NV_CTXDMA_PAGE_SIZE  (1 << NV_CTXDMA_PAGE_SHIFT)
#define NV_CTXDMA_PAGE_MASK  (NV_CTXDMA_PAGE_SIZE - 1)
struct nouveau_sgdma_be ;
static int
nouveau_sgdma_populate(struct ttm_backend *be, unsigned long num_pages,
struct page **pages, struct page *dummy_read_page,
dma_addr_t *dma_addrs)
static void
nouveau_sgdma_clear(struct ttm_backend *be)
static void
nouveau_sgdma_destroy(struct ttm_backend *be)
static int
nv04_sgdma_bind(struct ttm_backend *be, struct ttm_mem_reg *mem)
static int
nv04_sgdma_unbind(struct ttm_backend *be)
static struct ttm_backend_func nv04_sgdma_backend = ;
static void
nv41_sgdma_flush(struct nouveau_sgdma_be *nvbe)
static int
nv41_sgdma_bind(struct ttm_backend *be, struct ttm_mem_reg *mem)
static int
nv41_sgdma_unbind(struct ttm_backend *be)
static struct ttm_backend_func nv41_sgdma_backend = ;
static void
nv44_sgdma_flush(struct nouveau_sgdma_be *nvbe)
static void
nv44_sgdma_fill(struct nouveau_gpuobj *pgt, dma_addr_t *list, u32 base, u32 cnt)
static int
nv44_sgdma_bind(struct ttm_backend *be, struct ttm_mem_reg *mem)
static int
nv44_sgdma_unbind(struct ttm_backend *be)
static struct ttm_backend_func nv44_sgdma_backend = ;
static int
nv50_sgdma_bind(struct ttm_backend *be, struct ttm_mem_reg *mem)
static int
nv50_sgdma_unbind(struct ttm_backend *be)
static struct ttm_backend_func nv50_sgdma_backend = ;
struct ttm_backend *
nouveau_sgdma_init_ttm(struct drm_device *dev)
int
nouveau_sgdma_init(struct drm_device *dev)
void
nouveau_sgdma_takedown(struct drm_device *dev)
uint32_t
nouveau_sgdma_get_physical(struct drm_device *dev, uint32_t offset)
