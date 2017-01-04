#define PRISM_USB_DEVICE(vid, pid, name)	\
USB_DEVICE(vid, pid),			\
.driver_info = (unsigned long) name
static struct usb_device_id usb_prism_tbl[] = ;
MODULE_DEVICE_TABLE(usb, usb_prism_tbl);
static int prism2sta_probe_usb(struct usb_interface *interface,
const struct usb_device_id *id)
static void prism2sta_disconnect_usb(struct usb_interface *interface)
static int prism2sta_suspend(struct usb_interface *interface,
pm_message_t message)
static int prism2sta_resume(struct usb_interface *interface)
#define prism2sta_suspend NULL
#define prism2sta_resume NULL
static struct usb_driver prism2_usb_driver = ;
static int __init prism2usb_init(void)
;
static void __exit prism2usb_cleanup(void)
;
module_init(prism2usb_init);
module_exit(prism2usb_cleanup);
