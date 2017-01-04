#define DRIVER_VERSION "v0.0.2"
#define DRIVER_AUTHOR "Josh Myer <josh@joshisanerd.com>"
#define DRIVER_DESC "USB KB Gear JamStudio Tablet driver"
#define DRIVER_LICENSE "GPL"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
#define USB_VENDOR_ID_KBGEAR	0x084e
static int kb_pressure_click = 0x10;
module_param(kb_pressure_click, int, 0);
MODULE_PARM_DESC(kb_pressure_click, "pressure threshold for clicks");
struct kbtab ;
static void kbtab_irq(struct urb *urb)
static struct usb_device_id kbtab_ids[] = ;
MODULE_DEVICE_TABLE(usb, kbtab_ids);
static int kbtab_open(struct input_dev *dev)
static void kbtab_close(struct input_dev *dev)
static int kbtab_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void kbtab_disconnect(struct usb_interface *intf)
static struct usb_driver kbtab_driver = ;
static int __init kbtab_init(void)
static void __exit kbtab_exit(void)
module_init(kbtab_init);
module_exit(kbtab_exit);
