#define GS_VERSION_STR			"v2.4"
#define GS_VERSION_NUM			0x2400
#define GS_LONG_NAME			"Gadget Serial"
#define GS_VERSION_NAME			GS_LONG_NAME " " GS_VERSION_STR
#define GS_VENDOR_ID			0x0525
#define GS_PRODUCT_ID			0xa4a6
#define GS_CDC_PRODUCT_ID		0xa4a7
#define GS_CDC_OBEX_PRODUCT_ID		0xa4a9
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
#define STRING_DESCRIPTION_IDX		2
static char manufacturer[50];
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
MODULE_DESCRIPTION(GS_VERSION_NAME);
MODULE_AUTHOR("Al Borchers");
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
static int use_acm = true;
module_param(use_acm, bool, 0);
MODULE_PARM_DESC(use_acm, "Use CDC ACM, default=yes");
static int use_obex = false;
module_param(use_obex, bool, 0);
MODULE_PARM_DESC(use_obex, "Use CDC OBEX, default=no");
static unsigned n_ports = 1;
module_param(n_ports, uint, 0);
MODULE_PARM_DESC(n_ports, "number of ports to create, default=1");
static int __init serial_bind_config(struct usb_configuration *c)
static struct usb_configuration serial_config_driver = ;
static int __init gs_bind(struct usb_composite_dev *cdev)
static struct usb_composite_driver gserial_driver = ;
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
