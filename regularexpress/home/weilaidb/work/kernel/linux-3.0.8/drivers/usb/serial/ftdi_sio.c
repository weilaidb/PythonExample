#define DRIVER_VERSION "v1.6.0"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com>, Bill Ryder <bryder@sgi.com>, Kuba Ober <kuba@mareimbrium.org>, Andreas Mohr, Johan Hovold <jhovold@gmail.com>"
#define DRIVER_DESC "USB FTDI Serial Converters Driver"
static int debug;
static __u16 vendor = FTDI_VID;
static __u16 product;
struct ftdi_private ;
struct ftdi_sio_quirk ;
static int   ftdi_jtag_probe(struct usb_serial *serial);
static int   ftdi_mtxorb_hack_setup(struct usb_serial *serial);
static int   ftdi_NDI_device_setup(struct usb_serial *serial);
static int   ftdi_stmclite_probe(struct usb_serial *serial);
static int   ftdi_8u2232c_probe(struct usb_serial *serial);
static void  ftdi_USB_UIRT_setup(struct ftdi_private *priv);
static void  ftdi_HE_TIRA1_setup(struct ftdi_private *priv);
static struct ftdi_sio_quirk ftdi_jtag_quirk = ;
static struct ftdi_sio_quirk ftdi_mtxorb_hack_quirk = ;
static struct ftdi_sio_quirk ftdi_NDI_device_quirk = ;
static struct ftdi_sio_quirk ftdi_USB_UIRT_quirk = ;
static struct ftdi_sio_quirk ftdi_HE_TIRA1_quirk = ;
static struct ftdi_sio_quirk ftdi_stmclite_quirk = ;
static struct ftdi_sio_quirk ftdi_8u2232c_quirk = ;
static struct usb_device_id id_table_combined [] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver ftdi_driver = ;
static const char *ftdi_chip_name[] = ;
#define FTDI_STATUS_B0_MASK	(FTDI_RS0_CTS | FTDI_RS0_DSR | FTDI_RS0_RI | FTDI_RS0_RLSD)
#define FTDI_STATUS_B1_MASK	(FTDI_RS_BI)
#define FTDI_IMPL_ASYNC_FLAGS = (ASYNC_SPD_HI | ASYNC_SPD_VHI \
| ASYNC_SPD_CUST | ASYNC_SPD_SHI | ASYNC_SPD_WARP)
static int  ftdi_sio_probe(struct usb_serial *serial,
const struct usb_device_id *id);
static int  ftdi_sio_port_probe(struct usb_serial_port *port);
static int  ftdi_sio_port_remove(struct usb_serial_port *port);
static int  ftdi_open(struct tty_struct *tty, struct usb_serial_port *port);
static void ftdi_close(struct usb_serial_port *port);
static void ftdi_dtr_rts(struct usb_serial_port *port, int on);
static void ftdi_process_read_urb(struct urb *urb);
static int ftdi_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size);
static void ftdi_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old);
static int  ftdi_tiocmget(struct tty_struct *tty);
static int  ftdi_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  ftdi_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void ftdi_break_ctl(struct tty_struct *tty, int break_state);
static unsigned short int ftdi_232am_baud_base_to_divisor(int baud, int base);
static unsigned short int ftdi_232am_baud_to_divisor(int baud);
static __u32 ftdi_232bm_baud_base_to_divisor(int baud, int base);
static __u32 ftdi_232bm_baud_to_divisor(int baud);
static __u32 ftdi_2232h_baud_base_to_divisor(int baud, int base);
static __u32 ftdi_2232h_baud_to_divisor(int baud);
static struct usb_serial_driver ftdi_sio_device = ;
#define WDR_TIMEOUT 5000
#define WDR_SHORT_TIMEOUT 1000
#define HIGH 1
#define LOW 0
static unsigned short int ftdi_232am_baud_base_to_divisor(int baud, int base)
static unsigned short int ftdi_232am_baud_to_divisor(int baud)
static __u32 ftdi_232bm_baud_base_to_divisor(int baud, int base)
static __u32 ftdi_232bm_baud_to_divisor(int baud)
static __u32 ftdi_2232h_baud_base_to_divisor(int baud, int base)
static __u32 ftdi_2232h_baud_to_divisor(int baud)
#define set_mctrl(port, set)		update_mctrl((port), (set), 0)
#define clear_mctrl(port, clear)	update_mctrl((port), 0, (clear))
static int update_mctrl(struct usb_serial_port *port, unsigned int set,
unsigned int clear)
static __u32 get_ftdi_divisor(struct tty_struct *tty,
struct usb_serial_port *port)
static int change_speed(struct tty_struct *tty, struct usb_serial_port *port)
static int write_latency_timer(struct usb_serial_port *port)
static int read_latency_timer(struct usb_serial_port *port)
static int get_serial_info(struct usb_serial_port *port,
struct serial_struct __user *retinfo)
static int set_serial_info(struct tty_struct *tty,
struct usb_serial_port *port, struct serial_struct __user *newinfo)
static int get_lsr_info(struct usb_serial_port *port,
struct serial_struct __user *retinfo)
static void ftdi_determine_type(struct usb_serial_port *port)
static void ftdi_set_max_packet_size(struct usb_serial_port *port)
static ssize_t show_latency_timer(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_latency_timer(struct device *dev,
struct device_attribute *attr, const char *valbuf,
size_t count)
static ssize_t store_event_char(struct device *dev,
struct device_attribute *attr, const char *valbuf, size_t count)
static DEVICE_ATTR(latency_timer, S_IWUSR | S_IRUGO, show_latency_timer,
store_latency_timer);
static DEVICE_ATTR(event_char, S_IWUSR, NULL, store_event_char);
static int create_sysfs_attrs(struct usb_serial_port *port)
static void remove_sysfs_attrs(struct usb_serial_port *port)
static int ftdi_sio_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int ftdi_sio_port_probe(struct usb_serial_port *port)
static void ftdi_USB_UIRT_setup(struct ftdi_private *priv)
static void ftdi_HE_TIRA1_setup(struct ftdi_private *priv)
static int ndi_latency_timer = 1;
static int ftdi_NDI_device_setup(struct usb_serial *serial)
static int ftdi_jtag_probe(struct usb_serial *serial)
static int ftdi_8u2232c_probe(struct usb_serial *serial)
static int ftdi_stmclite_probe(struct usb_serial *serial)
static int ftdi_mtxorb_hack_setup(struct usb_serial *serial)
static void ftdi_sio_priv_release(struct kref *k)
static int ftdi_sio_port_remove(struct usb_serial_port *port)
static int ftdi_open(struct tty_struct *tty, struct usb_serial_port *port)
static void ftdi_dtr_rts(struct usb_serial_port *port, int on)
static void ftdi_close(struct usb_serial_port *port)
static int ftdi_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
#define FTDI_RS_ERR_MASK (FTDI_RS_BI | FTDI_RS_PE | FTDI_RS_FE | FTDI_RS_OE)
static int ftdi_process_packet(struct tty_struct *tty,
struct usb_serial_port *port, struct ftdi_private *priv,
char *packet, int len)
static void ftdi_process_read_urb(struct urb *urb)
static void ftdi_break_ctl(struct tty_struct *tty, int break_state)
static void ftdi_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int ftdi_tiocmget(struct tty_struct *tty)
static int ftdi_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int ftdi_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int __init ftdi_init(void)
static void __exit ftdi_exit(void)
module_init(ftdi_init);
module_exit(ftdi_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(vendor, ushort, 0);
MODULE_PARM_DESC(vendor, "User specified vendor ID (default="
__MODULE_STRING(FTDI_VID)")");
module_param(product, ushort, 0);
MODULE_PARM_DESC(product, "User specified product ID");
module_param(ndi_latency_timer, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ndi_latency_timer, "NDI device latency timer override");
