#define _BNX2FC_H_
#define BNX2FC_NAME		"bnx2fc"
#define BNX2FC_VERSION		"1.0.1"
#define PFX			"bnx2fc: "
#define BNX2X_DOORBELL_PCI_BAR		2
#define BNX2FC_MAX_BD_LEN		0xffff
#define BNX2FC_BD_SPLIT_SZ		0x8000
#define BNX2FC_MAX_BDS_PER_CMD		256
#define BNX2FC_SQ_WQES_MAX	256
#define BNX2FC_SCSI_MAX_SQES	((3 * BNX2FC_SQ_WQES_MAX) / 8)
#define BNX2FC_TM_MAX_SQES	((BNX2FC_SQ_WQES_MAX) / 2)
#define BNX2FC_ELS_MAX_SQES	(BNX2FC_TM_MAX_SQES - 1)
#define BNX2FC_RQ_WQES_MAX	16
#define BNX2FC_CQ_WQES_MAX	(BNX2FC_SQ_WQES_MAX + BNX2FC_RQ_WQES_MAX)
#define BNX2FC_NUM_MAX_SESS	128
#define BNX2FC_NUM_MAX_SESS_LOG	(ilog2(BNX2FC_NUM_MAX_SESS))
#define BNX2FC_MAX_OUTSTANDING_CMNDS	2048
#define BNX2FC_CAN_QUEUE		BNX2FC_MAX_OUTSTANDING_CMNDS
#define BNX2FC_ELSTM_XIDS		BNX2FC_CAN_QUEUE
#define BNX2FC_MIN_PAYLOAD		256
#define BNX2FC_MAX_PAYLOAD		2048
#define BNX2FC_MFS			\
(BNX2FC_MAX_PAYLOAD + sizeof(struct fc_frame_header))
#define BNX2FC_MINI_JUMBO_MTU		2500
#define BNX2FC_RQ_BUF_SZ		256
#define BNX2FC_RQ_BUF_LOG_SZ		(ilog2(BNX2FC_RQ_BUF_SZ))
#define BNX2FC_SQ_WQE_SIZE		(sizeof(struct fcoe_sqe))
#define BNX2FC_CQ_WQE_SIZE		(sizeof(struct fcoe_cqe))
#define BNX2FC_RQ_WQE_SIZE		(BNX2FC_RQ_BUF_SZ)
#define BNX2FC_XFERQ_WQE_SIZE		(sizeof(struct fcoe_xfrqe))
#define BNX2FC_CONFQ_WQE_SIZE		(sizeof(struct fcoe_confqe))
#define BNX2FC_5771X_DB_PAGE_SIZE	128
#define BNX2FC_MAX_TASKS		\
(BNX2FC_MAX_OUTSTANDING_CMNDS + BNX2FC_ELSTM_XIDS)
#define BNX2FC_TASK_SIZE		128
#define	BNX2FC_TASKS_PER_PAGE		(PAGE_SIZE/BNX2FC_TASK_SIZE)
#define BNX2FC_TASK_CTX_ARR_SZ		(BNX2FC_MAX_TASKS/BNX2FC_TASKS_PER_PAGE)
#define BNX2FC_MAX_ROWS_IN_HASH_TBL	8
#define BNX2FC_HASH_TBL_CHUNK_SIZE	(16 * 1024)
#define BNX2FC_MAX_SEQS			255
#define BNX2FC_READ			(1 << 1)
#define BNX2FC_WRITE			(1 << 0)
#define BNX2FC_MIN_XID			0
#define BNX2FC_MAX_XID			\
(BNX2FC_MAX_OUTSTANDING_CMNDS + BNX2FC_ELSTM_XIDS - 1)
#define FCOE_MIN_XID			(BNX2FC_MAX_XID + 1)
#define FCOE_MAX_XID			(FCOE_MIN_XID + 4095)
#define BNX2FC_MAX_LUN			0xFFFF
#define BNX2FC_MAX_FCP_TGT		256
#define BNX2FC_MAX_CMD_LEN		16
#define BNX2FC_TM_TIMEOUT		60
#define BNX2FC_IO_TIMEOUT		20000UL
#define BNX2FC_WAIT_CNT			1200
#define BNX2FC_FW_TIMEOUT		(3 * HZ)
#define PORT_MAX			2
#define CMD_SCSI_STATUS(Cmnd)		((Cmnd)->SCp.Status)
#define	FC_GOOD				0
#define BNX2FC_RNID_HBA			0x7
extern struct fcoe_percpu_s bnx2fc_global;
extern struct workqueue_struct *bnx2fc_wq;
struct bnx2fc_percpu_s ;
struct bnx2fc_hba ;
#define bnx2fc_from_ctlr(fip) container_of(fip, struct bnx2fc_hba, ctlr)
struct bnx2fc_lport ;
struct bnx2fc_cmd_mgr ;
struct bnx2fc_rport ;
struct bnx2fc_mp_req ;
struct bnx2fc_els_cb_arg ;
struct bnx2fc_cmd ;
struct io_bdt ;
struct bnx2fc_work ;
struct bnx2fc_unsol_els ;
struct bnx2fc_cmd *bnx2fc_elstm_alloc(struct bnx2fc_rport *tgt, int type);
void bnx2fc_cmd_release(struct kref *ref);
int bnx2fc_queuecommand(struct Scsi_Host *host, struct scsi_cmnd *sc_cmd);
int bnx2fc_send_fw_fcoe_init_msg(struct bnx2fc_hba *hba);
int bnx2fc_send_fw_fcoe_destroy_msg(struct bnx2fc_hba *hba);
int bnx2fc_send_session_ofld_req(struct fcoe_port *port,
struct bnx2fc_rport *tgt);
int bnx2fc_send_session_disable_req(struct fcoe_port *port,
struct bnx2fc_rport *tgt);
int bnx2fc_send_session_destroy_req(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt);
int bnx2fc_map_doorbell(struct bnx2fc_rport *tgt);
void bnx2fc_indicate_kcqe(void *context, struct kcqe *kcq[],
u32 num_cqe);
int bnx2fc_setup_task_ctx(struct bnx2fc_hba *hba);
void bnx2fc_free_task_ctx(struct bnx2fc_hba *hba);
int bnx2fc_setup_fw_resc(struct bnx2fc_hba *hba);
void bnx2fc_free_fw_resc(struct bnx2fc_hba *hba);
struct bnx2fc_cmd_mgr *bnx2fc_cmd_mgr_alloc(struct bnx2fc_hba *hba,
u16 min_xid, u16 max_xid);
void bnx2fc_cmd_mgr_free(struct bnx2fc_cmd_mgr *cmgr);
void bnx2fc_get_link_state(struct bnx2fc_hba *hba);
char *bnx2fc_get_next_rqe(struct bnx2fc_rport *tgt, u8 num_items);
void bnx2fc_return_rqe(struct bnx2fc_rport *tgt, u8 num_items);
int bnx2fc_get_paged_crc_eof(struct sk_buff *skb, int tlen);
int bnx2fc_send_rrq(struct bnx2fc_cmd *aborted_io_req);
int bnx2fc_send_adisc(struct bnx2fc_rport *tgt, struct fc_frame *fp);
int bnx2fc_send_logo(struct bnx2fc_rport *tgt, struct fc_frame *fp);
int bnx2fc_send_rls(struct bnx2fc_rport *tgt, struct fc_frame *fp);
int bnx2fc_initiate_cleanup(struct bnx2fc_cmd *io_req);
int bnx2fc_initiate_abts(struct bnx2fc_cmd *io_req);
void bnx2fc_cmd_timer_set(struct bnx2fc_cmd *io_req,
unsigned int timer_msec);
int bnx2fc_init_mp_req(struct bnx2fc_cmd *io_req);
void bnx2fc_init_cleanup_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u16 orig_xid);
void bnx2fc_init_mp_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task);
void bnx2fc_init_task(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task);
void bnx2fc_add_2_sq(struct bnx2fc_rport *tgt, u16 xid);
void bnx2fc_ring_doorbell(struct bnx2fc_rport *tgt);
int bnx2fc_eh_abort(struct scsi_cmnd *sc_cmd);
int bnx2fc_eh_host_reset(struct scsi_cmnd *sc_cmd);
int bnx2fc_eh_target_reset(struct scsi_cmnd *sc_cmd);
int bnx2fc_eh_device_reset(struct scsi_cmnd *sc_cmd);
void bnx2fc_rport_event_handler(struct fc_lport *lport,
struct fc_rport_priv *rport,
enum fc_rport_event event);
void bnx2fc_process_scsi_cmd_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq);
void bnx2fc_process_cleanup_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq);
void bnx2fc_process_abts_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq);
void bnx2fc_process_tm_compl(struct bnx2fc_cmd *io_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq);
void bnx2fc_process_els_compl(struct bnx2fc_cmd *els_req,
struct fcoe_task_ctx_entry *task,
u8 num_rq);
void bnx2fc_build_fcp_cmnd(struct bnx2fc_cmd *io_req,
struct fcp_cmnd *fcp_cmnd);
void bnx2fc_flush_active_ios(struct bnx2fc_rport *tgt);
struct fc_seq *bnx2fc_elsct_send(struct fc_lport *lport, u32 did,
struct fc_frame *fp, unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *),
void *arg, u32 timeout);
int bnx2fc_process_new_cqes(struct bnx2fc_rport *tgt);
void bnx2fc_process_cq_compl(struct bnx2fc_rport *tgt, u16 wqe);
struct bnx2fc_rport *bnx2fc_tgt_lookup(struct fcoe_port *port,
u32 port_id);
void bnx2fc_process_l2_frame_compl(struct bnx2fc_rport *tgt,
unsigned char *buf,
u32 frame_len, u16 l2_oxid);
int bnx2fc_send_stat_req(struct bnx2fc_hba *hba);
