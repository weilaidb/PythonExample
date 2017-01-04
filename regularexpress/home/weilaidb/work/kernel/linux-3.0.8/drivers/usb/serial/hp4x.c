#define DRIVER_VERSION "v1.00"
#define DRIVER_DESC "HP4x (48/49) Generic Serial driver"
#define HP_VENDOR_ID 0x03f0
#define HP49GP_PRODUCT_ID 0x0121
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver hp49gp_driver = ;
static struct usb_serial_driver hp49gp_device = ;
static int __init hp49gp_init(void)
static void __exit hp49gp_exit(void)
module_init(hp49gp_init);
module_exit(hp49gp_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
