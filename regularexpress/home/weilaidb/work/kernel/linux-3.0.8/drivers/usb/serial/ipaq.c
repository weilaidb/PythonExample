#define KP_RETRIES	100
#define DRIVER_VERSION "v1.0"
#define DRIVER_AUTHOR "Ganesh Varadarajan <ganesh@veritas.com>"
#define DRIVER_DESC "USB PocketPC PDA driver"
static __u16 product, vendor;
static int debug;
static int connect_retries = KP_RETRIES;
static int initial_wait;
static int  ipaq_open(struct tty_struct *tty,
struct usb_serial_port *port);
static int  ipaq_calc_num_ports(struct usb_serial *serial);
static int  ipaq_startup(struct usb_serial *serial);
static struct usb_device_id ipaq_id_table [] = ;
MODULE_DEVICE_TABLE(usb, ipaq_id_table);
static struct usb_driver ipaq_driver = ;
static struct usb_serial_driver ipaq_device = ;
static int ipaq_open(struct tty_struct *tty,
struct usb_serial_port *port)
static int ipaq_calc_num_ports(struct usb_serial *serial)
static int ipaq_startup(struct usb_serial *serial)
static int __init ipaq_init(void)
static void __exit ipaq_exit(void)
module_init(ipaq_init);
module_exit(ipaq_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "User specified USB idVendor");
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "User specified USB idProduct");
module_param(connect_retries, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(connect_retries,
"Maximum number of connect retries (one second each)");
module_param(initial_wait, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(initial_wait,
"Time to wait before attempting a connection (in seconds)");
