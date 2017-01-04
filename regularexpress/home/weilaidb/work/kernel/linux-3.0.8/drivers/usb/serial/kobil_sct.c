static int debug;
#define DRIVER_VERSION "21/05/2004"
#define DRIVER_AUTHOR "KOBIL Systems GmbH - http:
#define DRIVER_DESC "KOBIL USB Smart Card Terminal Driver (experimental)"
#define KOBIL_VENDOR_ID			0x0D46
#define KOBIL_ADAPTER_B_PRODUCT_ID	0x2011
#define KOBIL_ADAPTER_K_PRODUCT_ID	0x2012
#define KOBIL_USBTWIN_PRODUCT_ID	0x0078
#define KOBIL_KAAN_SIM_PRODUCT_ID       0x0081
#define KOBIL_TIMEOUT		500
#define KOBIL_BUF_LENGTH	300
static int  kobil_startup(struct usb_serial *serial);
static void kobil_release(struct usb_serial *serial);
static int  kobil_open(struct tty_struct *tty, struct usb_serial_port *port);
static void kobil_close(struct usb_serial_port *port);
static int  kobil_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static int  kobil_write_room(struct tty_struct *tty);
static int  kobil_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static int  kobil_tiocmget(struct tty_struct *tty);
static int  kobil_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void kobil_read_int_callback(struct urb *urb);
static void kobil_write_callback(struct urb *purb);
static void kobil_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static void kobil_init_termios(struct tty_struct *tty);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver kobil_driver = ;
static struct usb_serial_driver kobil_device = ;
struct kobil_private ;
static int kobil_startup(struct usb_serial *serial)
static void kobil_release(struct usb_serial *serial)
static void kobil_init_termios(struct tty_struct *tty)
static int kobil_open(struct tty_struct *tty, struct usb_serial_port *port)
static void kobil_close(struct usb_serial_port *port)
static void kobil_read_int_callback(struct urb *urb)
static void kobil_write_callback(struct urb *purb)
static int kobil_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int kobil_write_room(struct tty_struct *tty)
static int kobil_tiocmget(struct tty_struct *tty)
static int kobil_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void kobil_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old)
static int kobil_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int __init kobil_init(void)
static void __exit kobil_exit(void)
module_init(kobil_init);
module_exit(kobil_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
