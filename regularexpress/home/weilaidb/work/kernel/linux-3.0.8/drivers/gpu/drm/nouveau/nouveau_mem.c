static void
nv10_mem_update_tile_region(struct drm_device *dev,
struct nouveau_tile_reg *tile, uint32_t addr,
uint32_t size, uint32_t pitch, uint32_t flags)
static struct nouveau_tile_reg *
nv10_mem_get_tile_region(struct drm_device *dev, int i)
void
nv10_mem_put_tile_region(struct drm_device *dev, struct nouveau_tile_reg *tile,
struct nouveau_fence *fence)
struct nouveau_tile_reg *
nv10_mem_set_tiling(struct drm_device *dev, uint32_t addr, uint32_t size,
uint32_t pitch, uint32_t flags)
void
nouveau_mem_vram_fini(struct drm_device *dev)
void
nouveau_mem_gart_fini(struct drm_device *dev)
static uint32_t
nouveau_mem_detect_nv04(struct drm_device *dev)
static uint32_t
nouveau_mem_detect_nforce(struct drm_device *dev)
int
nouveau_mem_detect(struct drm_device *dev)
bool
nouveau_mem_flags_valid(struct drm_device *dev, u32 tile_flags)
#if __OS_HAS_AGP
static unsigned long
get_agp_mode(struct drm_device *dev, unsigned long mode)
int
nouveau_mem_reset_agp(struct drm_device *dev)
int
nouveau_mem_init_agp(struct drm_device *dev)
int
nouveau_mem_vram_init(struct drm_device *dev)
int
nouveau_mem_gart_init(struct drm_device *dev)
void
nouveau_mem_timing_init(struct drm_device *dev)
void
nouveau_mem_timing_fini(struct drm_device *dev)
static int
nouveau_vram_manager_init(struct ttm_mem_type_manager *man, unsigned long p_size)
static int
nouveau_vram_manager_fini(struct ttm_mem_type_manager *man)
static void
nouveau_vram_manager_del(struct ttm_mem_type_manager *man,
struct ttm_mem_reg *mem)
static int
nouveau_vram_manager_new(struct ttm_mem_type_manager *man,
struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem)
void
nouveau_vram_manager_debug(struct ttm_mem_type_manager *man, const char *prefix)
const struct ttm_mem_type_manager_func nouveau_vram_manager = ;
static int
nouveau_gart_manager_init(struct ttm_mem_type_manager *man, unsigned long psize)
static int
nouveau_gart_manager_fini(struct ttm_mem_type_manager *man)
static void
nouveau_gart_manager_del(struct ttm_mem_type_manager *man,
struct ttm_mem_reg *mem)
static int
nouveau_gart_manager_new(struct ttm_mem_type_manager *man,
struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem)
void
nouveau_gart_manager_debug(struct ttm_mem_type_manager *man, const char *prefix)
const struct ttm_mem_type_manager_func nouveau_gart_manager = ;
