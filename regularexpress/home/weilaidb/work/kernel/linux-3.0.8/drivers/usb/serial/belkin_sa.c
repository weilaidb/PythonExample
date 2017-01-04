static int debug;
#define DRIVER_VERSION "v1.3"
#define DRIVER_AUTHOR "William Greathouse <wgreathouse@smva.com>"
#define DRIVER_DESC "USB Belkin Serial converter driver"
static int  belkin_sa_startup(struct usb_serial *serial);
static void belkin_sa_release(struct usb_serial *serial);
static int  belkin_sa_open(struct tty_struct *tty,
struct usb_serial_port *port);
static void belkin_sa_close(struct usb_serial_port *port);
static void belkin_sa_read_int_callback(struct urb *urb);
static void belkin_sa_process_read_urb(struct urb *urb);
static void belkin_sa_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios * old);
static void belkin_sa_break_ctl(struct tty_struct *tty, int break_state);
static int  belkin_sa_tiocmget(struct tty_struct *tty);
static int  belkin_sa_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver belkin_driver = ;
static struct usb_serial_driver belkin_device = ;
struct belkin_sa_private ;
#define WDR_TIMEOUT 5000
#define BSA_USB_CMD(c, v) usb_control_msg(serial->dev, usb_sndctrlpipe(serial->dev, 0), \
(c), BELKIN_SA_SET_REQUEST_TYPE, \
(v), 0, NULL, 0, WDR_TIMEOUT)
static int belkin_sa_startup(struct usb_serial *serial)
static void belkin_sa_release(struct usb_serial *serial)
static int belkin_sa_open(struct tty_struct *tty,
struct usb_serial_port *port)
static void belkin_sa_close(struct usb_serial_port *port)
static void belkin_sa_read_int_callback(struct urb *urb)
static void belkin_sa_process_read_urb(struct urb *urb)
static void belkin_sa_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void belkin_sa_break_ctl(struct tty_struct *tty, int break_state)
static int belkin_sa_tiocmget(struct tty_struct *tty)
static int belkin_sa_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int __init belkin_sa_init(void)
static void __exit belkin_sa_exit (void)
module_init(belkin_sa_init);
module_exit(belkin_sa_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
