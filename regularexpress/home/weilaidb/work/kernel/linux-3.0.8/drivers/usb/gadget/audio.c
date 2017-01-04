#define DRIVER_DESC		"Linux USB Audio Gadget"
#define DRIVER_VERSION		"Dec 18, 2008"
#define AUDIO_VENDOR_NUM		0x1d6b
#define AUDIO_PRODUCT_NUM		0x0101
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
static int __init audio_do_config(struct usb_configuration *c)
static struct usb_configuration audio_config_driver = ;
static int __init audio_bind(struct usb_composite_dev *cdev)
static int __exit audio_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver audio_driver = ;
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Bryan Wu <cooloney@kernel.org>");
MODULE_LICENSE("GPL");
