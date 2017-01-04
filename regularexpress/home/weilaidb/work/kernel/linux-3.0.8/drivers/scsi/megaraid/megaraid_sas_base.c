static unsigned int poll_mode_io;
module_param_named(poll_mode_io, poll_mode_io, int, 0);
MODULE_PARM_DESC(poll_mode_io,
"Complete cmds from IO path, (default=0)");
static unsigned int max_sectors;
module_param_named(max_sectors, max_sectors, int, 0);
MODULE_PARM_DESC(max_sectors,
"Maximum number of sectors per IO command");
static int msix_disable;
module_param(msix_disable, int, S_IRUGO);
MODULE_PARM_DESC(msix_disable, "Disable MSI-X interrupt handling. Default: 0");
MODULE_LICENSE("GPL");
MODULE_VERSION(MEGASAS_VERSION);
MODULE_AUTHOR("megaraidlinux@lsi.com");
MODULE_DESCRIPTION("LSI MegaRAID SAS Driver");
int megasas_transition_to_ready(struct megasas_instance *instance);
static int megasas_get_pd_list(struct megasas_instance *instance);
static int megasas_issue_init_mfi(struct megasas_instance *instance);
static int megasas_register_aen(struct megasas_instance *instance,
u32 seq_num, u32 class_locale_word);
static struct pci_device_id megasas_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, megasas_pci_table);
static int megasas_mgmt_majorno;
static struct megasas_mgmt_info megasas_mgmt_info;
static struct fasync_struct *megasas_async_queue;
static DEFINE_MUTEX(megasas_async_queue_mutex);
static int megasas_poll_wait_aen;
static DECLARE_WAIT_QUEUE_HEAD(megasas_poll_wait);
static u32 support_poll_for_event;
u32 megasas_dbg_lvl;
static u32 support_device_change;
spinlock_t poll_aen_lock;
void
megasas_complete_cmd(struct megasas_instance *instance, struct megasas_cmd *cmd,
u8 alt_status);
static u32
megasas_read_fw_status_reg_gen2(struct megasas_register_set __iomem *regs);
static int
megasas_adp_reset_gen2(struct megasas_instance *instance,
struct megasas_register_set __iomem *reg_set);
static irqreturn_t megasas_isr(int irq, void *devp);
static u32
megasas_init_adapter_mfi(struct megasas_instance *instance);
u32
megasas_build_and_issue_cmd(struct megasas_instance *instance,
struct scsi_cmnd *scmd);
static void megasas_complete_cmd_dpc(unsigned long instance_addr);
void
megasas_release_fusion(struct megasas_instance *instance);
int
megasas_ioc_init_fusion(struct megasas_instance *instance);
void
megasas_free_cmds_fusion(struct megasas_instance *instance);
u8
megasas_get_map_info(struct megasas_instance *instance);
int
megasas_sync_map_info(struct megasas_instance *instance);
int
wait_and_poll(struct megasas_instance *instance, struct megasas_cmd *cmd);
void megasas_reset_reply_desc(struct megasas_instance *instance);
u8 MR_ValidateMapInfo(struct MR_FW_RAID_MAP_ALL *map,
struct LD_LOAD_BALANCE_INFO *lbInfo);
int megasas_reset_fusion(struct Scsi_Host *shost);
void megasas_fusion_ocr_wq(struct work_struct *work);
void
megasas_issue_dcmd(struct megasas_instance *instance, struct megasas_cmd *cmd)
struct megasas_cmd *megasas_get_cmd(struct megasas_instance
*instance)
inline void
megasas_return_cmd(struct megasas_instance *instance, struct megasas_cmd *cmd)
static inline void
megasas_enable_intr_xscale(struct megasas_register_set __iomem * regs)
static inline void
megasas_disable_intr_xscale(struct megasas_register_set __iomem * regs)
static u32
megasas_read_fw_status_reg_xscale(struct megasas_register_set __iomem * regs)
static int
megasas_clear_intr_xscale(struct megasas_register_set __iomem * regs)
static inline void
megasas_fire_cmd_xscale(struct megasas_instance *instance,
dma_addr_t frame_phys_addr,
u32 frame_count,
struct megasas_register_set __iomem *regs)
static int
megasas_adp_reset_xscale(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static int
megasas_check_reset_xscale(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static struct megasas_instance_template megasas_instance_template_xscale = ;
static inline void
megasas_enable_intr_ppc(struct megasas_register_set __iomem * regs)
static inline void
megasas_disable_intr_ppc(struct megasas_register_set __iomem * regs)
static u32
megasas_read_fw_status_reg_ppc(struct megasas_register_set __iomem * regs)
static int
megasas_clear_intr_ppc(struct megasas_register_set __iomem * regs)
static inline void
megasas_fire_cmd_ppc(struct megasas_instance *instance,
dma_addr_t frame_phys_addr,
u32 frame_count,
struct megasas_register_set __iomem *regs)
static int
megasas_check_reset_ppc(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static struct megasas_instance_template megasas_instance_template_ppc = ;
static inline void
megasas_enable_intr_skinny(struct megasas_register_set __iomem *regs)
static inline void
megasas_disable_intr_skinny(struct megasas_register_set __iomem *regs)
static u32
megasas_read_fw_status_reg_skinny(struct megasas_register_set __iomem *regs)
static int
megasas_clear_intr_skinny(struct megasas_register_set __iomem *regs)
static inline void
megasas_fire_cmd_skinny(struct megasas_instance *instance,
dma_addr_t frame_phys_addr,
u32 frame_count,
struct megasas_register_set __iomem *regs)
static int
megasas_check_reset_skinny(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static struct megasas_instance_template megasas_instance_template_skinny = ;
static inline void
megasas_enable_intr_gen2(struct megasas_register_set __iomem *regs)
static inline void
megasas_disable_intr_gen2(struct megasas_register_set __iomem *regs)
static u32
megasas_read_fw_status_reg_gen2(struct megasas_register_set __iomem *regs)
static int
megasas_clear_intr_gen2(struct megasas_register_set __iomem *regs)
static inline void
megasas_fire_cmd_gen2(struct megasas_instance *instance,
dma_addr_t frame_phys_addr,
u32 frame_count,
struct megasas_register_set __iomem *regs)
static int
megasas_adp_reset_gen2(struct megasas_instance *instance,
struct megasas_register_set __iomem *reg_set)
static int
megasas_check_reset_gen2(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static struct megasas_instance_template megasas_instance_template_gen2 = ;
extern struct megasas_instance_template megasas_instance_template_fusion;
int
megasas_issue_polled(struct megasas_instance *instance, struct megasas_cmd *cmd)
static int
megasas_issue_blocked_cmd(struct megasas_instance *instance,
struct megasas_cmd *cmd)
static int
megasas_issue_blocked_abort_cmd(struct megasas_instance *instance,
struct megasas_cmd *cmd_to_abort)
static int
megasas_make_sgl32(struct megasas_instance *instance, struct scsi_cmnd *scp,
union megasas_sgl *mfi_sgl)
static int
megasas_make_sgl64(struct megasas_instance *instance, struct scsi_cmnd *scp,
union megasas_sgl *mfi_sgl)
static int
megasas_make_sgl_skinny(struct megasas_instance *instance,
struct scsi_cmnd *scp, union megasas_sgl *mfi_sgl)
static u32 megasas_get_frame_count(struct megasas_instance *instance,
u8 sge_count, u8 frame_type)
static int
megasas_build_dcdb(struct megasas_instance *instance, struct scsi_cmnd *scp,
struct megasas_cmd *cmd)
static int
megasas_build_ldio(struct megasas_instance *instance, struct scsi_cmnd *scp,
struct megasas_cmd *cmd)
inline int megasas_is_ldio(struct scsi_cmnd *cmd)
static inline void
megasas_dump_pending_frames(struct megasas_instance *instance)
u32
megasas_build_and_issue_cmd(struct megasas_instance *instance,
struct scsi_cmnd *scmd)
static int
megasas_queue_command_lck(struct scsi_cmnd *scmd, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(megasas_queue_command)
static struct megasas_instance *megasas_lookup_instance(u16 host_no)
static int megasas_slave_configure(struct scsi_device *sdev)
static int megasas_slave_alloc(struct scsi_device *sdev)
void megaraid_sas_kill_hba(struct megasas_instance *instance)
void
megasas_check_and_restore_queue_depth(struct megasas_instance *instance)
static void megasas_complete_cmd_dpc(unsigned long instance_addr)
static void
megasas_internal_reset_defer_cmds(struct megasas_instance *instance);
static void
process_fw_state_change_wq(struct work_struct *work);
void megasas_do_ocr(struct megasas_instance *instance)
static int megasas_wait_for_outstanding(struct megasas_instance *instance)
static int megasas_generic_reset(struct scsi_cmnd *scmd)
static enum
blk_eh_timer_return megasas_reset_timer(struct scsi_cmnd *scmd)
static int megasas_reset_device(struct scsi_cmnd *scmd)
static int megasas_reset_bus_host(struct scsi_cmnd *scmd)
static int
megasas_bios_param(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static void megasas_aen_polling(struct work_struct *work);
static void
megasas_service_aen(struct megasas_instance *instance, struct megasas_cmd *cmd)
static struct scsi_host_template megasas_template = ;
static void
megasas_complete_int_cmd(struct megasas_instance *instance,
struct megasas_cmd *cmd)
static void
megasas_complete_abort(struct megasas_instance *instance,
struct megasas_cmd *cmd)
void
megasas_complete_cmd(struct megasas_instance *instance, struct megasas_cmd *cmd,
u8 alt_status)
static inline void
megasas_issue_pending_cmds_again(struct megasas_instance *instance)
static void
megasas_internal_reset_defer_cmds(struct megasas_instance *instance)
static void
process_fw_state_change_wq(struct work_struct *work)
static int
megasas_deplete_reply_queue(struct megasas_instance *instance,
u8 alt_status)
static irqreturn_t megasas_isr(int irq, void *devp)
int
megasas_transition_to_ready(struct megasas_instance* instance)
static void megasas_teardown_frame_pool(struct megasas_instance *instance)
static int megasas_create_frame_pool(struct megasas_instance *instance)
void megasas_free_cmds(struct megasas_instance *instance)
int megasas_alloc_cmds(struct megasas_instance *instance)
static int
megasas_get_pd_list(struct megasas_instance *instance)
static int
megasas_get_ld_list(struct megasas_instance *instance)
static int
megasas_get_ctrl_info(struct megasas_instance *instance,
struct megasas_ctrl_info *ctrl_info)
static int
megasas_issue_init_mfi(struct megasas_instance *instance)
static inline void
megasas_start_timer(struct megasas_instance *instance,
struct timer_list *timer,
void *fn, unsigned long interval)
static void
megasas_io_completion_timer(unsigned long instance_addr)
static u32
megasas_init_adapter_mfi(struct megasas_instance *instance)
static int megasas_init_fw(struct megasas_instance *instance)
static void megasas_release_mfi(struct megasas_instance *instance)
static int
megasas_get_seq_num(struct megasas_instance *instance,
struct megasas_evt_log_info *eli)
static int
megasas_register_aen(struct megasas_instance *instance, u32 seq_num,
u32 class_locale_word)
static int megasas_start_aen(struct megasas_instance *instance)
static int megasas_io_attach(struct megasas_instance *instance)
static int
megasas_set_dma_mask(struct pci_dev *pdev)
static int __devinit
megasas_probe_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void megasas_flush_cache(struct megasas_instance *instance)
static void megasas_shutdown_controller(struct megasas_instance *instance,
u32 opcode)
static int
megasas_suspend(struct pci_dev *pdev, pm_message_t state)
static int
megasas_resume(struct pci_dev *pdev)
#define megasas_suspend	NULL
#define megasas_resume	NULL
static void __devexit megasas_detach_one(struct pci_dev *pdev)
static void megasas_shutdown(struct pci_dev *pdev)
static int megasas_mgmt_open(struct inode *inode, struct file *filep)
static int megasas_mgmt_fasync(int fd, struct file *filep, int mode)
static unsigned int megasas_mgmt_poll(struct file *file, poll_table *wait)
static int
megasas_mgmt_fw_ioctl(struct megasas_instance *instance,
struct megasas_iocpacket __user * user_ioc,
struct megasas_iocpacket *ioc)
static int megasas_mgmt_ioctl_fw(struct file *file, unsigned long arg)
static int megasas_mgmt_ioctl_aen(struct file *file, unsigned long arg)
static long
megasas_mgmt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int megasas_mgmt_compat_ioctl_fw(struct file *file, unsigned long arg)
static long
megasas_mgmt_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations megasas_mgmt_fops = ;
static struct pci_driver megasas_pci_driver = ;
static ssize_t megasas_sysfs_show_version(struct device_driver *dd, char *buf)
static DRIVER_ATTR(version, S_IRUGO, megasas_sysfs_show_version, NULL);
static ssize_t
megasas_sysfs_show_release_date(struct device_driver *dd, char *buf)
static DRIVER_ATTR(release_date, S_IRUGO, megasas_sysfs_show_release_date,
NULL);
static ssize_t
megasas_sysfs_show_support_poll_for_event(struct device_driver *dd, char *buf)
static DRIVER_ATTR(support_poll_for_event, S_IRUGO,
megasas_sysfs_show_support_poll_for_event, NULL);
static ssize_t
megasas_sysfs_show_support_device_change(struct device_driver *dd, char *buf)
static DRIVER_ATTR(support_device_change, S_IRUGO,
megasas_sysfs_show_support_device_change, NULL);
static ssize_t
megasas_sysfs_show_dbg_lvl(struct device_driver *dd, char *buf)
static ssize_t
megasas_sysfs_set_dbg_lvl(struct device_driver *dd, const char *buf, size_t count)
static DRIVER_ATTR(dbg_lvl, S_IRUGO|S_IWUSR, megasas_sysfs_show_dbg_lvl,
megasas_sysfs_set_dbg_lvl);
static ssize_t
megasas_sysfs_show_poll_mode_io(struct device_driver *dd, char *buf)
static ssize_t
megasas_sysfs_set_poll_mode_io(struct device_driver *dd,
const char *buf, size_t count)
static void
megasas_aen_polling(struct work_struct *work)
static DRIVER_ATTR(poll_mode_io, S_IRUGO|S_IWUSR,
megasas_sysfs_show_poll_mode_io,
megasas_sysfs_set_poll_mode_io);
static int __init megasas_init(void)
static void __exit megasas_exit(void)
module_init(megasas_init);
module_exit(megasas_exit);
