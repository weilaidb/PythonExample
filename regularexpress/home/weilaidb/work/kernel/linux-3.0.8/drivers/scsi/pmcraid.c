static unsigned int pmcraid_debug_log;
static unsigned int pmcraid_disable_aen;
static unsigned int pmcraid_log_level = IOASC_LOG_LEVEL_MUST;
static unsigned int pmcraid_enable_msix;
static atomic_t pmcraid_adapter_count = ATOMIC_INIT(0);
static unsigned int pmcraid_major;
static struct class *pmcraid_class;
DECLARE_BITMAP(pmcraid_minor, PMCRAID_MAX_ADAPTERS);
MODULE_AUTHOR("Anil Ravindranath<anil_ravindranath@pmc-sierra.com>");
MODULE_DESCRIPTION("PMC Sierra MaxRAID Controller Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(PMCRAID_DRIVER_VERSION);
module_param_named(log_level, pmcraid_log_level, uint, (S_IRUGO | S_IWUSR));
MODULE_PARM_DESC(log_level,
"Enables firmware error code logging, default :1 high-severity"
" errors, 2: all errors including high-severity errors,"
" 0: disables logging");
module_param_named(debug, pmcraid_debug_log, uint, (S_IRUGO | S_IWUSR));
MODULE_PARM_DESC(debug,
"Enable driver verbose message logging. Set 1 to enable."
"(default: 0)");
module_param_named(disable_aen, pmcraid_disable_aen, uint, (S_IRUGO | S_IWUSR));
MODULE_PARM_DESC(disable_aen,
"Disable driver aen notifications to apps. Set 1 to disable."
"(default: 0)");
static struct pmcraid_chip_details pmcraid_chip_cfg[] = ;
static struct pci_device_id pmcraid_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, pmcraid_pci_table);
static int pmcraid_slave_alloc(struct scsi_device *scsi_dev)
static int pmcraid_slave_configure(struct scsi_device *scsi_dev)
static void pmcraid_slave_destroy(struct scsi_device *scsi_dev)
static int pmcraid_change_queue_depth(struct scsi_device *scsi_dev, int depth,
int reason)
static int pmcraid_change_queue_type(struct scsi_device *scsi_dev, int tag)
void pmcraid_init_cmdblk(struct pmcraid_cmd *cmd, int index)
static void pmcraid_reinit_cmdblk(struct pmcraid_cmd *cmd)
static struct pmcraid_cmd *pmcraid_get_free_cmd(
struct pmcraid_instance *pinstance
)
void pmcraid_return_cmd(struct pmcraid_cmd *cmd)
static u32 pmcraid_read_interrupts(struct pmcraid_instance *pinstance)
static void pmcraid_disable_interrupts(
struct pmcraid_instance *pinstance,
u32 intrs
)
static void pmcraid_enable_interrupts(
struct pmcraid_instance *pinstance,
u32 intrs
)
static void pmcraid_clr_trans_op(
struct pmcraid_instance *pinstance
)
static void pmcraid_reset_type(struct pmcraid_instance *pinstance)
static void pmcraid_ioa_reset(struct pmcraid_cmd *);
static void pmcraid_bist_done(struct pmcraid_cmd *cmd)
static void pmcraid_start_bist(struct pmcraid_cmd *cmd)
static void pmcraid_reset_alert_done(struct pmcraid_cmd *cmd)
static void pmcraid_notify_ioastate(struct pmcraid_instance *, u32);
static void pmcraid_reset_alert(struct pmcraid_cmd *cmd)
static void pmcraid_timeout_handler(struct pmcraid_cmd *cmd)
static void pmcraid_internal_done(struct pmcraid_cmd *cmd)
static void pmcraid_reinit_cfgtable_done(struct pmcraid_cmd *cmd)
static void pmcraid_erp_done(struct pmcraid_cmd *cmd)
static void _pmcraid_fire_command(struct pmcraid_cmd *cmd)
static void pmcraid_send_cmd(
struct pmcraid_cmd *cmd,
void (*cmd_done) (struct pmcraid_cmd *),
unsigned long timeout,
void (*timeout_func) (struct pmcraid_cmd *)
)
static void pmcraid_ioa_shutdown_done(struct pmcraid_cmd *cmd)
static void pmcraid_ioa_shutdown(struct pmcraid_cmd *cmd)
static void pmcraid_querycfg(struct pmcraid_cmd *);
static void pmcraid_get_fwversion_done(struct pmcraid_cmd *cmd)
static void pmcraid_get_fwversion(struct pmcraid_cmd *cmd)
static void pmcraid_identify_hrrq(struct pmcraid_cmd *cmd)
static void pmcraid_process_ccn(struct pmcraid_cmd *cmd);
static void pmcraid_process_ldn(struct pmcraid_cmd *cmd);
static void pmcraid_send_hcam_cmd(struct pmcraid_cmd *cmd)
static struct pmcraid_cmd *pmcraid_init_hcam
(
struct pmcraid_instance *pinstance,
u8 type
)
static void pmcraid_send_hcam(struct pmcraid_instance *pinstance, u8 type)
static void pmcraid_prepare_cancel_cmd(
struct pmcraid_cmd *cmd,
struct pmcraid_cmd *cmd_to_cancel
)
static void pmcraid_cancel_hcam(
struct pmcraid_cmd *cmd,
u8 type,
void (*cmd_done) (struct pmcraid_cmd *)
)
static void pmcraid_cancel_ccn(struct pmcraid_cmd *cmd)
static void pmcraid_cancel_ldn(struct pmcraid_cmd *cmd)
static int pmcraid_expose_resource(u16 fw_version,
struct pmcraid_config_table_entry *cfgte)
enum ;
#define PMCRAID_AEN_ATTR_MAX (__PMCRAID_AEN_ATTR_MAX - 1)
enum ;
#define PMCRAID_AEN_CMD_MAX (__PMCRAID_AEN_CMD_MAX - 1)
static struct genl_family pmcraid_event_family = ;
static int pmcraid_netlink_init(void)
static void pmcraid_netlink_release(void)
static int pmcraid_notify_aen(
struct pmcraid_instance *pinstance,
struct pmcraid_aen_msg  *aen_msg,
u32    data_size
)
static int pmcraid_notify_ccn(struct pmcraid_instance *pinstance)
static int pmcraid_notify_ldn(struct pmcraid_instance *pinstance)
static void pmcraid_notify_ioastate(struct pmcraid_instance *pinstance, u32 evt)
static void pmcraid_handle_config_change(struct pmcraid_instance *pinstance)
static struct pmcraid_ioasc_error *pmcraid_get_error_info(u32 ioasc)
void pmcraid_ioasc_logger(u32 ioasc, struct pmcraid_cmd *cmd)
static void pmcraid_handle_error_log(struct pmcraid_instance *pinstance)
static void pmcraid_process_ccn(struct pmcraid_cmd *cmd)
static void pmcraid_initiate_reset(struct pmcraid_instance *);
static void pmcraid_set_timestamp(struct pmcraid_cmd *cmd);
static void pmcraid_process_ldn(struct pmcraid_cmd *cmd)
static void pmcraid_register_hcams(struct pmcraid_instance *pinstance)
static void pmcraid_unregister_hcams(struct pmcraid_cmd *cmd)
static void pmcraid_reinit_buffers(struct pmcraid_instance *);
static int pmcraid_reset_enable_ioa(struct pmcraid_instance *pinstance)
static void pmcraid_soft_reset(struct pmcraid_cmd *cmd)
static void pmcraid_get_dump(struct pmcraid_instance *pinstance)
static void pmcraid_fail_outstanding_cmds(struct pmcraid_instance *pinstance)
static void pmcraid_ioa_reset(struct pmcraid_cmd *cmd)
static void pmcraid_initiate_reset(struct pmcraid_instance *pinstance)
static int pmcraid_reset_reload(
struct pmcraid_instance *pinstance,
u8 shutdown_type,
u8 target_state
)
static int pmcraid_reset_bringdown(struct pmcraid_instance *pinstance)
static int pmcraid_reset_bringup(struct pmcraid_instance *pinstance)
static void pmcraid_request_sense(struct pmcraid_cmd *cmd)
static void pmcraid_cancel_all(struct pmcraid_cmd *cmd, u32 sense)
static void pmcraid_frame_auto_sense(struct pmcraid_cmd *cmd)
static int pmcraid_error_handler(struct pmcraid_cmd *cmd)
static int pmcraid_reset_device(
struct scsi_cmnd *scsi_cmd,
unsigned long timeout,
u8 modifier
)
static int _pmcraid_io_done(struct pmcraid_cmd *cmd, int reslen, int ioasc)
static void pmcraid_io_done(struct pmcraid_cmd *cmd)
static struct pmcraid_cmd *pmcraid_abort_cmd(struct pmcraid_cmd *cmd)
static int pmcraid_abort_complete(struct pmcraid_cmd *cancel_cmd)
static int pmcraid_eh_abort_handler(struct scsi_cmnd *scsi_cmd)
static int pmcraid_eh_device_reset_handler(struct scsi_cmnd *scmd)
static int pmcraid_eh_bus_reset_handler(struct scsi_cmnd *scmd)
static int pmcraid_eh_target_reset_handler(struct scsi_cmnd *scmd)
static int pmcraid_eh_host_reset_handler(struct scsi_cmnd *scmd)
static u8 pmcraid_task_attributes(struct scsi_cmnd *scsi_cmd)
struct pmcraid_ioadl_desc *
pmcraid_init_ioadls(struct pmcraid_cmd *cmd, int sgcount)
static int pmcraid_build_ioadl(
struct pmcraid_instance *pinstance,
struct pmcraid_cmd *cmd
)
static void pmcraid_free_sglist(struct pmcraid_sglist *sglist)
static struct pmcraid_sglist *pmcraid_alloc_sglist(int buflen)
static int pmcraid_copy_sglist(
struct pmcraid_sglist *sglist,
unsigned long buffer,
u32 len,
int direction
)
static int pmcraid_queuecommand_lck(
struct scsi_cmnd *scsi_cmd,
void (*done) (struct scsi_cmnd *)
)
static DEF_SCSI_QCMD(pmcraid_queuecommand)
static int pmcraid_chr_open(struct inode *inode, struct file *filep)
static int pmcraid_chr_release(struct inode *inode, struct file *filep)
static int pmcraid_chr_fasync(int fd, struct file *filep, int mode)
static int pmcraid_build_passthrough_ioadls(
struct pmcraid_cmd *cmd,
int buflen,
int direction
)
static void pmcraid_release_passthrough_ioadls(
struct pmcraid_cmd *cmd,
int buflen,
int direction
)
static long pmcraid_ioctl_passthrough(
struct pmcraid_instance *pinstance,
unsigned int ioctl_cmd,
unsigned int buflen,
unsigned long arg
)
static long pmcraid_ioctl_driver(
struct pmcraid_instance *pinstance,
unsigned int cmd,
unsigned int buflen,
void __user *user_buffer
)
static int pmcraid_check_ioctl_buffer(
int cmd,
void __user *arg,
struct pmcraid_ioctl_header *hdr
)
static long pmcraid_chr_ioctl(
struct file *filep,
unsigned int cmd,
unsigned long arg
)
static const struct file_operations pmcraid_fops = ;
static ssize_t pmcraid_show_log_level(
struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pmcraid_store_log_level(
struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count
)
static struct device_attribute pmcraid_log_level_attr = ;
static ssize_t pmcraid_show_drv_version(
struct device *dev,
struct device_attribute *attr,
char *buf
)
static struct device_attribute pmcraid_driver_version_attr = ;
static ssize_t pmcraid_show_adapter_id(
struct device *dev,
struct device_attribute *attr,
char *buf
)
static struct device_attribute pmcraid_adapter_id_attr = ;
static struct device_attribute *pmcraid_host_attrs[] = ;
static struct scsi_host_template pmcraid_host_template = ;
static irqreturn_t pmcraid_isr_msix(int irq, void *dev_id)
static irqreturn_t pmcraid_isr(int irq, void *dev_id)
static void pmcraid_worker_function(struct work_struct *workp)
static void pmcraid_tasklet_function(unsigned long instance)
static
void pmcraid_unregister_interrupt_handler(struct pmcraid_instance *pinstance)
static int
pmcraid_register_interrupt_handler(struct pmcraid_instance *pinstance)
static void
pmcraid_release_cmd_blocks(struct pmcraid_instance *pinstance, int max_index)
static void
pmcraid_release_control_blocks(
struct pmcraid_instance *pinstance,
int max_index
)
static int __devinit
pmcraid_allocate_cmd_blocks(struct pmcraid_instance *pinstance)
static int __devinit
pmcraid_allocate_control_blocks(struct pmcraid_instance *pinstance)
static void
pmcraid_release_host_rrqs(struct pmcraid_instance *pinstance, int maxindex)
static int __devinit
pmcraid_allocate_host_rrqs(struct pmcraid_instance *pinstance)
static void pmcraid_release_hcams(struct pmcraid_instance *pinstance)
static int pmcraid_allocate_hcams(struct pmcraid_instance *pinstance)
static void pmcraid_release_config_buffers(struct pmcraid_instance *pinstance)
static int __devinit
pmcraid_allocate_config_buffers(struct pmcraid_instance *pinstance)
static void pmcraid_init_tasklets(struct pmcraid_instance *pinstance)
static void pmcraid_kill_tasklets(struct pmcraid_instance *pinstance)
static void pmcraid_release_buffers(struct pmcraid_instance *pinstance)
static int __devinit pmcraid_init_buffers(struct pmcraid_instance *pinstance)
static void pmcraid_reinit_buffers(struct pmcraid_instance *pinstance)
static int __devinit pmcraid_init_instance(
struct pci_dev *pdev,
struct Scsi_Host *host,
void __iomem *mapped_pci_addr
)
static void pmcraid_shutdown(struct pci_dev *pdev)
static unsigned short pmcraid_get_minor(void)
static void pmcraid_release_minor(unsigned short minor)
static int pmcraid_setup_chrdev(struct pmcraid_instance *pinstance)
static void pmcraid_release_chrdev(struct pmcraid_instance *pinstance)
static void __devexit pmcraid_remove(struct pci_dev *pdev)
static int pmcraid_suspend(struct pci_dev *pdev, pm_message_t state)
static int pmcraid_resume(struct pci_dev *pdev)
#define pmcraid_suspend NULL
#define pmcraid_resume  NULL
static void pmcraid_complete_ioa_reset(struct pmcraid_cmd *cmd)
static void pmcraid_set_supported_devs(struct pmcraid_cmd *cmd)
static void pmcraid_set_timestamp(struct pmcraid_cmd *cmd)
static void pmcraid_init_res_table(struct pmcraid_cmd *cmd)
static void pmcraid_querycfg(struct pmcraid_cmd *cmd)
static int __devinit pmcraid_probe(
struct pci_dev *pdev,
const struct pci_device_id *dev_id
)
static struct pci_driver pmcraid_driver = ;
static int __init pmcraid_init(void)
static void __exit pmcraid_exit(void)
module_init(pmcraid_init);
module_exit(pmcraid_exit);
