static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver funsoft_driver = ;
static struct usb_serial_driver funsoft_device = ;
static int __init funsoft_init(void)
static void __exit funsoft_exit(void)
module_init(funsoft_init);
module_exit(funsoft_exit);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
