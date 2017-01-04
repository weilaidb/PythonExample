static int debug;
#define DRIVER_VERSION "v1.1"
#define DRIVER_AUTHOR "Alessandro Zummo"
#define DRIVER_DESC "USB ZyXEL omni.net LCD PLUS Driver"
#define ZYXEL_VENDOR_ID		0x0586
#define ZYXEL_OMNINET_ID	0x1000
#define BT_IGNITIONPRO_ID	0x2000
static int  omninet_open(struct tty_struct *tty, struct usb_serial_port *port);
static void omninet_close(struct usb_serial_port *port);
static void omninet_read_bulk_callback(struct urb *urb);
static void omninet_write_bulk_callback(struct urb *urb);
static int  omninet_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static int  omninet_write_room(struct tty_struct *tty);
static void omninet_disconnect(struct usb_serial *serial);
static void omninet_release(struct usb_serial *serial);
static int omninet_attach(struct usb_serial *serial);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver omninet_driver = ;
static struct usb_serial_driver zyxel_omninet_device = ;
struct omninet_header ;
struct omninet_data ;
static int omninet_attach(struct usb_serial *serial)
static int omninet_open(struct tty_struct *tty, struct usb_serial_port *port)
static void omninet_close(struct usb_serial_port *port)
#define OMNINET_DATAOFFSET	0x04
#define OMNINET_HEADERLEN	sizeof(struct omninet_header)
#define OMNINET_BULKOUTSIZE 	(64 - OMNINET_HEADERLEN)
static void omninet_read_bulk_callback(struct urb *urb)
static int omninet_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int omninet_write_room(struct tty_struct *tty)
static void omninet_write_bulk_callback(struct urb *urb)
static void omninet_disconnect(struct usb_serial *serial)
static void omninet_release(struct usb_serial *serial)
static int __init omninet_init(void)
static void __exit omninet_exit(void)
module_init(omninet_init);
module_exit(omninet_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
