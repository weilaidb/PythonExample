#define MAKEVERSION(major, minor)   (major * 10 + minor)
#define BRD_API_VERSION		MAKEVERSION(BRD_API_MAJOR_VERSION,	\
BRD_API_MINOR_VERSION)
struct dev_object ;
struct drv_ext ;
static u32 refs;
static int fxn_not_implemented(int arg, ...);
static int init_cod_mgr(struct dev_object *dev_obj);
static void store_interface_fxns(struct bridge_drv_interface *drv_fxns,
struct bridge_drv_interface *intf_fxns);
u32 dev_brd_write_fxn(void *arb, u32 dsp_add, void *host_buf,
u32 ul_num_bytes, u32 mem_space)
int dev_create_device(struct dev_object **device_obj,
const char *driver_file_name,
struct cfg_devnode *dev_node_obj)
int dev_create2(struct dev_object *hdev_obj)
int dev_destroy2(struct dev_object *hdev_obj)
int dev_destroy_device(struct dev_object *hdev_obj)
int dev_get_chnl_mgr(struct dev_object *hdev_obj,
struct chnl_mgr **mgr)
int dev_get_cmm_mgr(struct dev_object *hdev_obj,
struct cmm_object **mgr)
int dev_get_dmm_mgr(struct dev_object *hdev_obj,
struct dmm_object **mgr)
int dev_get_cod_mgr(struct dev_object *hdev_obj,
struct cod_manager **cod_mgr)
int dev_get_deh_mgr(struct dev_object *hdev_obj,
struct deh_mgr **deh_manager)
int dev_get_dev_node(struct dev_object *hdev_obj,
struct cfg_devnode **dev_nde)
struct dev_object *dev_get_first(void)
int dev_get_intf_fxns(struct dev_object *hdev_obj,
struct bridge_drv_interface **if_fxns)
int dev_get_io_mgr(struct dev_object *hdev_obj,
struct io_mgr **io_man)
struct dev_object *dev_get_next(struct dev_object *hdev_obj)
void dev_get_msg_mgr(struct dev_object *hdev_obj, struct msg_mgr **msg_man)
int dev_get_node_manager(struct dev_object *hdev_obj,
struct node_mgr **node_man)
int dev_get_symbol(struct dev_object *hdev_obj,
const char *str_sym, u32 * pul_value)
int dev_get_bridge_context(struct dev_object *hdev_obj,
struct bridge_dev_context **phbridge_context)
void dev_exit(void)
bool dev_init(void)
int dev_notify_clients(struct dev_object *dev_obj, u32 ret)
int dev_remove_device(struct cfg_devnode *dev_node_obj)
int dev_set_chnl_mgr(struct dev_object *hdev_obj,
struct chnl_mgr *hmgr)
void dev_set_msg_mgr(struct dev_object *hdev_obj, struct msg_mgr *hmgr)
int dev_start_device(struct cfg_devnode *dev_node_obj)
static int fxn_not_implemented(int arg, ...)
static int init_cod_mgr(struct dev_object *dev_obj)
int dev_insert_proc_object(struct dev_object *hdev_obj,
u32 proc_obj, bool *already_attached)
int dev_remove_proc_object(struct dev_object *hdev_obj, u32 proc_obj)
int dev_get_dev_type(struct dev_object *dev_obj, u8 *dev_type)
static void store_interface_fxns(struct bridge_drv_interface *drv_fxns,
struct bridge_drv_interface *intf_fxns)
