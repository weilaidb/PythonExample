#define DRIVER_DESC		"Mass Storage Gadget"
#define DRIVER_VERSION		"2009/09/11"
static struct usb_device_descriptor msg_device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
static const struct usb_descriptor_header *otg_desc[] = ;
static struct fsg_module_parameters mod_data = ;
FSG_MODULE_PARAMETERS(, mod_data);
static unsigned long msg_registered;
static void msg_cleanup(void);
static int msg_thread_exits(struct fsg_common *common)
static int __init msg_do_config(struct usb_configuration *c)
static struct usb_configuration msg_config_driver = ;
static int __init msg_bind(struct usb_composite_dev *cdev)
static struct usb_composite_driver msg_driver = ;
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Michal Nazarewicz");
MODULE_LICENSE("GPL");
static int __init msg_init(void)
module_init(msg_init);
static void msg_cleanup(void)
module_exit(msg_cleanup);
