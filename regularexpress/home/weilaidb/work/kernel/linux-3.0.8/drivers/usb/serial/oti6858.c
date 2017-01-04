#define OTI6858_DESCRIPTION \
"Ours Technology Inc. OTi-6858 USB to serial adapter driver"
#define OTI6858_AUTHOR "Tomasz Michal Lukaszewski <FIXME@FIXME>"
#define OTI6858_VERSION "0.2"
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver oti6858_driver = ;
static int debug;
#define	OTI6858_REQ_GET_STATUS		(USB_DIR_IN | USB_TYPE_VENDOR | 0x00)
#define	OTI6858_REQ_T_GET_STATUS	0x01
#define	OTI6858_REQ_SET_LINE		(USB_DIR_OUT | USB_TYPE_VENDOR | 0x00)
#define	OTI6858_REQ_T_SET_LINE		0x00
#define	OTI6858_REQ_CHECK_TXBUFF	(USB_DIR_IN | USB_TYPE_VENDOR | 0x01)
#define	OTI6858_REQ_T_CHECK_TXBUFF	0x00
struct oti6858_control_pkt ;
#define OTI6858_CTRL_PKT_SIZE	sizeof(struct oti6858_control_pkt)
#define OTI6858_CTRL_EQUALS_PENDING(a, priv) \
(((a)->divisor == (priv)->pending_setup.divisor) \
&& ((a)->control == (priv)->pending_setup.control) \
&& ((a)->frame_fmt == (priv)->pending_setup.frame_fmt))
static int oti6858_open(struct tty_struct *tty, struct usb_serial_port *port);
static void oti6858_close(struct usb_serial_port *port);
static void oti6858_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static void oti6858_init_termios(struct tty_struct *tty);
static int oti6858_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void oti6858_read_int_callback(struct urb *urb);
static void oti6858_read_bulk_callback(struct urb *urb);
static void oti6858_write_bulk_callback(struct urb *urb);
static int oti6858_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static int oti6858_write_room(struct tty_struct *tty);
static int oti6858_chars_in_buffer(struct tty_struct *tty);
static int oti6858_tiocmget(struct tty_struct *tty);
static int oti6858_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int oti6858_startup(struct usb_serial *serial);
static void oti6858_release(struct usb_serial *serial);
static struct usb_serial_driver oti6858_device = ;
struct oti6858_private ;
static void setup_line(struct work_struct *work)
static void send_data(struct work_struct *work)
static int oti6858_startup(struct usb_serial *serial)
static int oti6858_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int oti6858_write_room(struct tty_struct *tty)
static int oti6858_chars_in_buffer(struct tty_struct *tty)
static void oti6858_init_termios(struct tty_struct *tty)
static void oti6858_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int oti6858_open(struct tty_struct *tty, struct usb_serial_port *port)
static void oti6858_close(struct usb_serial_port *port)
static int oti6858_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int oti6858_tiocmget(struct tty_struct *tty)
static int wait_modem_info(struct usb_serial_port *port, unsigned int arg)
static int oti6858_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void oti6858_release(struct usb_serial *serial)
static void oti6858_read_int_callback(struct urb *urb)
static void oti6858_read_bulk_callback(struct urb *urb)
static void oti6858_write_bulk_callback(struct urb *urb)
static int __init oti6858_init(void)
static void __exit oti6858_exit(void)
module_init(oti6858_init);
module_exit(oti6858_exit);
MODULE_DESCRIPTION(OTI6858_DESCRIPTION);
MODULE_AUTHOR(OTI6858_AUTHOR);
MODULE_VERSION(OTI6858_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "enable debug output");
