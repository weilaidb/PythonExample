#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct kmem_cache *zfcp_fsf_qtcb_cache;
static void zfcp_fsf_request_timeout_handler(unsigned long data)
static void zfcp_fsf_start_timer(struct zfcp_fsf_req *fsf_req,
unsigned long timeout)
static void zfcp_fsf_start_erp_timer(struct zfcp_fsf_req *fsf_req)
static u32 fsf_qtcb_type[] = ;
static void zfcp_fsf_class_not_supp(struct zfcp_fsf_req *req)
void zfcp_fsf_req_free(struct zfcp_fsf_req *req)
static void zfcp_fsf_status_read_port_closed(struct zfcp_fsf_req *req)
static void zfcp_fsf_link_down_info_eval(struct zfcp_fsf_req *req,
struct fsf_link_down_info *link_down)
static void zfcp_fsf_status_read_link_down(struct zfcp_fsf_req *req)
static void zfcp_fsf_status_read_handler(struct zfcp_fsf_req *req)
static void zfcp_fsf_fsfstatus_qual_eval(struct zfcp_fsf_req *req)
static void zfcp_fsf_fsfstatus_eval(struct zfcp_fsf_req *req)
static void zfcp_fsf_protstatus_eval(struct zfcp_fsf_req *req)
static void zfcp_fsf_req_complete(struct zfcp_fsf_req *req)
void zfcp_fsf_req_dismiss_all(struct zfcp_adapter *adapter)
static int zfcp_fsf_exchange_config_evaluate(struct zfcp_fsf_req *req)
static void zfcp_fsf_exchange_config_data_handler(struct zfcp_fsf_req *req)
static void zfcp_fsf_exchange_port_evaluate(struct zfcp_fsf_req *req)
static void zfcp_fsf_exchange_port_data_handler(struct zfcp_fsf_req *req)
static struct zfcp_fsf_req *zfcp_fsf_alloc(mempool_t *pool)
static struct fsf_qtcb *zfcp_qtcb_alloc(mempool_t *pool)
static struct zfcp_fsf_req *zfcp_fsf_req_create(struct zfcp_qdio *qdio,
u32 fsf_cmd, u8 sbtype,
mempool_t *pool)
static int zfcp_fsf_req_send(struct zfcp_fsf_req *req)
int zfcp_fsf_status_read(struct zfcp_qdio *qdio)
static void zfcp_fsf_abort_fcp_command_handler(struct zfcp_fsf_req *req)
struct zfcp_fsf_req *zfcp_fsf_abort_fcp_cmnd(struct scsi_cmnd *scmnd)
static void zfcp_fsf_send_ct_handler(struct zfcp_fsf_req *req)
static void zfcp_fsf_setup_ct_els_unchained(struct zfcp_qdio *qdio,
struct zfcp_qdio_req *q_req,
struct scatterlist *sg_req,
struct scatterlist *sg_resp)
static int zfcp_fsf_setup_ct_els_sbals(struct zfcp_fsf_req *req,
struct scatterlist *sg_req,
struct scatterlist *sg_resp)
static int zfcp_fsf_setup_ct_els(struct zfcp_fsf_req *req,
struct scatterlist *sg_req,
struct scatterlist *sg_resp,
unsigned int timeout)
int zfcp_fsf_send_ct(struct zfcp_fc_wka_port *wka_port,
struct zfcp_fsf_ct_els *ct, mempool_t *pool,
unsigned int timeout)
static void zfcp_fsf_send_els_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_send_els(struct zfcp_adapter *adapter, u32 d_id,
struct zfcp_fsf_ct_els *els, unsigned int timeout)
int zfcp_fsf_exchange_config_data(struct zfcp_erp_action *erp_action)
int zfcp_fsf_exchange_config_data_sync(struct zfcp_qdio *qdio,
struct fsf_qtcb_bottom_config *data)
int zfcp_fsf_exchange_port_data(struct zfcp_erp_action *erp_action)
int zfcp_fsf_exchange_port_data_sync(struct zfcp_qdio *qdio,
struct fsf_qtcb_bottom_port *data)
static void zfcp_fsf_open_port_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_open_port(struct zfcp_erp_action *erp_action)
static void zfcp_fsf_close_port_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_close_port(struct zfcp_erp_action *erp_action)
static void zfcp_fsf_open_wka_port_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_open_wka_port(struct zfcp_fc_wka_port *wka_port)
static void zfcp_fsf_close_wka_port_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_close_wka_port(struct zfcp_fc_wka_port *wka_port)
static void zfcp_fsf_close_physical_port_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_close_physical_port(struct zfcp_erp_action *erp_action)
static void zfcp_fsf_open_lun_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_open_lun(struct zfcp_erp_action *erp_action)
static void zfcp_fsf_close_lun_handler(struct zfcp_fsf_req *req)
int zfcp_fsf_close_lun(struct zfcp_erp_action *erp_action)
static void zfcp_fsf_update_lat(struct fsf_latency_record *lat_rec, u32 lat)
static void zfcp_fsf_req_trace(struct zfcp_fsf_req *req, struct scsi_cmnd *scsi)
static void zfcp_fsf_fcp_handler_common(struct zfcp_fsf_req *req)
static void zfcp_fsf_fcp_cmnd_handler(struct zfcp_fsf_req *req)
static int zfcp_fsf_set_data_dir(struct scsi_cmnd *scsi_cmnd, u32 *data_dir)
int zfcp_fsf_fcp_cmnd(struct scsi_cmnd *scsi_cmnd)
static void zfcp_fsf_fcp_task_mgmt_handler(struct zfcp_fsf_req *req)
struct zfcp_fsf_req *zfcp_fsf_fcp_task_mgmt(struct scsi_cmnd *scmnd,
u8 tm_flags)
static void zfcp_fsf_control_file_handler(struct zfcp_fsf_req *req)
struct zfcp_fsf_req *zfcp_fsf_control_file(struct zfcp_adapter *adapter,
struct zfcp_fsf_cfdc *fsf_cfdc)
void zfcp_fsf_reqid_check(struct zfcp_qdio *qdio, int sbal_idx)
struct zfcp_fsf_req *zfcp_fsf_get_req(struct zfcp_qdio *qdio,
struct qdio_buffer *sbal)
