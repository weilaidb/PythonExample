#define DRIVER_DESC "Prolific PL2303 USB to serial adaptor driver"
static int debug;
#define PL2303_CLOSING_WAIT	(30*HZ)
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver pl2303_driver = ;
#define SET_LINE_REQUEST_TYPE		0x21
#define SET_LINE_REQUEST		0x20
#define SET_CONTROL_REQUEST_TYPE	0x21
#define SET_CONTROL_REQUEST		0x22
#define CONTROL_DTR			0x01
#define CONTROL_RTS			0x02
#define BREAK_REQUEST_TYPE		0x21
#define BREAK_REQUEST			0x23
#define BREAK_ON			0xffff
#define BREAK_OFF			0x0000
#define GET_LINE_REQUEST_TYPE		0xa1
#define GET_LINE_REQUEST		0x21
#define VENDOR_WRITE_REQUEST_TYPE	0x40
#define VENDOR_WRITE_REQUEST		0x01
#define VENDOR_READ_REQUEST_TYPE	0xc0
#define VENDOR_READ_REQUEST		0x01
#define UART_STATE			0x08
#define UART_STATE_TRANSIENT_MASK	0x74
#define UART_DCD			0x01
#define UART_DSR			0x02
#define UART_BREAK_ERROR		0x04
#define UART_RING			0x08
#define UART_FRAME_ERROR		0x10
#define UART_PARITY_ERROR		0x20
#define UART_OVERRUN_ERROR		0x40
#define UART_CTS			0x80
enum pl2303_type ;
struct pl2303_private ;
static int pl2303_vendor_read(__u16 value, __u16 index,
struct usb_serial *serial, unsigned char *buf)
static int pl2303_vendor_write(__u16 value, __u16 index,
struct usb_serial *serial)
static int pl2303_startup(struct usb_serial *serial)
static int set_control_lines(struct usb_device *dev, u8 value)
static void pl2303_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void pl2303_dtr_rts(struct usb_serial_port *port, int on)
static void pl2303_close(struct usb_serial_port *port)
static int pl2303_open(struct tty_struct *tty, struct usb_serial_port *port)
static int pl2303_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int pl2303_tiocmget(struct tty_struct *tty)
static int pl2303_carrier_raised(struct usb_serial_port *port)
static int wait_modem_info(struct usb_serial_port *port, unsigned int arg)
static int pl2303_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void pl2303_break_ctl(struct tty_struct *tty, int break_state)
static void pl2303_release(struct usb_serial *serial)
static void pl2303_update_line_status(struct usb_serial_port *port,
unsigned char *data,
unsigned int actual_length)
static void pl2303_read_int_callback(struct urb *urb)
static void pl2303_process_read_urb(struct urb *urb)
static struct usb_serial_driver pl2303_device = ;
static int __init pl2303_init(void)
static void __exit pl2303_exit(void)
module_init(pl2303_init);
module_exit(pl2303_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
