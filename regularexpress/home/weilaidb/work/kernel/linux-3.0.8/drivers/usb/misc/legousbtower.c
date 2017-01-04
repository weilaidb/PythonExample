static int debug = 4;
static int debug = 0;
#undef dbg
#define dbg(lvl, format, arg...)					\
do  while (0)
#define DRIVER_VERSION "v0.96"
#define DRIVER_AUTHOR "Juergen Stuber <starblue@sourceforge.net>"
#define DRIVER_DESC "LEGO USB Tower Driver"
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
static int read_buffer_size = 480;
module_param(read_buffer_size, int, 0);
MODULE_PARM_DESC(read_buffer_size, "Read buffer size");
static int write_buffer_size = 480;
module_param(write_buffer_size, int, 0);
MODULE_PARM_DESC(write_buffer_size, "Write buffer size");
static int packet_timeout = 50;
module_param(packet_timeout, int, 0);
MODULE_PARM_DESC(packet_timeout, "Packet timeout in ms");
static int read_timeout = 200;
module_param(read_timeout, int, 0);
MODULE_PARM_DESC(read_timeout, "Read timeout in ms");
static int interrupt_in_interval = 2;
module_param(interrupt_in_interval, int, 0);
MODULE_PARM_DESC(interrupt_in_interval, "Interrupt in interval in ms");
static int interrupt_out_interval = 8;
module_param(interrupt_out_interval, int, 0);
MODULE_PARM_DESC(interrupt_out_interval, "Interrupt out interval in ms");
#define LEGO_USB_TOWER_VENDOR_ID	0x0694
#define LEGO_USB_TOWER_PRODUCT_ID	0x0001
#define LEGO_USB_TOWER_REQUEST_RESET		0x04
#define LEGO_USB_TOWER_REQUEST_GET_VERSION	0xFD
struct tower_reset_reply  __attribute__ ((packed));
struct tower_get_version_reply  __attribute__ ((packed));
static const struct usb_device_id tower_table[] = ;
MODULE_DEVICE_TABLE (usb, tower_table);
static DEFINE_MUTEX(open_disc_mutex);
#define LEGO_USB_TOWER_MINOR_BASE	160
struct lego_usb_tower ;
static ssize_t tower_read	(struct file *file, char __user *buffer, size_t count, loff_t *ppos);
static ssize_t tower_write	(struct file *file, const char __user *buffer, size_t count, loff_t *ppos);
static inline void tower_delete (struct lego_usb_tower *dev);
static int tower_open		(struct inode *inode, struct file *file);
static int tower_release	(struct inode *inode, struct file *file);
static unsigned int tower_poll	(struct file *file, poll_table *wait);
static loff_t tower_llseek	(struct file *file, loff_t off, int whence);
static void tower_abort_transfers (struct lego_usb_tower *dev);
static void tower_check_for_read_packet (struct lego_usb_tower *dev);
static void tower_interrupt_in_callback (struct urb *urb);
static void tower_interrupt_out_callback (struct urb *urb);
static int  tower_probe	(struct usb_interface *interface, const struct usb_device_id *id);
static void tower_disconnect	(struct usb_interface *interface);
static const struct file_operations tower_fops = ;
static char *legousbtower_devnode(struct device *dev, mode_t *mode)
static struct usb_class_driver tower_class = ;
static struct usb_driver tower_driver = ;
static inline void lego_usb_tower_debug_data (int level, const char *function, int size, const unsigned char *data)
static inline void tower_delete (struct lego_usb_tower *dev)
static int tower_open (struct inode *inode, struct file *file)
static int tower_release (struct inode *inode, struct file *file)
static void tower_abort_transfers (struct lego_usb_tower *dev)
static void tower_check_for_read_packet (struct lego_usb_tower *dev)
static unsigned int tower_poll (struct file *file, poll_table *wait)
static loff_t tower_llseek (struct file *file, loff_t off, int whence)
static ssize_t tower_read (struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static ssize_t tower_write (struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static void tower_interrupt_in_callback (struct urb *urb)
static void tower_interrupt_out_callback (struct urb *urb)
static int tower_probe (struct usb_interface *interface, const struct usb_device_id *id)
static void tower_disconnect (struct usb_interface *interface)
static int __init lego_usb_tower_init(void)
static void __exit lego_usb_tower_exit(void)
module_init (lego_usb_tower_init);
module_exit (lego_usb_tower_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
