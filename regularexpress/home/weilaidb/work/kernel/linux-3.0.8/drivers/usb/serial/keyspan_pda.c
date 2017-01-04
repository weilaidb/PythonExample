static int debug;
#if defined(CONFIG_USB_SERIAL_KEYSPAN_PDA) || defined(CONFIG_USB_SERIAL_KEYSPAN_PDA_MODULE)
#define KEYSPAN
#undef KEYSPAN
#if defined(CONFIG_USB_SERIAL_XIRCOM) || defined(CONFIG_USB_SERIAL_XIRCOM_MODULE)
#define XIRCOM
#undef XIRCOM
#define DRIVER_VERSION "v1.1"
#define DRIVER_AUTHOR "Brian Warner <warner@lothar.com>"
#define DRIVER_DESC "USB Keyspan PDA Converter driver"
struct keyspan_pda_private ;
#define KEYSPAN_VENDOR_ID		0x06cd
#define KEYSPAN_PDA_FAKE_ID		0x0103
#define KEYSPAN_PDA_ID			0x0104
#define XIRCOM_VENDOR_ID		0x085a
#define XIRCOM_FAKE_ID			0x8027
#define ENTREGRA_VENDOR_ID		0x1645
#define ENTREGRA_FAKE_ID		0x8093
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver keyspan_pda_driver = ;
static const struct usb_device_id id_table_std[] = ;
static const struct usb_device_id id_table_fake[] = ;
static const struct usb_device_id id_table_fake_xircom[] = ;
static void keyspan_pda_wakeup_write(struct work_struct *work)
static void keyspan_pda_request_unthrottle(struct work_struct *work)
static void keyspan_pda_rx_interrupt(struct urb *urb)
static void keyspan_pda_rx_throttle(struct tty_struct *tty)
static void keyspan_pda_rx_unthrottle(struct tty_struct *tty)
static speed_t keyspan_pda_setbaud(struct usb_serial *serial, speed_t baud)
static void keyspan_pda_break_ctl(struct tty_struct *tty, int break_state)
static void keyspan_pda_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int keyspan_pda_get_modem_info(struct usb_serial *serial,
unsigned char *value)
static int keyspan_pda_set_modem_info(struct usb_serial *serial,
unsigned char value)
static int keyspan_pda_tiocmget(struct tty_struct *tty)
static int keyspan_pda_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int keyspan_pda_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count)
static void keyspan_pda_write_bulk_callback(struct urb *urb)
static int keyspan_pda_write_room(struct tty_struct *tty)
static int keyspan_pda_chars_in_buffer(struct tty_struct *tty)
static void keyspan_pda_dtr_rts(struct usb_serial_port *port, int on)
static int keyspan_pda_open(struct tty_struct *tty,
struct usb_serial_port *port)
static void keyspan_pda_close(struct usb_serial_port *port)
static int keyspan_pda_fake_startup(struct usb_serial *serial)
MODULE_FIRMWARE("keyspan_pda/keyspan_pda.fw");
MODULE_FIRMWARE("keyspan_pda/xircom_pgs.fw");
static int keyspan_pda_startup(struct usb_serial *serial)
static void keyspan_pda_release(struct usb_serial *serial)
static struct usb_serial_driver keyspan_pda_fake_device = ;
static struct usb_serial_driver xircom_pgs_fake_device = ;
static struct usb_serial_driver keyspan_pda_device = ;
static int __init keyspan_pda_init(void)
static void __exit keyspan_pda_exit(void)
module_init(keyspan_pda_init);
module_exit(keyspan_pda_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
