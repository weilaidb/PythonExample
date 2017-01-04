#define _TTM_BO_DRIVER_H_
struct ttm_backend;
struct ttm_backend_func ;
struct ttm_backend ;
#define TTM_PAGE_FLAG_USER            (1 << 1)
#define TTM_PAGE_FLAG_USER_DIRTY      (1 << 2)
#define TTM_PAGE_FLAG_WRITE           (1 << 3)
#define TTM_PAGE_FLAG_SWAPPED         (1 << 4)
#define TTM_PAGE_FLAG_PERSISTENT_SWAP (1 << 5)
#define TTM_PAGE_FLAG_ZERO_ALLOC      (1 << 6)
#define TTM_PAGE_FLAG_DMA32           (1 << 7)
enum ttm_caching_state ;
struct ttm_tt ;
#define TTM_MEMTYPE_FLAG_FIXED         (1 << 0)
#define TTM_MEMTYPE_FLAG_MAPPABLE      (1 << 1)
#define TTM_MEMTYPE_FLAG_CMA           (1 << 3)
struct ttm_mem_type_manager;
struct ttm_mem_type_manager_func ;
struct ttm_mem_type_manager ;
struct ttm_bo_driver ;
struct ttm_bo_global_ref ;
struct ttm_bo_global ;
#define TTM_NUM_MEM_TYPES 8
#define TTM_BO_PRIV_FLAG_MOVING  0
#define TTM_BO_PRIV_FLAG_MAX 1
struct ttm_bo_device ;
static inline uint32_t
ttm_flag_masked(uint32_t *old, uint32_t new, uint32_t mask)
extern struct ttm_tt *ttm_tt_create(struct ttm_bo_device *bdev,
unsigned long size,
uint32_t page_flags,
struct page *dummy_read_page);
extern int ttm_tt_set_user(struct ttm_tt *ttm,
struct task_struct *tsk,
unsigned long start, unsigned long num_pages);
extern int ttm_tt_bind(struct ttm_tt *ttm, struct ttm_mem_reg *bo_mem);
extern int ttm_tt_populate(struct ttm_tt *ttm);
extern void ttm_tt_destroy(struct ttm_tt *ttm);
extern void ttm_tt_unbind(struct ttm_tt *ttm);
extern struct page *ttm_tt_get_page(struct ttm_tt *ttm, int index);
extern void ttm_tt_cache_flush(struct page *pages[], unsigned long num_pages);
extern int ttm_tt_set_placement_caching(struct ttm_tt *ttm, uint32_t placement);
extern int ttm_tt_swapout(struct ttm_tt *ttm,
struct file *persistent_swap_storage);
extern bool ttm_mem_reg_is_pci(struct ttm_bo_device *bdev,
struct ttm_mem_reg *mem);
extern int ttm_bo_mem_space(struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem,
bool interruptible,
bool no_wait_reserve, bool no_wait_gpu);
extern void ttm_bo_mem_put(struct ttm_buffer_object *bo,
struct ttm_mem_reg *mem);
extern void ttm_bo_mem_put_locked(struct ttm_buffer_object *bo,
struct ttm_mem_reg *mem);
extern int ttm_bo_wait_cpu(struct ttm_buffer_object *bo, bool no_wait);
extern void ttm_bo_global_release(struct drm_global_reference *ref);
extern int ttm_bo_global_init(struct drm_global_reference *ref);
extern int ttm_bo_device_release(struct ttm_bo_device *bdev);
extern int ttm_bo_device_init(struct ttm_bo_device *bdev,
struct ttm_bo_global *glob,
struct ttm_bo_driver *driver,
uint64_t file_page_offset, bool need_dma32);
extern void ttm_bo_unmap_virtual(struct ttm_buffer_object *bo);
extern void ttm_bo_unmap_virtual_locked(struct ttm_buffer_object *bo);
extern int ttm_mem_io_reserve_vm(struct ttm_buffer_object *bo);
extern void ttm_mem_io_free_vm(struct ttm_buffer_object *bo);
extern int ttm_mem_io_lock(struct ttm_mem_type_manager *man,
bool interruptible);
extern void ttm_mem_io_unlock(struct ttm_mem_type_manager *man);
extern int ttm_bo_reserve(struct ttm_buffer_object *bo,
bool interruptible,
bool no_wait, bool use_sequence, uint32_t sequence);
extern int ttm_bo_reserve_locked(struct ttm_buffer_object *bo,
bool interruptible,
bool no_wait, bool use_sequence,
uint32_t sequence);
extern void ttm_bo_unreserve(struct ttm_buffer_object *bo);
extern void ttm_bo_unreserve_locked(struct ttm_buffer_object *bo);
extern int ttm_bo_wait_unreserved(struct ttm_buffer_object *bo,
bool interruptible);
extern int ttm_bo_move_ttm(struct ttm_buffer_object *bo,
bool evict, bool no_wait_reserve,
bool no_wait_gpu, struct ttm_mem_reg *new_mem);
extern int ttm_bo_move_memcpy(struct ttm_buffer_object *bo,
bool evict, bool no_wait_reserve,
bool no_wait_gpu, struct ttm_mem_reg *new_mem);
extern void ttm_bo_free_old_node(struct ttm_buffer_object *bo);
extern int ttm_bo_move_accel_cleanup(struct ttm_buffer_object *bo,
void *sync_obj,
void *sync_obj_arg,
bool evict, bool no_wait_reserve,
bool no_wait_gpu,
struct ttm_mem_reg *new_mem);
extern pgprot_t ttm_io_prot(uint32_t caching_flags, pgprot_t tmp);
extern const struct ttm_mem_type_manager_func ttm_bo_manager_func;
#if (defined(CONFIG_AGP) || (defined(CONFIG_AGP_MODULE) && defined(MODULE)))
#define TTM_HAS_AGP
extern struct ttm_backend *ttm_agp_backend_init(struct ttm_bo_device *bdev,
struct agp_bridge_data *bridge);
