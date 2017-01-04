DECLARE_PER_CPU(struct bnx2fc_percpu_s, bnx2fc_percpu);
static void bnx2fc_fastpath_notification(struct bnx2fc_hba *hba,
struct fcoe_kcqe *new_cqe_kcqe);
static void bnx2fc_process_ofld_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *ofld_kcqe);
static void bnx2fc_process_enable_conn_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *ofld_kcqe);
static void bnx2fc_init_failure(struct bnx2fc_hba *hba, u32 err_code);
static void bnx2fc_process_conn_destroy_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *conn_destroy);
int bnx2fc_send_stat_req(struct bnx2fc_hba *hba)
int bnx2fc_send_fw_fcoe_init_msg(struct bnx2fc_hba *hba)
int bnx2fc_send_fw_fcoe_destroy_msg(struct bnx2fc_hba *hba)
int bnx2fc_send_session_ofld_req(struct fcoe_port *port,
struct bnx2fc_rport *tgt)
static int bnx2fc_send_session_enable_req(struct fcoe_port *port,
struct bnx2fc_rport *tgt)
int bnx2fc_send_session_disable_req(struct fcoe_port *port,
struct bnx2fc_rport *tgt)
int bnx2fc_send_session_destroy_req(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt)
static bool is_valid_lport(struct bnx2fc_hba *hba, struct fc_lport *lport)
static void bnx2fc_unsol_els_work(struct work_struct *work)
void bnx2fc_process_l2_frame_compl(struct bnx2fc_rport *tgt,
unsigned char *buf,
u32 frame_len, u16 l2_oxid)
static void bnx2fc_process_unsol_compl(struct bnx2fc_rport *tgt, u16 wqe)
void bnx2fc_process_cq_compl(struct bnx2fc_rport *tgt, u16 wqe)
struct bnx2fc_work *bnx2fc_alloc_work(struct bnx2fc_rport *tgt, u16 wqe)
int bnx2fc_process_new_cqes(struct bnx2fc_rport *tgt)
static void bnx2fc_fastpath_notification(struct bnx2fc_hba *hba,
struct fcoe_kcqe *new_cqe_kcqe)
static void bnx2fc_process_ofld_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *ofld_kcqe)
static void bnx2fc_process_enable_conn_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *ofld_kcqe)
static void bnx2fc_process_conn_disable_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *disable_kcqe)
static void bnx2fc_process_conn_destroy_cmpl(struct bnx2fc_hba *hba,
struct fcoe_kcqe *destroy_kcqe)
static void bnx2fc_init_failure(struct bnx2fc_hba *hba, u32 err_code)
void bnx2fc_indicate_kcqe(void *context, struct kcqe *kcq[],
u32 num_cqe)
void bnx2fc_add_2_sq(struct bnx2fc_rport *tgt, u16 xid)
void bnx2fc_ring_doorbell(struct bnx2fc_rport *tgt)
int bnx2fc_map_doorbell(struct bnx2fc_rport *tgt)
char *bnx2fc_get_next_rqe(struct bnx2fc_rport *tgt, u8 num_items)
void bnx2fc_return_rqe(struct bnx2fc_rport *tgt, u8 num_items)
void bnx2fc_init_cleanup_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u16 orig_xid)
void bnx2fc_init_mp_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task)
void bnx2fc_init_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task)
int bnx2fc_setup_task_ctx(struct bnx2fc_hba *hba)
void bnx2fc_free_task_ctx(struct bnx2fc_hba *hba)
static void bnx2fc_free_hash_table(struct bnx2fc_hba *hba)
static int bnx2fc_allocate_hash_table(struct bnx2fc_hba *hba)
int bnx2fc_setup_fw_resc(struct bnx2fc_hba *hba)
void bnx2fc_free_fw_resc(struct bnx2fc_hba *hba)
