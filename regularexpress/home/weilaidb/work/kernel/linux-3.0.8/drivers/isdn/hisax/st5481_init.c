MODULE_DESCRIPTION("ISDN4Linux: driver for ST5481 USB ISDN adapter");
MODULE_AUTHOR("Frode Isaksen");
MODULE_LICENSE("GPL");
static int protocol = 2;
module_param(protocol, int, 0);
static int number_of_leds = 2;
module_param(number_of_leds, int, 0);
static int debug = 0;
module_param(debug, int, 0);
int st5481_debug;
static int probe_st5481(struct usb_interface *intf,
const struct usb_device_id *id)
static void disconnect_st5481(struct usb_interface *intf)
static struct usb_device_id st5481_ids[] = ;
MODULE_DEVICE_TABLE (usb, st5481_ids);
static struct usb_driver st5481_usb_driver = ;
static int __init st5481_usb_init(void)
static void __exit st5481_usb_exit(void)
module_init(st5481_usb_init);
module_exit(st5481_usb_exit);
