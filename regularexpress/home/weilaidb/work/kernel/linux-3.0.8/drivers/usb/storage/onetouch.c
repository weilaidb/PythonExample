MODULE_DESCRIPTION("Maxtor USB OneTouch hard drive button driver");
MODULE_AUTHOR("Nick Sillik <n.sillik@temple.edu>");
MODULE_LICENSE("GPL");
#define ONETOUCH_PKT_LEN        0x02
#define ONETOUCH_BUTTON         KEY_PROG1
static int onetouch_connect_input(struct us_data *ss);
static void onetouch_release_input(void *onetouch_);
struct usb_onetouch ;
#define UNUSUAL_DEV(id_vendor, id_product, bcdDeviceMin, bcdDeviceMax, \
vendorName, productName, useProtocol, useTransport, \
initFunction, flags) \
struct usb_device_id onetouch_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, onetouch_usb_ids);
#undef UNUSUAL_DEV
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
static struct us_unusual_dev onetouch_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
static void usb_onetouch_irq(struct urb *urb)
static int usb_onetouch_open(struct input_dev *dev)
static void usb_onetouch_close(struct input_dev *dev)
static void usb_onetouch_pm_hook(struct us_data *us, int action)
static int onetouch_connect_input(struct us_data *ss)
static void onetouch_release_input(void *onetouch_)
static int onetouch_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver onetouch_driver = ;
static int __init onetouch_init(void)
static void __exit onetouch_exit(void)
module_init(onetouch_init);
module_exit(onetouch_exit);
