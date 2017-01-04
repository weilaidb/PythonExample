static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct symbol_private ;
static void symbol_int_callback(struct urb *urb)
static int symbol_open(struct tty_struct *tty, struct usb_serial_port *port)
static void symbol_close(struct usb_serial_port *port)
static void symbol_throttle(struct tty_struct *tty)
static void symbol_unthrottle(struct tty_struct *tty)
static int symbol_startup(struct usb_serial *serial)
static void symbol_disconnect(struct usb_serial *serial)
static void symbol_release(struct usb_serial *serial)
static struct usb_driver symbol_driver = ;
static struct usb_serial_driver symbol_device = ;
static int __init symbol_init(void)
static void __exit symbol_exit(void)
module_init(symbol_init);
module_exit(symbol_exit);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
