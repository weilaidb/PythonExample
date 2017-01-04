#define APPLE_VENDOR_ID		0x05AC
#define USB_REQ_GET_REPORT	0x01
#define USB_REQ_SET_REPORT	0x09
#define ACD_USB_TIMEOUT		250
#define ACD_USB_EDID		0x0302
#define ACD_USB_BRIGHTNESS	0x0310
#define ACD_BTN_NONE		0
#define ACD_BTN_BRIGHT_UP	3
#define ACD_BTN_BRIGHT_DOWN	4
#define ACD_URB_BUFFER_LEN	2
#define ACD_MSG_BUFFER_LEN	2
#define APPLEDISPLAY_DEVICE(prod)				\
.match_flags = USB_DEVICE_ID_MATCH_DEVICE |		\
USB_DEVICE_ID_MATCH_INT_CLASS |		\
USB_DEVICE_ID_MATCH_INT_PROTOCOL,	\
.idVendor = APPLE_VENDOR_ID,				\
.idProduct = (prod),					\
.bInterfaceClass = USB_CLASS_HID,			\
.bInterfaceProtocol = 0x00
static const struct usb_device_id appledisplay_table[] = ;
MODULE_DEVICE_TABLE(usb, appledisplay_table);
struct appledisplay ;
static atomic_t count_displays = ATOMIC_INIT(0);
static struct workqueue_struct *wq;
static void appledisplay_complete(struct urb *urb)
static int appledisplay_bl_update_status(struct backlight_device *bd)
static int appledisplay_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops appledisplay_bl_data = ;
static void appledisplay_work(struct work_struct *work)
static int appledisplay_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void appledisplay_disconnect(struct usb_interface *iface)
static struct usb_driver appledisplay_driver = ;
static int __init appledisplay_init(void)
static void __exit appledisplay_exit(void)
MODULE_AUTHOR("Michael Hanselmann");
MODULE_DESCRIPTION("Apple Cinema Display driver");
MODULE_LICENSE("GPL");
module_init(appledisplay_init);
module_exit(appledisplay_exit);
