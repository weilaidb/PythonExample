void ttm_bo_free_old_node(struct ttm_buffer_object *bo)
int ttm_bo_move_ttm(struct ttm_buffer_object *bo,
bool evict, bool no_wait_reserve,
bool no_wait_gpu, struct ttm_mem_reg *new_mem)
EXPORT_SYMBOL(ttm_bo_move_ttm);
int ttm_mem_io_lock(struct ttm_mem_type_manager *man, bool interruptible)
void ttm_mem_io_unlock(struct ttm_mem_type_manager *man)
static int ttm_mem_io_evict(struct ttm_mem_type_manager *man)
static int ttm_mem_io_reserve(struct ttm_bo_device *bdev,
struct ttm_mem_reg *mem)
static void ttm_mem_io_free(struct ttm_bo_device *bdev,
struct ttm_mem_reg *mem)
int ttm_mem_io_reserve_vm(struct ttm_buffer_object *bo)
void ttm_mem_io_free_vm(struct ttm_buffer_object *bo)
int ttm_mem_reg_ioremap(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem,
void **virtual)
void ttm_mem_reg_iounmap(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem,
void *virtual)
static int ttm_copy_io_page(void *dst, void *src, unsigned long page)
static int ttm_copy_io_ttm_page(struct ttm_tt *ttm, void *src,
unsigned long page,
pgprot_t prot)
static int ttm_copy_ttm_io_page(struct ttm_tt *ttm, void *dst,
unsigned long page,
pgprot_t prot)
int ttm_bo_move_memcpy(struct ttm_buffer_object *bo,
bool evict, bool no_wait_reserve, bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
EXPORT_SYMBOL(ttm_bo_move_memcpy);
static void ttm_transfered_destroy(struct ttm_buffer_object *bo)
static int ttm_buffer_object_transfer(struct ttm_buffer_object *bo,
struct ttm_buffer_object **new_obj)
pgprot_t ttm_io_prot(uint32_t caching_flags, pgprot_t tmp)
EXPORT_SYMBOL(ttm_io_prot);
static int ttm_bo_ioremap(struct ttm_buffer_object *bo,
unsigned long offset,
unsigned long size,
struct ttm_bo_kmap_obj *map)
static int ttm_bo_kmap_ttm(struct ttm_buffer_object *bo,
unsigned long start_page,
unsigned long num_pages,
struct ttm_bo_kmap_obj *map)
int ttm_bo_kmap(struct ttm_buffer_object *bo,
unsigned long start_page, unsigned long num_pages,
struct ttm_bo_kmap_obj *map)
EXPORT_SYMBOL(ttm_bo_kmap);
void ttm_bo_kunmap(struct ttm_bo_kmap_obj *map)
EXPORT_SYMBOL(ttm_bo_kunmap);
int ttm_bo_move_accel_cleanup(struct ttm_buffer_object *bo,
void *sync_obj,
void *sync_obj_arg,
bool evict, bool no_wait_reserve,
bool no_wait_gpu,
struct ttm_mem_reg *new_mem)
EXPORT_SYMBOL(ttm_bo_move_accel_cleanup);
