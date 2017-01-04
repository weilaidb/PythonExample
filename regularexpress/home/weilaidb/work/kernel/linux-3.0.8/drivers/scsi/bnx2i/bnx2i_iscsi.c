struct scsi_transport_template *bnx2i_scsi_xport_template;
struct iscsi_transport bnx2i_iscsi_transport;
static struct scsi_host_template bnx2i_host_template;
static DEFINE_SPINLOCK(bnx2i_resc_lock);
static int bnx2i_adapter_ready(struct bnx2i_hba *hba)
static void bnx2i_get_write_cmd_bd_idx(struct bnx2i_cmd *cmd, u32 buf_off,
u32 *start_bd_off, u32 *start_bd_idx)
static void bnx2i_setup_write_cmd_bd_info(struct iscsi_task *task)
static int bnx2i_map_scsi_sg(struct bnx2i_hba *hba, struct bnx2i_cmd *cmd)
static void bnx2i_iscsi_map_sg_list(struct bnx2i_cmd *cmd)
void bnx2i_iscsi_unmap_sg_list(struct bnx2i_cmd *cmd)
static void bnx2i_setup_cmd_wqe_template(struct bnx2i_cmd *cmd)
static int bnx2i_bind_conn_to_iscsi_cid(struct bnx2i_hba *hba,
struct bnx2i_conn *bnx2i_conn,
u32 iscsi_cid)
struct bnx2i_conn *bnx2i_get_conn_from_id(struct bnx2i_hba *hba,
u16 iscsi_cid)
static u32 bnx2i_alloc_iscsi_cid(struct bnx2i_hba *hba)
static void bnx2i_free_iscsi_cid(struct bnx2i_hba *hba, u16 iscsi_cid)
static int bnx2i_setup_free_cid_que(struct bnx2i_hba *hba)
static void bnx2i_release_free_cid_que(struct bnx2i_hba *hba)
static struct iscsi_endpoint *bnx2i_alloc_ep(struct bnx2i_hba *hba)
static void bnx2i_free_ep(struct iscsi_endpoint *ep)
static int bnx2i_alloc_bdt(struct bnx2i_hba *hba, struct iscsi_session *session,
struct bnx2i_cmd *cmd)
static void bnx2i_destroy_cmd_pool(struct bnx2i_hba *hba,
struct iscsi_session *session)
static int bnx2i_setup_cmd_pool(struct bnx2i_hba *hba,
struct iscsi_session *session)
static int bnx2i_setup_mp_bdt(struct bnx2i_hba *hba)
static void bnx2i_free_mp_bdt(struct bnx2i_hba *hba)
void bnx2i_drop_session(struct iscsi_cls_session *cls_session)
static int bnx2i_ep_destroy_list_add(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static int bnx2i_ep_destroy_list_del(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static int bnx2i_ep_ofld_list_add(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static int bnx2i_ep_ofld_list_del(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
struct bnx2i_endpoint *
bnx2i_find_ep_in_ofld_list(struct bnx2i_hba *hba, u32 iscsi_cid)
struct bnx2i_endpoint *
bnx2i_find_ep_in_destroy_list(struct bnx2i_hba *hba, u32 iscsi_cid)
static void bnx2i_ep_active_list_add(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static void bnx2i_ep_active_list_del(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static void bnx2i_setup_host_queue_size(struct bnx2i_hba *hba,
struct Scsi_Host *shost)
struct bnx2i_hba *bnx2i_alloc_hba(struct cnic_dev *cnic)
void bnx2i_free_hba(struct bnx2i_hba *hba)
static void bnx2i_conn_free_login_resources(struct bnx2i_hba *hba,
struct bnx2i_conn *bnx2i_conn)
static int bnx2i_conn_alloc_login_resources(struct bnx2i_hba *hba,
struct bnx2i_conn *bnx2i_conn)
static void bnx2i_iscsi_prep_generic_pdu_bd(struct bnx2i_conn *bnx2i_conn)
static int bnx2i_iscsi_send_generic_request(struct iscsi_task *task)
static void bnx2i_cpy_scsi_cdb(struct scsi_cmnd *sc, struct bnx2i_cmd *cmd)
static void bnx2i_cleanup_task(struct iscsi_task *task)
static int
bnx2i_mtask_xmit(struct iscsi_conn *conn, struct iscsi_task *task)
static int bnx2i_task_xmit(struct iscsi_task *task)
static struct iscsi_cls_session *
bnx2i_session_create(struct iscsi_endpoint *ep,
uint16_t cmds_max, uint16_t qdepth,
uint32_t initial_cmdsn)
static void bnx2i_session_destroy(struct iscsi_cls_session *cls_session)
static struct iscsi_cls_conn *
bnx2i_conn_create(struct iscsi_cls_session *cls_session, uint32_t cid)
static int bnx2i_conn_bind(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn,
uint64_t transport_fd, int is_leading)
static void bnx2i_conn_destroy(struct iscsi_cls_conn *cls_conn)
static int bnx2i_ep_get_param(struct iscsi_endpoint *ep,
enum iscsi_param param, char *buf)
static int bnx2i_host_get_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf)
static int bnx2i_conn_start(struct iscsi_cls_conn *cls_conn)
static void bnx2i_conn_get_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats)
static struct bnx2i_hba *bnx2i_check_route(struct sockaddr *dst_addr)
static int bnx2i_tear_down_conn(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static struct iscsi_endpoint *bnx2i_ep_connect(struct Scsi_Host *shost,
struct sockaddr *dst_addr,
int non_blocking)
static int bnx2i_ep_poll(struct iscsi_endpoint *ep, int timeout_ms)
static int bnx2i_ep_tcp_conn_active(struct bnx2i_endpoint *bnx2i_ep)
int bnx2i_hw_ep_disconnect(struct bnx2i_endpoint *bnx2i_ep)
static void bnx2i_ep_disconnect(struct iscsi_endpoint *ep)
static int bnx2i_nl_set_path(struct Scsi_Host *shost, struct iscsi_path *params)
static struct scsi_host_template bnx2i_host_template = ;
struct iscsi_transport bnx2i_iscsi_transport = ;
