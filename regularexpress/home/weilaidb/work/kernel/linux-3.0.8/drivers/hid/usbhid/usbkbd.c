#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_VERSION ""
#define DRIVER_AUTHOR "Vojtech Pavlik <vojtech@ucw.cz>"
#define DRIVER_DESC "USB HID Boot Protocol keyboard driver"
#define DRIVER_LICENSE "GPL"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
static const unsigned char usb_kbd_keycode[256] = ;
struct usb_kbd ;
static void usb_kbd_irq(struct urb *urb)
static int usb_kbd_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
static void usb_kbd_led(struct urb *urb)
static int usb_kbd_open(struct input_dev *dev)
static void usb_kbd_close(struct input_dev *dev)
static int usb_kbd_alloc_mem(struct usb_device *dev, struct usb_kbd *kbd)
static void usb_kbd_free_mem(struct usb_device *dev, struct usb_kbd *kbd)
static int usb_kbd_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void usb_kbd_disconnect(struct usb_interface *intf)
static struct usb_device_id usb_kbd_id_table [] = ;
MODULE_DEVICE_TABLE (usb, usb_kbd_id_table);
static struct usb_driver usb_kbd_driver = ;
static int __init usb_kbd_init(void)
static void __exit usb_kbd_exit(void)
module_init(usb_kbd_init);
module_exit(usb_kbd_exit);
