#define __LINUX_USB_SERIAL_H
#define SERIAL_TTY_MAJOR	188
#define SERIAL_TTY_MINORS	254
#define SERIAL_TTY_NO_MINOR	255
#define MAX_NUM_PORTS		8
#define RELEVANT_IFLAG(iflag)	(iflag & (IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK))
enum port_dev_state ;
#define USB_SERIAL_WRITE_BUSY	0
struct usb_serial_port ;
#define to_usb_serial_port(d) container_of(d, struct usb_serial_port, dev)
static inline void *usb_get_serial_port_data(struct usb_serial_port *port)
static inline void usb_set_serial_port_data(struct usb_serial_port *port,
void *data)
struct usb_serial ;
#define to_usb_serial(d) container_of(d, struct usb_serial, kref)
static inline void *usb_get_serial_data(struct usb_serial *serial)
static inline void usb_set_serial_data(struct usb_serial *serial, void *data)
struct usb_serial_driver ;
#define to_usb_serial_driver(d) \
container_of(d, struct usb_serial_driver, driver)
extern int  usb_serial_register(struct usb_serial_driver *driver);
extern void usb_serial_deregister(struct usb_serial_driver *driver);
extern void usb_serial_port_softint(struct usb_serial_port *port);
extern int usb_serial_probe(struct usb_interface *iface,
const struct usb_device_id *id);
extern void usb_serial_disconnect(struct usb_interface *iface);
extern int usb_serial_suspend(struct usb_interface *intf, pm_message_t message);
extern int usb_serial_resume(struct usb_interface *intf);
extern int ezusb_writememory(struct usb_serial *serial, int address,
unsigned char *data, int length, __u8 bRequest);
extern int ezusb_set_reset(struct usb_serial *serial, unsigned char reset_bit);
extern void usb_serial_console_init(int debug, int minor);
extern void usb_serial_console_exit(void);
extern void usb_serial_console_disconnect(struct usb_serial *serial);
static inline void usb_serial_console_init(int debug, int minor)
static inline void usb_serial_console_exit(void)
static inline void usb_serial_console_disconnect(struct usb_serial *serial)
extern struct usb_serial *usb_serial_get_by_index(unsigned int minor);
extern void usb_serial_put(struct usb_serial *serial);
extern int usb_serial_generic_open(struct tty_struct *tty,
struct usb_serial_port *port);
extern int usb_serial_generic_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count);
extern void usb_serial_generic_close(struct usb_serial_port *port);
extern int usb_serial_generic_resume(struct usb_serial *serial);
extern int usb_serial_generic_write_room(struct tty_struct *tty);
extern int usb_serial_generic_chars_in_buffer(struct tty_struct *tty);
extern void usb_serial_generic_read_bulk_callback(struct urb *urb);
extern void usb_serial_generic_write_bulk_callback(struct urb *urb);
extern void usb_serial_generic_throttle(struct tty_struct *tty);
extern void usb_serial_generic_unthrottle(struct tty_struct *tty);
extern void usb_serial_generic_disconnect(struct usb_serial *serial);
extern void usb_serial_generic_release(struct usb_serial *serial);
extern int usb_serial_generic_register(int debug);
extern void usb_serial_generic_deregister(void);
extern int usb_serial_generic_submit_read_urb(struct usb_serial_port *port,
gfp_t mem_flags);
extern void usb_serial_generic_process_read_urb(struct urb *urb);
extern int usb_serial_generic_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size);
extern int usb_serial_handle_sysrq_char(struct usb_serial_port *port,
unsigned int ch);
extern int usb_serial_handle_break(struct usb_serial_port *port);
extern void usb_serial_handle_dcd_change(struct usb_serial_port *usb_port,
struct tty_struct *tty,
unsigned int status);
extern int usb_serial_bus_register(struct usb_serial_driver *device);
extern void usb_serial_bus_deregister(struct usb_serial_driver *device);
extern struct usb_serial_driver usb_serial_generic_device;
extern struct bus_type usb_serial_bus_type;
extern struct tty_driver *usb_serial_tty_driver;
static inline void usb_serial_debug_data(int debug,
struct device *dev,
const char *function, int size,
const unsigned char *data)
#undef dbg
#define dbg(format, arg...)						\
do  while (0)
