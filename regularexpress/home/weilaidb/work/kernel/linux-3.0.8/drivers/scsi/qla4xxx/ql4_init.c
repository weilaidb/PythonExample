static struct ddb_entry *qla4xxx_alloc_ddb(struct scsi_qla_host *ha,
uint32_t fw_ddb_index);
static void ql4xxx_set_mac_number(struct scsi_qla_host *ha)
void qla4xxx_free_ddb(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry)
void qla4xxx_free_ddb_list(struct scsi_qla_host *ha)
static void qla4xxx_init_response_q_entries(struct scsi_qla_host *ha)
int qla4xxx_init_rings(struct scsi_qla_host *ha)
int qla4xxx_get_sys_info(struct scsi_qla_host *ha)
static int qla4xxx_init_local_data(struct scsi_qla_host *ha)
static uint8_t
qla4xxx_wait_for_ip_config(struct scsi_qla_host *ha)
static int qla4xxx_fw_ready(struct scsi_qla_host *ha)
static int qla4xxx_init_firmware(struct scsi_qla_host *ha)
static struct ddb_entry* qla4xxx_get_ddb_entry(struct scsi_qla_host *ha,
uint32_t fw_ddb_index,
uint32_t *new_tgt)
static int qla4xxx_update_ddb_entry(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry,
uint32_t fw_ddb_index)
static struct ddb_entry * qla4xxx_alloc_ddb(struct scsi_qla_host *ha,
uint32_t fw_ddb_index)
int qla4_is_relogin_allowed(struct scsi_qla_host *ha, uint32_t conn_err)
static void qla4xxx_flush_AENS(struct scsi_qla_host *ha)
static int qla4xxx_build_ddb_list(struct scsi_qla_host *ha)
static int qla4xxx_initialize_ddb_list(struct scsi_qla_host *ha)
int qla4xxx_reinitialize_ddb_list(struct scsi_qla_host *ha)
int qla4xxx_relogin_device(struct scsi_qla_host *ha,
struct ddb_entry * ddb_entry)
static int qla4xxx_config_nvram(struct scsi_qla_host *ha)
void qla4_8xxx_pci_config(struct scsi_qla_host *ha)
void qla4xxx_pci_config(struct scsi_qla_host *ha)
static int qla4xxx_start_firmware_from_flash(struct scsi_qla_host *ha)
int ql4xxx_lock_drvr_wait(struct scsi_qla_host *a)
int qla4xxx_start_firmware(struct scsi_qla_host *ha)
int qla4xxx_initialize_adapter(struct scsi_qla_host *ha,
uint8_t renew_ddb_list)
static void qla4xxx_add_device_dynamically(struct scsi_qla_host *ha,
uint32_t fw_ddb_index)
int qla4xxx_process_ddb_changed(struct scsi_qla_host *ha, uint32_t fw_ddb_index,
uint32_t state, uint32_t conn_err)
