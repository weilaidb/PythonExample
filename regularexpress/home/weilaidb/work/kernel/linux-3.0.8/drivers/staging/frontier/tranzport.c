#define VENDOR_ID   0x165b
#define PRODUCT_ID  0x8101
#define USB_TRANZPORT_MINOR_BASE	0
#define USB_TRANZPORT_MINOR_BASE	177
static const struct usb_device_id usb_tranzport_table[] = ;
MODULE_DEVICE_TABLE(usb, usb_tranzport_table);
MODULE_VERSION("0.35");
MODULE_AUTHOR("Mike Taht <m@taht.net>");
MODULE_DESCRIPTION("Tranzport USB Driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Frontier Designs Tranzport Control Surface");
#define SUPPRESS_EXTRA_OFFLINE_EVENTS 1
#define COMPRESS_WHEEL_EVENTS 1
#define BUFFERED_READS 1
#define RING_BUFFER_SIZE 1000
#define WRITE_BUFFER_SIZE 34
#define TRANZPORT_USB_TIMEOUT 10
#define TRANZPORT_DEBUG 0
static int debug = TRANZPORT_DEBUG;
#define dbg_info(dev, format, arg...) do			\
while (0)
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
static int ring_buffer_size = RING_BUFFER_SIZE;
module_param(ring_buffer_size, int, S_IRUGO);
MODULE_PARM_DESC(ring_buffer_size, "Read ring buffer size in reports");
static int write_buffer_size = WRITE_BUFFER_SIZE;
module_param(write_buffer_size, int, S_IRUGO);
MODULE_PARM_DESC(write_buffer_size, "Write buffer size");
static int min_interrupt_in_interval = TRANZPORT_USB_TIMEOUT;
module_param(min_interrupt_in_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_in_interval,
"Minimum interrupt in interval in ms");
static int min_interrupt_out_interval = TRANZPORT_USB_TIMEOUT;
module_param(min_interrupt_out_interval, int, 0);
MODULE_PARM_DESC(min_interrupt_out_interval,
"Minimum interrupt out interval in ms");
struct tranzport_cmd ;
struct usb_tranzport ;
static DEFINE_MUTEX(disconnect_mutex);
static struct usb_driver usb_tranzport_driver;
static void usb_tranzport_abort_transfers(struct usb_tranzport *dev)
#define show_int(value)	\
static ssize_t show_##value(struct device *dev,	\
struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(value, S_IRUGO, show_##value, NULL);
#define show_set_int(value)	\
static ssize_t show_##value(struct device *dev,	\
struct device_attribute *attr, char *buf)	\
\
static ssize_t set_##value(struct device *dev,	\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
\
static DEVICE_ATTR(value, S_IWUSR | S_IRUGO, show_##value, set_##value);
show_int(enable);
show_int(offline);
show_set_int(compress_wheel);
static void usb_tranzport_delete(struct usb_tranzport *dev)
static void usb_tranzport_interrupt_in_callback(struct urb *urb)
static void usb_tranzport_interrupt_out_callback(struct urb *urb)
static int usb_tranzport_open(struct inode *inode, struct file *file)
static int usb_tranzport_release(struct inode *inode, struct file *file)
static unsigned int usb_tranzport_poll(struct file *file, poll_table * wait)
static ssize_t usb_tranzport_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
dev->ring_tail = (dev->ring_tail + 1) % ring_buffer_size;
dbg_info(&dev->intf->dev, "%s: head, tail are %x, %x\n",
__func__, dev->ring_head, dev->ring_tail);
retval = 8;
unlock_exit:
mutex_unlock(&dev->mtx);
exit:
return retval;
}
static ssize_t usb_tranzport_write(struct file *file,
const char __user *buffer, size_t count,
loff_t *ppos)
static const struct file_operations usb_tranzport_fops = ;
static struct usb_class_driver usb_tranzport_class = ;
static int usb_tranzport_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usb_tranzport_disconnect(struct usb_interface *intf)
static struct usb_driver usb_tranzport_driver = ;
static int __init usb_tranzport_init(void)
static void __exit usb_tranzport_exit(void)
module_init(usb_tranzport_init);
module_exit(usb_tranzport_exit);
