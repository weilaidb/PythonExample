#define DEFAULT_BAUD_RATE 9600
#define DEFAULT_TIMEOUT   1000
#define CH341_BIT_RTS (1 << 6)
#define CH341_BIT_DTR (1 << 5)
#define CH341_MULT_STAT 0x04
#define CH341_BIT_CTS 0x01
#define CH341_BIT_DSR 0x02
#define CH341_BIT_RI  0x04
#define CH341_BIT_DCD 0x08
#define CH341_BITS_MODEM_STAT 0x0f
#define CH341_BAUDBASE_FACTOR 1532620800
#define CH341_BAUDBASE_DIVMAX 3
#define CH341_REQ_WRITE_REG    0x9A
#define CH341_REQ_READ_REG     0x95
#define CH341_REG_BREAK1       0x05
#define CH341_REG_BREAK2       0x18
#define CH341_NBREAK_BITS_REG1 0x01
#define CH341_NBREAK_BITS_REG2 0x40
static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct ch341_private ;
static int ch341_control_out(struct usb_device *dev, u8 request,
u16 value, u16 index)
static int ch341_control_in(struct usb_device *dev,
u8 request, u16 value, u16 index,
char *buf, unsigned bufsize)
static int ch341_set_baudrate(struct usb_device *dev,
struct ch341_private *priv)
static int ch341_set_handshake(struct usb_device *dev, u8 control)
static int ch341_get_status(struct usb_device *dev, struct ch341_private *priv)
static int ch341_configure(struct usb_device *dev, struct ch341_private *priv)
static int ch341_attach(struct usb_serial *serial)
static int ch341_carrier_raised(struct usb_serial_port *port)
static void ch341_dtr_rts(struct usb_serial_port *port, int on)
static void ch341_close(struct usb_serial_port *port)
static int ch341_open(struct tty_struct *tty, struct usb_serial_port *port)
static void ch341_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void ch341_break_ctl(struct tty_struct *tty, int break_state)
static int ch341_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void ch341_read_int_callback(struct urb *urb)
static int wait_modem_info(struct usb_serial_port *port, unsigned int arg)
static int ch341_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int ch341_tiocmget(struct tty_struct *tty)
static int ch341_reset_resume(struct usb_interface *intf)
static struct usb_driver ch341_driver = ;
static struct usb_serial_driver ch341_device = ;
static int __init ch341_init(void)
static void __exit ch341_exit(void)
module_init(ch341_init);
module_exit(ch341_exit);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
