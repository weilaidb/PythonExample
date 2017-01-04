#define USBTMC_MINOR_BASE	176
#define USBTMC_SIZE_IOBUFFER	2048
#define USBTMC_TIMEOUT		5000
#define USBTMC_MAX_READS_TO_CLEAR_BULK_IN	100
static const struct usb_device_id usbtmc_devices[] = ;
MODULE_DEVICE_TABLE(usb, usbtmc_devices);
struct usbtmc_dev_capabilities ;
struct usbtmc_device_data ;
#define to_usbtmc_data(d) container_of(d, struct usbtmc_device_data, kref)
static struct usb_driver usbtmc_driver;
static void usbtmc_delete(struct kref *kref)
static int usbtmc_open(struct inode *inode, struct file *filp)
static int usbtmc_release(struct inode *inode, struct file *file)
static int usbtmc_ioctl_abort_bulk_in(struct usbtmc_device_data *data)
static int usbtmc_ioctl_abort_bulk_out(struct usbtmc_device_data *data)
static ssize_t usbtmc_read(struct file *filp, char __user *buf,
size_t count, loff_t *f_pos)
static ssize_t usbtmc_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos)
static int usbtmc_ioctl_clear(struct usbtmc_device_data *data)
static int usbtmc_ioctl_clear_out_halt(struct usbtmc_device_data *data)
static int usbtmc_ioctl_clear_in_halt(struct usbtmc_device_data *data)
static int get_capabilities(struct usbtmc_device_data *data)
#define capability_attribute(name)					\
static ssize_t show_##name(struct device *dev,				\
struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL)
capability_attribute(interface_capabilities);
capability_attribute(device_capabilities);
capability_attribute(usb488_interface_capabilities);
capability_attribute(usb488_device_capabilities);
static struct attribute *capability_attrs[] = ;
static struct attribute_group capability_attr_grp = ;
static ssize_t show_TermChar(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_TermChar(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(TermChar, S_IRUGO, show_TermChar, store_TermChar);
#define data_attribute(name)						\
static ssize_t show_##name(struct device *dev,				\
struct device_attribute *attr, char *buf)	\
\
static ssize_t store_##name(struct device *dev,				\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, store_##name)
data_attribute(TermCharEnabled);
data_attribute(auto_abort);
static struct attribute *data_attrs[] = ;
static struct attribute_group data_attr_grp = ;
static int usbtmc_ioctl_indicator_pulse(struct usbtmc_device_data *data)
static long usbtmc_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations fops = ;
static struct usb_class_driver usbtmc_class = ;
static int usbtmc_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usbtmc_disconnect(struct usb_interface *intf)
static int usbtmc_suspend(struct usb_interface *intf, pm_message_t message)
static int usbtmc_resume(struct usb_interface *intf)
static struct usb_driver usbtmc_driver = ;
static int __init usbtmc_init(void)
module_init(usbtmc_init);
static void __exit usbtmc_exit(void)
module_exit(usbtmc_exit);
MODULE_LICENSE("GPL");
