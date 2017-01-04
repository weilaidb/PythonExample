const char *fnic_state_str[] = ;
static const char *fnic_ioreq_state_str[] = ;
static const char *fcpio_status_str[] =  ;
const char *fnic_state_to_str(unsigned int state)
static const char *fnic_ioreq_state_to_str(unsigned int state)
static const char *fnic_fcpio_status_to_str(unsigned int status)
static void fnic_cleanup_io(struct fnic *fnic, int exclude_id);
static inline spinlock_t *fnic_io_lock_hash(struct fnic *fnic,
struct scsi_cmnd *sc)
static void fnic_release_ioreq_buf(struct fnic *fnic,
struct fnic_io_req *io_req,
struct scsi_cmnd *sc)
static int free_wq_copy_descs(struct fnic *fnic, struct vnic_wq_copy *wq)
int fnic_fw_reset_handler(struct fnic *fnic)
int fnic_flogi_reg_handler(struct fnic *fnic, u32 fc_id)
static inline int fnic_queue_wq_copy_desc(struct fnic *fnic,
struct vnic_wq_copy *wq,
struct fnic_io_req *io_req,
struct scsi_cmnd *sc,
int sg_count)
static int fnic_queuecommand_lck(struct scsi_cmnd *sc, void (*done)(struct scsi_cmnd *))
DEF_SCSI_QCMD(fnic_queuecommand)
static int fnic_fcpio_fw_reset_cmpl_handler(struct fnic *fnic,
struct fcpio_fw_req *desc)
static int fnic_fcpio_flogi_reg_cmpl_handler(struct fnic *fnic,
struct fcpio_fw_req *desc)
static inline int is_ack_index_in_range(struct vnic_wq_copy *wq,
u16 request_out)
static inline void fnic_fcpio_ack_handler(struct fnic *fnic,
unsigned int cq_index,
struct fcpio_fw_req *desc)
static void fnic_fcpio_icmnd_cmpl_handler(struct fnic *fnic,
struct fcpio_fw_req *desc)
static void fnic_fcpio_itmf_cmpl_handler(struct fnic *fnic,
struct fcpio_fw_req *desc)
static int fnic_fcpio_cmpl_handler(struct vnic_dev *vdev,
unsigned int cq_index,
struct fcpio_fw_req *desc)
int fnic_wq_copy_cmpl_handler(struct fnic *fnic, int copy_work_to_do)
static void fnic_cleanup_io(struct fnic *fnic, int exclude_id)
void fnic_wq_copy_cleanup_handler(struct vnic_wq_copy *wq,
struct fcpio_host_req *desc)
static inline int fnic_queue_abort_io_req(struct fnic *fnic, int tag,
u32 task_req, u8 *fc_lun,
struct fnic_io_req *io_req)
void fnic_rport_exch_reset(struct fnic *fnic, u32 port_id)
void fnic_terminate_rport_io(struct fc_rport *rport)
int fnic_abort_cmd(struct scsi_cmnd *sc)
static inline int fnic_queue_dr_io_req(struct fnic *fnic,
struct scsi_cmnd *sc,
struct fnic_io_req *io_req)
static int fnic_clean_pending_aborts(struct fnic *fnic,
struct scsi_cmnd *lr_sc)
int fnic_device_reset(struct scsi_cmnd *sc)
int fnic_reset(struct Scsi_Host *shost)
int fnic_host_reset(struct scsi_cmnd *sc)
void fnic_scsi_abort_io(struct fc_lport *lp)
void fnic_scsi_cleanup(struct fc_lport *lp)
void fnic_empty_scsi_cleanup(struct fc_lport *lp)
void fnic_exch_mgr_reset(struct fc_lport *lp, u32 sid, u32 did)
