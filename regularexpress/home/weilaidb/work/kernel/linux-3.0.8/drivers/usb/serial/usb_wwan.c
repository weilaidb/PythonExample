#define DRIVER_VERSION "v0.7.2"
#define DRIVER_AUTHOR "Matthias Urlichs <smurf@smurf.noris.de>"
#define DRIVER_DESC "USB Driver for GSM modems"
static int debug;
void usb_wwan_dtr_rts(struct usb_serial_port *port, int on)
EXPORT_SYMBOL(usb_wwan_dtr_rts);
void usb_wwan_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
EXPORT_SYMBOL(usb_wwan_set_termios);
int usb_wwan_tiocmget(struct tty_struct *tty)
EXPORT_SYMBOL(usb_wwan_tiocmget);
int usb_wwan_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
EXPORT_SYMBOL(usb_wwan_tiocmset);
static int get_serial_info(struct usb_serial_port *port,
struct serial_struct __user *retinfo)
static int set_serial_info(struct usb_serial_port *port,
struct serial_struct __user *newinfo)
int usb_wwan_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(usb_wwan_ioctl);
int usb_wwan_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
EXPORT_SYMBOL(usb_wwan_write);
static void usb_wwan_indat_callback(struct urb *urb)
static void usb_wwan_outdat_callback(struct urb *urb)
int usb_wwan_write_room(struct tty_struct *tty)
EXPORT_SYMBOL(usb_wwan_write_room);
int usb_wwan_chars_in_buffer(struct tty_struct *tty)
EXPORT_SYMBOL(usb_wwan_chars_in_buffer);
int usb_wwan_open(struct tty_struct *tty, struct usb_serial_port *port)
EXPORT_SYMBOL(usb_wwan_open);
void usb_wwan_close(struct usb_serial_port *port)
EXPORT_SYMBOL(usb_wwan_close);
static struct urb *usb_wwan_setup_urb(struct usb_serial *serial, int endpoint,
int dir, void *ctx, char *buf, int len,
void (*callback) (struct urb *))
static void usb_wwan_setup_urbs(struct usb_serial *serial)
int usb_wwan_startup(struct usb_serial *serial)
EXPORT_SYMBOL(usb_wwan_startup);
static void stop_read_write_urbs(struct usb_serial *serial)
void usb_wwan_disconnect(struct usb_serial *serial)
EXPORT_SYMBOL(usb_wwan_disconnect);
void usb_wwan_release(struct usb_serial *serial)
EXPORT_SYMBOL(usb_wwan_release);
int usb_wwan_suspend(struct usb_serial *serial, pm_message_t message)
EXPORT_SYMBOL(usb_wwan_suspend);
static void unbusy_queued_urb(struct urb *urb, struct usb_wwan_port_private *portdata)
static void play_delayed(struct usb_serial_port *port)
int usb_wwan_resume(struct usb_serial *serial)
EXPORT_SYMBOL(usb_wwan_resume);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug messages");
