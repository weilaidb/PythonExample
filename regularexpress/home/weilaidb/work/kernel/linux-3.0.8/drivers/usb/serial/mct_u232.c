#define DRIVER_VERSION "z2.1"
#define DRIVER_AUTHOR "Wolfgang Grandegger <wolfgang@ces.ch>"
#define DRIVER_DESC "Magic Control Technology USB-RS232 converter driver"
static int debug;
static int  mct_u232_startup(struct usb_serial *serial);
static void mct_u232_release(struct usb_serial *serial);
static int  mct_u232_open(struct tty_struct *tty, struct usb_serial_port *port);
static void mct_u232_close(struct usb_serial_port *port);
static void mct_u232_dtr_rts(struct usb_serial_port *port, int on);
static void mct_u232_read_int_callback(struct urb *urb);
static void mct_u232_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static void mct_u232_break_ctl(struct tty_struct *tty, int break_state);
static int  mct_u232_tiocmget(struct tty_struct *tty);
static int  mct_u232_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  mct_u232_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static int  mct_u232_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount);
static void mct_u232_throttle(struct tty_struct *tty);
static void mct_u232_unthrottle(struct tty_struct *tty);
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver mct_u232_driver = ;
static struct usb_serial_driver mct_u232_device = ;
struct mct_u232_private ;
#define THROTTLED		0x01
#define WDR_TIMEOUT 5000
static int mct_u232_calculate_baud_rate(struct usb_serial *serial,
speed_t value, speed_t *result)
static int mct_u232_set_baud_rate(struct tty_struct *tty,
struct usb_serial *serial, struct usb_serial_port *port, speed_t value)
static int mct_u232_set_line_ctrl(struct usb_serial *serial, unsigned char lcr)
static int mct_u232_set_modem_ctrl(struct usb_serial *serial,
unsigned int control_state)
static int mct_u232_get_modem_stat(struct usb_serial *serial,
unsigned char *msr)
static void mct_u232_msr_to_icount(struct async_icount *icount,
unsigned char msr)
static void mct_u232_msr_to_state(unsigned int *control_state,
unsigned char msr)
static int mct_u232_startup(struct usb_serial *serial)
static void mct_u232_release(struct usb_serial *serial)
static int  mct_u232_open(struct tty_struct *tty, struct usb_serial_port *port)
static void mct_u232_dtr_rts(struct usb_serial_port *port, int on)
static void mct_u232_close(struct usb_serial_port *port)
static void mct_u232_read_int_callback(struct urb *urb)
static void mct_u232_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static void mct_u232_break_ctl(struct tty_struct *tty, int break_state)
static int mct_u232_tiocmget(struct tty_struct *tty)
static int mct_u232_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void mct_u232_throttle(struct tty_struct *tty)
static void mct_u232_unthrottle(struct tty_struct *tty)
static int  mct_u232_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int  mct_u232_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int __init mct_u232_init(void)
static void __exit mct_u232_exit(void)
module_init(mct_u232_init);
module_exit(mct_u232_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
