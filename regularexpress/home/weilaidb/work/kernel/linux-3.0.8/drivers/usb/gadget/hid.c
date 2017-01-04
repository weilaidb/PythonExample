#define DRIVER_DESC		"HID Gadget"
#define DRIVER_VERSION		"2010/03/16"
#define HIDG_VENDOR_NUM		0x0525
#define HIDG_PRODUCT_NUM	0xa4ac
struct hidg_func_node ;
static LIST_HEAD(hidg_func_list);
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
static char manufacturer[50];
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
static int __init do_config(struct usb_configuration *c)
static struct usb_configuration config_driver = ;
static int __init hid_bind(struct usb_composite_dev *cdev)
static int __exit hid_unbind(struct usb_composite_dev *cdev)
static int __init hidg_plat_driver_probe(struct platform_device *pdev)
static int __devexit hidg_plat_driver_remove(struct platform_device *pdev)
static struct usb_composite_driver hidg_driver = ;
static struct platform_driver hidg_plat_driver = ;
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Fabien Chouteau, Peter Korsgaard");
MODULE_LICENSE("GPL");
static int __init hidg_init(void)
module_init(hidg_init);
static void __exit hidg_cleanup(void)
module_exit(hidg_cleanup);
