static int debug;
#define DRIVER_VERSION "v0.4"
#define DRIVER_AUTHOR "Utz-Uwe Haus <haus@uuhaus.de>, Johan Hovold <jhovold@gmail.com>"
#define DRIVER_DESC "KLSI KL5KUSB105 chipset USB->Serial Converter driver"
static int  klsi_105_startup(struct usb_serial *serial);
static void klsi_105_release(struct usb_serial *serial);
static int  klsi_105_open(struct tty_struct *tty, struct usb_serial_port *port);
static void klsi_105_close(struct usb_serial_port *port);
static void klsi_105_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static int  klsi_105_tiocmget(struct tty_struct *tty);
static int  klsi_105_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void klsi_105_process_read_urb(struct urb *urb);
static int klsi_105_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver kl5kusb105d_driver = ;
static struct usb_serial_driver kl5kusb105d_device = ;
struct klsi_105_port_settings  __attribute__ ((packed));
struct klsi_105_private ;
#define KLSI_TIMEOUT	 5000
static int klsi_105_chg_port_settings(struct usb_serial_port *port,
struct klsi_105_port_settings *settings)
static unsigned long klsi_105_status2linestate(const __u16 status)
#define KLSI_STATUSBUF_LEN	2
static int klsi_105_get_line_state(struct usb_serial_port *port,
unsigned long *line_state_p)
static int klsi_105_startup(struct usb_serial *serial)
static void klsi_105_release(struct usb_serial *serial)
static int  klsi_105_open(struct tty_struct *tty, struct usb_serial_port *port)
static void klsi_105_close(struct usb_serial_port *port)
#define KLSI_HDR_LEN		2
static int klsi_105_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
static void klsi_105_process_read_urb(struct urb *urb)
static void klsi_105_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static int klsi_105_tiocmget(struct tty_struct *tty)
static int klsi_105_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int __init klsi_105_init(void)
static void __exit klsi_105_exit(void)
module_init(klsi_105_init);
module_exit(klsi_105_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "enable extensive debugging messages");
