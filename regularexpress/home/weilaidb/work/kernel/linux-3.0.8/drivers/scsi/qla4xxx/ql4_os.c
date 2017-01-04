static char qla4xxx_version_str[40];
static struct kmem_cache *srb_cachep;
int ql4xdontresethba = 0;
module_param(ql4xdontresethba, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ql4xdontresethba,
"Don't reset the HBA for driver recovery \n"
" 0 - It will reset HBA (Default)\n"
" 1 - It will NOT reset HBA");
int ql4xextended_error_logging = 0;
module_param(ql4xextended_error_logging, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ql4xextended_error_logging,
"Option to enable extended error logging, "
"Default is 0 - no logging, 1 - debug logging");
int ql4xenablemsix = 1;
module_param(ql4xenablemsix, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql4xenablemsix,
"Set to enable MSI or MSI-X interrupt mechanism.\n"
" 0 = enable INTx interrupt mechanism.\n"
" 1 = enable MSI-X interrupt mechanism (Default).\n"
" 2 = enable MSI interrupt mechanism.");
#define QL4_DEF_QDEPTH 32
static int ql4xmaxqdepth = QL4_DEF_QDEPTH;
module_param(ql4xmaxqdepth, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ql4xmaxqdepth,
"Maximum queue depth to report for target devices.\n"
" Default: 32.");
static int ql4xsess_recovery_tmo = QL4_SESS_RECOVERY_TMO;
module_param(ql4xsess_recovery_tmo, int, S_IRUGO);
MODULE_PARM_DESC(ql4xsess_recovery_tmo,
"Target Session Recovery Timeout.\n"
" Default: 30 sec.");
static void qla4xxx_config_dma_addressing(struct scsi_qla_host *ha);
static int qla4xxx_tgt_dscvr(struct Scsi_Host *shost,
enum iscsi_tgt_dscvr type, uint32_t enable,
struct sockaddr *dst_addr);
static int qla4xxx_conn_get_param(struct iscsi_cls_conn *conn,
enum iscsi_param param, char *buf);
static int qla4xxx_sess_get_param(struct iscsi_cls_session *sess,
enum iscsi_param param, char *buf);
static int qla4xxx_host_get_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf);
static void qla4xxx_recovery_timedout(struct iscsi_cls_session *session);
static enum blk_eh_timer_return qla4xxx_eh_cmd_timed_out(struct scsi_cmnd *sc);
static int qla4xxx_queuecommand(struct Scsi_Host *h, struct scsi_cmnd *cmd);
static int qla4xxx_eh_abort(struct scsi_cmnd *cmd);
static int qla4xxx_eh_device_reset(struct scsi_cmnd *cmd);
static int qla4xxx_eh_target_reset(struct scsi_cmnd *cmd);
static int qla4xxx_eh_host_reset(struct scsi_cmnd *cmd);
static int qla4xxx_slave_alloc(struct scsi_device *device);
static int qla4xxx_slave_configure(struct scsi_device *device);
static void qla4xxx_slave_destroy(struct scsi_device *sdev);
static void qla4xxx_scan_start(struct Scsi_Host *shost);
static struct qla4_8xxx_legacy_intr_set legacy_intr[] =
QLA82XX_LEGACY_INTR_CONFIG;
static struct scsi_host_template qla4xxx_driver_template = ;
static struct iscsi_transport qla4xxx_iscsi_transport = ;
static struct scsi_transport_template *qla4xxx_scsi_transport;
static enum blk_eh_timer_return qla4xxx_eh_cmd_timed_out(struct scsi_cmnd *sc)
static void qla4xxx_recovery_timedout(struct iscsi_cls_session *session)
static int qla4xxx_host_get_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf)
static int qla4xxx_sess_get_param(struct iscsi_cls_session *sess,
enum iscsi_param param, char *buf)
static int qla4xxx_conn_get_param(struct iscsi_cls_conn *conn,
enum iscsi_param param, char *buf)
static int qla4xxx_tgt_dscvr(struct Scsi_Host *shost,
enum iscsi_tgt_dscvr type, uint32_t enable,
struct sockaddr *dst_addr)
void qla4xxx_destroy_sess(struct ddb_entry *ddb_entry)
int qla4xxx_add_sess(struct ddb_entry *ddb_entry)
struct ddb_entry *qla4xxx_alloc_sess(struct scsi_qla_host *ha)
static void qla4xxx_scan_start(struct Scsi_Host *shost)
static void qla4xxx_start_timer(struct scsi_qla_host *ha, void *func,
unsigned long interval)
static void qla4xxx_stop_timer(struct scsi_qla_host *ha)
void qla4xxx_mark_device_missing(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry)
void qla4xxx_mark_all_devices_missing(struct scsi_qla_host *ha)
static struct srb* qla4xxx_get_new_srb(struct scsi_qla_host *ha,
struct ddb_entry *ddb_entry,
struct scsi_cmnd *cmd)
static void qla4xxx_srb_free_dma(struct scsi_qla_host *ha, struct srb *srb)
void qla4xxx_srb_compl(struct kref *ref)
static int qla4xxx_queuecommand(struct Scsi_Host *host, struct scsi_cmnd *cmd)
static void qla4xxx_mem_free(struct scsi_qla_host *ha)
static int qla4xxx_mem_alloc(struct scsi_qla_host *ha)
static void qla4_8xxx_check_fw_alive(struct scsi_qla_host *ha)
void qla4_8xxx_watchdog(struct scsi_qla_host *ha)
static void qla4xxx_timer(struct scsi_qla_host *ha)
static int qla4xxx_cmd_wait(struct scsi_qla_host *ha)
int qla4xxx_hw_reset(struct scsi_qla_host *ha)
int qla4xxx_soft_reset(struct scsi_qla_host *ha)
static void qla4xxx_abort_active_cmds(struct scsi_qla_host *ha, int res)
void qla4xxx_dead_adapter_cleanup(struct scsi_qla_host *ha)
static int qla4xxx_recover_adapter(struct scsi_qla_host *ha)
static void qla4xxx_relogin_all_devices(struct scsi_qla_host *ha)
void qla4xxx_wake_dpc(struct scsi_qla_host *ha)
static void qla4xxx_do_dpc(struct work_struct *work)
static void qla4xxx_free_adapter(struct scsi_qla_host *ha)
int qla4_8xxx_iospace_config(struct scsi_qla_host *ha)
int qla4xxx_iospace_config(struct scsi_qla_host *ha)
static struct isp_operations qla4xxx_isp_ops = ;
static struct isp_operations qla4_8xxx_isp_ops = ;
uint16_t qla4xxx_rd_shdw_req_q_out(struct scsi_qla_host *ha)
uint16_t qla4_8xxx_rd_shdw_req_q_out(struct scsi_qla_host *ha)
uint16_t qla4xxx_rd_shdw_rsp_q_in(struct scsi_qla_host *ha)
uint16_t qla4_8xxx_rd_shdw_rsp_q_in(struct scsi_qla_host *ha)
static int __devinit qla4xxx_probe_adapter(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void qla4xxx_prevent_other_port_reinit(struct scsi_qla_host *ha)
static void __devexit qla4xxx_remove_adapter(struct pci_dev *pdev)
static void qla4xxx_config_dma_addressing(struct scsi_qla_host *ha)
static int qla4xxx_slave_alloc(struct scsi_device *sdev)
static int qla4xxx_slave_configure(struct scsi_device *sdev)
static void qla4xxx_slave_destroy(struct scsi_device *sdev)
struct srb *qla4xxx_del_from_active_array(struct scsi_qla_host *ha,
uint32_t index)
static int qla4xxx_eh_wait_on_command(struct scsi_qla_host *ha,
struct scsi_cmnd *cmd)
static int qla4xxx_wait_for_hba_online(struct scsi_qla_host *ha)
static int qla4xxx_eh_wait_for_commands(struct scsi_qla_host *ha,
struct scsi_target *stgt,
struct scsi_device *sdev)
static int qla4xxx_eh_abort(struct scsi_cmnd *cmd)
static int qla4xxx_eh_device_reset(struct scsi_cmnd *cmd)
static int qla4xxx_eh_target_reset(struct scsi_cmnd *cmd)
static int qla4xxx_eh_host_reset(struct scsi_cmnd *cmd)
static pci_ers_result_t
qla4xxx_pci_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
qla4xxx_pci_mmio_enabled(struct pci_dev *pdev)
static uint32_t qla4_8xxx_error_recovery(struct scsi_qla_host *ha)
static pci_ers_result_t
qla4xxx_pci_slot_reset(struct pci_dev *pdev)
static void
qla4xxx_pci_resume(struct pci_dev *pdev)
static struct pci_error_handlers qla4xxx_err_handler = ;
static struct pci_device_id qla4xxx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, qla4xxx_pci_tbl);
static struct pci_driver qla4xxx_pci_driver = ;
static int __init qla4xxx_module_init(void)
static void __exit qla4xxx_module_exit(void)
module_init(qla4xxx_module_init);
module_exit(qla4xxx_module_exit);
MODULE_AUTHOR("QLogic Corporation");
MODULE_DESCRIPTION("QLogic iSCSI HBA Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(QLA4XXX_DRIVER_VERSION);
