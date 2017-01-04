#define XUSBATM_DRIVERS_MAX	8
#define XUSBATM_PARM(name, type, parmtype, desc) \
static type name[XUSBATM_DRIVERS_MAX]; \
static unsigned int num_##name; \
module_param_array(name, parmtype, &num_##name, 0444); \
MODULE_PARM_DESC(name, desc)
XUSBATM_PARM(vendor, unsigned short, ushort, "USB device vendor");
XUSBATM_PARM(product, unsigned short, ushort, "USB device product");
XUSBATM_PARM(rx_endpoint, unsigned char, byte, "rx endpoint number");
XUSBATM_PARM(tx_endpoint, unsigned char, byte, "tx endpoint number");
XUSBATM_PARM(rx_padding, unsigned char, byte, "rx padding (default 0)");
XUSBATM_PARM(tx_padding, unsigned char, byte, "tx padding (default 0)");
XUSBATM_PARM(rx_altsetting, unsigned char, byte, "rx altsetting (default 0)");
XUSBATM_PARM(tx_altsetting, unsigned char, byte, "rx altsetting (default 0)");
static const char xusbatm_driver_name[] = "xusbatm";
static struct usbatm_driver xusbatm_drivers[XUSBATM_DRIVERS_MAX];
static struct usb_device_id xusbatm_usb_ids[XUSBATM_DRIVERS_MAX + 1];
static struct usb_driver xusbatm_usb_driver;
static struct usb_interface *xusbatm_find_intf(struct usb_device *usb_dev, int altsetting, u8 ep)
static int xusbatm_capture_intf(struct usbatm_data *usbatm, struct usb_device *usb_dev,
struct usb_interface *intf, int altsetting, int claim)
static void xusbatm_release_intf(struct usb_device *usb_dev, struct usb_interface *intf, int claimed)
static int xusbatm_bind(struct usbatm_data *usbatm,
struct usb_interface *intf, const struct usb_device_id *id)
static void xusbatm_unbind(struct usbatm_data *usbatm,
struct usb_interface *intf)
static int xusbatm_atm_start(struct usbatm_data *usbatm,
struct atm_dev *atm_dev)
static int xusbatm_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver xusbatm_usb_driver = ;
static int __init xusbatm_init(void)
module_init(xusbatm_init);
static void __exit xusbatm_exit(void)
module_exit(xusbatm_exit);
MODULE_AUTHOR("Roman Kagan, Duncan Sands");
MODULE_DESCRIPTION("Driver for USB ADSL modems initialized in userspace");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");
