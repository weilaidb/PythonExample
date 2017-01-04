#define DRM_FILE_PAGE_OFFSET (0x100000000ULL >> PAGE_SHIFT)
static int radeon_ttm_debugfs_init(struct radeon_device *rdev);
static struct radeon_device *radeon_get_rdev(struct ttm_bo_device *bdev)
static int radeon_ttm_mem_global_init(struct drm_global_reference *ref)
static void radeon_ttm_mem_global_release(struct drm_global_reference *ref)
static int radeon_ttm_global_init(struct radeon_device *rdev)
static void radeon_ttm_global_fini(struct radeon_device *rdev)
struct ttm_backend *radeon_ttm_backend_create(struct radeon_device *rdev);
static struct ttm_backend*
radeon_create_ttm_backend_entry(struct ttm_bo_device *bdev)
static int radeon_invalidate_caches(struct ttm_bo_device *bdev, uint32_t flags)
static int radeon_init_mem_type(struct ttm_bo_device *bdev, uint32_t type,
struct ttm_mem_type_manager *man)
static void radeon_evict_flags(struct ttm_buffer_object *bo,
struct ttm_placement *placement)
static int radeon_verify_access(struct ttm_buffer_object *bo, struct file *filp)
static void radeon_move_null(struct ttm_buffer_object *bo,
struct ttm_mem_reg *new_mem)
static int radeon_move_blit(struct ttm_buffer_object *bo,
bool evict, int no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem,
struct ttm_mem_reg *old_mem)
static int radeon_move_vram_ram(struct ttm_buffer_object *bo,
bool evict, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int radeon_move_ram_vram(struct ttm_buffer_object *bo,
bool evict, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int radeon_bo_move(struct ttm_buffer_object *bo,
bool evict, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int radeon_ttm_io_mem_reserve(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static void radeon_ttm_io_mem_free(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static int radeon_sync_obj_wait(void *sync_obj, void *sync_arg,
bool lazy, bool interruptible)
static int radeon_sync_obj_flush(void *sync_obj, void *sync_arg)
static void radeon_sync_obj_unref(void **sync_obj)
static void *radeon_sync_obj_ref(void *sync_obj)
static bool radeon_sync_obj_signaled(void *sync_obj, void *sync_arg)
static struct ttm_bo_driver radeon_bo_driver = ;
int radeon_ttm_init(struct radeon_device *rdev)
void radeon_ttm_fini(struct radeon_device *rdev)
void radeon_ttm_set_active_vram_size(struct radeon_device *rdev, u64 size)
static struct vm_operations_struct radeon_ttm_vm_ops;
static const struct vm_operations_struct *ttm_vm_ops = NULL;
static int radeon_ttm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
int radeon_mmap(struct file *filp, struct vm_area_struct *vma)
struct radeon_ttm_backend ;
static int radeon_ttm_backend_populate(struct ttm_backend *backend,
unsigned long num_pages,
struct page **pages,
struct page *dummy_read_page,
dma_addr_t *dma_addrs)
static void radeon_ttm_backend_clear(struct ttm_backend *backend)
static int radeon_ttm_backend_bind(struct ttm_backend *backend,
struct ttm_mem_reg *bo_mem)
static int radeon_ttm_backend_unbind(struct ttm_backend *backend)
static void radeon_ttm_backend_destroy(struct ttm_backend *backend)
static struct ttm_backend_func radeon_backend_func = ;
struct ttm_backend *radeon_ttm_backend_create(struct radeon_device *rdev)
#define RADEON_DEBUGFS_MEM_TYPES 2
#if defined(CONFIG_DEBUG_FS)
static int radeon_mm_dump_table(struct seq_file *m, void *data)
static int radeon_ttm_debugfs_init(struct radeon_device *rdev)
