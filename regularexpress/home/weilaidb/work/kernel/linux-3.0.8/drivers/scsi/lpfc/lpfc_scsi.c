#define LPFC_RESET_WAIT  2
#define LPFC_ABORT_WAIT  2
int _dump_buf_done;
static char *dif_op_str[] = ;
static void
lpfc_release_scsi_buf_s4(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb);
static void
lpfc_release_scsi_buf_s3(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb);
static void
lpfc_debug_save_data(struct lpfc_hba *phba, struct scsi_cmnd *cmnd)
static void
lpfc_debug_save_dif(struct lpfc_hba *phba, struct scsi_cmnd *cmnd)
static void
lpfc_sli4_set_rsp_sgl_last(struct lpfc_hba *phba,
struct lpfc_scsi_buf *lpfc_cmd)
static void
lpfc_update_stats(struct lpfc_hba *phba, struct  lpfc_scsi_buf *lpfc_cmd)
static void
lpfc_send_sdev_queuedepth_change_event(struct lpfc_hba *phba,
struct lpfc_vport  *vport,
struct lpfc_nodelist *ndlp,
uint32_t lun,
uint32_t old_val,
uint32_t new_val)
int
lpfc_change_queue_depth(struct scsi_device *sdev, int qdepth, int reason)
void
lpfc_rampdown_queue_depth(struct lpfc_hba *phba)
static inline void
lpfc_rampup_queue_depth(struct lpfc_vport  *vport,
uint32_t queue_depth)
void
lpfc_ramp_down_queue_handler(struct lpfc_hba *phba)
void
lpfc_ramp_up_queue_handler(struct lpfc_hba *phba)
void
lpfc_scsi_dev_block(struct lpfc_hba *phba)
static int
lpfc_new_scsi_buf_s3(struct lpfc_vport *vport, int num_to_alloc)
void
lpfc_sli4_vport_delete_fcp_xri_aborted(struct lpfc_vport *vport)
void
lpfc_sli4_fcp_xri_aborted(struct lpfc_hba *phba,
struct sli4_wcqe_xri_aborted *axri)
int
lpfc_sli4_repost_scsi_sgl_list(struct lpfc_hba *phba)
static int
lpfc_new_scsi_buf_s4(struct lpfc_vport *vport, int num_to_alloc)
static inline int
lpfc_new_scsi_buf(struct lpfc_vport *vport, int num_to_alloc)
static struct lpfc_scsi_buf*
lpfc_get_scsi_buf_s3(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
static struct lpfc_scsi_buf*
lpfc_get_scsi_buf_s4(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
static struct lpfc_scsi_buf*
lpfc_get_scsi_buf(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
static void
lpfc_release_scsi_buf_s3(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb)
static void
lpfc_release_scsi_buf_s4(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb)
static void
lpfc_release_scsi_buf(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb)
static int
lpfc_scsi_prep_dma_buf_s3(struct lpfc_hba *phba, struct lpfc_scsi_buf *lpfc_cmd)
static int
lpfc_sc_to_bg_opcodes(struct lpfc_hba *phba, struct scsi_cmnd *sc,
uint8_t *txop, uint8_t *rxop)
struct scsi_dif_tuple ;
static inline unsigned
lpfc_cmd_blksize(struct scsi_cmnd *sc)
static int
lpfc_bg_setup_bpl(struct lpfc_hba *phba, struct scsi_cmnd *sc,
struct ulp_bde64 *bpl, int datasegcnt)
static int
lpfc_bg_setup_bpl_prot(struct lpfc_hba *phba, struct scsi_cmnd *sc,
struct ulp_bde64 *bpl, int datacnt, int protcnt)
static int
lpfc_prot_group_type(struct lpfc_hba *phba, struct scsi_cmnd *sc)
static int
lpfc_bg_scsi_prep_dma_buf(struct lpfc_hba *phba,
struct lpfc_scsi_buf *lpfc_cmd)
static int
lpfc_parse_bg_err(struct lpfc_hba *phba, struct lpfc_scsi_buf *lpfc_cmd,
struct lpfc_iocbq *pIocbOut)
static int
lpfc_scsi_prep_dma_buf_s4(struct lpfc_hba *phba, struct lpfc_scsi_buf *lpfc_cmd)
static inline int
lpfc_scsi_prep_dma_buf(struct lpfc_hba *phba, struct lpfc_scsi_buf *lpfc_cmd)
static void
lpfc_send_scsi_error_event(struct lpfc_hba *phba, struct lpfc_vport *vport,
struct lpfc_scsi_buf *lpfc_cmd, struct lpfc_iocbq *rsp_iocb)
static void
lpfc_scsi_unprep_dma_buf(struct lpfc_hba *phba, struct lpfc_scsi_buf *psb)
static void
lpfc_handle_fcp_err(struct lpfc_vport *vport, struct lpfc_scsi_buf *lpfc_cmd,
struct lpfc_iocbq *rsp_iocb)
static void
lpfc_scsi_cmd_iocb_cmpl(struct lpfc_hba *phba, struct lpfc_iocbq *pIocbIn,
struct lpfc_iocbq *pIocbOut)
static void
lpfc_fcpcmd_to_iocb(uint8_t *data, struct fcp_cmnd *fcp_cmnd)
static void
lpfc_scsi_prep_cmnd(struct lpfc_vport *vport, struct lpfc_scsi_buf *lpfc_cmd,
struct lpfc_nodelist *pnode)
static int
lpfc_scsi_prep_task_mgmt_cmd(struct lpfc_vport *vport,
struct lpfc_scsi_buf *lpfc_cmd,
unsigned int lun,
uint8_t task_mgmt_cmd)
int
lpfc_scsi_api_table_setup(struct lpfc_hba *phba, uint8_t dev_grp)
static void
lpfc_tskmgmt_def_cmpl(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
const char *
lpfc_info(struct Scsi_Host *host)
static __inline__ void lpfc_poll_rearm_timer(struct lpfc_hba * phba)
void lpfc_poll_start_timer(struct lpfc_hba * phba)
void lpfc_poll_timeout(unsigned long ptr)
static int
lpfc_queuecommand_lck(struct scsi_cmnd *cmnd, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(lpfc_queuecommand)
static int
lpfc_abort_handler(struct scsi_cmnd *cmnd)
static char *
lpfc_taskmgmt_name(uint8_t task_mgmt_cmd)
static int
lpfc_send_taskmgmt(struct lpfc_vport *vport, struct lpfc_rport_data *rdata,
unsigned  tgt_id, unsigned int lun_id,
uint8_t task_mgmt_cmd)
static int
lpfc_chk_tgt_mapped(struct lpfc_vport *vport, struct scsi_cmnd *cmnd)
static int
lpfc_reset_flush_io_context(struct lpfc_vport *vport, uint16_t tgt_id,
uint64_t lun_id, lpfc_ctx_cmd context)
static int
lpfc_device_reset_handler(struct scsi_cmnd *cmnd)
static int
lpfc_target_reset_handler(struct scsi_cmnd *cmnd)
static int
lpfc_bus_reset_handler(struct scsi_cmnd *cmnd)
static int
lpfc_slave_alloc(struct scsi_device *sdev)
static int
lpfc_slave_configure(struct scsi_device *sdev)
static void
lpfc_slave_destroy(struct scsi_device *sdev)
struct scsi_host_template lpfc_template = ;
struct scsi_host_template lpfc_vport_template = ;
