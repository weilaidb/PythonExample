#define _TTM_BO_API_H_
struct ttm_bo_device;
struct drm_mm_node;
struct ttm_placement ;
struct ttm_bus_placement ;
struct ttm_mem_reg ;
enum ttm_bo_type ;
struct ttm_tt;
struct ttm_buffer_object ;
#define TTM_BO_MAP_IOMEM_MASK 0x80
struct ttm_bo_kmap_obj ;
static inline struct ttm_buffer_object *
ttm_bo_reference(struct ttm_buffer_object *bo)
extern int ttm_bo_wait(struct ttm_buffer_object *bo, bool lazy,
bool interruptible, bool no_wait);
extern int ttm_bo_validate(struct ttm_buffer_object *bo,
struct ttm_placement *placement,
bool interruptible, bool no_wait_reserve,
bool no_wait_gpu);
extern void ttm_bo_unref(struct ttm_buffer_object **bo);
extern void ttm_bo_list_ref_sub(struct ttm_buffer_object *bo, int count,
bool never_free);
extern void ttm_bo_add_to_lru(struct ttm_buffer_object *bo);
extern int ttm_bo_del_from_lru(struct ttm_buffer_object *bo);
extern int ttm_bo_lock_delayed_workqueue(struct ttm_bo_device *bdev);
extern void ttm_bo_unlock_delayed_workqueue(struct ttm_bo_device *bdev,
int resched);
extern int
ttm_bo_synccpu_write_grab(struct ttm_buffer_object *bo, bool no_wait);
extern void ttm_bo_synccpu_write_release(struct ttm_buffer_object *bo);
extern int ttm_bo_init(struct ttm_bo_device *bdev,
struct ttm_buffer_object *bo,
unsigned long size,
enum ttm_bo_type type,
struct ttm_placement *placement,
uint32_t page_alignment,
unsigned long buffer_start,
bool interrubtible,
struct file *persistent_swap_storage,
size_t acc_size,
void (*destroy) (struct ttm_buffer_object *));
extern int ttm_bo_create(struct ttm_bo_device *bdev,
unsigned long size,
enum ttm_bo_type type,
struct ttm_placement *placement,
uint32_t page_alignment,
unsigned long buffer_start,
bool interruptible,
struct file *persistent_swap_storage,
struct ttm_buffer_object **p_bo);
extern int ttm_bo_check_placement(struct ttm_buffer_object *bo,
struct ttm_placement *placement);
extern int ttm_bo_init_mm(struct ttm_bo_device *bdev, unsigned type,
unsigned long p_size);
extern int ttm_bo_clean_mm(struct ttm_bo_device *bdev, unsigned mem_type);
extern int ttm_bo_evict_mm(struct ttm_bo_device *bdev, unsigned mem_type);
static inline void *ttm_kmap_obj_virtual(struct ttm_bo_kmap_obj *map,
bool *is_iomem)
extern int ttm_bo_kmap(struct ttm_buffer_object *bo, unsigned long start_page,
unsigned long num_pages, struct ttm_bo_kmap_obj *map);
extern void ttm_bo_kunmap(struct ttm_bo_kmap_obj *map);
extern int ttm_fbdev_mmap(struct vm_area_struct *vma,
struct ttm_buffer_object *bo);
extern int ttm_bo_mmap(struct file *filp, struct vm_area_struct *vma,
struct ttm_bo_device *bdev);
extern ssize_t ttm_bo_io(struct ttm_bo_device *bdev, struct file *filp,
const char __user *wbuf, char __user *rbuf,
size_t count, loff_t *f_pos, bool write);
extern void ttm_bo_swapout_all(struct ttm_bo_device *bdev);
