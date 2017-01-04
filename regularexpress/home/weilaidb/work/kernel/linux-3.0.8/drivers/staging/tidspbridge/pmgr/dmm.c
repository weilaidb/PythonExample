#define DMM_ADDR_VIRTUAL(a) \
(((struct map_page *)(a) - virtual_mapping_table) * PG_SIZE4K +\
dyn_mem_map_beg)
#define DMM_ADDR_TO_INDEX(a) (((a) - dyn_mem_map_beg) / PG_SIZE4K)
struct dmm_object ;
static u32 refs;
struct map_page ;
static struct map_page *virtual_mapping_table;
static u32 free_region;
static u32 free_size;
static u32 dyn_mem_map_beg;
static u32 table_size;
static struct map_page *get_region(u32 addr);
static struct map_page *get_free_region(u32 len);
static struct map_page *get_mapped_region(u32 addrs);
int dmm_create_tables(struct dmm_object *dmm_mgr, u32 addr, u32 size)
int dmm_create(struct dmm_object **dmm_manager,
struct dev_object *hdev_obj,
const struct dmm_mgrattrs *mgr_attrts)
int dmm_destroy(struct dmm_object *dmm_mgr)
int dmm_delete_tables(struct dmm_object *dmm_mgr)
void dmm_exit(void)
int dmm_get_handle(void *hprocessor, struct dmm_object **dmm_manager)
bool dmm_init(void)
int dmm_map_memory(struct dmm_object *dmm_mgr, u32 addr, u32 size)
int dmm_reserve_memory(struct dmm_object *dmm_mgr, u32 size,
u32 *prsv_addr)
int dmm_un_map_memory(struct dmm_object *dmm_mgr, u32 addr, u32 *psize)
int dmm_un_reserve_memory(struct dmm_object *dmm_mgr, u32 rsv_addr)
static struct map_page *get_region(u32 addr)
static struct map_page *get_free_region(u32 len)
static struct map_page *get_mapped_region(u32 addrs)
u32 dmm_mem_map_dump(struct dmm_object *dmm_mgr)
