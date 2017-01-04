struct iu ;
enum ;
struct command_iu ;
struct sense_iu ;
struct sense_iu_old ;
enum ;
struct uas_dev_info ;
enum ;
struct uas_cmd_info ;
static int uas_submit_urbs(struct scsi_cmnd *cmnd,
struct uas_dev_info *devinfo, gfp_t gfp);
static DEFINE_SPINLOCK(uas_work_lock);
static LIST_HEAD(uas_work_list);
static void uas_do_work(struct work_struct *work)
static DECLARE_WORK(uas_work, uas_do_work);
static void uas_sense(struct urb *urb, struct scsi_cmnd *cmnd)
static void uas_sense_old(struct urb *urb, struct scsi_cmnd *cmnd)
static void uas_xfer_data(struct urb *urb, struct scsi_cmnd *cmnd,
unsigned direction)
static void uas_stat_cmplt(struct urb *urb)
static void uas_data_cmplt(struct urb *urb)
static struct urb *uas_alloc_data_urb(struct uas_dev_info *devinfo, gfp_t gfp,
unsigned int pipe, u16 stream_id,
struct scsi_data_buffer *sdb,
enum dma_data_direction dir)
static struct urb *uas_alloc_sense_urb(struct uas_dev_info *devinfo, gfp_t gfp,
struct scsi_cmnd *cmnd, u16 stream_id)
static struct urb *uas_alloc_cmd_urb(struct uas_dev_info *devinfo, gfp_t gfp,
struct scsi_cmnd *cmnd, u16 stream_id)
static int uas_submit_urbs(struct scsi_cmnd *cmnd,
struct uas_dev_info *devinfo, gfp_t gfp)
static int uas_queuecommand_lck(struct scsi_cmnd *cmnd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(uas_queuecommand)
static int uas_eh_abort_handler(struct scsi_cmnd *cmnd)
static int uas_eh_device_reset_handler(struct scsi_cmnd *cmnd)
static int uas_eh_target_reset_handler(struct scsi_cmnd *cmnd)
static int uas_eh_bus_reset_handler(struct scsi_cmnd *cmnd)
static int uas_slave_alloc(struct scsi_device *sdev)
static int uas_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template uas_host_template = ;
static struct usb_device_id uas_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, uas_usb_ids);
static int uas_is_interface(struct usb_host_interface *intf)
static int uas_switch_interface(struct usb_device *udev,
struct usb_interface *intf)
static void uas_configure_endpoints(struct uas_dev_info *devinfo)
static int uas_probe(struct usb_interface *intf, const struct usb_device_id *id)
static int uas_pre_reset(struct usb_interface *intf)
static int uas_post_reset(struct usb_interface *intf)
static void uas_disconnect(struct usb_interface *intf)
static struct usb_driver uas_driver = ;
static int uas_init(void)
static void uas_exit(void)
module_init(uas_init);
module_exit(uas_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Matthew Wilcox and Sarah Sharp");
