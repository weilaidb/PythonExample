struct ttm_range_manager ;
static int ttm_bo_man_get_node(struct ttm_mem_type_manager *man,
struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem)
static void ttm_bo_man_put_node(struct ttm_mem_type_manager *man,
struct ttm_mem_reg *mem)
static int ttm_bo_man_init(struct ttm_mem_type_manager *man,
unsigned long p_size)
static int ttm_bo_man_takedown(struct ttm_mem_type_manager *man)
static void ttm_bo_man_debug(struct ttm_mem_type_manager *man,
const char *prefix)
const struct ttm_mem_type_manager_func ttm_bo_manager_func = ;
EXPORT_SYMBOL(ttm_bo_manager_func);
