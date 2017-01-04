#if defined USB_ETH_RNDIS
#  undef USB_ETH_RNDIS
#  define USB_ETH_RNDIS y
#define DRIVER_DESC		"Multifunction Composite Gadget"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Michal Nazarewicz");
MODULE_LICENSE("GPL");
#  include "f_rndis.c"
#  include "rndis.c"
#define MULTI_VENDOR_NUM	0x1d6b
#define MULTI_PRODUCT_NUM	0x0104
enum ;
static struct usb_device_descriptor device_desc = ;
static const struct usb_descriptor_header *otg_desc[] = ;
enum ;
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings *dev_strings[] = ;
static struct fsg_module_parameters fsg_mod_data = ;
FSG_MODULE_PARAMETERS(, fsg_mod_data);
static struct fsg_common fsg_common;
static u8 hostaddr[ETH_ALEN];
static __init int rndis_do_config(struct usb_configuration *c)
static int rndis_config_register(struct usb_composite_dev *cdev)
static int rndis_config_register(struct usb_composite_dev *cdev)
static __init int cdc_do_config(struct usb_configuration *c)
static int cdc_config_register(struct usb_composite_dev *cdev)
static int cdc_config_register(struct usb_composite_dev *cdev)
static int __ref multi_bind(struct usb_composite_dev *cdev)
static int __exit multi_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver multi_driver = ;
static int __init multi_init(void)
module_init(multi_init);
static void __exit multi_exit(void)
module_exit(multi_exit);
