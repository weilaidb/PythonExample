#define MOD_AUTHOR	"Venky Raju <dev@venky.ws>"
#define MOD_DESC	"Driver for SoundGraph iMON MultiMedia IR/Display"
#define MOD_NAME	"lirc_imon"
#define MOD_VERSION	"0.8"
#define DISPLAY_MINOR_BASE	144
#define DEVICE_NAME	"lcd%d"
#define BUF_CHUNK_SIZE	4
#define BUF_SIZE	128
#define BIT_DURATION	250
static int imon_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void imon_disconnect(struct usb_interface *interface);
static void usb_rx_callback(struct urb *urb);
static void usb_tx_callback(struct urb *urb);
static int imon_resume(struct usb_interface *intf);
static int imon_suspend(struct usb_interface *intf, pm_message_t message);
static int display_open(struct inode *inode, struct file *file);
static int display_close(struct inode *inode, struct file *file);
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos);
static int ir_open(void *data);
static void ir_close(void *data);
static int __init imon_init(void);
static void __exit imon_exit(void);
#define IMON_DATA_BUF_SZ	35
struct imon_context ;
static const struct file_operations display_fops = ;
static struct usb_device_id imon_usb_id_table[] = ;
static struct usb_device_id vfd_proto_6p_list[] = ;
static struct usb_device_id ir_only_list[] = ;
static struct usb_driver imon_driver = ;
static struct usb_class_driver imon_class = ;
static DEFINE_MUTEX(driver_lock);
static int debug;
MODULE_AUTHOR(MOD_AUTHOR);
MODULE_DESCRIPTION(MOD_DESC);
MODULE_VERSION(MOD_VERSION);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, imon_usb_id_table);
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug messages: 0=no, 1=yes(default: no)");
static void free_imon_context(struct imon_context *context)
static void deregister_from_lirc(struct imon_context *context)
static int display_open(struct inode *inode, struct file *file)
static int display_close(struct inode *inode, struct file *file)
static int send_packet(struct imon_context *context)
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos)
static void usb_tx_callback(struct urb *urb)
static int ir_open(void *data)
static void ir_close(void *data)
static void submit_data(struct imon_context *context)
static inline int tv2int(const struct timeval *a, const struct timeval *b)
static void imon_incoming_packet(struct imon_context *context,
struct urb *urb, int intf)
static void usb_rx_callback(struct urb *urb)
static int imon_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void imon_disconnect(struct usb_interface *interface)
static int imon_suspend(struct usb_interface *intf, pm_message_t message)
static int imon_resume(struct usb_interface *intf)
static int __init imon_init(void)
static void __exit imon_exit(void)
module_init(imon_init);
module_exit(imon_exit);
