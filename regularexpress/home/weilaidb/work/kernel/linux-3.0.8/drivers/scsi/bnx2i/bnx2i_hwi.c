static u32 bnx2i_get_cid_num(struct bnx2i_endpoint *ep)
static void bnx2i_adjust_qp_size(struct bnx2i_hba *hba)
static void bnx2i_get_link_state(struct bnx2i_hba *hba)
static void bnx2i_iscsi_license_error(struct bnx2i_hba *hba, u32 error_code)
void bnx2i_arm_cq_event_coalescing(struct bnx2i_endpoint *ep, u8 action)
void bnx2i_get_rq_buf(struct bnx2i_conn *bnx2i_conn, char *ptr, int len)
static void bnx2i_ring_577xx_doorbell(struct bnx2i_conn *conn)
void bnx2i_put_rq_buf(struct bnx2i_conn *bnx2i_conn, int count)
static void bnx2i_ring_sq_dbell(struct bnx2i_conn *bnx2i_conn, int count)
static void bnx2i_ring_dbell_update_sq_params(struct bnx2i_conn *bnx2i_conn,
int count)
int bnx2i_send_iscsi_login(struct bnx2i_conn *bnx2i_conn,
struct iscsi_task *task)
int bnx2i_send_iscsi_tmf(struct bnx2i_conn *bnx2i_conn,
struct iscsi_task *mtask)
int bnx2i_send_iscsi_text(struct bnx2i_conn *bnx2i_conn,
struct iscsi_task *mtask)
int bnx2i_send_iscsi_scsicmd(struct bnx2i_conn *bnx2i_conn,
struct bnx2i_cmd *cmd)
int bnx2i_send_iscsi_nopout(struct bnx2i_conn *bnx2i_conn,
struct iscsi_task *task,
char *datap, int data_len, int unsol)
int bnx2i_send_iscsi_logout(struct bnx2i_conn *bnx2i_conn,
struct iscsi_task *task)
void bnx2i_update_iscsi_conn(struct iscsi_conn *conn)
void bnx2i_ep_ofld_timer(unsigned long data)
static int bnx2i_power_of2(u32 val)
void bnx2i_send_cmd_cleanup_req(struct bnx2i_hba *hba, struct bnx2i_cmd *cmd)
int bnx2i_send_conn_destroy(struct bnx2i_hba *hba, struct bnx2i_endpoint *ep)
static int bnx2i_570x_send_conn_ofld_req(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
static int bnx2i_5771x_send_conn_ofld_req(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep)
int bnx2i_send_conn_ofld_req(struct bnx2i_hba *hba, struct bnx2i_endpoint *ep)
static void setup_qp_page_tables(struct bnx2i_endpoint *ep)
int bnx2i_alloc_qp_resc(struct bnx2i_hba *hba, struct bnx2i_endpoint *ep)
void bnx2i_free_qp_resc(struct bnx2i_hba *hba, struct bnx2i_endpoint *ep)
int bnx2i_send_fw_iscsi_init_msg(struct bnx2i_hba *hba)
static int bnx2i_process_scsi_cmd_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static int bnx2i_process_login_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static int bnx2i_process_text_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static int bnx2i_process_tmf_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static int bnx2i_process_logout_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_process_nopin_local_cmpl(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_unsol_pdu_adjust_rq(struct bnx2i_conn *bnx2i_conn)
static int bnx2i_process_nopin_mesg(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_process_async_mesg(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_process_reject_mesg(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_process_cmd_cleanup_resp(struct iscsi_session *session,
struct bnx2i_conn *bnx2i_conn,
struct cqe *cqe)
static void bnx2i_process_new_cqes(struct bnx2i_conn *bnx2i_conn)
static void bnx2i_fastpath_notification(struct bnx2i_hba *hba,
struct iscsi_kcqe *new_cqe_kcqe)
static void bnx2i_process_update_conn_cmpl(struct bnx2i_hba *hba,
struct iscsi_kcqe *update_kcqe)
static void bnx2i_recovery_que_add_conn(struct bnx2i_hba *hba,
struct bnx2i_conn *bnx2i_conn)
static void bnx2i_process_tcp_error(struct bnx2i_hba *hba,
struct iscsi_kcqe *tcp_err)
static void bnx2i_process_iscsi_error(struct bnx2i_hba *hba,
struct iscsi_kcqe *iscsi_err)
static void bnx2i_process_conn_destroy_cmpl(struct bnx2i_hba *hba,
struct iscsi_kcqe *conn_destroy)
static void bnx2i_process_ofld_cmpl(struct bnx2i_hba *hba,
struct iscsi_kcqe *ofld_kcqe)
static void bnx2i_indicate_kcqe(void *context, struct kcqe *kcqe[],
u32 num_cqe)
static void bnx2i_indicate_netevent(void *context, unsigned long event)
static void bnx2i_cm_connect_cmpl(struct cnic_sock *cm_sk)
static void bnx2i_cm_close_cmpl(struct cnic_sock *cm_sk)
static void bnx2i_cm_abort_cmpl(struct cnic_sock *cm_sk)
static void bnx2i_cm_remote_close(struct cnic_sock *cm_sk)
static void bnx2i_cm_remote_abort(struct cnic_sock *cm_sk)
static int bnx2i_send_nl_mesg(void *context, u32 msg_type,
char *buf, u16 buflen)
struct cnic_ulp_ops bnx2i_cnic_cb = ;
int bnx2i_map_ep_dbell_regs(struct bnx2i_endpoint *ep)
