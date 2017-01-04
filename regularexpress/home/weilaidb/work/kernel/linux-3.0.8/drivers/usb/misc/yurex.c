#define DRIVER_AUTHOR "Tomoki Sekiyama"
#define DRIVER_DESC "Driver for Meywa-Denki & KAYAC YUREX"
#define YUREX_VENDOR_ID		0x0c45
#define YUREX_PRODUCT_ID	0x1010
#define CMD_ACK		'!'
#define CMD_ANIMATE	'A'
#define CMD_COUNT	'C'
#define CMD_LED		'L'
#define CMD_READ	'R'
#define CMD_SET		'S'
#define CMD_VERSION	'V'
#define CMD_EOF		0x0d
#define CMD_PADDING	0xff
#define YUREX_BUF_SIZE		8
#define YUREX_WRITE_TIMEOUT	(HZ*2)
static struct usb_device_id yurex_table[] = ;
MODULE_DEVICE_TABLE(usb, yurex_table);
#define YUREX_MINOR_BASE	0
#define YUREX_MINOR_BASE	192
struct usb_yurex ;
#define to_yurex_dev(d) container_of(d, struct usb_yurex, kref)
static struct usb_driver yurex_driver;
static const struct file_operations yurex_fops;
static void yurex_control_callback(struct urb *urb)
static void yurex_delete(struct kref *kref)
static struct usb_class_driver yurex_class = ;
static void yurex_interrupt(struct urb *urb)
static int yurex_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void yurex_disconnect(struct usb_interface *interface)
static struct usb_driver yurex_driver = ;
static int yurex_fasync(int fd, struct file *file, int on)
static int yurex_open(struct inode *inode, struct file *file)
static int yurex_release(struct inode *inode, struct file *file)
static ssize_t yurex_read(struct file *file, char *buffer, size_t count, loff_t *ppos)
static ssize_t yurex_write(struct file *file, const char *user_buffer, size_t count, loff_t *ppos)
static const struct file_operations yurex_fops = ;
static int __init usb_yurex_init(void)
static void __exit usb_yurex_exit(void)
module_init(usb_yurex_init);
module_exit(usb_yurex_exit);
MODULE_LICENSE("GPL");
