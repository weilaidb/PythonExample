static int ttm_tt_swapin(struct ttm_tt *ttm);
static void ttm_tt_alloc_page_directory(struct ttm_tt *ttm)
static void ttm_tt_free_page_directory(struct ttm_tt *ttm)
static void ttm_tt_free_user_pages(struct ttm_tt *ttm)
static struct page *__ttm_tt_get_page(struct ttm_tt *ttm, int index)
struct page *ttm_tt_get_page(struct ttm_tt *ttm, int index)
int ttm_tt_populate(struct ttm_tt *ttm)
EXPORT_SYMBOL(ttm_tt_populate);
static inline int ttm_tt_set_page_caching(struct page *p,
enum ttm_caching_state c_old,
enum ttm_caching_state c_new)
static inline int ttm_tt_set_page_caching(struct page *p,
enum ttm_caching_state c_old,
enum ttm_caching_state c_new)
static int ttm_tt_set_caching(struct ttm_tt *ttm,
enum ttm_caching_state c_state)
int ttm_tt_set_placement_caching(struct ttm_tt *ttm, uint32_t placement)
EXPORT_SYMBOL(ttm_tt_set_placement_caching);
static void ttm_tt_free_alloced_pages(struct ttm_tt *ttm)
void ttm_tt_destroy(struct ttm_tt *ttm)
int ttm_tt_set_user(struct ttm_tt *ttm,
struct task_struct *tsk,
unsigned long start, unsigned long num_pages)
struct ttm_tt *ttm_tt_create(struct ttm_bo_device *bdev, unsigned long size,
uint32_t page_flags, struct page *dummy_read_page)
void ttm_tt_unbind(struct ttm_tt *ttm)
int ttm_tt_bind(struct ttm_tt *ttm, struct ttm_mem_reg *bo_mem)
EXPORT_SYMBOL(ttm_tt_bind);
static int ttm_tt_swapin(struct ttm_tt *ttm)
int ttm_tt_swapout(struct ttm_tt *ttm, struct file *persistent_swap_storage)
