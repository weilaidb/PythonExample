#define CONTROL_RTS			0x02
#define RESEND_CTS_STATE	0x03
#define URB_UPPER_LIMIT	8
#define DRIVER_DESC	"Opticon USB barcode to serial driver (1D)"
static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct opticon_private ;
static void opticon_read_bulk_callback(struct urb *urb)
static int send_control_msg(struct usb_serial_port *port, u8 requesttype,
u8 val)
static int opticon_open(struct tty_struct *tty, struct usb_serial_port *port)
static void opticon_close(struct usb_serial_port *port)
static void opticon_write_control_callback(struct urb *urb)
static int opticon_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int opticon_write_room(struct tty_struct *tty)
static void opticon_throttle(struct tty_struct *tty)
static void opticon_unthrottle(struct tty_struct *tty)
static int opticon_tiocmget(struct tty_struct *tty)
static int opticon_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int get_serial_info(struct opticon_private *priv,
struct serial_struct __user *serial)
static int opticon_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int opticon_startup(struct usb_serial *serial)
static void opticon_disconnect(struct usb_serial *serial)
static void opticon_release(struct usb_serial *serial)
static int opticon_suspend(struct usb_interface *intf, pm_message_t message)
static int opticon_resume(struct usb_interface *intf)
static struct usb_driver opticon_driver = ;
static struct usb_serial_driver opticon_device = ;
static int __init opticon_init(void)
static void __exit opticon_exit(void)
module_init(opticon_init);
module_exit(opticon_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
