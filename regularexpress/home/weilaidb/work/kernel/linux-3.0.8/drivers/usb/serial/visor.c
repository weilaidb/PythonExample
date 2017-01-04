#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com>"
#define DRIVER_DESC "USB HandSpring Visor / Palm OS driver"
static int  visor_open(struct tty_struct *tty, struct usb_serial_port *port);
static void visor_close(struct usb_serial_port *port);
static int  visor_probe(struct usb_serial *serial,
const struct usb_device_id *id);
static int  visor_calc_num_ports(struct usb_serial *serial);
static void visor_read_int_callback(struct urb *urb);
static int  clie_3_5_startup(struct usb_serial *serial);
static int  treo_attach(struct usb_serial *serial);
static int clie_5_attach(struct usb_serial *serial);
static int palm_os_3_probe(struct usb_serial *serial,
const struct usb_device_id *id);
static int palm_os_4_probe(struct usb_serial *serial,
const struct usb_device_id *id);
static int debug;
static __u16 vendor;
static __u16 product;
static struct usb_device_id id_table [] = ;
static struct usb_device_id clie_id_5_table [] = ;
static struct usb_device_id clie_id_3_5_table [] = ;
static struct usb_device_id id_table_combined [] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver visor_driver = ;
static struct usb_serial_driver handspring_device = ;
static struct usb_serial_driver clie_5_device = ;
static struct usb_serial_driver clie_3_5_device = ;
static int visor_open(struct tty_struct *tty, struct usb_serial_port *port)
static void visor_close(struct usb_serial_port *port)
static void visor_read_int_callback(struct urb *urb)
static int palm_os_3_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int palm_os_4_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int visor_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int visor_calc_num_ports(struct usb_serial *serial)
static int clie_3_5_startup(struct usb_serial *serial)
static int treo_attach(struct usb_serial *serial)
static int clie_5_attach(struct usb_serial *serial)
static int __init visor_init(void)
static void __exit visor_exit (void)
module_init(visor_init);
module_exit(visor_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "User specified vendor ID");
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "User specified product ID");
