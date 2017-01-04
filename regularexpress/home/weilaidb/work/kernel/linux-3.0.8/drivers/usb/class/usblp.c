#undef DEBUG
#define DRIVER_AUTHOR "Michael Gee, Pavel Machek, Vojtech Pavlik, Randy Dunlap, Pete Zaitcev, David Paschal"
#define DRIVER_DESC "USB Printer Device Class driver"
#define USBLP_BUF_SIZE		8192
#define USBLP_BUF_SIZE_IN	1024
#define USBLP_DEVICE_ID_SIZE	1024
#define IOCNR_GET_DEVICE_ID		1
#define IOCNR_GET_PROTOCOLS		2
#define IOCNR_SET_PROTOCOL		3
#define IOCNR_HP_SET_CHANNEL		4
#define IOCNR_GET_BUS_ADDRESS		5
#define IOCNR_GET_VID_PID		6
#define IOCNR_SOFT_RESET		7
#define LPIOC_GET_DEVICE_ID(len) _IOC(_IOC_READ, 'P', IOCNR_GET_DEVICE_ID, len)
#define LPIOC_GET_PROTOCOLS(len) _IOC(_IOC_READ, 'P', IOCNR_GET_PROTOCOLS, len)
#define LPIOC_SET_PROTOCOL _IOC(_IOC_WRITE, 'P', IOCNR_SET_PROTOCOL, 0)
#define LPIOC_HP_SET_CHANNEL _IOC(_IOC_WRITE, 'P', IOCNR_HP_SET_CHANNEL, 0)
#define LPIOC_GET_BUS_ADDRESS(len) _IOC(_IOC_READ, 'P', IOCNR_GET_BUS_ADDRESS, len)
#define LPIOC_GET_VID_PID(len) _IOC(_IOC_READ, 'P', IOCNR_GET_VID_PID, len)
#define LPIOC_SOFT_RESET _IOC(_IOC_NONE, 'P', IOCNR_SOFT_RESET, 0);
#define USBLP_REQ_GET_ID			0x00
#define USBLP_REQ_GET_STATUS			0x01
#define USBLP_REQ_RESET				0x02
#define USBLP_REQ_HP_CHANNEL_CHANGE_REQUEST	0x00
#define USBLP_MINORS		16
#define USBLP_MINOR_BASE	0
#define USBLP_CTL_TIMEOUT	5000
#define USBLP_FIRST_PROTOCOL	1
#define USBLP_LAST_PROTOCOL	3
#define USBLP_MAX_PROTOCOLS	(USBLP_LAST_PROTOCOL+1)
#define STATUS_BUF_SIZE		8
struct usblp ;
static void usblp_dump(struct usblp *usblp)
struct quirk_printer_struct ;
#define USBLP_QUIRK_BIDIR	0x1
#define USBLP_QUIRK_USB_INIT	0x2
#define USBLP_QUIRK_BAD_CLASS	0x4
static const struct quirk_printer_struct quirk_printers[] = ;
static int usblp_wwait(struct usblp *usblp, int nonblock);
static int usblp_wtest(struct usblp *usblp, int nonblock);
static int usblp_rwait_and_lock(struct usblp *usblp, int nonblock);
static int usblp_rtest(struct usblp *usblp, int nonblock);
static int usblp_submit_read(struct usblp *usblp);
static int usblp_select_alts(struct usblp *usblp);
static int usblp_set_protocol(struct usblp *usblp, int protocol);
static int usblp_cache_device_id_string(struct usblp *usblp);
static struct usb_driver usblp_driver;
static DEFINE_MUTEX(usblp_mutex);
static int usblp_ctrl_msg(struct usblp *usblp, int request, int type, int dir, int recip, int value, void *buf, int len)
#define usblp_read_status(usblp, status)\
usblp_ctrl_msg(usblp, USBLP_REQ_GET_STATUS, USB_TYPE_CLASS, USB_DIR_IN, USB_RECIP_INTERFACE, 0, status, 1)
#define usblp_get_id(usblp, config, id, maxlen)\
usblp_ctrl_msg(usblp, USBLP_REQ_GET_ID, USB_TYPE_CLASS, USB_DIR_IN, USB_RECIP_INTERFACE, config, id, maxlen)
#define usblp_reset(usblp)\
usblp_ctrl_msg(usblp, USBLP_REQ_RESET, USB_TYPE_CLASS, USB_DIR_OUT, USB_RECIP_OTHER, 0, NULL, 0)
#define usblp_hp_channel_change_request(usblp, channel, buffer) \
usblp_ctrl_msg(usblp, USBLP_REQ_HP_CHANNEL_CHANGE_REQUEST, USB_TYPE_VENDOR, USB_DIR_IN, USB_RECIP_INTERFACE, channel, buffer, 1)
static int proto_bias = -1;
static void usblp_bulk_read(struct urb *urb)
static void usblp_bulk_write(struct urb *urb)
static const char *usblp_messages[] = ;
static int usblp_check_status(struct usblp *usblp, int err)
static int handle_bidir(struct usblp *usblp)
static int usblp_open(struct inode *inode, struct file *file)
static void usblp_cleanup(struct usblp *usblp)
static void usblp_unlink_urbs(struct usblp *usblp)
static int usblp_release(struct inode *inode, struct file *file)
static unsigned int usblp_poll(struct file *file, struct poll_table_struct *wait)
static long usblp_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static struct urb *usblp_new_writeurb(struct usblp *usblp, int transfer_length)
static ssize_t usblp_write(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static ssize_t usblp_read(struct file *file, char __user *buffer, size_t len, loff_t *ppos)
static int usblp_wwait(struct usblp *usblp, int nonblock)
static int usblp_wtest(struct usblp *usblp, int nonblock)
static int usblp_rwait_and_lock(struct usblp *usblp, int nonblock)
static int usblp_rtest(struct usblp *usblp, int nonblock)
static int usblp_submit_read(struct usblp *usblp)
static unsigned int usblp_quirks(__u16 vendor, __u16 product)
static const struct file_operations usblp_fops = ;
static char *usblp_devnode(struct device *dev, mode_t *mode)
static struct usb_class_driver usblp_class = ;
static ssize_t usblp_show_ieee1284_id(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ieee1284_id, S_IRUGO, usblp_show_ieee1284_id, NULL);
static int usblp_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int usblp_select_alts(struct usblp *usblp)
static int usblp_set_protocol(struct usblp *usblp, int protocol)
static int usblp_cache_device_id_string(struct usblp *usblp)
static void usblp_disconnect(struct usb_interface *intf)
static int usblp_suspend(struct usb_interface *intf, pm_message_t message)
static int usblp_resume(struct usb_interface *intf)
static const struct usb_device_id usblp_ids[] = ;
MODULE_DEVICE_TABLE(usb, usblp_ids);
static struct usb_driver usblp_driver = ;
static int __init usblp_init(void)
static void __exit usblp_exit(void)
module_init(usblp_init);
module_exit(usblp_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
module_param(proto_bias, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(proto_bias, "Favourite protocol number");
MODULE_LICENSE("GPL");
