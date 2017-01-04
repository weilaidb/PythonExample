#define DRIVER_VERSION "v0.03"
#define DRIVER_AUTHOR "Oliver Neukum"
#define DRIVER_DESC "USB Abstract Control Model driver for USB WCM Device Management"
static const struct usb_device_id wdm_ids[] = ;
MODULE_DEVICE_TABLE (usb, wdm_ids);
#define WDM_MINOR_BASE	176
#define WDM_IN_USE		1
#define WDM_DISCONNECTING	2
#define WDM_RESULT		3
#define WDM_READ		4
#define WDM_INT_STALL		5
#define WDM_POLL_RUNNING	6
#define WDM_RESPONDING		7
#define WDM_SUSPENDING		8
#define WDM_MAX			16
static DEFINE_MUTEX(wdm_mutex);
struct wdm_device ;
static struct usb_driver wdm_driver;
static void wdm_out_callback(struct urb *urb)
static void wdm_in_callback(struct urb *urb)
static void wdm_int_callback(struct urb *urb)
static void kill_urbs(struct wdm_device *desc)
static void free_urbs(struct wdm_device *desc)
static void cleanup(struct wdm_device *desc)
static ssize_t wdm_write
(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static ssize_t wdm_read
(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static int wdm_flush(struct file *file, fl_owner_t id)
static unsigned int wdm_poll(struct file *file, struct poll_table_struct *wait)
static int wdm_open(struct inode *inode, struct file *file)
static int wdm_release(struct inode *inode, struct file *file)
static const struct file_operations wdm_fops = ;
static struct usb_class_driver wdm_class = ;
static void wdm_rxwork(struct work_struct *work)
static int wdm_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void wdm_disconnect(struct usb_interface *intf)
static int wdm_suspend(struct usb_interface *intf, pm_message_t message)
static int recover_from_urb_loss(struct wdm_device *desc)
static int wdm_resume(struct usb_interface *intf)
static int wdm_pre_reset(struct usb_interface *intf)
static int wdm_post_reset(struct usb_interface *intf)
static struct usb_driver wdm_driver = ;
static int __init wdm_init(void)
static void __exit wdm_exit(void)
module_init(wdm_init);
module_exit(wdm_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
