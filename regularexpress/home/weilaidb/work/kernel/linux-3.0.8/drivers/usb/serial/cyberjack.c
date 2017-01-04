#define CYBERJACK_LOCAL_BUF_SIZE 32
static int debug;
#define DRIVER_VERSION "v1.01"
#define DRIVER_AUTHOR "Matthias Bruestle"
#define DRIVER_DESC "REINER SCT cyberJack pinpad/e-com USB Chipcard Reader Driver"
#define CYBERJACK_VENDOR_ID	0x0C4B
#define CYBERJACK_PRODUCT_ID	0x0100
static int cyberjack_startup(struct usb_serial *serial);
static void cyberjack_disconnect(struct usb_serial *serial);
static void cyberjack_release(struct usb_serial *serial);
static int  cyberjack_open(struct tty_struct *tty,
struct usb_serial_port *port);
static void cyberjack_close(struct usb_serial_port *port);
static int cyberjack_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count);
static int cyberjack_write_room(struct tty_struct *tty);
static void cyberjack_read_int_callback(struct urb *urb);
static void cyberjack_read_bulk_callback(struct urb *urb);
static void cyberjack_write_bulk_callback(struct urb *urb);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver cyberjack_driver = ;
static struct usb_serial_driver cyberjack_device = ;
struct cyberjack_private ;
static int cyberjack_startup(struct usb_serial *serial)
static void cyberjack_disconnect(struct usb_serial *serial)
static void cyberjack_release(struct usb_serial *serial)
static int  cyberjack_open(struct tty_struct *tty,
struct usb_serial_port *port)
static void cyberjack_close(struct usb_serial_port *port)
static int cyberjack_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count)
static int cyberjack_write_room(struct tty_struct *tty)
static void cyberjack_read_int_callback(struct urb *urb)
static void cyberjack_read_bulk_callback(struct urb *urb)
static void cyberjack_write_bulk_callback(struct urb *urb)
static int __init cyberjack_init(void)
static void __exit cyberjack_exit(void)
module_init(cyberjack_init);
module_exit(cyberjack_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
