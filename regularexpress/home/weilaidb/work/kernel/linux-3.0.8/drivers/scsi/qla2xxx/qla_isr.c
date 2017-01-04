static void qla2x00_mbx_completion(scsi_qla_host_t *, uint16_t);
static void qla2x00_process_completed_request(struct scsi_qla_host *,
struct req_que *, uint32_t);
static void qla2x00_status_entry(scsi_qla_host_t *, struct rsp_que *, void *);
static void qla2x00_status_cont_entry(struct rsp_que *, sts_cont_entry_t *);
static void qla2x00_error_entry(scsi_qla_host_t *, struct rsp_que *,
sts_entry_t *);
irqreturn_t
qla2100_intr_handler(int irq, void *dev_id)
irqreturn_t
qla2300_intr_handler(int irq, void *dev_id)
static void
qla2x00_mbx_completion(scsi_qla_host_t *vha, uint16_t mb0)
static void
qla81xx_idc_event(scsi_qla_host_t *vha, uint16_t aen, uint16_t descr)
void
qla2x00_async_event(scsi_qla_host_t *vha, struct rsp_que *rsp, uint16_t *mb)
static void
qla2x00_process_completed_request(struct scsi_qla_host *vha,
struct req_que *req, uint32_t index)
static srb_t *
qla2x00_get_sp_from_handle(scsi_qla_host_t *vha, const char *func,
struct req_que *req, void *iocb)
static void
qla2x00_mbx_iocb_entry(scsi_qla_host_t *vha, struct req_que *req,
struct mbx_entry *mbx)
static void
qla2x00_ct_entry(scsi_qla_host_t *vha, struct req_que *req,
sts_entry_t *pkt, int iocb_type)
static void
qla24xx_els_ct_entry(scsi_qla_host_t *vha, struct req_que *req,
struct sts_entry_24xx *pkt, int iocb_type)
static void
qla24xx_logio_entry(scsi_qla_host_t *vha, struct req_que *req,
struct logio_entry_24xx *logio)
static void
qla24xx_tm_iocb_entry(scsi_qla_host_t *vha, struct req_que *req,
struct tsk_mgmt_entry *tsk)
void
qla2x00_process_response_queue(struct rsp_que *rsp)
static inline void
qla2x00_handle_sense(srb_t *sp, uint8_t *sense_data, uint32_t par_sense_len,
uint32_t sense_len, struct rsp_que *rsp)
struct scsi_dif_tuple ;
static inline void
qla2x00_handle_dif_error(srb_t *sp, struct sts_entry_24xx *sts24)
static void
qla2x00_status_entry(scsi_qla_host_t *vha, struct rsp_que *rsp, void *pkt)
static void
qla2x00_status_cont_entry(struct rsp_que *rsp, sts_cont_entry_t *pkt)
static void
qla2x00_error_entry(scsi_qla_host_t *vha, struct rsp_que *rsp, sts_entry_t *pkt)
static void
qla24xx_mbx_completion(scsi_qla_host_t *vha, uint16_t mb0)
void qla24xx_process_response_queue(struct scsi_qla_host *vha,
struct rsp_que *rsp)
static void
qla2xxx_check_risc_status(scsi_qla_host_t *vha)
irqreturn_t
qla24xx_intr_handler(int irq, void *dev_id)
static irqreturn_t
qla24xx_msix_rsp_q(int irq, void *dev_id)
static irqreturn_t
qla25xx_msix_rsp_q(int irq, void *dev_id)
static irqreturn_t
qla24xx_msix_default(int irq, void *dev_id)
struct qla_init_msix_entry ;
static struct qla_init_msix_entry msix_entries[3] = ;
static struct qla_init_msix_entry qla82xx_msix_entries[2] = ;
static void
qla24xx_disable_msix(struct qla_hw_data *ha)
static int
qla24xx_enable_msix(struct qla_hw_data *ha, struct rsp_que *rsp)
int
qla2x00_request_irqs(struct qla_hw_data *ha, struct rsp_que *rsp)
void
qla2x00_free_irqs(scsi_qla_host_t *vha)
int qla25xx_request_irq(struct rsp_que *rsp)
