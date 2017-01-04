static int debug = 5;
static int debug = 1;
#undef dbg
#define dbg(lvl, format, arg...) 					\
do  while (0)
#define DRIVER_VERSION "v0.0.13"
#define DRIVER_AUTHOR "John Homppi"
#define DRIVER_DESC "adutux (see www.ontrak.net)"
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
#define ADU_VENDOR_ID 0x0a07
#define ADU_PRODUCT_ID 0x0064
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
#define ADU_MINOR_BASE	0
#define ADU_MINOR_BASE	67
#define MAX_DEVICES	16
#define COMMAND_TIMEOUT	(2*HZ)
struct adu_device ;
static DEFINE_MUTEX(adutux_mutex);
static struct usb_driver adu_driver;
static void adu_debug_data(int level, const char *function, int size,
const unsigned char *data)
static void adu_abort_transfers(struct adu_device *dev)
static void adu_delete(struct adu_device *dev)
static void adu_interrupt_in_callback(struct urb *urb)
static void adu_interrupt_out_callback(struct urb *urb)
static int adu_open(struct inode *inode, struct file *file)
static void adu_release_internal(struct adu_device *dev)
static int adu_release(struct inode *inode, struct file *file)
static ssize_t adu_read(struct file *file, __user char *buffer, size_t count,
loff_t *ppos)
static ssize_t adu_write(struct file *file, const __user char *buffer,
size_t count, loff_t *ppos)
static const struct file_operations adu_fops = ;
static struct usb_class_driver adu_class = ;
static int adu_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void adu_disconnect(struct usb_interface *interface)
static struct usb_driver adu_driver = ;
static int __init adu_init(void)
static void __exit adu_exit(void)
module_init(adu_init);
module_exit(adu_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
