int radeon_ttm_init(struct radeon_device *rdev);
void radeon_ttm_fini(struct radeon_device *rdev);
static void radeon_bo_clear_surface_reg(struct radeon_bo *bo);
static void radeon_ttm_bo_destroy(struct ttm_buffer_object *tbo)
bool radeon_ttm_bo_is_radeon_bo(struct ttm_buffer_object *bo)
void radeon_ttm_placement_from_domain(struct radeon_bo *rbo, u32 domain)
int radeon_bo_create(struct radeon_device *rdev,
unsigned long size, int byte_align, bool kernel, u32 domain,
struct radeon_bo **bo_ptr)
int radeon_bo_kmap(struct radeon_bo *bo, void **ptr)
void radeon_bo_kunmap(struct radeon_bo *bo)
void radeon_bo_unref(struct radeon_bo **bo)
int radeon_bo_pin(struct radeon_bo *bo, u32 domain, u64 *gpu_addr)
int radeon_bo_unpin(struct radeon_bo *bo)
int radeon_bo_evict_vram(struct radeon_device *rdev)
void radeon_bo_force_delete(struct radeon_device *rdev)
int radeon_bo_init(struct radeon_device *rdev)
void radeon_bo_fini(struct radeon_device *rdev)
void radeon_bo_list_add_object(struct radeon_bo_list *lobj,
struct list_head *head)
int radeon_bo_list_validate(struct list_head *head)
int radeon_bo_fbdev_mmap(struct radeon_bo *bo,
struct vm_area_struct *vma)
int radeon_bo_get_surface_reg(struct radeon_bo *bo)
static void radeon_bo_clear_surface_reg(struct radeon_bo *bo)
int radeon_bo_set_tiling_flags(struct radeon_bo *bo,
uint32_t tiling_flags, uint32_t pitch)
void radeon_bo_get_tiling_flags(struct radeon_bo *bo,
uint32_t *tiling_flags,
uint32_t *pitch)
int radeon_bo_check_tiling(struct radeon_bo *bo, bool has_moved,
bool force_drop)
void radeon_bo_move_notify(struct ttm_buffer_object *bo,
struct ttm_mem_reg *mem)
int radeon_bo_fault_reserve_notify(struct ttm_buffer_object *bo)
