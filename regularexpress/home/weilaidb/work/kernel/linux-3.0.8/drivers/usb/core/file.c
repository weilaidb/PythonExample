#define MAX_USB_MINORS	256
static const struct file_operations *usb_minors[MAX_USB_MINORS];
static DECLARE_RWSEM(minor_rwsem);
static int usb_open(struct inode * inode, struct file * file)
static const struct file_operations usb_fops = ;
static struct usb_class  *usb_class;
static char *usb_devnode(struct device *dev, mode_t *mode)
static int init_usb_class(void)
static void release_usb_class(struct kref *kref)
static void destroy_usb_class(void)
int usb_major_init(void)
void usb_major_cleanup(void)
int usb_register_dev(struct usb_interface *intf,
struct usb_class_driver *class_driver)
EXPORT_SYMBOL_GPL(usb_register_dev);
void usb_deregister_dev(struct usb_interface *intf,
struct usb_class_driver *class_driver)
EXPORT_SYMBOL_GPL(usb_deregister_dev);
