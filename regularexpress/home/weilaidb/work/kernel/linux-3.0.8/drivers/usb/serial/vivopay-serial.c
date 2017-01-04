#define DRIVER_VERSION "v1.0"
#define DRIVER_DESC "ViVOpay USB Serial Driver"
#define VIVOPAY_VENDOR_ID 0x1d5f
static struct usb_device_id id_table [] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver vivopay_serial_driver = ;
static struct usb_serial_driver vivopay_serial_device = ;
static int __init vivopay_serial_init(void)
static void __exit vivopay_serial_exit(void)
module_init(vivopay_serial_init);
module_exit(vivopay_serial_exit);
MODULE_AUTHOR("Forest Bond <forest.bond@outpostembedded.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
