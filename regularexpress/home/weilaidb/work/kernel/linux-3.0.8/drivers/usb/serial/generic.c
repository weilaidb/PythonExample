static int debug;
static int generic_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static __u16 vendor  = 0x05f9;
static __u16 product = 0xffff;
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "User specified USB idVendor");
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "User specified USB idProduct");
static struct usb_device_id generic_device_ids[2];
static const struct usb_device_id generic_serial_ids[] = ;
static struct usb_driver generic_driver = ;
struct usb_serial_driver usb_serial_generic_device = ;
static int generic_probe(struct usb_interface *interface,
const struct usb_device_id *id)
int usb_serial_generic_register(int _debug)
void usb_serial_generic_deregister(void)
int usb_serial_generic_open(struct tty_struct *tty, struct usb_serial_port *port)
EXPORT_SYMBOL_GPL(usb_serial_generic_open);
static void generic_cleanup(struct usb_serial_port *port)
void usb_serial_generic_close(struct usb_serial_port *port)
EXPORT_SYMBOL_GPL(usb_serial_generic_close);
int usb_serial_generic_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
static int usb_serial_generic_write_start(struct usb_serial_port *port)
int usb_serial_generic_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count)
EXPORT_SYMBOL_GPL(usb_serial_generic_write);
int usb_serial_generic_write_room(struct tty_struct *tty)
int usb_serial_generic_chars_in_buffer(struct tty_struct *tty)
int usb_serial_generic_submit_read_urb(struct usb_serial_port *port,
gfp_t mem_flags)
EXPORT_SYMBOL_GPL(usb_serial_generic_submit_read_urb);
void usb_serial_generic_process_read_urb(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_serial_generic_process_read_urb);
void usb_serial_generic_read_bulk_callback(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_serial_generic_read_bulk_callback);
void usb_serial_generic_write_bulk_callback(struct urb *urb)
EXPORT_SYMBOL_GPL(usb_serial_generic_write_bulk_callback);
void usb_serial_generic_throttle(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(usb_serial_generic_throttle);
void usb_serial_generic_unthrottle(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(usb_serial_generic_unthrottle);
int usb_serial_handle_sysrq_char(struct usb_serial_port *port, unsigned int ch)
int usb_serial_handle_sysrq_char(struct usb_serial_port *port, unsigned int ch)
EXPORT_SYMBOL_GPL(usb_serial_handle_sysrq_char);
int usb_serial_handle_break(struct usb_serial_port *port)
EXPORT_SYMBOL_GPL(usb_serial_handle_break);
void usb_serial_handle_dcd_change(struct usb_serial_port *usb_port,
struct tty_struct *tty, unsigned int status)
EXPORT_SYMBOL_GPL(usb_serial_handle_dcd_change);
int usb_serial_generic_resume(struct usb_serial *serial)
EXPORT_SYMBOL_GPL(usb_serial_generic_resume);
void usb_serial_generic_disconnect(struct usb_serial *serial)
EXPORT_SYMBOL_GPL(usb_serial_generic_disconnect);
void usb_serial_generic_release(struct usb_serial *serial)
