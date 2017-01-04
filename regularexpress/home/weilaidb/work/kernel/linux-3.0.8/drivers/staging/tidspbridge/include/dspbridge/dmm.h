#define DMM_
struct dmm_object;
struct dmm_mgrattrs ;
#define DMMPOOLSIZE      0x4000000
extern int dmm_get_handle(void *hprocessor,
struct dmm_object **dmm_manager);
extern int dmm_reserve_memory(struct dmm_object *dmm_mgr,
u32 size, u32 *prsv_addr);
extern int dmm_un_reserve_memory(struct dmm_object *dmm_mgr,
u32 rsv_addr);
extern int dmm_map_memory(struct dmm_object *dmm_mgr, u32 addr,
u32 size);
extern int dmm_un_map_memory(struct dmm_object *dmm_mgr,
u32 addr, u32 *psize);
extern int dmm_destroy(struct dmm_object *dmm_mgr);
extern int dmm_delete_tables(struct dmm_object *dmm_mgr);
extern int dmm_create(struct dmm_object **dmm_manager,
struct dev_object *hdev_obj,
const struct dmm_mgrattrs *mgr_attrts);
extern bool dmm_init(void);
extern void dmm_exit(void);
extern int dmm_create_tables(struct dmm_object *dmm_mgr,
u32 addr, u32 size);
u32 dmm_mem_map_dump(struct dmm_object *dmm_mgr);
