#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static unsigned int default_depth = 32;
module_param_named(queue_depth, default_depth, uint, 0600);
MODULE_PARM_DESC(queue_depth, "Default queue depth for new SCSI devices");
static bool enable_dif;
module_param_named(dif, enable_dif, bool, 0600);
MODULE_PARM_DESC(dif, "Enable DIF/DIX data integrity support");
static bool allow_lun_scan = 1;
module_param(allow_lun_scan, bool, 0600);
MODULE_PARM_DESC(allow_lun_scan, "For NPIV, scan and attach all storage LUNs");
static int zfcp_scsi_change_queue_depth(struct scsi_device *sdev, int depth,
int reason)
static void zfcp_scsi_slave_destroy(struct scsi_device *sdev)
static int zfcp_scsi_slave_configure(struct scsi_device *sdp)
static void zfcp_scsi_command_fail(struct scsi_cmnd *scpnt, int result)
static
int zfcp_scsi_queuecommand(struct Scsi_Host *shost, struct scsi_cmnd *scpnt)
static int zfcp_scsi_slave_alloc(struct scsi_device *sdev)
static int zfcp_scsi_eh_abort_handler(struct scsi_cmnd *scpnt)
static int zfcp_task_mgmt_function(struct scsi_cmnd *scpnt, u8 tm_flags)
static int zfcp_scsi_eh_device_reset_handler(struct scsi_cmnd *scpnt)
static int zfcp_scsi_eh_target_reset_handler(struct scsi_cmnd *scpnt)
static int zfcp_scsi_eh_host_reset_handler(struct scsi_cmnd *scpnt)
struct scsi_transport_template *zfcp_scsi_transport_template;
static struct scsi_host_template zfcp_scsi_host_template = ;
int zfcp_scsi_adapter_register(struct zfcp_adapter *adapter)
void zfcp_scsi_adapter_unregister(struct zfcp_adapter *adapter)
static struct fc_host_statistics*
zfcp_init_fc_host_stats(struct zfcp_adapter *adapter)
static void zfcp_adjust_fc_host_stats(struct fc_host_statistics *fc_stats,
struct fsf_qtcb_bottom_port *data,
struct fsf_qtcb_bottom_port *old)
static void zfcp_set_fc_host_stats(struct fc_host_statistics *fc_stats,
struct fsf_qtcb_bottom_port *data)
static struct fc_host_statistics *zfcp_get_fc_host_stats(struct Scsi_Host *host)
static void zfcp_reset_fc_host_stats(struct Scsi_Host *shost)
static void zfcp_get_host_port_state(struct Scsi_Host *shost)
static void zfcp_set_rport_dev_loss_tmo(struct fc_rport *rport, u32 timeout)
static void zfcp_scsi_terminate_rport_io(struct fc_rport *rport)
static void zfcp_scsi_rport_register(struct zfcp_port *port)
static void zfcp_scsi_rport_block(struct zfcp_port *port)
void zfcp_scsi_schedule_rport_register(struct zfcp_port *port)
void zfcp_scsi_schedule_rport_block(struct zfcp_port *port)
void zfcp_scsi_schedule_rports_block(struct zfcp_adapter *adapter)
void zfcp_scsi_rport_work(struct work_struct *work)
void zfcp_scsi_set_prot(struct zfcp_adapter *adapter)
void zfcp_scsi_dif_sense_error(struct scsi_cmnd *scmd, int ascq)
struct fc_function_template zfcp_transport_functions = ;
