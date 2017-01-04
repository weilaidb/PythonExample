static uint32_t vram_placement_flags = TTM_PL_FLAG_VRAM |
TTM_PL_FLAG_CACHED;
static uint32_t vram_ne_placement_flags = TTM_PL_FLAG_VRAM |
TTM_PL_FLAG_CACHED |
TTM_PL_FLAG_NO_EVICT;
static uint32_t sys_placement_flags = TTM_PL_FLAG_SYSTEM |
TTM_PL_FLAG_CACHED;
static uint32_t gmr_placement_flags = VMW_PL_FLAG_GMR |
TTM_PL_FLAG_CACHED;
struct ttm_placement vmw_vram_placement = ;
static uint32_t vram_gmr_placement_flags[] = ;
struct ttm_placement vmw_vram_gmr_placement = ;
struct ttm_placement vmw_vram_sys_placement = ;
struct ttm_placement vmw_vram_ne_placement = ;
struct ttm_placement vmw_sys_placement = ;
struct vmw_ttm_backend ;
static int vmw_ttm_populate(struct ttm_backend *backend,
unsigned long num_pages, struct page **pages,
struct page *dummy_read_page,
dma_addr_t *dma_addrs)
static int vmw_ttm_bind(struct ttm_backend *backend, struct ttm_mem_reg *bo_mem)
static int vmw_ttm_unbind(struct ttm_backend *backend)
static void vmw_ttm_clear(struct ttm_backend *backend)
static void vmw_ttm_destroy(struct ttm_backend *backend)
static struct ttm_backend_func vmw_ttm_func = ;
struct ttm_backend *vmw_ttm_backend_init(struct ttm_bo_device *bdev)
int vmw_invalidate_caches(struct ttm_bo_device *bdev, uint32_t flags)
int vmw_init_mem_type(struct ttm_bo_device *bdev, uint32_t type,
struct ttm_mem_type_manager *man)
void vmw_evict_flags(struct ttm_buffer_object *bo,
struct ttm_placement *placement)
static int vmw_verify_access(struct ttm_buffer_object *bo, struct file *filp)
static int vmw_ttm_io_mem_reserve(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static void vmw_ttm_io_mem_free(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static int vmw_ttm_fault_reserve_notify(struct ttm_buffer_object *bo)
static void *vmw_sync_obj_ref(void *sync_obj)
static void vmw_sync_obj_unref(void **sync_obj)
static int vmw_sync_obj_flush(void *sync_obj, void *sync_arg)
static bool vmw_sync_obj_signaled(void *sync_obj, void *sync_arg)
static int vmw_sync_obj_wait(void *sync_obj, void *sync_arg,
bool lazy, bool interruptible)
struct ttm_bo_driver vmw_bo_driver = ;
