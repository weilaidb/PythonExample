#define VENDOR_ID	0x165b
#define PRODUCT_ID	0xfad1
#define USB_ALPHATRACK_MINOR_BASE	0
#define USB_ALPHATRACK_MINOR_BASE	176
static const struct usb_device_id usb_alphatrack_table[] = ;
MODULE_DEVICE_TABLE(usb, usb_alphatrack_table);
MODULE_VERSION("0.41");
MODULE_AUTHOR("Mike Taht <m@taht.net>");
MODULE_DESCRIPTION("Alphatrack USB Driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Frontier Designs Alphatrack Control Surface");
#define SUPPRESS_EXTRA_ONLINE_EVENTS 0
#define BUFFERED_WRITES 0
#define SUPPRESS_EXTRA_OFFLINE_EVENTS 0
#define COMPRESS_FADER_EVENTS 0
#define BUFFERED_READS 1
#define RING_BUFFER_SIZE 512
#define WRITE_BUFFER_SIZE 34
#define ALPHATRACK_USB_TIMEOUT 10
#define OUTPUT_CMD_SIZE 8
#define INPUT_CMD_SIZE 12
#define ALPHATRACK_DEBUG 0
static int debug = ALPHATRACK_DEBUG;
#define dbg_info(dev, format, arg...) do \
while (0)
#define alphatrack_ocmd_info(dev, cmd, format, arg...)
#define alphatrack_icmd_info(dev, cmd, format, arg...)
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
static int ring_buffer_size = RING_BUFFER_SIZE;
module_param(ring_buffer_size, int, S_IRUGO);
MODULE_PARM_DESC(ring_buffer_size, "Read ring buffer size");
static int write_buffer_size = WRITE_BUFFER_SIZE;
module_param(write_buffer_size, int, S_IRUGO);
MODULE_PARM_DESC(write_buffer_size, "Write buffer size");
static int min_interrupt_in_interval = ALPHATRACK_USB_TIMEOUT;
module_param(min_interrupt_in_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_in_interval,
"Minimum interrupt in interval in ms");
static int min_interrupt_out_interval = ALPHATRACK_USB_TIMEOUT;
module_param(min_interrupt_out_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_out_interval,
"Minimum interrupt out interval in ms");
struct usb_alphatrack ;
static DEFINE_MUTEX(disconnect_mutex);
static struct usb_driver usb_alphatrack_driver;
static void usb_alphatrack_abort_transfers(struct usb_alphatrack *dev)
static void usb_alphatrack_delete(struct usb_alphatrack *dev)
static void usb_alphatrack_interrupt_in_callback(struct urb *urb)
static void usb_alphatrack_interrupt_out_callback(struct urb *urb)
static int usb_alphatrack_open(struct inode *inode, struct file *file)
static int usb_alphatrack_release(struct inode *inode, struct file *file)
static unsigned int usb_alphatrack_poll(struct file *file, poll_table * wait)
static ssize_t usb_alphatrack_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t usb_alphatrack_write(struct file *file,
const char __user *buffer, size_t count,
loff_t *ppos)
static const struct file_operations usb_alphatrack_fops = ;
static struct usb_class_driver usb_alphatrack_class = ;
static int usb_alphatrack_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usb_alphatrack_disconnect(struct usb_interface *intf)
static struct usb_driver usb_alphatrack_driver = ;
static int __init usb_alphatrack_init(void)
static void __exit usb_alphatrack_exit(void)
module_init(usb_alphatrack_init);
module_exit(usb_alphatrack_exit);
