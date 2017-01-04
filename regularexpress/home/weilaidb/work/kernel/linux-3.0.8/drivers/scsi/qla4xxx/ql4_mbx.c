int qla4xxx_mailbox_command(struct scsi_qla_host *ha, uint8_t inCount,
uint8_t outCount, uint32_t *mbx_cmd,
uint32_t *mbx_sts)
void qla4xxx_mailbox_premature_completion(struct scsi_qla_host *ha)
static uint8_t
qla4xxx_set_ifcb(struct scsi_qla_host *ha, uint32_t *mbox_cmd,
uint32_t *mbox_sts, dma_addr_t init_fw_cb_dma)
static uint8_t
qla4xxx_get_ifcb(struct scsi_qla_host *ha, uint32_t *mbox_cmd,
uint32_t *mbox_sts, dma_addr_t init_fw_cb_dma)
static void
qla4xxx_update_local_ip(struct scsi_qla_host *ha,
struct addr_ctrl_blk  *init_fw_cb)
static uint8_t
qla4xxx_update_local_ifcb(struct scsi_qla_host *ha,
uint32_t *mbox_cmd,
uint32_t *mbox_sts,
struct addr_ctrl_blk  *init_fw_cb,
dma_addr_t init_fw_cb_dma)
int qla4xxx_initialize_fw_cb(struct scsi_qla_host * ha)
int qla4xxx_get_dhcp_ip_address(struct scsi_qla_host * ha)
int qla4xxx_get_firmware_state(struct scsi_qla_host * ha)
int qla4xxx_get_firmware_status(struct scsi_qla_host * ha)
int qla4xxx_get_fwddb_entry(struct scsi_qla_host *ha,
uint16_t fw_ddb_index,
struct dev_db_entry *fw_ddb_entry,
dma_addr_t fw_ddb_entry_dma,
uint32_t *num_valid_ddb_entries,
uint32_t *next_ddb_index,
uint32_t *fw_ddb_device_state,
uint32_t *conn_err_detail,
uint16_t *tcp_source_port_num,
uint16_t *connection_id)
int qla4xxx_set_ddb_entry(struct scsi_qla_host * ha, uint16_t fw_ddb_index,
dma_addr_t fw_ddb_entry_dma)
void qla4xxx_get_crash_record(struct scsi_qla_host * ha)
void qla4xxx_get_conn_event_log(struct scsi_qla_host * ha)
int qla4xxx_abort_task(struct scsi_qla_host *ha, struct srb *srb)
int qla4xxx_reset_lun(struct scsi_qla_host * ha, struct ddb_entry * ddb_entry,
int lun)
int qla4xxx_reset_target(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry)
int qla4xxx_get_flash(struct scsi_qla_host * ha, dma_addr_t dma_addr,
uint32_t offset, uint32_t len)
int qla4xxx_about_firmware(struct scsi_qla_host *ha)
static int qla4xxx_get_default_ddb(struct scsi_qla_host *ha,
dma_addr_t dma_addr)
static int qla4xxx_req_ddb_entry(struct scsi_qla_host *ha, uint32_t *ddb_index)
int qla4xxx_send_tgts(struct scsi_qla_host *ha, char *ip, uint16_t port)
