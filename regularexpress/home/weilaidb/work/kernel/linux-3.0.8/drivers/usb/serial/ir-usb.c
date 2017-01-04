#define DRIVER_VERSION "v0.5"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com>, Johan Hovold <jhovold@gmail.com>"
#define DRIVER_DESC "USB IR Dongle driver"
static int debug;
static int buffer_size;
static int xbof = -1;
static int  ir_startup (struct usb_serial *serial);
static int  ir_open(struct tty_struct *tty, struct usb_serial_port *port);
static int ir_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size);
static void ir_process_read_urb(struct urb *urb);
static void ir_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios);
static u8 ir_baud;
static u8 ir_xbof;
static u8 ir_add_bof;
static const struct usb_device_id ir_id_table[] = ;
MODULE_DEVICE_TABLE(usb, ir_id_table);
static struct usb_driver ir_driver = ;
static struct usb_serial_driver ir_device = ;
static inline void irda_usb_dump_class_desc(struct usb_irda_cs_descriptor *desc)
static struct usb_irda_cs_descriptor *
irda_usb_find_class_desc(struct usb_device *dev, unsigned int ifnum)
static u8 ir_xbof_change(u8 xbof)
static int ir_startup(struct usb_serial *serial)
static int ir_open(struct tty_struct *tty, struct usb_serial_port *port)
static int ir_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
static void ir_process_read_urb(struct urb *urb)
static void ir_set_termios_callback(struct urb *urb)
static void ir_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int __init ir_init(void)
static void __exit ir_exit(void)
module_init(ir_init);
module_exit(ir_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(xbof, int, 0);
MODULE_PARM_DESC(xbof, "Force specific number of XBOFs");
module_param(buffer_size, int, 0);
MODULE_PARM_DESC(buffer_size, "Size of the transfer buffers");
