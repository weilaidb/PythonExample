static void qla4xxx_copy_sense(struct scsi_qla_host *ha,
struct status_entry *sts_entry,
struct srb *srb)
static void
qla4xxx_status_cont_entry(struct scsi_qla_host *ha,
struct status_cont_entry *sts_cont)
static void qla4xxx_status_entry(struct scsi_qla_host *ha,
struct status_entry *sts_entry)
void qla4xxx_process_response_queue(struct scsi_qla_host *ha)
static void qla4xxx_isr_decode_mailbox(struct scsi_qla_host * ha,
uint32_t mbox_status)
void qla4_8xxx_interrupt_service_routine(struct scsi_qla_host *ha,
uint32_t intr_status)
void qla4xxx_interrupt_service_routine(struct scsi_qla_host * ha,
uint32_t intr_status)
static void qla4_8xxx_spurious_interrupt(struct scsi_qla_host *ha,
uint8_t reqs_count)
irqreturn_t qla4xxx_intr_handler(int irq, void *dev_id)
irqreturn_t qla4_8xxx_intr_handler(int irq, void *dev_id)
irqreturn_t
qla4_8xxx_msi_handler(int irq, void *dev_id)
irqreturn_t
qla4_8xxx_default_intr_handler(int irq, void *dev_id)
irqreturn_t
qla4_8xxx_msix_rsp_q(int irq, void *dev_id)
void qla4xxx_process_aen(struct scsi_qla_host * ha, uint8_t process_aen)
int qla4xxx_request_irqs(struct scsi_qla_host *ha)
void qla4xxx_free_irqs(struct scsi_qla_host *ha)
