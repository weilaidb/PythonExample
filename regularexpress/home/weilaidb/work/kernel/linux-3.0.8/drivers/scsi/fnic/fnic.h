#define _FNIC_H_
#define DRV_NAME		"fnic"
#define DRV_DESCRIPTION		"Cisco FCoE HBA Driver"
#define DRV_VERSION		"1.5.0.1"
#define PFX			DRV_NAME ": "
#define DFX                     DRV_NAME "%d: "
#define DESC_CLEAN_LOW_WATERMARK 8
#define FNIC_MAX_IO_REQ		2048
#define	FNIC_IO_LOCKS		64
#define FNIC_DFLT_QUEUE_DEPTH	32
#define	FNIC_STATS_RATE_LIMIT	4
#define FNIC_TAG_ABORT		BIT(30)
#define FNIC_TAG_DEV_RST	BIT(29)
#define FNIC_TAG_MASK		(BIT(24) - 1)
#define FNIC_NO_TAG             -1
#define CMD_SP(Cmnd)		((Cmnd)->SCp.ptr)
#define CMD_STATE(Cmnd)		((Cmnd)->SCp.phase)
#define CMD_ABTS_STATUS(Cmnd)	((Cmnd)->SCp.Message)
#define CMD_LR_STATUS(Cmnd)	((Cmnd)->SCp.have_data_in)
#define CMD_TAG(Cmnd)           ((Cmnd)->SCp.sent_command)
#define FCPIO_INVALID_CODE 0x100
#define FNIC_LUN_RESET_TIMEOUT	     10000
#define FNIC_HOST_RESET_TIMEOUT	     10000
#define FNIC_RMDEVICE_TIMEOUT        1000
#define FNIC_HOST_RESET_SETTLE_TIME  30
#define FNIC_MAX_FCP_TARGET     256
extern unsigned int fnic_log_level;
#define FNIC_MAIN_LOGGING 0x01
#define FNIC_FCS_LOGGING 0x02
#define FNIC_SCSI_LOGGING 0x04
#define FNIC_ISR_LOGGING 0x08
#define FNIC_CHECK_LOGGING(LEVEL, CMD)				\
do  while (0)
#define FNIC_MAIN_DBG(kern_level, host, fmt, args...)		\
FNIC_CHECK_LOGGING(FNIC_MAIN_LOGGING,			\
shost_printk(kern_level, host, fmt, ##args);)
#define FNIC_FCS_DBG(kern_level, host, fmt, args...)		\
FNIC_CHECK_LOGGING(FNIC_FCS_LOGGING,			\
shost_printk(kern_level, host, fmt, ##args);)
#define FNIC_SCSI_DBG(kern_level, host, fmt, args...)		\
FNIC_CHECK_LOGGING(FNIC_SCSI_LOGGING,			\
shost_printk(kern_level, host, fmt, ##args);)
#define FNIC_ISR_DBG(kern_level, host, fmt, args...)		\
FNIC_CHECK_LOGGING(FNIC_ISR_LOGGING,			\
shost_printk(kern_level, host, fmt, ##args);)
extern const char *fnic_state_str[];
enum fnic_intx_intr_index ;
enum fnic_msix_intr_index ;
struct fnic_msix_entry ;
enum fnic_state ;
#define FNIC_WQ_COPY_MAX 1
#define FNIC_WQ_MAX 1
#define FNIC_RQ_MAX 1
#define FNIC_CQ_MAX (FNIC_WQ_COPY_MAX + FNIC_WQ_MAX + FNIC_RQ_MAX)
struct mempool;
struct fnic ;
static inline struct fnic *fnic_from_ctlr(struct fcoe_ctlr *fip)
extern struct workqueue_struct *fnic_event_queue;
extern struct device_attribute *fnic_attrs[];
void fnic_clear_intr_mode(struct fnic *fnic);
int fnic_set_intr_mode(struct fnic *fnic);
void fnic_free_intr(struct fnic *fnic);
int fnic_request_intr(struct fnic *fnic);
int fnic_send(struct fc_lport *, struct fc_frame *);
void fnic_free_wq_buf(struct vnic_wq *wq, struct vnic_wq_buf *buf);
void fnic_handle_frame(struct work_struct *work);
void fnic_handle_link(struct work_struct *work);
int fnic_rq_cmpl_handler(struct fnic *fnic, int);
int fnic_alloc_rq_frame(struct vnic_rq *rq);
void fnic_free_rq_buf(struct vnic_rq *rq, struct vnic_rq_buf *buf);
void fnic_flush_tx(struct fnic *);
void fnic_eth_send(struct fcoe_ctlr *, struct sk_buff *skb);
void fnic_set_port_id(struct fc_lport *, u32, struct fc_frame *);
void fnic_update_mac(struct fc_lport *, u8 *new);
void fnic_update_mac_locked(struct fnic *, u8 *new);
int fnic_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
int fnic_abort_cmd(struct scsi_cmnd *);
int fnic_device_reset(struct scsi_cmnd *);
int fnic_host_reset(struct scsi_cmnd *);
int fnic_reset(struct Scsi_Host *);
void fnic_scsi_cleanup(struct fc_lport *);
void fnic_scsi_abort_io(struct fc_lport *);
void fnic_empty_scsi_cleanup(struct fc_lport *);
void fnic_exch_mgr_reset(struct fc_lport *, u32, u32);
int fnic_wq_copy_cmpl_handler(struct fnic *fnic, int);
int fnic_wq_cmpl_handler(struct fnic *fnic, int);
int fnic_flogi_reg_handler(struct fnic *fnic, u32);
void fnic_wq_copy_cleanup_handler(struct vnic_wq_copy *wq,
struct fcpio_host_req *desc);
int fnic_fw_reset_handler(struct fnic *fnic);
void fnic_terminate_rport_io(struct fc_rport *);
const char *fnic_state_to_str(unsigned int state);
void fnic_log_q_error(struct fnic *fnic);
void fnic_handle_link_event(struct fnic *fnic);
