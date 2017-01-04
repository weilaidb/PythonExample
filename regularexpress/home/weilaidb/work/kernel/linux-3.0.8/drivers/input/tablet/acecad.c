#define DRIVER_VERSION "v3.2"
#define DRIVER_DESC    "USB Acecad Flair tablet driver"
#define DRIVER_LICENSE "GPL"
#define DRIVER_AUTHOR  "Edouard TISSERANT <edouard.tisserant@wanadoo.fr>"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
#define USB_VENDOR_ID_ACECAD	0x0460
#define USB_DEVICE_ID_FLAIR	0x0004
#define USB_DEVICE_ID_302	0x0008
struct usb_acecad ;
static void usb_acecad_irq(struct urb *urb)
static int usb_acecad_open(struct input_dev *dev)
static void usb_acecad_close(struct input_dev *dev)
static int usb_acecad_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usb_acecad_disconnect(struct usb_interface *intf)
static struct usb_device_id usb_acecad_id_table [] = ;
MODULE_DEVICE_TABLE(usb, usb_acecad_id_table);
static struct usb_driver usb_acecad_driver = ;
static int __init usb_acecad_init(void)
static void __exit usb_acecad_exit(void)
module_init(usb_acecad_init);
module_exit(usb_acecad_exit);
