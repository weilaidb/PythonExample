#define DRIVER_VERSION "v1.1"
#define DRIVER_AUTHOR "Cesar Miquel <miquel@df.uba.ar>"
#define DRIVER_DESC "USB Rio 500 driver"
#define RIO_MINOR	64
#define NAK_TIMEOUT (HZ)
#define IBUF_SIZE 0x1000
#define OBUF_SIZE 0x10000
struct rio_usb_data ;
static DEFINE_MUTEX(rio500_mutex);
static struct rio_usb_data rio_instance;
static int open_rio(struct inode *inode, struct file *file)
static int close_rio(struct inode *inode, struct file *file)
static long ioctl_rio(struct file *file, unsigned int cmd, unsigned long arg)
static ssize_t
write_rio(struct file *file, const char __user *buffer,
size_t count, loff_t * ppos)
static ssize_t
read_rio(struct file *file, char __user *buffer, size_t count, loff_t * ppos)
static const struct file_operations usb_rio_fops = ;
static struct usb_class_driver usb_rio_class = ;
static int probe_rio(struct usb_interface *intf,
const struct usb_device_id *id)
static void disconnect_rio(struct usb_interface *intf)
static const struct usb_device_id rio_table[] = ;
MODULE_DEVICE_TABLE (usb, rio_table);
static struct usb_driver rio_driver = ;
static int __init usb_rio_init(void)
static void __exit usb_rio_cleanup(void)
module_init(usb_rio_init);
module_exit(usb_rio_cleanup);
MODULE_AUTHOR( DRIVER_AUTHOR );
MODULE_DESCRIPTION( DRIVER_DESC );
MODULE_LICENSE("GPL");
