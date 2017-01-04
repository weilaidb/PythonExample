#define DRIVER_VERSION "v0.4.0"
#define DRIVER_AUTHOR "Christian Lucht <lucht@codemercs.com>"
#define DRIVER_DESC "USB IO-Warrior driver (Linux 2.6.x)"
#define USB_VENDOR_ID_CODEMERCS		1984
#define USB_DEVICE_ID_CODEMERCS_IOW40	0x1500
#define USB_DEVICE_ID_CODEMERCS_IOW24	0x1501
#define USB_DEVICE_ID_CODEMERCS_IOWPV1	0x1511
#define USB_DEVICE_ID_CODEMERCS_IOWPV2	0x1512
#define USB_DEVICE_ID_CODEMERCS_IOW56	0x1503
#define IOWARRIOR_MINOR_BASE	0
#define IOWARRIOR_MINOR_BASE	208
#define MAX_INTERRUPT_BUFFER 16
#define MAX_WRITES_IN_FLIGHT 4
#undef dbg
#define dbg( format, arg... ) do  while ( 0 )
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(iowarrior_mutex);
static int debug = 0;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "debug=1 enables debugging messages");
static struct usb_driver iowarrior_driver;
static DEFINE_MUTEX(iowarrior_open_disc_lock);
struct iowarrior ;
#define GET_TIMEOUT 5
#define USB_REQ_GET_REPORT  0x01
static int usb_get_report(struct usb_device *dev,
struct usb_host_interface *inter, unsigned char type,
unsigned char id, void *buf, int size)
#define USB_REQ_SET_REPORT 0x09
static int usb_set_report(struct usb_interface *intf, unsigned char type,
unsigned char id, void *buf, int size)
static const struct usb_device_id iowarrior_ids[] = ;
MODULE_DEVICE_TABLE(usb, iowarrior_ids);
static void iowarrior_callback(struct urb *urb)
static void iowarrior_write_callback(struct urb *urb)
static inline void iowarrior_delete(struct iowarrior *dev)
static int read_index(struct iowarrior *dev)
static ssize_t iowarrior_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t iowarrior_write(struct file *file,
const char __user *user_buffer,
size_t count, loff_t *ppos)
static long iowarrior_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int iowarrior_open(struct inode *inode, struct file *file)
static int iowarrior_release(struct inode *inode, struct file *file)
static unsigned iowarrior_poll(struct file *file, poll_table * wait)
static const struct file_operations iowarrior_fops = ;
static char *iowarrior_devnode(struct device *dev, mode_t *mode)
static struct usb_class_driver iowarrior_class = ;
static int iowarrior_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void iowarrior_disconnect(struct usb_interface *interface)
static struct usb_driver iowarrior_driver = ;
static int __init iowarrior_init(void)
static void __exit iowarrior_exit(void)
module_init(iowarrior_init);
module_exit(iowarrior_exit);
