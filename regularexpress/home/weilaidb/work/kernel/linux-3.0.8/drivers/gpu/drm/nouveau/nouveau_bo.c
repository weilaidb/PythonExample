static void
nouveau_bo_del_ttm(struct ttm_buffer_object *bo)
static void
nouveau_bo_fixup_align(struct nouveau_bo *nvbo, u32 flags,
int *align, int *size, int *page_shift)
int
nouveau_bo_new(struct drm_device *dev, struct nouveau_channel *chan,
int size, int align, uint32_t flags, uint32_t tile_mode,
uint32_t tile_flags, struct nouveau_bo **pnvbo)
static void
set_placement_list(uint32_t *pl, unsigned *n, uint32_t type, uint32_t flags)
static void
set_placement_range(struct nouveau_bo *nvbo, uint32_t type)
void
nouveau_bo_placement_set(struct nouveau_bo *nvbo, uint32_t type, uint32_t busy)
int
nouveau_bo_pin(struct nouveau_bo *nvbo, uint32_t memtype)
int
nouveau_bo_unpin(struct nouveau_bo *nvbo)
int
nouveau_bo_map(struct nouveau_bo *nvbo)
void
nouveau_bo_unmap(struct nouveau_bo *nvbo)
int
nouveau_bo_validate(struct nouveau_bo *nvbo, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu)
u16
nouveau_bo_rd16(struct nouveau_bo *nvbo, unsigned index)
void
nouveau_bo_wr16(struct nouveau_bo *nvbo, unsigned index, u16 val)
u32
nouveau_bo_rd32(struct nouveau_bo *nvbo, unsigned index)
void
nouveau_bo_wr32(struct nouveau_bo *nvbo, unsigned index, u32 val)
static struct ttm_backend *
nouveau_bo_create_ttm_backend_entry(struct ttm_bo_device *bdev)
static int
nouveau_bo_invalidate_caches(struct ttm_bo_device *bdev, uint32_t flags)
static int
nouveau_bo_init_mem_type(struct ttm_bo_device *bdev, uint32_t type,
struct ttm_mem_type_manager *man)
static void
nouveau_bo_evict_flags(struct ttm_buffer_object *bo, struct ttm_placement *pl)
static int
nouveau_bo_move_accel_cleanup(struct nouveau_channel *chan,
struct nouveau_bo *nvbo, bool evict,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int
nvc0_bo_move_m2mf(struct nouveau_channel *chan, struct ttm_buffer_object *bo,
struct ttm_mem_reg *old_mem, struct ttm_mem_reg *new_mem)
static int
nv50_bo_move_m2mf(struct nouveau_channel *chan, struct ttm_buffer_object *bo,
struct ttm_mem_reg *old_mem, struct ttm_mem_reg *new_mem)
static inline uint32_t
nouveau_bo_mem_ctxdma(struct ttm_buffer_object *bo,
struct nouveau_channel *chan, struct ttm_mem_reg *mem)
static int
nv04_bo_move_m2mf(struct nouveau_channel *chan, struct ttm_buffer_object *bo,
struct ttm_mem_reg *old_mem, struct ttm_mem_reg *new_mem)
static int
nouveau_bo_move_m2mf(struct ttm_buffer_object *bo, int evict, bool intr,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int
nouveau_bo_move_flipd(struct ttm_buffer_object *bo, bool evict, bool intr,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int
nouveau_bo_move_flips(struct ttm_buffer_object *bo, bool evict, bool intr,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static void
nouveau_bo_move_ntfy(struct ttm_buffer_object *bo, struct ttm_mem_reg *new_mem)
static int
nouveau_bo_vm_bind(struct ttm_buffer_object *bo, struct ttm_mem_reg *new_mem,
struct nouveau_tile_reg **new_tile)
static void
nouveau_bo_vm_cleanup(struct ttm_buffer_object *bo,
struct nouveau_tile_reg *new_tile,
struct nouveau_tile_reg **old_tile)
static int
nouveau_bo_move(struct ttm_buffer_object *bo, bool evict, bool intr,
bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
static int
nouveau_bo_verify_access(struct ttm_buffer_object *bo, struct file *filp)
static int
nouveau_ttm_io_mem_reserve(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static void
nouveau_ttm_io_mem_free(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
static int
nouveau_ttm_fault_reserve_notify(struct ttm_buffer_object *bo)
void
nouveau_bo_fence(struct nouveau_bo *nvbo, struct nouveau_fence *fence)
struct ttm_bo_driver nouveau_bo_driver = ;
