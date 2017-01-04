static int debug;
#define CMSPAR 0
#define DRIVER_VERSION "v2.0"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com>, Stuart MacDonald <stuartm@connecttech.com>"
#define DRIVER_DESC "USB ConnectTech WhiteHEAT driver"
#define CONNECT_TECH_VENDOR_ID		0x0710
#define CONNECT_TECH_FAKE_WHITE_HEAT_ID	0x0001
#define CONNECT_TECH_WHITE_HEAT_ID	0x8001
static const struct usb_device_id id_table_std[] = ;
static const struct usb_device_id id_table_prerenumeration[] = ;
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver whiteheat_driver = ;
static int  whiteheat_firmware_download(struct usb_serial *serial,
const struct usb_device_id *id);
static int  whiteheat_firmware_attach(struct usb_serial *serial);
static int  whiteheat_attach(struct usb_serial *serial);
static void whiteheat_release(struct usb_serial *serial);
static int  whiteheat_open(struct tty_struct *tty,
struct usb_serial_port *port);
static void whiteheat_close(struct usb_serial_port *port);
static int  whiteheat_write(struct tty_struct *tty,
struct usb_serial_port *port,
const unsigned char *buf, int count);
static int  whiteheat_write_room(struct tty_struct *tty);
static int  whiteheat_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void whiteheat_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static int  whiteheat_tiocmget(struct tty_struct *tty);
static int  whiteheat_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void whiteheat_break_ctl(struct tty_struct *tty, int break_state);
static int  whiteheat_chars_in_buffer(struct tty_struct *tty);
static void whiteheat_throttle(struct tty_struct *tty);
static void whiteheat_unthrottle(struct tty_struct *tty);
static void whiteheat_read_callback(struct urb *urb);
static void whiteheat_write_callback(struct urb *urb);
static struct usb_serial_driver whiteheat_fake_device = ;
static struct usb_serial_driver whiteheat_device = ;
struct whiteheat_command_private ;
#define THROTTLED		0x01
#define ACTUALLY_THROTTLED	0x02
static int urb_pool_size = 8;
struct whiteheat_urb_wrap ;
struct whiteheat_private ;
static int start_command_port(struct usb_serial *serial);
static void stop_command_port(struct usb_serial *serial);
static void command_port_write_callback(struct urb *urb);
static void command_port_read_callback(struct urb *urb);
static int start_port_read(struct usb_serial_port *port);
static struct whiteheat_urb_wrap *urb_to_wrap(struct urb *urb,
struct list_head *head);
static struct list_head *list_first(struct list_head *head);
static void rx_data_softint(struct work_struct *work);
static int firm_send_command(struct usb_serial_port *port, __u8 command,
__u8 *data, __u8 datasize);
static int firm_open(struct usb_serial_port *port);
static int firm_close(struct usb_serial_port *port);
static void firm_setup_port(struct tty_struct *tty);
static int firm_set_rts(struct usb_serial_port *port, __u8 onoff);
static int firm_set_dtr(struct usb_serial_port *port, __u8 onoff);
static int firm_set_break(struct usb_serial_port *port, __u8 onoff);
static int firm_purge(struct usb_serial_port *port, __u8 rxtx);
static int firm_get_dtr_rts(struct usb_serial_port *port);
static int firm_report_tx_done(struct usb_serial_port *port);
#define COMMAND_PORT		4
#define COMMAND_TIMEOUT		(2*HZ)
#define	COMMAND_TIMEOUT_MS	2000
#define CLOSING_DELAY		(30 * HZ)
static int whiteheat_firmware_download(struct usb_serial *serial,
const struct usb_device_id *id)
static int whiteheat_firmware_attach(struct usb_serial *serial)
static int whiteheat_attach(struct usb_serial *serial)
static void whiteheat_release(struct usb_serial *serial)
static int whiteheat_open(struct tty_struct *tty, struct usb_serial_port *port)
static void whiteheat_close(struct usb_serial_port *port)
static int whiteheat_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count)
static int whiteheat_write_room(struct tty_struct *tty)
static int whiteheat_tiocmget(struct tty_struct *tty)
static int whiteheat_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int whiteheat_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void whiteheat_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void whiteheat_break_ctl(struct tty_struct *tty, int break_state)
static int whiteheat_chars_in_buffer(struct tty_struct *tty)
static void whiteheat_throttle(struct tty_struct *tty)
static void whiteheat_unthrottle(struct tty_struct *tty)
static void command_port_write_callback(struct urb *urb)
static void command_port_read_callback(struct urb *urb)
static void whiteheat_read_callback(struct urb *urb)
static void whiteheat_write_callback(struct urb *urb)
static int firm_send_command(struct usb_serial_port *port, __u8 command,
__u8 *data, __u8 datasize)
static int firm_open(struct usb_serial_port *port)
static int firm_close(struct usb_serial_port *port)
static void firm_setup_port(struct tty_struct *tty)
static int firm_set_rts(struct usb_serial_port *port, __u8 onoff)
static int firm_set_dtr(struct usb_serial_port *port, __u8 onoff)
static int firm_set_break(struct usb_serial_port *port, __u8 onoff)
static int firm_purge(struct usb_serial_port *port, __u8 rxtx)
static int firm_get_dtr_rts(struct usb_serial_port *port)
static int firm_report_tx_done(struct usb_serial_port *port)
static int start_command_port(struct usb_serial *serial)
static void stop_command_port(struct usb_serial *serial)
static int start_port_read(struct usb_serial_port *port)
static struct whiteheat_urb_wrap *urb_to_wrap(struct urb *urb,
struct list_head *head)
static struct list_head *list_first(struct list_head *head)
static void rx_data_softint(struct work_struct *work)
static int __init whiteheat_init(void)
static void __exit whiteheat_exit(void)
module_init(whiteheat_init);
module_exit(whiteheat_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("whiteheat.fw");
MODULE_FIRMWARE("whiteheat_loader.fw");
module_param(urb_pool_size, int, 0);
MODULE_PARM_DESC(urb_pool_size, "Number of urbs to use for buffering");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
