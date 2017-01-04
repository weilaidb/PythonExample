#if defined(CONFIG_USB_NET_RNDIS_HOST) || defined(CONFIG_USB_NET_RNDIS_HOST_MODULE)
static int is_rndis(struct usb_interface_descriptor *desc)
static int is_activesync(struct usb_interface_descriptor *desc)
static int is_wireless_rndis(struct usb_interface_descriptor *desc)
#define is_rndis(desc)		0
#define is_activesync(desc)	0
#define is_wireless_rndis(desc)	0
static const u8 mbm_guid[16] = ;
int usbnet_generic_cdc_bind(struct usbnet *dev, struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_generic_cdc_bind);
void usbnet_cdc_unbind(struct usbnet *dev, struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_cdc_unbind);
static void dumpspeed(struct usbnet *dev, __le32 *speeds)
void usbnet_cdc_status(struct usbnet *dev, struct urb *urb)
EXPORT_SYMBOL_GPL(usbnet_cdc_status);
int usbnet_cdc_bind(struct usbnet *dev, struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_cdc_bind);
static int cdc_manage_power(struct usbnet *dev, int on)
static const struct driver_info	cdc_info = ;
static const struct driver_info wwan_info = ;
#define HUAWEI_VENDOR_ID	0x12D1
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver cdc_driver = ;
static int __init cdc_init(void)
module_init(cdc_init);
static void __exit cdc_exit(void)
module_exit(cdc_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("USB CDC Ethernet devices");
MODULE_LICENSE("GPL");
