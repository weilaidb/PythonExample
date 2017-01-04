#define DRIVER_VERSION "v0.7.5 (30/10/2000)"
#define DRIVER_AUTHOR "Henning Zabel <henning@uni-paderborn.de>"
#define DRIVER_DESC "USB Driver for Mustek MDC800 Digital Camera"
#define MDC800_VENDOR_ID 	0x055f
#define MDC800_PRODUCT_ID	0xa800
#define TO_DOWNLOAD_GET_READY		1500
#define TO_DOWNLOAD_GET_BUSY		1500
#define TO_WRITE_GET_READY		1000
#define TO_DEFAULT_COMMAND		5000
#define TO_READ_FROM_IRQ 		TO_DEFAULT_COMMAND
#define TO_GET_READY			TO_DEFAULT_COMMAND
#define MDC800_DEVICE_MINOR_BASE 32
typedef enum  mdc800_state;
struct mdc800_data
;
static struct usb_endpoint_descriptor mdc800_ed [4] =
;
static struct mdc800_data* mdc800;
static int mdc800_endpoint_equals (struct usb_endpoint_descriptor *a,struct usb_endpoint_descriptor *b)
static int mdc800_isBusy (char* ch)
static int mdc800_isReady (char *ch)
static void mdc800_usb_irq (struct urb *urb)
static int mdc800_usb_waitForIRQ (int mode, int msec)
static void mdc800_usb_write_notify (struct urb *urb)
static void mdc800_usb_download_notify (struct urb *urb)
static struct usb_driver mdc800_usb_driver;
static const struct file_operations mdc800_device_ops;
static struct usb_class_driver mdc800_class = ;
static int mdc800_usb_probe (struct usb_interface *intf,
const struct usb_device_id *id)
static void mdc800_usb_disconnect (struct usb_interface *intf)
static int mdc800_getAnswerSize (char command)
static int mdc800_device_open (struct inode* inode, struct file *file)
static int mdc800_device_release (struct inode* inode, struct file *file)
static ssize_t mdc800_device_read (struct file *file, char __user *buf, size_t len, loff_t *pos)
static ssize_t mdc800_device_write (struct file *file, const char __user *buf, size_t len, loff_t *pos)
static const struct file_operations mdc800_device_ops =
;
static const struct usb_device_id mdc800_table[] = ;
MODULE_DEVICE_TABLE (usb, mdc800_table);
static struct usb_driver mdc800_usb_driver =
;
static int __init usb_mdc800_init (void)
static void __exit usb_mdc800_cleanup (void)
module_init (usb_mdc800_init);
module_exit (usb_mdc800_cleanup);
MODULE_AUTHOR( DRIVER_AUTHOR );
MODULE_DESCRIPTION( DRIVER_DESC );
MODULE_LICENSE("GPL");
