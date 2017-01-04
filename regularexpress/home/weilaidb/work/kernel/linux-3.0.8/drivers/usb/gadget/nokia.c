#define NOKIA_VERSION_NUM		0x0211
#define NOKIA_LONG_NAME			"N900 (PC-Suite Mode)"
#define NOKIA_VENDOR_ID			0x0421
#define NOKIA_PRODUCT_ID		0x01c8
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
#define STRING_DESCRIPTION_IDX		2
static char manufacturer_nokia[] = "Nokia";
static const char product_nokia[] = NOKIA_LONG_NAME;
static const char description_nokia[] = "PC-Suite Configuration";
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
static struct usb_device_descriptor device_desc = ;
MODULE_DESCRIPTION("Nokia composite gadget driver for N900");
MODULE_AUTHOR("Felipe Balbi");
MODULE_LICENSE("GPL");
static u8 hostaddr[ETH_ALEN];
static int __init nokia_bind_config(struct usb_configuration *c)
static struct usb_configuration nokia_config_500ma_driver = ;
static struct usb_configuration nokia_config_100ma_driver = ;
static int __init nokia_bind(struct usb_composite_dev *cdev)
static int __exit nokia_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver nokia_driver = ;
static int __init nokia_init(void)
module_init(nokia_init);
static void __exit nokia_cleanup(void)
module_exit(nokia_cleanup);
