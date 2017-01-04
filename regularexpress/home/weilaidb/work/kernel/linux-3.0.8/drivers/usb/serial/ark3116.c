static int debug;
#define DRIVER_VERSION "v0.6"
#define DRIVER_AUTHOR "Bart Hartgers <bart.hartgers+ark3116@gmail.com>"
#define DRIVER_DESC "USB ARK3116 serial/IrDA driver"
#define DRIVER_DEV_DESC "ARK3116 RS232/IrDA"
#define DRIVER_NAME "ark3116"
#define ARK_TIMEOUT (1*HZ)
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static int is_irda(struct usb_serial *serial)
struct ark3116_private ;
static int ark3116_write_reg(struct usb_serial *serial,
unsigned reg, __u8 val)
static int ark3116_read_reg(struct usb_serial *serial,
unsigned reg, unsigned char *buf)
static inline int calc_divisor(int bps)
static int ark3116_attach(struct usb_serial *serial)
static void ark3116_release(struct usb_serial *serial)
static void ark3116_init_termios(struct tty_struct *tty)
static void ark3116_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static void ark3116_close(struct usb_serial_port *port)
static int ark3116_open(struct tty_struct *tty, struct usb_serial_port *port)
static int ark3116_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int ark3116_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int ark3116_tiocmget(struct tty_struct *tty)
static int ark3116_tiocmset(struct tty_struct *tty,
unsigned set, unsigned clr)
static void ark3116_break_ctl(struct tty_struct *tty, int break_state)
static void ark3116_update_msr(struct usb_serial_port *port, __u8 msr)
static void ark3116_update_lsr(struct usb_serial_port *port, __u8 lsr)
static void ark3116_read_int_callback(struct urb *urb)
static void ark3116_process_read_urb(struct urb *urb)
static struct usb_driver ark3116_driver = ;
static struct usb_serial_driver ark3116_device = ;
static int __init ark3116_init(void)
static void __exit ark3116_exit(void)
module_init(ark3116_init);
module_exit(ark3116_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debug");
