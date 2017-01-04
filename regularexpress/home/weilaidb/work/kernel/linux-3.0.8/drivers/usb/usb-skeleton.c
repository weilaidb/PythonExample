#define USB_SKEL_VENDOR_ID	0xfff0
#define USB_SKEL_PRODUCT_ID	0xfff0
static const struct usb_device_id skel_table[] = ;
MODULE_DEVICE_TABLE(usb, skel_table);
#define USB_SKEL_MINOR_BASE	192
#define MAX_TRANSFER		(PAGE_SIZE - 512)
#define WRITES_IN_FLIGHT	8
struct usb_skel ;
#define to_skel_dev(d) container_of(d, struct usb_skel, kref)
static struct usb_driver skel_driver;
static void skel_draw_down(struct usb_skel *dev);
static void skel_delete(struct kref *kref)
static int skel_open(struct inode *inode, struct file *file)
static int skel_release(struct inode *inode, struct file *file)
static int skel_flush(struct file *file, fl_owner_t id)
static void skel_read_bulk_callback(struct urb *urb)
static int skel_do_read_io(struct usb_skel *dev, size_t count)
static ssize_t skel_read(struct file *file, char *buffer, size_t count,
loff_t *ppos)
static void skel_write_bulk_callback(struct urb *urb)
static ssize_t skel_write(struct file *file, const char *user_buffer,
size_t count, loff_t *ppos)
static const struct file_operations skel_fops = ;
static struct usb_class_driver skel_class = ;
static int skel_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void skel_disconnect(struct usb_interface *interface)
static void skel_draw_down(struct usb_skel *dev)
static int skel_suspend(struct usb_interface *intf, pm_message_t message)
static int skel_resume(struct usb_interface *intf)
static int skel_pre_reset(struct usb_interface *intf)
static int skel_post_reset(struct usb_interface *intf)
static struct usb_driver skel_driver = ;
static int __init usb_skel_init(void)
static void __exit usb_skel_exit(void)
module_init(usb_skel_init);
module_exit(usb_skel_exit);
MODULE_LICENSE("GPL");
