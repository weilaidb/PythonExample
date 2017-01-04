static struct kmem_cache *scsi_pkt_cachep;
#define FC_SRB_FREE		0
#define FC_SRB_CMD_SENT		(1 << 0)
#define FC_SRB_RCV_STATUS	(1 << 1)
#define FC_SRB_ABORT_PENDING	(1 << 2)
#define FC_SRB_ABORTED		(1 << 3)
#define FC_SRB_DISCONTIG	(1 << 4)
#define FC_SRB_COMPL		(1 << 5)
#define FC_SRB_FCP_PROCESSING_TMO (1 << 6)
#define FC_SRB_READ		(1 << 1)
#define FC_SRB_WRITE		(1 << 0)
#define CMD_SP(Cmnd)		    ((struct fc_fcp_pkt *)(Cmnd)->SCp.ptr)
#define CMD_ENTRY_STATUS(Cmnd)	    ((Cmnd)->SCp.have_data_in)
#define CMD_COMPL_STATUS(Cmnd)	    ((Cmnd)->SCp.this_residual)
#define CMD_SCSI_STATUS(Cmnd)	    ((Cmnd)->SCp.Status)
#define CMD_RESID_LEN(Cmnd)	    ((Cmnd)->SCp.buffers_residual)
struct fc_fcp_internal ;
#define fc_get_scsi_internal(x)	((struct fc_fcp_internal *)(x)->scsi_priv)
static void fc_fcp_recv_data(struct fc_fcp_pkt *, struct fc_frame *);
static void fc_fcp_recv(struct fc_seq *, struct fc_frame *, void *);
static void fc_fcp_resp(struct fc_fcp_pkt *, struct fc_frame *);
static void fc_fcp_complete_locked(struct fc_fcp_pkt *);
static void fc_tm_done(struct fc_seq *, struct fc_frame *, void *);
static void fc_fcp_error(struct fc_fcp_pkt *, struct fc_frame *);
static void fc_fcp_recovery(struct fc_fcp_pkt *, u8 code);
static void fc_fcp_timeout(unsigned long);
static void fc_fcp_rec(struct fc_fcp_pkt *);
static void fc_fcp_rec_error(struct fc_fcp_pkt *, struct fc_frame *);
static void fc_fcp_rec_resp(struct fc_seq *, struct fc_frame *, void *);
static void fc_io_compl(struct fc_fcp_pkt *);
static void fc_fcp_srr(struct fc_fcp_pkt *, enum fc_rctl, u32);
static void fc_fcp_srr_resp(struct fc_seq *, struct fc_frame *, void *);
static void fc_fcp_srr_error(struct fc_fcp_pkt *, struct fc_frame *);
#define FC_COMPLETE		0
#define FC_CMD_ABORTED		1
#define FC_CMD_RESET		2
#define FC_CMD_PLOGO		3
#define FC_SNS_RCV		4
#define FC_TRANS_ERR		5
#define FC_DATA_OVRRUN		6
#define FC_DATA_UNDRUN		7
#define FC_ERROR		8
#define FC_HRD_ERROR		9
#define FC_CRC_ERROR		10
#define FC_TIMED_OUT		11
#define FC_SCSI_TM_TOV		(10 * HZ)
#define FC_HOST_RESET_TIMEOUT	(30 * HZ)
#define FC_CAN_QUEUE_PERIOD	(60 * HZ)
#define FC_MAX_ERROR_CNT	5
#define FC_MAX_RECOV_RETRY	3
#define FC_FCP_DFLT_QUEUE_DEPTH 32
static struct fc_fcp_pkt *fc_fcp_pkt_alloc(struct fc_lport *lport, gfp_t gfp)
static void fc_fcp_pkt_release(struct fc_fcp_pkt *fsp)
static void fc_fcp_pkt_hold(struct fc_fcp_pkt *fsp)
static void fc_fcp_pkt_destroy(struct fc_seq *seq, void *fsp)
static inline int fc_fcp_lock_pkt(struct fc_fcp_pkt *fsp)
static inline void fc_fcp_unlock_pkt(struct fc_fcp_pkt *fsp)
static void fc_fcp_timer_set(struct fc_fcp_pkt *fsp, unsigned long delay)
static int fc_fcp_send_abort(struct fc_fcp_pkt *fsp)
static void fc_fcp_retry_cmd(struct fc_fcp_pkt *fsp)
void fc_fcp_ddp_setup(struct fc_fcp_pkt *fsp, u16 xid)
void fc_fcp_ddp_done(struct fc_fcp_pkt *fsp)
static void fc_fcp_can_queue_ramp_up(struct fc_lport *lport)
static void fc_fcp_can_queue_ramp_down(struct fc_lport *lport)
static inline struct fc_frame *fc_fcp_frame_alloc(struct fc_lport *lport,
size_t len)
static void fc_fcp_recv_data(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static int fc_fcp_send_data(struct fc_fcp_pkt *fsp, struct fc_seq *seq,
size_t offset, size_t seq_blen)
static void fc_fcp_abts_resp(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static void fc_fcp_recv(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static void fc_fcp_resp(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static void fc_fcp_complete_locked(struct fc_fcp_pkt *fsp)
static void fc_fcp_cleanup_cmd(struct fc_fcp_pkt *fsp, int error)
static void fc_fcp_cleanup_each_cmd(struct fc_lport *lport, unsigned int id,
unsigned int lun, int error)
static void fc_fcp_abort_io(struct fc_lport *lport)
static int fc_fcp_pkt_send(struct fc_lport *lport, struct fc_fcp_pkt *fsp)
static inline unsigned int get_fsp_rec_tov(struct fc_fcp_pkt *fsp)
static int fc_fcp_cmd_send(struct fc_lport *lport, struct fc_fcp_pkt *fsp,
void (*resp)(struct fc_seq *,
struct fc_frame *fp,
void *arg))
static void fc_fcp_error(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static int fc_fcp_pkt_abort(struct fc_fcp_pkt *fsp)
static void fc_lun_reset_send(unsigned long data)
static int fc_lun_reset(struct fc_lport *lport, struct fc_fcp_pkt *fsp,
unsigned int id, unsigned int lun)
static void fc_tm_done(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static void fc_fcp_cleanup(struct fc_lport *lport)
static void fc_fcp_timeout(unsigned long data)
static void fc_fcp_rec(struct fc_fcp_pkt *fsp)
static void fc_fcp_rec_resp(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static void fc_fcp_rec_error(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static void fc_fcp_recovery(struct fc_fcp_pkt *fsp, u8 code)
static void fc_fcp_srr(struct fc_fcp_pkt *fsp, enum fc_rctl r_ctl, u32 offset)
static void fc_fcp_srr_resp(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static void fc_fcp_srr_error(struct fc_fcp_pkt *fsp, struct fc_frame *fp)
static inline int fc_fcp_lport_queue_ready(struct fc_lport *lport)
int fc_queuecommand(struct Scsi_Host *shost, struct scsi_cmnd *sc_cmd)
EXPORT_SYMBOL(fc_queuecommand);
static void fc_io_compl(struct fc_fcp_pkt *fsp)
int fc_eh_abort(struct scsi_cmnd *sc_cmd)
EXPORT_SYMBOL(fc_eh_abort);
int fc_eh_device_reset(struct scsi_cmnd *sc_cmd)
EXPORT_SYMBOL(fc_eh_device_reset);
int fc_eh_host_reset(struct scsi_cmnd *sc_cmd)
EXPORT_SYMBOL(fc_eh_host_reset);
int fc_slave_alloc(struct scsi_device *sdev)
EXPORT_SYMBOL(fc_slave_alloc);
int fc_change_queue_depth(struct scsi_device *sdev, int qdepth, int reason)
EXPORT_SYMBOL(fc_change_queue_depth);
int fc_change_queue_type(struct scsi_device *sdev, int tag_type)
EXPORT_SYMBOL(fc_change_queue_type);
void fc_fcp_destroy(struct fc_lport *lport)
EXPORT_SYMBOL(fc_fcp_destroy);
int fc_setup_fcp(void)
void fc_destroy_fcp(void)
int fc_fcp_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_fcp_init);
