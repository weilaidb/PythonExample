struct drv_object ;
struct drv_ext ;
static s32 refs;
static bool ext_phys_mem_pool_enabled;
struct ext_phys_mem_pool ;
static struct ext_phys_mem_pool ext_mem_pool;
static int request_bridge_resources(struct cfg_hostres *res);
static int drv_proc_free_node_res(int id, void *p, void *data);
int drv_insert_node_res_element(void *hnode, void *node_resource,
void *process_ctxt)
static int drv_proc_free_node_res(int id, void *p, void *data)
int drv_remove_all_dmm_res_elements(void *process_ctxt)
void drv_proc_node_update_status(void *node_resource, s32 status)
void drv_proc_node_update_heap_status(void *node_resource, s32 status)
int drv_remove_all_node_res_elements(void *process_ctxt)
int drv_proc_insert_strm_res_element(void *stream_obj,
void *strm_res, void *process_ctxt)
static int drv_proc_free_strm_res(int id, void *p, void *process_ctxt)
int drv_remove_all_strm_res_elements(void *process_ctxt)
int drv_proc_update_strm_res(u32 num_bufs, void *strm_resources)
int drv_create(struct drv_object **drv_obj)
void drv_exit(void)
int drv_destroy(struct drv_object *driver_obj)
int drv_get_dev_object(u32 index, struct drv_object *hdrv_obj,
struct dev_object **device_obj)
u32 drv_get_first_dev_object(void)
u32 drv_get_first_dev_extension(void)
u32 drv_get_next_dev_object(u32 hdev_obj)
u32 drv_get_next_dev_extension(u32 dev_extension)
int drv_init(void)
int drv_insert_dev_object(struct drv_object *driver_obj,
struct dev_object *hdev_obj)
int drv_remove_dev_object(struct drv_object *driver_obj,
struct dev_object *hdev_obj)
int drv_request_resources(u32 dw_context, u32 *dev_node_strg)
int drv_release_resources(u32 dw_context, struct drv_object *hdrv_obj)
static int request_bridge_resources(struct cfg_hostres *res)
int drv_request_bridge_res_dsp(void **phost_resources)
void mem_ext_phys_pool_init(u32 pool_phys_base, u32 pool_size)
void mem_ext_phys_pool_release(void)
static void *mem_ext_phys_mem_alloc(u32 bytes, u32 align, u32 * phys_addr)
void *mem_alloc_phys_mem(u32 byte_size, u32 align_mask,
u32 *physical_address)
void mem_free_phys_mem(void *virtual_address, u32 physical_address,
u32 byte_size)
