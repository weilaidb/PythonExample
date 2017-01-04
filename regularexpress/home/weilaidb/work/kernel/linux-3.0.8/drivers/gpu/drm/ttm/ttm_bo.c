#define TTM_ASSERT_LOCKED(param)
#define TTM_DEBUG(fmt, arg...)
#define TTM_BO_HASH_ORDER 13
static int ttm_bo_setup_vm(struct ttm_buffer_object *bo);
static int ttm_bo_swapout(struct ttm_mem_shrink *shrink);
static void ttm_bo_global_kobj_release(struct kobject *kobj);
static struct attribute ttm_bo_count = ;
static inline int ttm_mem_type_from_flags(uint32_t flags, uint32_t *mem_type)
static void ttm_mem_type_debug(struct ttm_bo_device *bdev, int mem_type)
static void ttm_bo_mem_space_debug(struct ttm_buffer_object *bo,
struct ttm_placement *placement)
static ssize_t ttm_bo_global_show(struct kobject *kobj,
struct attribute *attr,
char *buffer)
static struct attribute *ttm_bo_global_attrs[] = ;
static const struct sysfs_ops ttm_bo_global_ops = ;
static struct kobj_type ttm_bo_glob_kobj_type  = ;
static inline uint32_t ttm_bo_type_flags(unsigned type)
static void ttm_bo_release_list(struct kref *list_kref)
int ttm_bo_wait_unreserved(struct ttm_buffer_object *bo, bool interruptible)
EXPORT_SYMBOL(ttm_bo_wait_unreserved);
void ttm_bo_add_to_lru(struct ttm_buffer_object *bo)
int ttm_bo_del_from_lru(struct ttm_buffer_object *bo)
int ttm_bo_reserve_locked(struct ttm_buffer_object *bo,
bool interruptible,
bool no_wait, bool use_sequence, uint32_t sequence)
EXPORT_SYMBOL(ttm_bo_reserve);
static void ttm_bo_ref_bug(struct kref *list_kref)
void ttm_bo_list_ref_sub(struct ttm_buffer_object *bo, int count,
bool never_free)
int ttm_bo_reserve(struct ttm_buffer_object *bo,
bool interruptible,
bool no_wait, bool use_sequence, uint32_t sequence)
void ttm_bo_unreserve_locked(struct ttm_buffer_object *bo)
void ttm_bo_unreserve(struct ttm_buffer_object *bo)
EXPORT_SYMBOL(ttm_bo_unreserve);
static int ttm_bo_add_ttm(struct ttm_buffer_object *bo, bool zero_alloc)
static int ttm_bo_handle_move_mem(struct ttm_buffer_object *bo,
struct ttm_mem_reg *mem,
bool evict, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu)
static void ttm_bo_cleanup_memtype_use(struct ttm_buffer_object *bo)
static void ttm_bo_cleanup_refs_or_queue(struct ttm_buffer_object *bo)
static int ttm_bo_cleanup_refs(struct ttm_buffer_object *bo,
bool interruptible,
bool no_wait_reserve,
bool no_wait_gpu)
static int ttm_bo_delayed_delete(struct ttm_bo_device *bdev, bool remove_all)
static void ttm_bo_delayed_workqueue(struct work_struct *work)
static void ttm_bo_release(struct kref *kref)
void ttm_bo_unref(struct ttm_buffer_object **p_bo)
EXPORT_SYMBOL(ttm_bo_unref);
int ttm_bo_lock_delayed_workqueue(struct ttm_bo_device *bdev)
EXPORT_SYMBOL(ttm_bo_lock_delayed_workqueue);
void ttm_bo_unlock_delayed_workqueue(struct ttm_bo_device *bdev, int resched)
EXPORT_SYMBOL(ttm_bo_unlock_delayed_workqueue);
static int ttm_bo_evict(struct ttm_buffer_object *bo, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu)
static int ttm_mem_evict_first(struct ttm_bo_device *bdev,
uint32_t mem_type,
bool interruptible, bool no_wait_reserve,
bool no_wait_gpu)
void ttm_bo_mem_put(struct ttm_buffer_object *bo, struct ttm_mem_reg *mem)
EXPORT_SYMBOL(ttm_bo_mem_put);
static int ttm_bo_mem_force_space(struct ttm_buffer_object *bo,
uint32_t mem_type,
struct ttm_placement *placement,
struct ttm_mem_reg *mem,
bool interruptible,
bool no_wait_reserve,
bool no_wait_gpu)
static uint32_t ttm_bo_select_caching(struct ttm_mem_type_manager *man,
uint32_t cur_placement,
uint32_t proposed_placement)
static bool ttm_bo_mt_compatible(struct ttm_mem_type_manager *man,
bool disallow_fixed,
uint32_t mem_type,
uint32_t proposed_placement,
uint32_t *masked_placement)
int ttm_bo_mem_space(struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem,
bool interruptible, bool no_wait_reserve,
bool no_wait_gpu)
EXPORT_SYMBOL(ttm_bo_mem_space);
int ttm_bo_wait_cpu(struct ttm_buffer_object *bo, bool no_wait)
EXPORT_SYMBOL(ttm_bo_wait_cpu);
int ttm_bo_move_buffer(struct ttm_buffer_object *bo,
struct ttm_placement *placement,
bool interruptible, bool no_wait_reserve,
bool no_wait_gpu)
static int ttm_bo_mem_compat(struct ttm_placement *placement,
struct ttm_mem_reg *mem)
int ttm_bo_validate(struct ttm_buffer_object *bo,
struct ttm_placement *placement,
bool interruptible, bool no_wait_reserve,
bool no_wait_gpu)
EXPORT_SYMBOL(ttm_bo_validate);
int ttm_bo_check_placement(struct ttm_buffer_object *bo,
struct ttm_placement *placement)
int ttm_bo_init(struct ttm_bo_device *bdev,
struct ttm_buffer_object *bo,
unsigned long size,
enum ttm_bo_type type,
struct ttm_placement *placement,
uint32_t page_alignment,
unsigned long buffer_start,
bool interruptible,
struct file *persistent_swap_storage,
size_t acc_size,
void (*destroy) (struct ttm_buffer_object *))
EXPORT_SYMBOL(ttm_bo_init);
static inline size_t ttm_bo_size(struct ttm_bo_global *glob,
unsigned long num_pages)
int ttm_bo_create(struct ttm_bo_device *bdev,
unsigned long size,
enum ttm_bo_type type,
struct ttm_placement *placement,
uint32_t page_alignment,
unsigned long buffer_start,
bool interruptible,
struct file *persistent_swap_storage,
struct ttm_buffer_object **p_bo)
static int ttm_bo_force_list_clean(struct ttm_bo_device *bdev,
unsigned mem_type, bool allow_errors)
int ttm_bo_clean_mm(struct ttm_bo_device *bdev, unsigned mem_type)
EXPORT_SYMBOL(ttm_bo_clean_mm);
int ttm_bo_evict_mm(struct ttm_bo_device *bdev, unsigned mem_type)
EXPORT_SYMBOL(ttm_bo_evict_mm);
int ttm_bo_init_mm(struct ttm_bo_device *bdev, unsigned type,
unsigned long p_size)
EXPORT_SYMBOL(ttm_bo_init_mm);
static void ttm_bo_global_kobj_release(struct kobject *kobj)
void ttm_bo_global_release(struct drm_global_reference *ref)
EXPORT_SYMBOL(ttm_bo_global_release);
int ttm_bo_global_init(struct drm_global_reference *ref)
EXPORT_SYMBOL(ttm_bo_global_init);
int ttm_bo_device_release(struct ttm_bo_device *bdev)
EXPORT_SYMBOL(ttm_bo_device_release);
int ttm_bo_device_init(struct ttm_bo_device *bdev,
struct ttm_bo_global *glob,
struct ttm_bo_driver *driver,
uint64_t file_page_offset,
bool need_dma32)
EXPORT_SYMBOL(ttm_bo_device_init);
bool ttm_mem_reg_is_pci(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
void ttm_bo_unmap_virtual_locked(struct ttm_buffer_object *bo)
void ttm_bo_unmap_virtual(struct ttm_buffer_object *bo)
EXPORT_SYMBOL(ttm_bo_unmap_virtual);
static void ttm_bo_vm_insert_rb(struct ttm_buffer_object *bo)
static int ttm_bo_setup_vm(struct ttm_buffer_object *bo)
int ttm_bo_wait(struct ttm_buffer_object *bo,
bool lazy, bool interruptible, bool no_wait)
EXPORT_SYMBOL(ttm_bo_wait);
int ttm_bo_synccpu_write_grab(struct ttm_buffer_object *bo, bool no_wait)
EXPORT_SYMBOL(ttm_bo_synccpu_write_grab);
void ttm_bo_synccpu_write_release(struct ttm_buffer_object *bo)
EXPORT_SYMBOL(ttm_bo_synccpu_write_release);
static int ttm_bo_swapout(struct ttm_mem_shrink *shrink)
void ttm_bo_swapout_all(struct ttm_bo_device *bdev)
EXPORT_SYMBOL(ttm_bo_swapout_all);
