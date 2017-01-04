#define DRIVER_DESC		"Printer Gadget"
#define DRIVER_VERSION		"2007 OCT 06"
static DEFINE_MUTEX(printer_mutex);
static const char shortname [] = "printer";
static const char driver_desc [] = DRIVER_DESC;
static dev_t g_printer_devno;
static struct class *usb_gadget_class;
struct printer_dev ;
static struct printer_dev usb_printer_gadget;
#define PRINTER_VENDOR_NUM	0x0525
#define PRINTER_PRODUCT_NUM	0xa4a8
static ushort idVendor;
module_param(idVendor, ushort, S_IRUGO);
MODULE_PARM_DESC(idVendor, "USB Vendor ID");
static ushort idProduct;
module_param(idProduct, ushort, S_IRUGO);
MODULE_PARM_DESC(idProduct, "USB Product ID");
static ushort bcdDevice;
module_param(bcdDevice, ushort, S_IRUGO);
MODULE_PARM_DESC(bcdDevice, "USB Device version (BCD)");
static char *iManufacturer;
module_param(iManufacturer, charp, S_IRUGO);
MODULE_PARM_DESC(iManufacturer, "USB Manufacturer string");
static char *iProduct;
module_param(iProduct, charp, S_IRUGO);
MODULE_PARM_DESC(iProduct, "USB Product string");
static char *iSerialNum;
module_param(iSerialNum, charp, S_IRUGO);
MODULE_PARM_DESC(iSerialNum, "1");
static char *iPNPstring;
module_param(iPNPstring, charp, S_IRUGO);
MODULE_PARM_DESC(iPNPstring, "MFG:linux;MDL:g_printer;CLS:PRINTER;SN:1;");
static unsigned qlen = 10;
module_param(qlen, uint, S_IRUGO|S_IWUSR);
#define QLEN	qlen
#define DEVSPEED	USB_SPEED_HIGH
#define DEVSPEED        USB_SPEED_FULL
#define xprintk(d, level, fmt, args...) \
printk(level "%s: " fmt, DRIVER_DESC, ## args)
#define DBG(dev, fmt, args...) \
xprintk(dev, KERN_DEBUG, fmt, ## args)
#define DBG(dev, fmt, args...) \
do  while (0)
#define VDBG(dev, fmt, args...) \
xprintk(dev, KERN_DEBUG, fmt, ## args)
#define VDBG(dev, fmt, args...) \
do  while (0)
#define ERROR(dev, fmt, args...) \
xprintk(dev, KERN_ERR, fmt, ## args)
#define WARNING(dev, fmt, args...) \
xprintk(dev, KERN_WARNING, fmt, ## args)
#define INFO(dev, fmt, args...) \
xprintk(dev, KERN_INFO, fmt, ## args)
#define STRING_MANUFACTURER		1
#define STRING_PRODUCT			2
#define STRING_SERIALNUM		3
#define USB_DESC_BUFSIZE		256
#define USB_BUFSIZE			8192
#define DEV_CONFIG_VALUE		1
#define	PRINTER_INTERFACE		0
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_desc = ;
static struct usb_config_descriptor config_desc = ;
static struct usb_interface_descriptor intf_desc = ;
static struct usb_endpoint_descriptor fs_ep_in_desc = ;
static struct usb_endpoint_descriptor fs_ep_out_desc = ;
static const struct usb_descriptor_header *fs_printer_function [11] = ;
static struct usb_endpoint_descriptor hs_ep_in_desc = ;
static struct usb_endpoint_descriptor hs_ep_out_desc = ;
static struct usb_qualifier_descriptor dev_qualifier = ;
static const struct usb_descriptor_header *hs_printer_function [11] = ;
#define ep_desc(g, hs, fs) (((g)->speed == USB_SPEED_HIGH)?(hs):(fs))
#define ep_desc(g, hs, fs) (((void)(g)), (fs))
static char				manufacturer [50];
static char				product_desc [40] = DRIVER_DESC;
static char				serial_num [40] = "1";
static char				pnp_string [1024] =
"XXMFG:linux;MDL:g_printer;CLS:PRINTER;SN:1;";
static struct usb_string		strings [] = ;
static struct usb_gadget_strings	stringtab = ;
static struct usb_request *
printer_req_alloc(struct usb_ep *ep, unsigned len, gfp_t gfp_flags)
static void
printer_req_free(struct usb_ep *ep, struct usb_request *req)
static void rx_complete(struct usb_ep *ep, struct usb_request *req)
static void tx_complete(struct usb_ep *ep, struct usb_request *req)
static int
printer_open(struct inode *inode, struct file *fd)
static int
printer_close(struct inode *inode, struct file *fd)
static void
setup_rx_reqs(struct printer_dev *dev)
static ssize_t
printer_read(struct file *fd, char __user *buf, size_t len, loff_t *ptr)
static ssize_t
printer_write(struct file *fd, const char __user *buf, size_t len, loff_t *ptr)
static int
printer_fsync(struct file *fd, int datasync)
static unsigned int
printer_poll(struct file *fd, poll_table *wait)
static long
printer_ioctl(struct file *fd, unsigned int code, unsigned long arg)
static const struct file_operations printer_io_operations = ;
static int
set_printer_interface(struct printer_dev *dev)
static void printer_reset_interface(struct printer_dev *dev)
static int
printer_set_config(struct printer_dev *dev, unsigned number)
static int
config_buf(enum usb_device_speed speed, u8 *buf, u8 type, unsigned index,
int is_otg)
static int
set_interface(struct printer_dev *dev, unsigned number)
static void printer_setup_complete(struct usb_ep *ep, struct usb_request *req)
static void printer_soft_reset(struct printer_dev *dev)
static int
printer_setup(struct usb_gadget *gadget, const struct usb_ctrlrequest *ctrl)
static void
printer_disconnect(struct usb_gadget *gadget)
static void
printer_unbind(struct usb_gadget *gadget)
static int __init
printer_bind(struct usb_gadget *gadget)
static struct usb_gadget_driver printer_driver = ;
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Craig Nadler");
MODULE_LICENSE("GPL");
static int __init
init(void)
module_init(init);
static void __exit
cleanup(void)
module_exit(cleanup);
