#define TW_DRIVER_VERSION "2.26.02.014"
static DEFINE_MUTEX(twa_chrdev_mutex);
static TW_Device_Extension *twa_device_extension_list[TW_MAX_SLOT];
static unsigned int twa_device_extension_count;
static int twa_major = -1;
extern struct timezone sys_tz;
MODULE_AUTHOR ("LSI");
MODULE_DESCRIPTION ("3ware 9000 Storage Controller Linux Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(TW_DRIVER_VERSION);
static int use_msi = 0;
module_param(use_msi, int, S_IRUGO);
MODULE_PARM_DESC(use_msi, "Use Message Signaled Interrupts.  Default: 0");
static void twa_aen_queue_event(TW_Device_Extension *tw_dev, TW_Command_Apache_Header *header);
static int twa_aen_read_queue(TW_Device_Extension *tw_dev, int request_id);
static char *twa_aen_severity_lookup(unsigned char severity_code);
static void twa_aen_sync_time(TW_Device_Extension *tw_dev, int request_id);
static long twa_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static int twa_chrdev_open(struct inode *inode, struct file *file);
static int twa_fill_sense(TW_Device_Extension *tw_dev, int request_id, int copy_sense, int print_host);
static void twa_free_request_id(TW_Device_Extension *tw_dev,int request_id);
static void twa_get_request_id(TW_Device_Extension *tw_dev, int *request_id);
static int twa_initconnection(TW_Device_Extension *tw_dev, int message_credits,
u32 set_features, unsigned short current_fw_srl,
unsigned short current_fw_arch_id,
unsigned short current_fw_branch,
unsigned short current_fw_build,
unsigned short *fw_on_ctlr_srl,
unsigned short *fw_on_ctlr_arch_id,
unsigned short *fw_on_ctlr_branch,
unsigned short *fw_on_ctlr_build,
u32 *init_connect_result);
static void twa_load_sgl(TW_Device_Extension *tw_dev, TW_Command_Full *full_command_packet, int request_id, dma_addr_t dma_handle, int length);
static int twa_poll_response(TW_Device_Extension *tw_dev, int request_id, int seconds);
static int twa_poll_status_gone(TW_Device_Extension *tw_dev, u32 flag, int seconds);
static int twa_post_command_packet(TW_Device_Extension *tw_dev, int request_id, char internal);
static int twa_reset_device_extension(TW_Device_Extension *tw_dev);
static int twa_reset_sequence(TW_Device_Extension *tw_dev, int soft_reset);
static int twa_scsiop_execute_scsi(TW_Device_Extension *tw_dev, int request_id, char *cdb, int use_sg, TW_SG_Entry *sglistarg);
static void twa_scsiop_execute_scsi_complete(TW_Device_Extension *tw_dev, int request_id);
static char *twa_string_lookup(twa_message_type *table, unsigned int aen_code);
static void twa_unmap_scsi_data(TW_Device_Extension *tw_dev, int request_id);
static ssize_t twa_show_stats(struct device *dev,
struct device_attribute *attr, char *buf)
static int twa_change_queue_depth(struct scsi_device *sdev, int queue_depth,
int reason)
static struct device_attribute twa_host_stats_attr = ;
static struct device_attribute *twa_host_attrs[] = ;
static const struct file_operations twa_fops = ;
static int twa_aen_complete(TW_Device_Extension *tw_dev, int request_id)
static int twa_aen_drain_queue(TW_Device_Extension *tw_dev, int no_check_reset)
static void twa_aen_queue_event(TW_Device_Extension *tw_dev, TW_Command_Apache_Header *header)
static int twa_aen_read_queue(TW_Device_Extension *tw_dev, int request_id)
static char *twa_aen_severity_lookup(unsigned char severity_code)
static void twa_aen_sync_time(TW_Device_Extension *tw_dev, int request_id)
static int twa_allocate_memory(TW_Device_Extension *tw_dev, int size, int which)
static int twa_check_bits(u32 status_reg_value)
static int twa_check_srl(TW_Device_Extension *tw_dev, int *flashed)
static long twa_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int twa_chrdev_open(struct inode *inode, struct file *file)
static int twa_decode_bits(TW_Device_Extension *tw_dev, u32 status_reg_value)
static int twa_empty_response_queue(TW_Device_Extension *tw_dev)
static int twa_empty_response_queue_large(TW_Device_Extension *tw_dev)
static int twa_fill_sense(TW_Device_Extension *tw_dev, int request_id, int copy_sense, int print_host)
static void twa_free_device_extension(TW_Device_Extension *tw_dev)
static void twa_free_request_id(TW_Device_Extension *tw_dev, int request_id)
static void *twa_get_param(TW_Device_Extension *tw_dev, int request_id, int table_id, int parameter_id, int parameter_size_bytes)
static void twa_get_request_id(TW_Device_Extension *tw_dev, int *request_id)
static int twa_initconnection(TW_Device_Extension *tw_dev, int message_credits,
u32 set_features, unsigned short current_fw_srl,
unsigned short current_fw_arch_id,
unsigned short current_fw_branch,
unsigned short current_fw_build,
unsigned short *fw_on_ctlr_srl,
unsigned short *fw_on_ctlr_arch_id,
unsigned short *fw_on_ctlr_branch,
unsigned short *fw_on_ctlr_build,
u32 *init_connect_result)
static int twa_initialize_device_extension(TW_Device_Extension *tw_dev)
static irqreturn_t twa_interrupt(int irq, void *dev_instance)
static void twa_load_sgl(TW_Device_Extension *tw_dev, TW_Command_Full *full_command_packet, int request_id, dma_addr_t dma_handle, int length)
static int twa_map_scsi_sg_data(TW_Device_Extension *tw_dev, int request_id)
static int twa_poll_response(TW_Device_Extension *tw_dev, int request_id, int seconds)
static int twa_poll_status(TW_Device_Extension *tw_dev, u32 flag, int seconds)
static int twa_poll_status_gone(TW_Device_Extension *tw_dev, u32 flag, int seconds)
static int twa_post_command_packet(TW_Device_Extension *tw_dev, int request_id, char internal)
static int twa_reset_device_extension(TW_Device_Extension *tw_dev)
static int twa_reset_sequence(TW_Device_Extension *tw_dev, int soft_reset)
static int twa_scsi_biosparam(struct scsi_device *sdev, struct block_device *bdev, sector_t capacity, int geom[])
static int twa_scsi_eh_reset(struct scsi_cmnd *SCpnt)
static int twa_scsi_queue_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(twa_scsi_queue)
static int twa_scsiop_execute_scsi(TW_Device_Extension *tw_dev, int request_id, char *cdb, int use_sg, TW_SG_Entry *sglistarg)
static void twa_scsiop_execute_scsi_complete(TW_Device_Extension *tw_dev, int request_id)
static void __twa_shutdown(TW_Device_Extension *tw_dev)
static void twa_shutdown(struct pci_dev *pdev)
static char *twa_string_lookup(twa_message_type *table, unsigned int code)
static void twa_unmap_scsi_data(TW_Device_Extension *tw_dev, int request_id)
static int twa_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template driver_template = ;
static int __devinit twa_probe(struct pci_dev *pdev, const struct pci_device_id *dev_id)
static void twa_remove(struct pci_dev *pdev)
static int twa_suspend(struct pci_dev *pdev, pm_message_t state)
static int twa_resume(struct pci_dev *pdev)
static struct pci_device_id twa_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, twa_pci_tbl);
static struct pci_driver twa_driver = ;
static int __init twa_init(void)
static void __exit twa_exit(void)
module_init(twa_init);
module_exit(twa_exit);
