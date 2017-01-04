#define DRIVER_AUTHOR "Greg Kroah-Hartman, greg@kroah.com, http:
#define DRIVER_DESC "USB Serial Driver core"
static struct usb_driver usb_serial_driver = ;
static int debug;
static struct usb_serial *serial_table[SERIAL_TTY_MINORS];
static DEFINE_MUTEX(table_lock);
static LIST_HEAD(usb_serial_driver_list);
struct usb_serial *usb_serial_get_by_index(unsigned index)
static struct usb_serial *get_free_serial(struct usb_serial *serial,
int num_ports, unsigned int *minor)
static void return_serial(struct usb_serial *serial)
static void destroy_serial(struct kref *kref)
void usb_serial_put(struct usb_serial *serial)
static int serial_install(struct tty_driver *driver, struct tty_struct *tty)
static int serial_activate(struct tty_port *tport, struct tty_struct *tty)
static int serial_open(struct tty_struct *tty, struct file *filp)
static void serial_down(struct tty_port *tport)
static void serial_hangup(struct tty_struct *tty)
static void serial_close(struct tty_struct *tty, struct file *filp)
static void serial_cleanup(struct tty_struct *tty)
static int serial_write(struct tty_struct *tty, const unsigned char *buf,
int count)
static int serial_write_room(struct tty_struct *tty)
static int serial_chars_in_buffer(struct tty_struct *tty)
static void serial_throttle(struct tty_struct *tty)
static void serial_unthrottle(struct tty_struct *tty)
static int serial_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void serial_set_termios(struct tty_struct *tty, struct ktermios *old)
static int serial_break(struct tty_struct *tty, int break_state)
static int serial_proc_show(struct seq_file *m, void *v)
static int serial_proc_open(struct inode *inode, struct file *file)
static const struct file_operations serial_proc_fops = ;
static int serial_tiocmget(struct tty_struct *tty)
static int serial_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int serial_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
void usb_serial_port_softint(struct usb_serial_port *port)
EXPORT_SYMBOL_GPL(usb_serial_port_softint);
static void usb_serial_port_work(struct work_struct *work)
static void kill_traffic(struct usb_serial_port *port)
static void port_release(struct device *dev)
static struct usb_serial *create_serial(struct usb_device *dev,
struct usb_interface *interface,
struct usb_serial_driver *driver)
static const struct usb_device_id *match_dynamic_id(struct usb_interface *intf,
struct usb_serial_driver *drv)
static const struct usb_device_id *get_iface_id(struct usb_serial_driver *drv,
struct usb_interface *intf)
static struct usb_serial_driver *search_serial_device(
struct usb_interface *iface)
static int serial_carrier_raised(struct tty_port *port)
static void serial_dtr_rts(struct tty_port *port, int on)
static const struct tty_port_operations serial_port_ops = ;
int usb_serial_probe(struct usb_interface *interface,
const struct usb_device_id *id)
EXPORT_SYMBOL_GPL(usb_serial_probe);
void usb_serial_disconnect(struct usb_interface *interface)
EXPORT_SYMBOL_GPL(usb_serial_disconnect);
int usb_serial_suspend(struct usb_interface *intf, pm_message_t message)
EXPORT_SYMBOL(usb_serial_suspend);
int usb_serial_resume(struct usb_interface *intf)
EXPORT_SYMBOL(usb_serial_resume);
static const struct tty_operations serial_ops = ;
struct tty_driver *usb_serial_tty_driver;
static int __init usb_serial_init(void)
static void __exit usb_serial_exit(void)
module_init(usb_serial_init);
module_exit(usb_serial_exit);
#define set_to_generic_if_null(type, function)				\
do  while (0)
static void fixup_generic(struct usb_serial_driver *device)
int usb_serial_register(struct usb_serial_driver *driver)
EXPORT_SYMBOL_GPL(usb_serial_register);
void usb_serial_deregister(struct usb_serial_driver *device)
EXPORT_SYMBOL_GPL(usb_serial_deregister);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
