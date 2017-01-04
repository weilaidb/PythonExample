#define RESERVE_FREE_LIST_INDEX num_possible_cpus()
static int bnx2fc_split_bd(struct bnx2fc_cmd *io_req, u64 addr, int sg_len,
int bd_index);
static int bnx2fc_map_sg(struct bnx2fc_cmd *io_req);
static void bnx2fc_build_bd_list_from_sg(struct bnx2fc_cmd *io_req);
static int bnx2fc_post_io_req(struct bnx2fc_rport *tgt,
struct bnx2fc_cmd *io_req);
static void bnx2fc_unmap_sg_list(struct bnx2fc_cmd *io_req);
static void bnx2fc_free_mp_resc(struct bnx2fc_cmd *io_req);
static void bnx2fc_parse_fcp_rsp(struct bnx2fc_cmd *io_req,
struct fcoe_fcp_rsp_payload *fcp_rsp,
u8 num_rq);
void bnx2fc_cmd_timer_set(struct bnx2fc_cmd *io_req,
unsigned int timer_msec)
static void bnx2fc_cmd_timeout(struct work_struct *work)
static void bnx2fc_scsi_done(struct bnx2fc_cmd *io_req, int err_code)
struct bnx2fc_cmd_mgr *bnx2fc_cmd_mgr_alloc(struct bnx2fc_hba *hba,
u16 min_xid, u16 max_xid)
void bnx2fc_cmd_mgr_free(struct bnx2fc_cmd_mgr *cmgr)
struct bnx2fc_cmd *bnx2fc_elstm_alloc(struct bnx2fc_rport *tgt, int type)
static struct bnx2fc_cmd *bnx2fc_cmd_alloc(struct bnx2fc_rport *tgt)
void bnx2fc_cmd_release(struct kref *ref)
static void bnx2fc_free_mp_resc(struct bnx2fc_cmd *io_req)
int bnx2fc_init_mp_req(struct bnx2fc_cmd *io_req)
static int bnx2fc_initiate_tmf(struct scsi_cmnd *sc_cmd, u8 tm_flags)
int bnx2fc_initiate_abts(struct bnx2fc_cmd *io_req)
int bnx2fc_initiate_cleanup(struct bnx2fc_cmd *io_req)
int bnx2fc_eh_target_reset(struct scsi_cmnd *sc_cmd)
int bnx2fc_eh_device_reset(struct scsi_cmnd *sc_cmd)
int bnx2fc_eh_abort(struct scsi_cmnd *sc_cmd)
void bnx2fc_process_cleanup_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq)
void bnx2fc_process_abts_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq)
static void bnx2fc_lun_reset_cmpl(struct bnx2fc_cmd *io_req)
static void bnx2fc_tgt_reset_cmpl(struct bnx2fc_cmd *io_req)
void bnx2fc_process_tm_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task, u8 num_rq)
static int bnx2fc_split_bd(struct bnx2fc_cmd *io_req, u64 addr, int sg_len,
int bd_index)
static int bnx2fc_map_sg(struct bnx2fc_cmd *io_req)
static void bnx2fc_build_bd_list_from_sg(struct bnx2fc_cmd *io_req)
static void bnx2fc_unmap_sg_list(struct bnx2fc_cmd *io_req)
void bnx2fc_build_fcp_cmnd(struct bnx2fc_cmd *io_req,
struct fcp_cmnd *fcp_cmnd)
static void bnx2fc_parse_fcp_rsp(struct bnx2fc_cmd *io_req,
struct fcoe_fcp_rsp_payload *fcp_rsp,
u8 num_rq)
int bnx2fc_queuecommand(struct Scsi_Host *host,
struct scsi_cmnd *sc_cmd)
void bnx2fc_process_scsi_cmd_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq)
static int bnx2fc_post_io_req(struct bnx2fc_rport *tgt,
struct bnx2fc_cmd *io_req)
