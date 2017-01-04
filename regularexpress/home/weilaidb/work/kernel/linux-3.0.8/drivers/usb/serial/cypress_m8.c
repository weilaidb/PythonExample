static int debug;
static int stats;
static int interval;
static int unstable_bauds;
#define DRIVER_VERSION "v1.10"
#define DRIVER_AUTHOR "Lonnie Mendez <dignome@gmail.com>, Neil Whelchel <koyama@firstlight.net>"
#define DRIVER_DESC "Cypress USB to Serial Driver"
#define CYPRESS_BUF_SIZE	1024
static const struct usb_device_id id_table_earthmate[] = ;
static const struct usb_device_id id_table_cyphidcomrs232[] = ;
static const struct usb_device_id id_table_nokiaca42v2[] = ;
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver cypress_driver = ;
enum packet_format ;
struct cypress_private ;
static int  cypress_earthmate_startup(struct usb_serial *serial);
static int  cypress_hidcom_startup(struct usb_serial *serial);
static int  cypress_ca42v2_startup(struct usb_serial *serial);
static void cypress_release(struct usb_serial *serial);
static int  cypress_open(struct tty_struct *tty, struct usb_serial_port *port);
static void cypress_close(struct usb_serial_port *port);
static void cypress_dtr_rts(struct usb_serial_port *port, int on);
static int  cypress_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static void cypress_send(struct usb_serial_port *port);
static int  cypress_write_room(struct tty_struct *tty);
static int  cypress_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void cypress_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static int  cypress_tiocmget(struct tty_struct *tty);
static int  cypress_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  cypress_chars_in_buffer(struct tty_struct *tty);
static void cypress_throttle(struct tty_struct *tty);
static void cypress_unthrottle(struct tty_struct *tty);
static void cypress_set_dead(struct usb_serial_port *port);
static void cypress_read_int_callback(struct urb *urb);
static void cypress_write_int_callback(struct urb *urb);
static struct usb_serial_driver cypress_earthmate_device = ;
static struct usb_serial_driver cypress_hidcom_device = ;
static struct usb_serial_driver cypress_ca42v2_device = ;
static int analyze_baud_rate(struct usb_serial_port *port, speed_t new_rate)
static int cypress_serial_control(struct tty_struct *tty,
struct usb_serial_port *port, speed_t baud_rate, int data_bits,
int stop_bits, int parity_enable, int parity_type, int reset,
int cypress_request_type)
static void cypress_set_dead(struct usb_serial_port *port)
static int generic_startup(struct usb_serial *serial)
static int cypress_earthmate_startup(struct usb_serial *serial)
static int cypress_hidcom_startup(struct usb_serial *serial)
static int cypress_ca42v2_startup(struct usb_serial *serial)
static void cypress_release(struct usb_serial *serial)
static int cypress_open(struct tty_struct *tty, struct usb_serial_port *port)
static void cypress_dtr_rts(struct usb_serial_port *port, int on)
static void cypress_close(struct usb_serial_port *port)
static int cypress_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static void cypress_send(struct usb_serial_port *port)
static int cypress_write_room(struct tty_struct *tty)
static int cypress_tiocmget(struct tty_struct *tty)
static int cypress_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int cypress_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void cypress_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int cypress_chars_in_buffer(struct tty_struct *tty)
static void cypress_throttle(struct tty_struct *tty)
static void cypress_unthrottle(struct tty_struct *tty)
static void cypress_read_int_callback(struct urb *urb)
static void cypress_write_int_callback(struct urb *urb)
static int __init cypress_init(void)
static void __exit cypress_exit(void)
module_init(cypress_init);
module_exit(cypress_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(stats, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(stats, "Enable statistics or not");
module_param(interval, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(interval, "Overrides interrupt interval");
module_param(unstable_bauds, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(unstable_bauds, "Allow unstable baud rates");
