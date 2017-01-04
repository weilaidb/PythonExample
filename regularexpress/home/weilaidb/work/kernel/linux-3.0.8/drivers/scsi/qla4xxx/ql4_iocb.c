static int
qla4xxx_space_in_req_ring(struct scsi_qla_host *ha, uint16_t req_cnt)
static void qla4xxx_advance_req_ring_ptr(struct scsi_qla_host *ha)
static int qla4xxx_get_req_pkt(struct scsi_qla_host *ha,
struct queue_entry **queue_entry)
int qla4xxx_send_marker_iocb(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry, int lun, uint16_t mrkr_mod)
static struct continuation_t1_entry *
qla4xxx_alloc_cont_entry(struct scsi_qla_host *ha)
static uint16_t qla4xxx_calc_request_entries(uint16_t dsds)
static void qla4xxx_build_scsi_iocbs(struct srb *srb,
struct command_t3_entry *cmd_entry,
uint16_t tot_dsds)
void qla4_8xxx_queue_iocb(struct scsi_qla_host *ha)
void qla4_8xxx_complete_iocb(struct scsi_qla_host *ha)
void qla4xxx_queue_iocb(struct scsi_qla_host *ha)
void qla4xxx_complete_iocb(struct scsi_qla_host *ha)
int qla4xxx_send_command_to_isp(struct scsi_qla_host *ha, struct srb * srb)
