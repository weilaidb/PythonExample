static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver navman_driver = ;
static void navman_read_int_callback(struct urb *urb)
static int navman_open(struct tty_struct *tty, struct usb_serial_port *port)
static void navman_close(struct usb_serial_port *port)
static int navman_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static struct usb_serial_driver navman_device = ;
static int __init navman_init(void)
static void __exit navman_exit(void)
module_init(navman_init);
module_exit(navman_exit);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
