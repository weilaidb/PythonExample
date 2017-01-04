#define MOD_AUTHOR	"Oliver Stabel <oliver.stabel@gmx.de>, " \
"Tim Davies <tim@opensystems.net.au>"
#define MOD_DESC	"USB Driver for Sasem Remote Controller V1.1"
#define MOD_NAME	"lirc_sasem"
#define MOD_VERSION	"0.5"
#define VFD_MINOR_BASE	144
#define DEVICE_NAME	"lcd%d"
#define BUF_CHUNK_SIZE	8
#define BUF_SIZE	128
#define IOCTL_LCD_CONTRAST 1
static int sasem_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void sasem_disconnect(struct usb_interface *interface);
static void usb_rx_callback(struct urb *urb);
static void usb_tx_callback(struct urb *urb);
static int vfd_open(struct inode *inode, struct file *file);
static long vfd_ioctl(struct file *file, unsigned cmd, unsigned long arg);
static int vfd_close(struct inode *inode, struct file *file);
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos);
static int ir_open(void *data);
static void ir_close(void *data);
static int __init sasem_init(void);
static void __exit sasem_exit(void);
#define SASEM_DATA_BUF_SZ	32
struct sasem_context ;
static const struct file_operations vfd_fops = ;
static struct usb_device_id sasem_usb_id_table[] = ;
static struct usb_driver sasem_driver = ;
static struct usb_class_driver sasem_class = ;
static DEFINE_MUTEX(disconnect_lock);
static int debug;
MODULE_AUTHOR(MOD_AUTHOR);
MODULE_DESCRIPTION(MOD_DESC);
MODULE_LICENSE("GPL");
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug messages: 0=no, 1=yes (default: no)");
static void delete_context(struct sasem_context *context)
static void deregister_from_lirc(struct sasem_context *context)
static int vfd_open(struct inode *inode, struct file *file)
static long vfd_ioctl(struct file *file, unsigned cmd, unsigned long arg)
static int vfd_close(struct inode *inode, struct file *file)
static int send_packet(struct sasem_context *context)
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos)
static void usb_tx_callback(struct urb *urb)
static int ir_open(void *data)
static void ir_close(void *data)
static void incoming_packet(struct sasem_context *context,
struct urb *urb)
static void usb_rx_callback(struct urb *urb)
static int sasem_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void sasem_disconnect(struct usb_interface *interface)
static int __init sasem_init(void)
static void __exit sasem_exit(void)
module_init(sasem_init);
module_exit(sasem_exit);
