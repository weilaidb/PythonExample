#define DRV_NAME	"ib_srp"
#define PFX		DRV_NAME ": "
#define DRV_VERSION	"0.2"
#define DRV_RELDATE	"November 1, 2005"
MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("InfiniBand SCSI RDMA Protocol initiator "
"v" DRV_VERSION " (" DRV_RELDATE ")");
MODULE_LICENSE("Dual BSD/GPL");
static unsigned int srp_sg_tablesize;
static unsigned int cmd_sg_entries;
static unsigned int indirect_sg_entries;
static bool allow_ext_sg;
static int topspin_workarounds = 1;
module_param(srp_sg_tablesize, uint, 0444);
MODULE_PARM_DESC(srp_sg_tablesize, "Deprecated name for cmd_sg_entries");
module_param(cmd_sg_entries, uint, 0444);
MODULE_PARM_DESC(cmd_sg_entries,
"Default number of gather/scatter entries in the SRP command (default is 12, max 255)");
module_param(indirect_sg_entries, uint, 0444);
MODULE_PARM_DESC(indirect_sg_entries,
"Default max number of gather/scatter entries (default is 12, max is " __stringify(SCSI_MAX_SG_CHAIN_SEGMENTS) ")");
module_param(allow_ext_sg, bool, 0444);
MODULE_PARM_DESC(allow_ext_sg,
"Default behavior when there are more than cmd_sg_entries S/G entries after mapping; fails the request when false (default false)");
module_param(topspin_workarounds, int, 0444);
MODULE_PARM_DESC(topspin_workarounds,
"Enable workarounds for Topspin/Cisco SRP target bugs if != 0");
static void srp_add_one(struct ib_device *device);
static void srp_remove_one(struct ib_device *device);
static void srp_recv_completion(struct ib_cq *cq, void *target_ptr);
static void srp_send_completion(struct ib_cq *cq, void *target_ptr);
static int srp_cm_handler(struct ib_cm_id *cm_id, struct ib_cm_event *event);
static struct scsi_transport_template *ib_srp_transport_template;
static struct ib_client srp_client = ;
static struct ib_sa_client srp_sa_client;
static inline struct srp_target_port *host_to_target(struct Scsi_Host *host)
static const char *srp_target_info(struct Scsi_Host *host)
static int srp_target_is_topspin(struct srp_target_port *target)
static struct srp_iu *srp_alloc_iu(struct srp_host *host, size_t size,
gfp_t gfp_mask,
enum dma_data_direction direction)
static void srp_free_iu(struct srp_host *host, struct srp_iu *iu)
static void srp_qp_event(struct ib_event *event, void *context)
static int srp_init_qp(struct srp_target_port *target,
struct ib_qp *qp)
static int srp_new_cm_id(struct srp_target_port *target)
static int srp_create_target_ib(struct srp_target_port *target)
static void srp_free_target_ib(struct srp_target_port *target)
static void srp_path_rec_completion(int status,
struct ib_sa_path_rec *pathrec,
void *target_ptr)
static int srp_lookup_path(struct srp_target_port *target)
static int srp_send_req(struct srp_target_port *target)
static void srp_disconnect_target(struct srp_target_port *target)
static bool srp_change_state(struct srp_target_port *target,
enum srp_target_state old,
enum srp_target_state new)
static void srp_free_req_data(struct srp_target_port *target)
static void srp_remove_work(struct work_struct *work)
static int srp_connect_target(struct srp_target_port *target)
static void srp_unmap_data(struct scsi_cmnd *scmnd,
struct srp_target_port *target,
struct srp_request *req)
static void srp_remove_req(struct srp_target_port *target,
struct srp_request *req, s32 req_lim_delta)
static void srp_reset_req(struct srp_target_port *target, struct srp_request *req)
static int srp_reconnect_target(struct srp_target_port *target)
static void srp_map_desc(struct srp_map_state *state, dma_addr_t dma_addr,
unsigned int dma_len, u32 rkey)
static int srp_map_finish_fmr(struct srp_map_state *state,
struct srp_target_port *target)
static void srp_map_update_start(struct srp_map_state *state,
struct scatterlist *sg, int sg_index,
dma_addr_t dma_addr)
static int srp_map_sg_entry(struct srp_map_state *state,
struct srp_target_port *target,
struct scatterlist *sg, int sg_index,
int use_fmr)
static int srp_map_data(struct scsi_cmnd *scmnd, struct srp_target_port *target,
struct srp_request *req)
static void srp_put_tx_iu(struct srp_target_port *target, struct srp_iu *iu,
enum srp_iu_type iu_type)
static struct srp_iu *__srp_get_tx_iu(struct srp_target_port *target,
enum srp_iu_type iu_type)
static int srp_post_send(struct srp_target_port *target,
struct srp_iu *iu, int len)
static int srp_post_recv(struct srp_target_port *target, struct srp_iu *iu)
static void srp_process_rsp(struct srp_target_port *target, struct srp_rsp *rsp)
static int srp_response_common(struct srp_target_port *target, s32 req_delta,
void *rsp, int len)
static void srp_process_cred_req(struct srp_target_port *target,
struct srp_cred_req *req)
static void srp_process_aer_req(struct srp_target_port *target,
struct srp_aer_req *req)
static void srp_handle_recv(struct srp_target_port *target, struct ib_wc *wc)
static void srp_recv_completion(struct ib_cq *cq, void *target_ptr)
static void srp_send_completion(struct ib_cq *cq, void *target_ptr)
static int srp_queuecommand(struct Scsi_Host *shost, struct scsi_cmnd *scmnd)
static int srp_alloc_iu_bufs(struct srp_target_port *target)
static void srp_cm_rep_handler(struct ib_cm_id *cm_id,
struct srp_login_rsp *lrsp,
struct srp_target_port *target)
static void srp_cm_rej_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *event,
struct srp_target_port *target)
static int srp_cm_handler(struct ib_cm_id *cm_id, struct ib_cm_event *event)
static int srp_send_tsk_mgmt(struct srp_target_port *target,
u64 req_tag, unsigned int lun, u8 func)
static int srp_abort(struct scsi_cmnd *scmnd)
static int srp_reset_device(struct scsi_cmnd *scmnd)
static int srp_reset_host(struct scsi_cmnd *scmnd)
static ssize_t show_id_ext(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_ioc_guid(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_service_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_pkey(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_dgid(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_orig_dgid(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_req_lim(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_zero_req_lim(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_local_ib_port(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_local_ib_device(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_cmd_sg_entries(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_allow_ext_sg(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(id_ext,	    S_IRUGO, show_id_ext,	   NULL);
static DEVICE_ATTR(ioc_guid,	    S_IRUGO, show_ioc_guid,	   NULL);
static DEVICE_ATTR(service_id,	    S_IRUGO, show_service_id,	   NULL);
static DEVICE_ATTR(pkey,	    S_IRUGO, show_pkey,		   NULL);
static DEVICE_ATTR(dgid,	    S_IRUGO, show_dgid,		   NULL);
static DEVICE_ATTR(orig_dgid,	    S_IRUGO, show_orig_dgid,	   NULL);
static DEVICE_ATTR(req_lim,         S_IRUGO, show_req_lim,         NULL);
static DEVICE_ATTR(zero_req_lim,    S_IRUGO, show_zero_req_lim,	   NULL);
static DEVICE_ATTR(local_ib_port,   S_IRUGO, show_local_ib_port,   NULL);
static DEVICE_ATTR(local_ib_device, S_IRUGO, show_local_ib_device, NULL);
static DEVICE_ATTR(cmd_sg_entries,  S_IRUGO, show_cmd_sg_entries,  NULL);
static DEVICE_ATTR(allow_ext_sg,    S_IRUGO, show_allow_ext_sg,    NULL);
static struct device_attribute *srp_host_attrs[] = ;
static struct scsi_host_template srp_template = ;
static int srp_add_target(struct srp_host *host, struct srp_target_port *target)
static void srp_release_dev(struct device *dev)
static struct class srp_class = ;
enum ;
static const match_table_t srp_opt_tokens = ;
static int srp_parse_options(const char *buf, struct srp_target_port *target)
static ssize_t srp_create_target(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(add_target, S_IWUSR, NULL, srp_create_target);
static ssize_t show_ibdev(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ibdev, S_IRUGO, show_ibdev, NULL);
static ssize_t show_port(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(port, S_IRUGO, show_port, NULL);
static struct srp_host *srp_add_port(struct srp_device *device, u8 port)
static void srp_add_one(struct ib_device *device)
static void srp_remove_one(struct ib_device *device)
static struct srp_function_template ib_srp_transport_functions = ;
static int __init srp_init_module(void)
static void __exit srp_cleanup_module(void)
module_init(srp_init_module);
module_exit(srp_cleanup_module);
