#define TW_DRIVER_VERSION "3.26.02.000"
static DEFINE_MUTEX(twl_chrdev_mutex);
static TW_Device_Extension *twl_device_extension_list[TW_MAX_SLOT];
static unsigned int twl_device_extension_count;
static int twl_major = -1;
extern struct timezone sys_tz;
MODULE_AUTHOR ("LSI");
MODULE_DESCRIPTION ("LSI 3ware SAS/SATA-RAID Linux Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(TW_DRIVER_VERSION);
static int use_msi;
module_param(use_msi, int, S_IRUGO);
MODULE_PARM_DESC(use_msi, "Use Message Signaled Interrupts. Default: 0");
static int twl_reset_device_extension(TW_Device_Extension *tw_dev, int ioctl_reset);
static ssize_t twl_sysfs_aen_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *outbuf, loff_t offset, size_t count)
static struct bin_attribute twl_sysfs_aen_read_attr = ;
static ssize_t twl_sysfs_compat_info(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *outbuf, loff_t offset, size_t count)
static struct bin_attribute twl_sysfs_compat_info_attr = ;
static ssize_t twl_show_stats(struct device *dev,
struct device_attribute *attr, char *buf)
static int twl_change_queue_depth(struct scsi_device *sdev, int queue_depth,
int reason)
static struct device_attribute twl_host_stats_attr = ;
static struct device_attribute *twl_host_attrs[] = ;
static char *twl_aen_severity_lookup(unsigned char severity_code)
static void twl_aen_queue_event(TW_Device_Extension *tw_dev, TW_Command_Apache_Header *header)
static int twl_post_command_packet(TW_Device_Extension *tw_dev, int request_id)
static int twl_map_scsi_sg_data(TW_Device_Extension *tw_dev, int request_id)
static int twl_scsiop_execute_scsi(TW_Device_Extension *tw_dev, int request_id, char *cdb, int use_sg, TW_SG_Entry_ISO *sglistarg)
static int twl_aen_read_queue(TW_Device_Extension *tw_dev, int request_id)
static void twl_aen_sync_time(TW_Device_Extension *tw_dev, int request_id)
static void twl_get_request_id(TW_Device_Extension *tw_dev, int *request_id)
static void twl_free_request_id(TW_Device_Extension *tw_dev, int request_id)
static int twl_aen_complete(TW_Device_Extension *tw_dev, int request_id)
static int twl_poll_response(TW_Device_Extension *tw_dev, int request_id, int seconds)
static int twl_aen_drain_queue(TW_Device_Extension *tw_dev, int no_check_reset)
static int twl_allocate_memory(TW_Device_Extension *tw_dev, int size, int which)
static void twl_load_sgl(TW_Device_Extension *tw_dev, TW_Command_Full *full_command_packet, int request_id, dma_addr_t dma_handle, int length)
static long twl_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int twl_chrdev_open(struct inode *inode, struct file *file)
static const struct file_operations twl_fops = ;
static int twl_fill_sense(TW_Device_Extension *tw_dev, int i, int request_id, int copy_sense, int print_host)
static void twl_free_device_extension(TW_Device_Extension *tw_dev)
static void *twl_get_param(TW_Device_Extension *tw_dev, int request_id, int table_id, int parameter_id, int parameter_size_bytes)
static int twl_initconnection(TW_Device_Extension *tw_dev, int message_credits,
u32 set_features, unsigned short current_fw_srl,
unsigned short current_fw_arch_id,
unsigned short current_fw_branch,
unsigned short current_fw_build,
unsigned short *fw_on_ctlr_srl,
unsigned short *fw_on_ctlr_arch_id,
unsigned short *fw_on_ctlr_branch,
unsigned short *fw_on_ctlr_build,
u32 *init_connect_result)
static int twl_initialize_device_extension(TW_Device_Extension *tw_dev)
static void twl_unmap_scsi_data(TW_Device_Extension *tw_dev, int request_id)
static int twl_handle_attention_interrupt(TW_Device_Extension *tw_dev)
static irqreturn_t twl_interrupt(int irq, void *dev_instance)
static int twl_poll_register(TW_Device_Extension *tw_dev, void *reg, u32 value, u32 result, int seconds)
static int twl_reset_sequence(TW_Device_Extension *tw_dev, int soft_reset)
static int twl_reset_device_extension(TW_Device_Extension *tw_dev, int ioctl_reset)
static int twl_scsi_biosparam(struct scsi_device *sdev, struct block_device *bdev, sector_t capacity, int geom[])
static int twl_scsi_eh_reset(struct scsi_cmnd *SCpnt)
static int twl_scsi_queue_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(twl_scsi_queue)
static void __twl_shutdown(TW_Device_Extension *tw_dev)
static void twl_shutdown(struct pci_dev *pdev)
static int twl_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template driver_template = ;
static int __devinit twl_probe(struct pci_dev *pdev, const struct pci_device_id *dev_id)
static void twl_remove(struct pci_dev *pdev)
static int twl_suspend(struct pci_dev *pdev, pm_message_t state)
static int twl_resume(struct pci_dev *pdev)
static struct pci_device_id twl_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, twl_pci_tbl);
static struct pci_driver twl_driver = ;
static int __init twl_init(void)
static void __exit twl_exit(void)
module_init(twl_init);
module_exit(twl_exit);
