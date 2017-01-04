#define DRIVER_AUTHOR   "Xing Wei <weixing@hanwang.com.cn>"
#define DRIVER_DESC     "USB Hanwang tablet driver"
#define DRIVER_LICENSE  "GPL"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
#define USB_VENDOR_ID_HANWANG		0x0b57
#define HANWANG_TABLET_INT_CLASS	0x0003
#define HANWANG_TABLET_INT_SUB_CLASS	0x0001
#define HANWANG_TABLET_INT_PROTOCOL	0x0002
#define ART_MASTER_PKGLEN_MAX	10
#define STYLUS_DEVICE_ID	0x02
#define TOUCH_DEVICE_ID		0x03
#define CURSOR_DEVICE_ID	0x06
#define ERASER_DEVICE_ID	0x0A
#define PAD_DEVICE_ID		0x0F
#define HANWANG_TABLET_DEVICE(vend, cl, sc, pr) \
.match_flags = USB_DEVICE_ID_MATCH_VENDOR \
| USB_DEVICE_ID_MATCH_INT_INFO, \
.idVendor = (vend), \
.bInterfaceClass = (cl), \
.bInterfaceSubClass = (sc), \
.bInterfaceProtocol = (pr)
enum hanwang_tablet_type ;
struct hanwang ;
struct hanwang_features ;
static const struct hanwang_features features_array[] = ;
static const int hw_eventtypes[] = ;
static const int hw_absevents[] = ;
static const int hw_btnevents[] = ;
static const int hw_mscevents[] = ;
static void hanwang_parse_packet(struct hanwang *hanwang)
static void hanwang_irq(struct urb *urb)
static int hanwang_open(struct input_dev *dev)
static void hanwang_close(struct input_dev *dev)
static bool get_features(struct usb_device *dev, struct hanwang *hanwang)
static int hanwang_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void hanwang_disconnect(struct usb_interface *intf)
static const struct usb_device_id hanwang_ids[] = ;
MODULE_DEVICE_TABLE(usb, hanwang_ids);
static struct usb_driver hanwang_driver = ;
static int __init hanwang_init(void)
static void __exit hanwang_exit(void)
module_init(hanwang_init);
module_exit(hanwang_exit);
