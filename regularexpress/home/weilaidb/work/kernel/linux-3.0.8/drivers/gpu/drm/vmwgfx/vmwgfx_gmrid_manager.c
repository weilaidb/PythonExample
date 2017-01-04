struct vmwgfx_gmrid_man ;
static int vmw_gmrid_man_get_node(struct ttm_mem_type_manager *man,
struct ttm_buffer_object *bo,
struct ttm_placement *placement,
struct ttm_mem_reg *mem)
static void vmw_gmrid_man_put_node(struct ttm_mem_type_manager *man,
struct ttm_mem_reg *mem)
static int vmw_gmrid_man_init(struct ttm_mem_type_manager *man,
unsigned long p_size)
static int vmw_gmrid_man_takedown(struct ttm_mem_type_manager *man)
static void vmw_gmrid_man_debug(struct ttm_mem_type_manager *man,
const char *prefix)
const struct ttm_mem_type_manager_func vmw_gmrid_manager_func = ;
