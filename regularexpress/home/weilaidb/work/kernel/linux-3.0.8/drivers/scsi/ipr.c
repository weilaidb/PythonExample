static LIST_HEAD(ipr_ioa_head);
static unsigned int ipr_log_level = IPR_DEFAULT_LOG_LEVEL;
static unsigned int ipr_max_speed = 1;
static int ipr_testmode = 0;
static unsigned int ipr_fastfail = 0;
static unsigned int ipr_transop_timeout = 0;
static unsigned int ipr_debug = 0;
static unsigned int ipr_max_devs = IPR_DEFAULT_SIS64_DEVS;
static unsigned int ipr_dual_ioa_raid = 1;
static DEFINE_SPINLOCK(ipr_driver_lock);
static const struct ipr_chip_cfg_t ipr_chip_cfg[] = ;
static const struct ipr_chip_t ipr_chip[] = ;
static int ipr_max_bus_speeds [] = ;
MODULE_AUTHOR("Brian King <brking@us.ibm.com>");
MODULE_DESCRIPTION("IBM Power RAID SCSI Adapter Driver");
module_param_named(max_speed, ipr_max_speed, uint, 0);
MODULE_PARM_DESC(max_speed, "Maximum bus speed (0-2). Default: 1=U160. Speeds: 0=80 MB/s, 1=U160, 2=U320");
module_param_named(log_level, ipr_log_level, uint, 0);
MODULE_PARM_DESC(log_level, "Set to 0 - 4 for increasing verbosity of device driver");
module_param_named(testmode, ipr_testmode, int, 0);
MODULE_PARM_DESC(testmode, "DANGEROUS!!! Allows unsupported configurations");
module_param_named(fastfail, ipr_fastfail, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(fastfail, "Reduce timeouts and retries");
module_param_named(transop_timeout, ipr_transop_timeout, int, 0);
MODULE_PARM_DESC(transop_timeout, "Time in seconds to wait for adapter to come operational (default: 300)");
module_param_named(debug, ipr_debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable device driver debugging logging. Set to 1 to enable. (default: 0)");
module_param_named(dual_ioa_raid, ipr_dual_ioa_raid, int, 0);
MODULE_PARM_DESC(dual_ioa_raid, "Enable dual adapter RAID support. Set to 1 to enable. (default: 1)");
module_param_named(max_devs, ipr_max_devs, int, 0);
MODULE_PARM_DESC(max_devs, "Specify the maximum number of physical devices. "
"[Default=" __stringify(IPR_DEFAULT_SIS64_DEVS) "]");
MODULE_LICENSE("GPL");
MODULE_VERSION(IPR_DRIVER_VERSION);
static const
struct ipr_error_table_t ipr_error_table[] = ;
static const struct ipr_ses_table_entry ipr_ses_table[] = ;
static int ipr_reset_alert(struct ipr_cmnd *);
static void ipr_process_ccn(struct ipr_cmnd *);
static void ipr_process_error(struct ipr_cmnd *);
static void ipr_reset_ioa_job(struct ipr_cmnd *);
static void ipr_initiate_ioa_reset(struct ipr_ioa_cfg *,
enum ipr_shutdown_type);
static void ipr_trc_hook(struct ipr_cmnd *ipr_cmd,
u8 type, u32 add_data)
#define ipr_trc_hook(ipr_cmd, type, add_data) do  while(0)
static void ipr_reinit_ipr_cmnd(struct ipr_cmnd *ipr_cmd)
static void ipr_init_ipr_cmnd(struct ipr_cmnd *ipr_cmd)
static
struct ipr_cmnd *ipr_get_free_ipr_cmnd(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_mask_and_clear_interrupts(struct ipr_ioa_cfg *ioa_cfg,
u32 clr_ints)
static int ipr_save_pcix_cmd_reg(struct ipr_ioa_cfg *ioa_cfg)
static int ipr_set_pcix_cmd_reg(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_sata_eh_done(struct ipr_cmnd *ipr_cmd)
static void ipr_scsi_eh_done(struct ipr_cmnd *ipr_cmd)
static void ipr_fail_all_ops(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_send_command(struct ipr_cmnd *ipr_cmd)
static void ipr_do_req(struct ipr_cmnd *ipr_cmd,
void (*done) (struct ipr_cmnd *),
void (*timeout_func) (struct ipr_cmnd *), u32 timeout)
static void ipr_internal_cmd_done(struct ipr_cmnd *ipr_cmd)
static void ipr_init_ioadl(struct ipr_cmnd *ipr_cmd, dma_addr_t dma_addr,
u32 len, int flags)
static void ipr_send_blocking_cmd(struct ipr_cmnd *ipr_cmd,
void (*timeout_func) (struct ipr_cmnd *ipr_cmd),
u32 timeout)
static void ipr_send_hcam(struct ipr_ioa_cfg *ioa_cfg, u8 type,
struct ipr_hostrcb *hostrcb)
static void ipr_update_ata_class(struct ipr_resource_entry *res, unsigned int proto)
static void ipr_init_res_entry(struct ipr_resource_entry *res,
struct ipr_config_table_entry_wrapper *cfgtew)
static int ipr_is_same_device(struct ipr_resource_entry *res,
struct ipr_config_table_entry_wrapper *cfgtew)
static char *ipr_format_res_path(u8 *res_path, char *buffer, int len)
static void ipr_update_res_entry(struct ipr_resource_entry *res,
struct ipr_config_table_entry_wrapper *cfgtew)
static void ipr_clear_res_target(struct ipr_resource_entry *res)
static void ipr_handle_config_change(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_process_ccn(struct ipr_cmnd *ipr_cmd)
static int strip_and_pad_whitespace(int i, char *buf)
static void ipr_log_vpd_compact(char *prefix, struct ipr_hostrcb *hostrcb,
struct ipr_vpd *vpd)
static void ipr_log_vpd(struct ipr_vpd *vpd)
static void ipr_log_ext_vpd_compact(char *prefix, struct ipr_hostrcb *hostrcb,
struct ipr_ext_vpd *vpd)
static void ipr_log_ext_vpd(struct ipr_ext_vpd *vpd)
static void ipr_log_enhanced_cache_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_cache_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_enhanced_config_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_sis64_config_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_config_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_enhanced_array_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_array_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_hex_data(struct ipr_ioa_cfg *ioa_cfg, u32 *data, int len)
static void ipr_log_enhanced_dual_ioa_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_dual_ioa_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static const struct  path_active_desc[] = ;
static const struct  path_state_desc[] = ;
static void ipr_log_fabric_path(struct ipr_hostrcb *hostrcb,
struct ipr_hostrcb_fabric_desc *fabric)
static void ipr_log64_fabric_path(struct ipr_hostrcb *hostrcb,
struct ipr_hostrcb64_fabric_desc *fabric)
static const struct  path_type_desc[] = ;
static const struct  path_status_desc[] = ;
static const char *link_rate[] = ;
static void ipr_log_path_elem(struct ipr_hostrcb *hostrcb,
struct ipr_hostrcb_config_element *cfg)
static void ipr_log64_path_elem(struct ipr_hostrcb *hostrcb,
struct ipr_hostrcb64_config_element *cfg)
static void ipr_log_fabric_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_sis64_array_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_sis64_fabric_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_log_generic_error(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static u32 ipr_get_error(u32 ioasc)
static void ipr_handle_log_data(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_hostrcb *hostrcb)
static void ipr_process_error(struct ipr_cmnd *ipr_cmd)
static void ipr_timeout(struct ipr_cmnd *ipr_cmd)
static void ipr_oper_timeout(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_reload(struct ipr_ioa_cfg *ioa_cfg,
enum ipr_shutdown_type shutdown_type)
static const struct ipr_ses_table_entry *
ipr_find_ses_entry(struct ipr_resource_entry *res)
static u32 ipr_get_max_scsi_speed(struct ipr_ioa_cfg *ioa_cfg, u8 bus, u8 bus_width)
static int ipr_wait_iodbg_ack(struct ipr_ioa_cfg *ioa_cfg, int max_delay)
static int ipr_get_sis64_dump_data_section(struct ipr_ioa_cfg *ioa_cfg,
u32 start_addr,
__be32 *dest, u32 length_in_words)
static int ipr_get_ldump_data_section(struct ipr_ioa_cfg *ioa_cfg,
u32 start_addr,
__be32 *dest, u32 length_in_words)
static int ipr_sdt_copy(struct ipr_ioa_cfg *ioa_cfg,
unsigned long pci_address, u32 length)
static void ipr_init_dump_entry_hdr(struct ipr_dump_entry_header *hdr)
static void ipr_dump_ioa_type_data(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_driver_dump *driver_dump)
static void ipr_dump_version_data(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_driver_dump *driver_dump)
static void ipr_dump_trace_data(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_driver_dump *driver_dump)
static void ipr_dump_location_data(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_driver_dump *driver_dump)
static void ipr_get_ioa_dump(struct ipr_ioa_cfg *ioa_cfg, struct ipr_dump *dump)
#define ipr_get_ioa_dump(ioa_cfg, dump) do  while(0)
static void ipr_release_dump(struct kref *kref)
static void ipr_worker_thread(struct work_struct *work)
static ssize_t ipr_read_trace(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ipr_trace_attr = ;
static ssize_t ipr_show_fw_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ipr_fw_version_attr = ;
static ssize_t ipr_show_log_level(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ipr_store_log_level(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute ipr_log_level_attr = ;
static ssize_t ipr_store_diagnostics(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute ipr_diagnostics_attr = ;
static ssize_t ipr_show_adapter_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ipr_store_adapter_state(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute ipr_ioa_state_attr = ;
static ssize_t ipr_store_reset_adapter(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute ipr_ioa_reset_attr = ;
static struct ipr_sglist *ipr_alloc_ucode_buffer(int buf_len)
static void ipr_free_ucode_buffer(struct ipr_sglist *sglist)
static int ipr_copy_ucode_buffer(struct ipr_sglist *sglist,
u8 *buffer, u32 len)
static void ipr_build_ucode_ioadl64(struct ipr_cmnd *ipr_cmd,
struct ipr_sglist *sglist)
static void ipr_build_ucode_ioadl(struct ipr_cmnd *ipr_cmd,
struct ipr_sglist *sglist)
static int ipr_update_ioa_ucode(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_sglist *sglist)
static ssize_t ipr_store_update_fw(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute ipr_update_fw_attr = ;
static ssize_t ipr_show_fw_type(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ipr_ioa_fw_type_attr = ;
static struct device_attribute *ipr_ioa_attrs[] = ;
static ssize_t ipr_read_dump(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static int ipr_alloc_dump(struct ipr_ioa_cfg *ioa_cfg)
static int ipr_free_dump(struct ipr_ioa_cfg *ioa_cfg)
static ssize_t ipr_write_dump(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ipr_dump_attr = ;
static int ipr_free_dump(struct ipr_ioa_cfg *ioa_cfg) ;
static int ipr_change_queue_depth(struct scsi_device *sdev, int qdepth,
int reason)
static int ipr_change_queue_type(struct scsi_device *sdev, int tag_type)
static ssize_t ipr_show_adapter_handle(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ipr_adapter_handle_attr = ;
static ssize_t ipr_show_resource_path(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ipr_resource_path_attr = ;
static ssize_t ipr_show_device_id(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ipr_device_id_attr = ;
static ssize_t ipr_show_resource_type(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ipr_resource_type_attr = ;
static struct device_attribute *ipr_dev_attrs[] = ;
static int ipr_biosparam(struct scsi_device *sdev,
struct block_device *block_device,
sector_t capacity, int *parm)
static struct ipr_resource_entry *ipr_find_starget(struct scsi_target *starget)
static struct ata_port_info sata_port_info;
static int ipr_target_alloc(struct scsi_target *starget)
static void ipr_target_destroy(struct scsi_target *starget)
static struct ipr_resource_entry *ipr_find_sdev(struct scsi_device *sdev)
static void ipr_slave_destroy(struct scsi_device *sdev)
static int ipr_slave_configure(struct scsi_device *sdev)
static int ipr_ata_slave_alloc(struct scsi_device *sdev)
static int ipr_slave_alloc(struct scsi_device *sdev)
static int __ipr_eh_host_reset(struct scsi_cmnd * scsi_cmd)
static int ipr_eh_host_reset(struct scsi_cmnd * cmd)
static int ipr_device_reset(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_resource_entry *res)
static int ipr_sata_reset(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
static int __ipr_eh_dev_reset(struct scsi_cmnd * scsi_cmd)
static int ipr_eh_dev_reset(struct scsi_cmnd * cmd)
static void ipr_bus_reset_done(struct ipr_cmnd *ipr_cmd)
static void ipr_abort_timeout(struct ipr_cmnd *ipr_cmd)
static int ipr_cancel_op(struct scsi_cmnd * scsi_cmd)
static int ipr_eh_abort(struct scsi_cmnd * scsi_cmd)
static irqreturn_t ipr_handle_other_interrupt(struct ipr_ioa_cfg *ioa_cfg,
u32 int_reg)
static void ipr_isr_eh(struct ipr_ioa_cfg *ioa_cfg, char *msg)
static irqreturn_t ipr_isr(int irq, void *devp)
static int ipr_build_ioadl64(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_cmnd *ipr_cmd)
static int ipr_build_ioadl(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_cmnd *ipr_cmd)
static u8 ipr_get_task_attributes(struct scsi_cmnd *scsi_cmd)
static void ipr_erp_done(struct ipr_cmnd *ipr_cmd)
static void ipr_reinit_ipr_cmnd_for_erp(struct ipr_cmnd *ipr_cmd)
static void ipr_erp_request_sense(struct ipr_cmnd *ipr_cmd)
static void ipr_erp_cancel_all(struct ipr_cmnd *ipr_cmd)
static void ipr_dump_ioasa(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_cmnd *ipr_cmd, struct ipr_resource_entry *res)
static void ipr_gen_sense(struct ipr_cmnd *ipr_cmd)
static int ipr_get_autosense(struct ipr_cmnd *ipr_cmd)
static void ipr_erp_start(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_cmnd *ipr_cmd)
static void ipr_scsi_done(struct ipr_cmnd *ipr_cmd)
static int ipr_queuecommand_lck(struct scsi_cmnd *scsi_cmd,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ipr_queuecommand)
static int ipr_ioctl(struct scsi_device *sdev, int cmd, void __user *arg)
static const char * ipr_ioa_info(struct Scsi_Host *host)
static struct scsi_host_template driver_template = ;
static void ipr_ata_phy_reset(struct ata_port *ap)
static void ipr_ata_post_internal(struct ata_queued_cmd *qc)
static void ipr_copy_sata_tf(struct ipr_ioarcb_ata_regs *regs,
struct ata_taskfile *tf)
static void ipr_sata_done(struct ipr_cmnd *ipr_cmd)
static void ipr_build_ata_ioadl64(struct ipr_cmnd *ipr_cmd,
struct ata_queued_cmd *qc)
static void ipr_build_ata_ioadl(struct ipr_cmnd *ipr_cmd,
struct ata_queued_cmd *qc)
static unsigned int ipr_qc_issue(struct ata_queued_cmd *qc)
static bool ipr_qc_fill_rtf(struct ata_queued_cmd *qc)
static struct ata_port_operations ipr_sata_ops = ;
static struct ata_port_info sata_port_info = ;
static const u16 ipr_blocked_processors[] = ;
static int ipr_invalid_adapter(struct ipr_ioa_cfg *ioa_cfg)
#define ipr_invalid_adapter(ioa_cfg) 0
static int ipr_ioa_bringdown_done(struct ipr_cmnd *ipr_cmd)
static int ipr_ioa_reset_done(struct ipr_cmnd *ipr_cmd)
static void ipr_set_sup_dev_dflt(struct ipr_supported_device *supported_dev,
struct ipr_std_inq_vpids *vpids)
static int ipr_set_supported_devs(struct ipr_cmnd *ipr_cmd)
static void *ipr_get_mode_page(struct ipr_mode_pages *mode_pages,
u32 page_code, u32 len)
static void ipr_check_term_power(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_mode_pages *mode_pages)
static void ipr_scsi_bus_speed_limit(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_modify_ioafp_mode_page_28(struct ipr_ioa_cfg *ioa_cfg,
struct ipr_mode_pages *mode_pages)
static void ipr_build_mode_select(struct ipr_cmnd *ipr_cmd,
__be32 res_handle, u8 parm,
dma_addr_t dma_addr, u8 xfer_len)
static int ipr_ioafp_mode_select_page28(struct ipr_cmnd *ipr_cmd)
static void ipr_build_mode_sense(struct ipr_cmnd *ipr_cmd,
__be32 res_handle,
u8 parm, dma_addr_t dma_addr, u8 xfer_len)
static int ipr_reset_cmd_failed(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_mode_sense_failed(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_mode_sense_page28(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_mode_select_page24(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_mode_sense_page24_failed(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_mode_sense_page24(struct ipr_cmnd *ipr_cmd)
static int ipr_init_res_table(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_query_ioa_cfg(struct ipr_cmnd *ipr_cmd)
static void ipr_ioafp_inquiry(struct ipr_cmnd *ipr_cmd, u8 flags, u8 page,
dma_addr_t dma_addr, u8 xfer_len)
static int ipr_inquiry_page_supported(struct ipr_inquiry_page0 *page0, u8 page)
static int ipr_ioafp_cap_inquiry(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_page3_inquiry(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_page0_inquiry(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_std_inquiry(struct ipr_cmnd *ipr_cmd)
static int ipr_ioafp_identify_hrrq(struct ipr_cmnd *ipr_cmd)
static void ipr_reset_timer_done(struct ipr_cmnd *ipr_cmd)
static void ipr_reset_start_timer(struct ipr_cmnd *ipr_cmd,
unsigned long timeout)
static void ipr_init_ioa_mem(struct ipr_ioa_cfg *ioa_cfg)
static int ipr_reset_next_stage(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_enable_ioa(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_wait_for_dump(struct ipr_cmnd *ipr_cmd)
static void ipr_unit_check_no_data(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_get_unit_check_buffer(struct ipr_ioa_cfg *ioa_cfg)
static int ipr_reset_get_unit_check_job(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_restore_cfg_space(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_bist_done(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_start_bist(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_slot_reset_done(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_slot_reset(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_allowed(struct ipr_ioa_cfg *ioa_cfg)
static int ipr_reset_wait_to_start_bist(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_alert(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_ucode_download_done(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_ucode_download(struct ipr_cmnd *ipr_cmd)
static int ipr_reset_shutdown_ioa(struct ipr_cmnd *ipr_cmd)
static void ipr_reset_ioa_job(struct ipr_cmnd *ipr_cmd)
static void _ipr_initiate_ioa_reset(struct ipr_ioa_cfg *ioa_cfg,
int (*job_step) (struct ipr_cmnd *),
enum ipr_shutdown_type shutdown_type)
static void ipr_initiate_ioa_reset(struct ipr_ioa_cfg *ioa_cfg,
enum ipr_shutdown_type shutdown_type)
static int ipr_reset_freeze(struct ipr_cmnd *ipr_cmd)
static void ipr_pci_frozen(struct pci_dev *pdev)
static pci_ers_result_t ipr_pci_slot_reset(struct pci_dev *pdev)
static void ipr_pci_perm_failure(struct pci_dev *pdev)
static pci_ers_result_t ipr_pci_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static int __devinit ipr_probe_ioa_part2(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_free_cmd_blks(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_free_mem(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_free_all_resources(struct ipr_ioa_cfg *ioa_cfg)
static int __devinit ipr_alloc_cmd_blks(struct ipr_ioa_cfg *ioa_cfg)
static int __devinit ipr_alloc_mem(struct ipr_ioa_cfg *ioa_cfg)
static void __devinit ipr_initialize_bus_attr(struct ipr_ioa_cfg *ioa_cfg)
static void __devinit ipr_init_ioa_cfg(struct ipr_ioa_cfg *ioa_cfg,
struct Scsi_Host *host, struct pci_dev *pdev)
static const struct ipr_chip_t * __devinit
ipr_get_chip_info(const struct pci_device_id *dev_id)
static irqreturn_t __devinit ipr_test_intr(int irq, void *devp)
static int __devinit ipr_test_msi(struct ipr_ioa_cfg *ioa_cfg,
struct pci_dev *pdev)
static int __devinit ipr_probe_ioa(struct pci_dev *pdev,
const struct pci_device_id *dev_id)
static void ipr_scan_vsets(struct ipr_ioa_cfg *ioa_cfg)
static void ipr_initiate_ioa_bringdown(struct ipr_ioa_cfg *ioa_cfg,
enum ipr_shutdown_type shutdown_type)
static void __ipr_remove(struct pci_dev *pdev)
static void __devexit ipr_remove(struct pci_dev *pdev)
static int __devinit ipr_probe(struct pci_dev *pdev,
const struct pci_device_id *dev_id)
static void ipr_shutdown(struct pci_dev *pdev)
static struct pci_device_id ipr_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, ipr_pci_table);
static struct pci_error_handlers ipr_err_handler = ;
static struct pci_driver ipr_driver = ;
static void ipr_halt_done(struct ipr_cmnd *ipr_cmd)
static int ipr_halt(struct notifier_block *nb, ulong event, void *buf)
static struct notifier_block ipr_notifier = ;
static int __init ipr_init(void)
static void __exit ipr_exit(void)
module_init(ipr_init);
module_exit(ipr_exit);
