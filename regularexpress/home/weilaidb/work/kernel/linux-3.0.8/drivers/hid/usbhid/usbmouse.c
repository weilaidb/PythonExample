#define DRIVER_VERSION "v1.6"
#define DRIVER_AUTHOR "Vojtech Pavlik <vojtech@ucw.cz>"
#define DRIVER_DESC "USB HID Boot Protocol mouse driver"
#define DRIVER_LICENSE "GPL"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
struct usb_mouse ;
static void usb_mouse_irq(struct urb *urb)
static int usb_mouse_open(struct input_dev *dev)
static void usb_mouse_close(struct input_dev *dev)
static int usb_mouse_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usb_mouse_disconnect(struct usb_interface *intf)
static struct usb_device_id usb_mouse_id_table [] = ;
MODULE_DEVICE_TABLE (usb, usb_mouse_id_table);
static struct usb_driver usb_mouse_driver = ;
static int __init usb_mouse_init(void)
static void __exit usb_mouse_exit(void)
module_init(usb_mouse_init);
module_exit(usb_mouse_exit);
