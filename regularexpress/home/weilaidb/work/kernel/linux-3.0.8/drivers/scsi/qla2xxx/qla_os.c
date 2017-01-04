char qla2x00_version_str[40];
static int apidev_major;
static struct kmem_cache *srb_cachep;
static struct kmem_cache *ctx_cachep;
int ql2xlogintimeout = 20;
module_param(ql2xlogintimeout, int, S_IRUGO);
MODULE_PARM_DESC(ql2xlogintimeout,
"Login timeout value in seconds.");
int qlport_down_retry;
module_param(qlport_down_retry, int, S_IRUGO);
MODULE_PARM_DESC(qlport_down_retry,
"Maximum number of command retries to a port that returns "
"a PORT-DOWN status.");
int ql2xplogiabsentdevice;
module_param(ql2xplogiabsentdevice, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql2xplogiabsentdevice,
"Option to enable PLOGI to devices that are not present after "
"a Fabric scan.  This is needed for several broken switches. "
"Default is 0 - no PLOGI. 1 - perfom PLOGI.");
int ql2xloginretrycount = 0;
module_param(ql2xloginretrycount, int, S_IRUGO);
MODULE_PARM_DESC(ql2xloginretrycount,
"Specify an alternate value for the NVRAM login retry count.");
int ql2xallocfwdump = 1;
module_param(ql2xallocfwdump, int, S_IRUGO);
MODULE_PARM_DESC(ql2xallocfwdump,
"Option to enable allocation of memory for a firmware dump "
"during HBA initialization.  Memory allocation requirements "
"vary by ISP type.  Default is 1 - allocate memory.");
int ql2xextended_error_logging;
module_param(ql2xextended_error_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql2xextended_error_logging,
"Option to enable extended error logging, "
"Default is 0 - no logging. 1 - log errors.");
int ql2xshiftctondsd = 6;
module_param(ql2xshiftctondsd, int, S_IRUGO);
MODULE_PARM_DESC(ql2xshiftctondsd,
"Set to control shifting of command type processing "
"based on total number of SG elements.");
static void qla2x00_free_device(scsi_qla_host_t *);
int ql2xfdmienable=1;
module_param(ql2xfdmienable, int, S_IRUGO);
MODULE_PARM_DESC(ql2xfdmienable,
"Enables FDMI registrations. "
"0 - no FDMI. Default is 1 - perform FDMI.");
#define MAX_Q_DEPTH    32
static int ql2xmaxqdepth = MAX_Q_DEPTH;
module_param(ql2xmaxqdepth, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql2xmaxqdepth,
"Maximum queue depth to report for target devices.");
int ql2xenabledif = 1;
module_param(ql2xenabledif, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql2xenabledif,
" Enable T10-CRC-DIF "
" Default is 0 - No DIF Support. 1 - Enable it");
int ql2xenablehba_err_chk;
module_param(ql2xenablehba_err_chk, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ql2xenablehba_err_chk,
" Enable T10-CRC-DIF Error isolation by HBA"
" Default is 0 - Error isolation disabled, 1 - Enable it");
int ql2xiidmaenable=1;
module_param(ql2xiidmaenable, int, S_IRUGO);
MODULE_PARM_DESC(ql2xiidmaenable,
"Enables iIDMA settings "
"Default is 1 - perform iIDMA. 0 - no iIDMA.");
int ql2xmaxqueues = 1;
module_param(ql2xmaxqueues, int, S_IRUGO);
MODULE_PARM_DESC(ql2xmaxqueues,
"Enables MQ settings "
"Default is 1 for single queue. Set it to number "
"of queues in MQ mode.");
int ql2xmultique_tag;
module_param(ql2xmultique_tag, int, S_IRUGO);
MODULE_PARM_DESC(ql2xmultique_tag,
"Enables CPU affinity settings for the driver "
"Default is 0 for no affinity of request and response IO. "
"Set it to 1 to turn on the cpu affinity.");
int ql2xfwloadbin;
module_param(ql2xfwloadbin, int, S_IRUGO);
MODULE_PARM_DESC(ql2xfwloadbin,
"Option to specify location from which to load ISP firmware:\n"
" 2 -- load firmware via the request_firmware() (hotplug)\n"
"      interface.\n"
" 1 -- load firmware from flash.\n"
" 0 -- use default semantics.\n");
int ql2xetsenable;
module_param(ql2xetsenable, int, S_IRUGO);
MODULE_PARM_DESC(ql2xetsenable,
"Enables firmware ETS burst."
"Default is 0 - skip ETS enablement.");
int ql2xdbwr = 1;
module_param(ql2xdbwr, int, S_IRUGO);
MODULE_PARM_DESC(ql2xdbwr,
"Option to specify scheme for request queue posting\n"
" 0 -- Regular doorbell.\n"
" 1 -- CAMRAM doorbell (faster).\n");
int ql2xtargetreset = 1;
module_param(ql2xtargetreset, int, S_IRUGO);
MODULE_PARM_DESC(ql2xtargetreset,
"Enable target reset."
"Default is 1 - use hw defaults.");
int ql2xgffidenable;
module_param(ql2xgffidenable, int, S_IRUGO);
MODULE_PARM_DESC(ql2xgffidenable,
"Enables GFF_ID checks of port type. "
"Default is 0 - Do not use GFF_ID information.");
int ql2xasynctmfenable;
module_param(ql2xasynctmfenable, int, S_IRUGO);
MODULE_PARM_DESC(ql2xasynctmfenable,
"Enables issue of TM IOCBs asynchronously via IOCB mechanism"
"Default is 0 - Issue TM IOCBs via mailbox mechanism.");
int ql2xdontresethba;
module_param(ql2xdontresethba, int, S_IRUGO);
MODULE_PARM_DESC(ql2xdontresethba,
"Option to specify reset behaviour\n"
" 0 (Default) -- Reset on failure.\n"
" 1 -- Do not reset on failure.\n");
uint ql2xmaxlun = MAX_LUNS;
module_param(ql2xmaxlun, uint, S_IRUGO);
MODULE_PARM_DESC(ql2xmaxlun,
"Defines the maximum LU number to register with the SCSI "
"midlayer. Default is 65535.");
static int qla2xxx_slave_configure(struct scsi_device * device);
static int qla2xxx_slave_alloc(struct scsi_device *);
static int qla2xxx_scan_finished(struct Scsi_Host *, unsigned long time);
static void qla2xxx_scan_start(struct Scsi_Host *);
static void qla2xxx_slave_destroy(struct scsi_device *);
static int qla2xxx_queuecommand(struct Scsi_Host *h, struct scsi_cmnd *cmd);
static int qla2xxx_eh_abort(struct scsi_cmnd *);
static int qla2xxx_eh_device_reset(struct scsi_cmnd *);
static int qla2xxx_eh_target_reset(struct scsi_cmnd *);
static int qla2xxx_eh_bus_reset(struct scsi_cmnd *);
static int qla2xxx_eh_host_reset(struct scsi_cmnd *);
static int qla2x00_change_queue_depth(struct scsi_device *, int, int);
static int qla2x00_change_queue_type(struct scsi_device *, int);
struct scsi_host_template qla2xxx_driver_template = ;
static struct scsi_transport_template *qla2xxx_transport_template = NULL;
struct scsi_transport_template *qla2xxx_transport_vport_template = NULL;
__inline__ void
qla2x00_start_timer(scsi_qla_host_t *vha, void *func, unsigned long interval)
static inline void
qla2x00_restart_timer(scsi_qla_host_t *vha, unsigned long interval)
static __inline__ void
qla2x00_stop_timer(scsi_qla_host_t *vha)
static int qla2x00_do_dpc(void *data);
static void qla2x00_rst_aen(scsi_qla_host_t *);
static int qla2x00_mem_alloc(struct qla_hw_data *, uint16_t, uint16_t,
struct req_que **, struct rsp_que **);
static void qla2x00_free_fw_dump(struct qla_hw_data *);
static void qla2x00_mem_free(struct qla_hw_data *);
static void qla2x00_sp_free_dma(srb_t *);
static int qla2x00_alloc_queues(struct qla_hw_data *ha)
static void qla2x00_free_req_que(struct qla_hw_data *ha, struct req_que *req)
static void qla2x00_free_rsp_que(struct qla_hw_data *ha, struct rsp_que *rsp)
static void qla2x00_free_queues(struct qla_hw_data *ha)
static int qla25xx_setup_mode(struct scsi_qla_host *vha)
static char *
qla2x00_pci_info_str(struct scsi_qla_host *vha, char *str)
static char *
qla24xx_pci_info_str(struct scsi_qla_host *vha, char *str)
static char *
qla2x00_fw_version_str(struct scsi_qla_host *vha, char *str)
static char *
qla24xx_fw_version_str(struct scsi_qla_host *vha, char *str)
static inline srb_t *
qla2x00_get_new_sp(scsi_qla_host_t *vha, fc_port_t *fcport,
struct scsi_cmnd *cmd)
static int
qla2xxx_queuecommand(struct Scsi_Host *host, struct scsi_cmnd *cmd)
static int
qla2x00_eh_wait_on_command(struct scsi_cmnd *cmd)
int
qla2x00_wait_for_hba_online(scsi_qla_host_t *vha)
static int
qla2x00_wait_for_reset_ready(scsi_qla_host_t *vha)
int
qla2x00_wait_for_chip_reset(scsi_qla_host_t *vha)
static inline int
qla2x00_wait_for_loop_ready(scsi_qla_host_t *vha)
static void
sp_get(struct srb *sp)
static int
qla2xxx_eh_abort(struct scsi_cmnd *cmd)
int
qla2x00_eh_wait_for_pending_commands(scsi_qla_host_t *vha, unsigned int t,
unsigned int l, enum nexus_wait_type type)
static char *reset_errors[] = ;
static int
__qla2xxx_eh_generic_reset(char *name, enum nexus_wait_type type,
struct scsi_cmnd *cmd, int (*do_reset)(struct fc_port *, unsigned int, int))
static int
qla2xxx_eh_device_reset(struct scsi_cmnd *cmd)
static int
qla2xxx_eh_target_reset(struct scsi_cmnd *cmd)
static int
qla2xxx_eh_bus_reset(struct scsi_cmnd *cmd)
static int
qla2xxx_eh_host_reset(struct scsi_cmnd *cmd)
int
qla2x00_loop_reset(scsi_qla_host_t *vha)
void
qla2x00_abort_all_cmds(scsi_qla_host_t *vha, int res)
static int
qla2xxx_slave_alloc(struct scsi_device *sdev)
static int
qla2xxx_slave_configure(struct scsi_device *sdev)
static void
qla2xxx_slave_destroy(struct scsi_device *sdev)
static void qla2x00_handle_queue_full(struct scsi_device *sdev, int qdepth)
static void qla2x00_adjust_sdev_qdepth_up(struct scsi_device *sdev, int qdepth)
static int
qla2x00_change_queue_depth(struct scsi_device *sdev, int qdepth, int reason)
static int
qla2x00_change_queue_type(struct scsi_device *sdev, int tag_type)
static void
qla2x00_config_dma_addressing(struct qla_hw_data *ha)
static void
qla2x00_enable_intrs(struct qla_hw_data *ha)
static void
qla2x00_disable_intrs(struct qla_hw_data *ha)
static void
qla24xx_enable_intrs(struct qla_hw_data *ha)
static void
qla24xx_disable_intrs(struct qla_hw_data *ha)
static struct isp_operations qla2100_isp_ops = ;
static struct isp_operations qla2300_isp_ops = ;
static struct isp_operations qla24xx_isp_ops = ;
static struct isp_operations qla25xx_isp_ops = ;
static struct isp_operations qla81xx_isp_ops = ;
static struct isp_operations qla82xx_isp_ops = ;
static inline void
qla2x00_set_isp_flags(struct qla_hw_data *ha)
static int
qla2x00_iospace_config(struct qla_hw_data *ha)
static void
qla2xxx_scan_start(struct Scsi_Host *shost)
static int
qla2xxx_scan_finished(struct Scsi_Host *shost, unsigned long time)
static int __devinit
qla2x00_probe_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void
qla2x00_shutdown(struct pci_dev *pdev)
static void
qla2x00_remove_one(struct pci_dev *pdev)
static void
qla2x00_free_device(scsi_qla_host_t *vha)
void qla2x00_free_fcports(struct scsi_qla_host *vha)
static inline void
qla2x00_schedule_rport_del(struct scsi_qla_host *vha, fc_port_t *fcport,
int defer)
void qla2x00_mark_device_lost(scsi_qla_host_t *vha, fc_port_t *fcport,
int do_login, int defer)
void
qla2x00_mark_all_devices_lost(scsi_qla_host_t *vha, int defer)
static int
qla2x00_mem_alloc(struct qla_hw_data *ha, uint16_t req_len, uint16_t rsp_len,
struct req_que **req, struct rsp_que **rsp)
static void
qla2x00_free_fw_dump(struct qla_hw_data *ha)
static void
qla2x00_mem_free(struct qla_hw_data *ha)
struct scsi_qla_host *qla2x00_create_host(struct scsi_host_template *sht,
struct qla_hw_data *ha)
static struct qla_work_evt *
qla2x00_alloc_work(struct scsi_qla_host *vha, enum qla_work_type type)
static int
qla2x00_post_work(struct scsi_qla_host *vha, struct qla_work_evt *e)
int
qla2x00_post_aen_work(struct scsi_qla_host *vha, enum fc_host_event_code code,
u32 data)
int
qla2x00_post_idc_ack_work(struct scsi_qla_host *vha, uint16_t *mb)
#define qla2x00_post_async_work(name, type)	\
int qla2x00_post_async_##name##_work(		\
struct scsi_qla_host *vha,			\
fc_port_t *fcport, uint16_t *data)		\
qla2x00_post_async_work(login, QLA_EVT_ASYNC_LOGIN);
qla2x00_post_async_work(login_done, QLA_EVT_ASYNC_LOGIN_DONE);
qla2x00_post_async_work(logout, QLA_EVT_ASYNC_LOGOUT);
qla2x00_post_async_work(logout_done, QLA_EVT_ASYNC_LOGOUT_DONE);
qla2x00_post_async_work(adisc, QLA_EVT_ASYNC_ADISC);
qla2x00_post_async_work(adisc_done, QLA_EVT_ASYNC_ADISC_DONE);
int
qla2x00_post_uevent_work(struct scsi_qla_host *vha, u32 code)
static void
qla2x00_uevent_emit(struct scsi_qla_host *vha, u32 code)
void
qla2x00_do_work(struct scsi_qla_host *vha)
void qla2x00_relogin(struct scsi_qla_host *vha)
static int
qla2x00_do_dpc(void *data)
void
qla2xxx_wake_dpc(struct scsi_qla_host *vha)
static void
qla2x00_rst_aen(scsi_qla_host_t *vha)
static void
qla2x00_sp_free_dma(srb_t *sp)
static void
qla2x00_sp_final_compl(struct qla_hw_data *ha, srb_t *sp)
void
qla2x00_sp_compl(struct qla_hw_data *ha, srb_t *sp)
void
qla2x00_timer(scsi_qla_host_t *vha)
#define FW_BLOBS	8
#define FW_ISP21XX	0
#define FW_ISP22XX	1
#define FW_ISP2300	2
#define FW_ISP2322	3
#define FW_ISP24XX	4
#define FW_ISP25XX	5
#define FW_ISP81XX	6
#define FW_ISP82XX	7
#define FW_FILE_ISP21XX	"ql2100_fw.bin"
#define FW_FILE_ISP22XX	"ql2200_fw.bin"
#define FW_FILE_ISP2300	"ql2300_fw.bin"
#define FW_FILE_ISP2322	"ql2322_fw.bin"
#define FW_FILE_ISP24XX	"ql2400_fw.bin"
#define FW_FILE_ISP25XX	"ql2500_fw.bin"
#define FW_FILE_ISP81XX	"ql8100_fw.bin"
#define FW_FILE_ISP82XX	"ql8200_fw.bin"
static DEFINE_MUTEX(qla_fw_lock);
static struct fw_blob qla_fw_blobs[FW_BLOBS] = ;
struct fw_blob *
qla2x00_request_firmware(scsi_qla_host_t *vha)
static void
qla2x00_release_firmware(void)
static pci_ers_result_t
qla2xxx_pci_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
qla2xxx_pci_mmio_enabled(struct pci_dev *pdev)
uint32_t qla82xx_error_recovery(scsi_qla_host_t *base_vha)
static pci_ers_result_t
qla2xxx_pci_slot_reset(struct pci_dev *pdev)
static void
qla2xxx_pci_resume(struct pci_dev *pdev)
static struct pci_error_handlers qla2xxx_err_handler = ;
static struct pci_device_id qla2xxx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, qla2xxx_pci_tbl);
static struct pci_driver qla2xxx_pci_driver = ;
static struct file_operations apidev_fops = ;
static int __init
qla2x00_module_init(void)
static void __exit
qla2x00_module_exit(void)
module_init(qla2x00_module_init);
module_exit(qla2x00_module_exit);
MODULE_AUTHOR("QLogic Corporation");
MODULE_DESCRIPTION("QLogic Fibre Channel HBA Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(QLA2XXX_VERSION);
MODULE_FIRMWARE(FW_FILE_ISP21XX);
MODULE_FIRMWARE(FW_FILE_ISP22XX);
MODULE_FIRMWARE(FW_FILE_ISP2300);
MODULE_FIRMWARE(FW_FILE_ISP2322);
MODULE_FIRMWARE(FW_FILE_ISP24XX);
MODULE_FIRMWARE(FW_FILE_ISP25XX);
