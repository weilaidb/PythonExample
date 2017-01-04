#if defined USB_ETH_RNDIS
#  undef USB_ETH_RNDIS
#  define USB_ETH_RNDIS y
#define DRIVER_DESC		"Ethernet Gadget"
#define DRIVER_VERSION		"Memorial Day 2008"
#define PREFIX			"RNDIS/"
#define PREFIX			""
static inline bool has_rndis(void)
#define CDC_VENDOR_NUM		0x0525
#define CDC_PRODUCT_NUM		0xa4a1
#define	SIMPLE_VENDOR_NUM	0x049f
#define	SIMPLE_PRODUCT_NUM	0x505a
#define RNDIS_VENDOR_NUM	0x0525
#define RNDIS_PRODUCT_NUM	0xa4a2
#define EEM_VENDOR_NUM		0x1d6b
#define EEM_PRODUCT_NUM		0x0102
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
static char manufacturer[50];
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
static u8 hostaddr[ETH_ALEN];
static int __init rndis_do_config(struct usb_configuration *c)
static struct usb_configuration rndis_config_driver = ;
static int use_eem = 1;
static int use_eem;
module_param(use_eem, bool, 0);
MODULE_PARM_DESC(use_eem, "use CDC EEM mode");
static int __init eth_do_config(struct usb_configuration *c)
static struct usb_configuration eth_config_driver = ;
static int __init eth_bind(struct usb_composite_dev *cdev)
static int __exit eth_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver eth_driver = ;
MODULE_DESCRIPTION(PREFIX DRIVER_DESC);
MODULE_AUTHOR("David Brownell, Benedikt Spanger");
MODULE_LICENSE("GPL");
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
