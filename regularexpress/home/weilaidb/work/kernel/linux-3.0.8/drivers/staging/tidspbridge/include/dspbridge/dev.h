#define DEV_
extern u32 dev_brd_write_fxn(void *arb,
u32 dsp_add,
void *host_buf, u32 ul_num_bytes, u32 mem_space);
extern int dev_create_device(struct dev_object
**device_obj,
const char *driver_file_name,
struct cfg_devnode *dev_node_obj);
extern int dev_create2(struct dev_object *hdev_obj);
extern int dev_destroy2(struct dev_object *hdev_obj);
extern int dev_destroy_device(struct dev_object
*hdev_obj);
extern int dev_get_chnl_mgr(struct dev_object *hdev_obj,
struct chnl_mgr **mgr);
extern int dev_get_cmm_mgr(struct dev_object *hdev_obj,
struct cmm_object **mgr);
extern int dev_get_dmm_mgr(struct dev_object *hdev_obj,
struct dmm_object **mgr);
extern int dev_get_cod_mgr(struct dev_object *hdev_obj,
struct cod_manager **cod_mgr);
extern int dev_get_deh_mgr(struct dev_object *hdev_obj,
struct deh_mgr **deh_manager);
extern int dev_get_dev_node(struct dev_object *hdev_obj,
struct cfg_devnode **dev_nde);
extern int dev_get_dev_type(struct dev_object *device_obj,
u8 *dev_type);
extern struct dev_object *dev_get_first(void);
extern int dev_get_intf_fxns(struct dev_object *hdev_obj,
struct bridge_drv_interface **if_fxns);
extern int dev_get_io_mgr(struct dev_object *hdev_obj,
struct io_mgr **mgr);
extern struct dev_object *dev_get_next(struct dev_object
*hdev_obj);
extern void dev_get_msg_mgr(struct dev_object *hdev_obj,
struct msg_mgr **msg_man);
extern int dev_get_node_manager(struct dev_object
*hdev_obj,
struct node_mgr **node_man);
extern int dev_get_symbol(struct dev_object *hdev_obj,
const char *str_sym, u32 * pul_value);
extern int dev_get_bridge_context(struct dev_object *hdev_obj,
struct bridge_dev_context
**phbridge_context);
extern void dev_exit(void);
extern bool dev_init(void);
extern int dev_insert_proc_object(struct dev_object
*hdev_obj,
u32 proc_obj,
bool *already_attached);
extern int dev_remove_proc_object(struct dev_object
*hdev_obj, u32 proc_obj);
extern int dev_notify_clients(struct dev_object *hdev_obj, u32 ret);
extern int dev_remove_device(struct cfg_devnode *dev_node_obj);
extern int dev_set_chnl_mgr(struct dev_object *hdev_obj,
struct chnl_mgr *hmgr);
extern void dev_set_msg_mgr(struct dev_object *hdev_obj, struct msg_mgr *hmgr);
extern int dev_start_device(struct cfg_devnode *dev_node_obj);
