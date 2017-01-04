#define TW_DRIVER_VERSION "1.26.02.003"
static DEFINE_MUTEX(tw_mutex);
static TW_Device_Extension *tw_device_extension_list[TW_MAX_SLOT];
static int tw_device_extension_count = 0;
static int twe_major = -1;
MODULE_AUTHOR("LSI");
MODULE_DESCRIPTION("3ware Storage Controller Linux Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(TW_DRIVER_VERSION);
static int tw_reset_device_extension(TW_Device_Extension *tw_dev);
static int tw_check_bits(u32 status_reg_value)
static int tw_decode_bits(TW_Device_Extension *tw_dev, u32 status_reg_value, int print_host)
static int tw_poll_status(TW_Device_Extension *tw_dev, u32 flag, int seconds)
static int tw_poll_status_gone(TW_Device_Extension *tw_dev, u32 flag, int seconds)
static int tw_post_command_packet(TW_Device_Extension *tw_dev, int request_id)
static int tw_decode_sense(TW_Device_Extension *tw_dev, int request_id, int fill_sense)
static int tw_check_errors(TW_Device_Extension *tw_dev)
static void tw_empty_response_que(TW_Device_Extension *tw_dev)
static void tw_state_request_finish(TW_Device_Extension *tw_dev, int request_id)
static void tw_state_request_start(TW_Device_Extension *tw_dev, int *request_id)
static ssize_t tw_show_stats(struct device *dev, struct device_attribute *attr,
char *buf)
static int tw_change_queue_depth(struct scsi_device *sdev, int queue_depth,
int reason)
static struct device_attribute tw_host_stats_attr = ;
static struct device_attribute *tw_host_attrs[] = ;
static int tw_aen_read_queue(TW_Device_Extension *tw_dev, int request_id)
static int tw_aen_complete(TW_Device_Extension *tw_dev, int request_id)
static int tw_aen_drain_queue(TW_Device_Extension *tw_dev)
static int tw_allocate_memory(TW_Device_Extension *tw_dev, int size, int which)
static long tw_chrdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int tw_chrdev_open(struct inode *inode, struct file *file)
static const struct file_operations tw_fops = ;
static void tw_free_device_extension(TW_Device_Extension *tw_dev)
static int tw_initconnection(TW_Device_Extension *tw_dev, int message_credits)
static int tw_setfeature(TW_Device_Extension *tw_dev, int parm, int param_size,
unsigned char *val)
static int tw_reset_sequence(TW_Device_Extension *tw_dev)
static int tw_initialize_device_extension(TW_Device_Extension *tw_dev)
static int tw_map_scsi_sg_data(struct pci_dev *pdev, struct scsi_cmnd *cmd)
static void tw_unmap_scsi_data(struct pci_dev *pdev, struct scsi_cmnd *cmd)
static int tw_reset_device_extension(TW_Device_Extension *tw_dev)
static int tw_scsi_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int tw_scsi_eh_reset(struct scsi_cmnd *SCpnt)
static int tw_scsiop_inquiry(TW_Device_Extension *tw_dev, int request_id)
static void tw_transfer_internal(TW_Device_Extension *tw_dev, int request_id,
void *data, unsigned int len)
static int tw_scsiop_inquiry_complete(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_mode_sense(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_mode_sense_complete(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_read_capacity(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_read_capacity_complete(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_read_write(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_request_sense(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_synchronize_cache(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_test_unit_ready(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsiop_test_unit_ready_complete(TW_Device_Extension *tw_dev, int request_id)
static int tw_scsi_queue_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(tw_scsi_queue)
static irqreturn_t tw_interrupt(int irq, void *dev_instance)
static void __tw_shutdown(TW_Device_Extension *tw_dev)
static void tw_shutdown(struct pci_dev *pdev)
static int tw_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template driver_template = ;
static int __devinit tw_probe(struct pci_dev *pdev, const struct pci_device_id *dev_id)
static void tw_remove(struct pci_dev *pdev)
static struct pci_device_id tw_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, tw_pci_tbl);
static struct pci_driver tw_driver = ;
static int __init tw_init(void)
static void __exit tw_exit(void)
module_init(tw_init);
module_exit(tw_exit);
