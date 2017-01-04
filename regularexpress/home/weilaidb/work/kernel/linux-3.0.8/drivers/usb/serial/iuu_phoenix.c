static int debug = 1;
static int debug;
#define DRIVER_VERSION "v0.12"
#define DRIVER_DESC "Infinity USB Unlimited Phoenix driver"
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver iuu_driver = ;
static int boost = 100;
static int clockmode = 1;
static int cdmode = 1;
static int iuu_cardin;
static int iuu_cardout;
static int xmas;
static int vcc_default = 5;
static void read_rxcmd_callback(struct urb *urb);
struct iuu_private ;
static void iuu_free_buf(struct iuu_private *priv)
static int iuu_alloc_buf(struct iuu_private *priv)
static int iuu_startup(struct usb_serial *serial)
static void iuu_release(struct usb_serial *serial)
static int iuu_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int iuu_tiocmget(struct tty_struct *tty)
static void iuu_rxcmd(struct urb *urb)
static int iuu_reset(struct usb_serial_port *port, u8 wt)
static void iuu_update_status_callback(struct urb *urb)
static void iuu_status_callback(struct urb *urb)
static int iuu_status(struct usb_serial_port *port)
static int bulk_immediate(struct usb_serial_port *port, u8 *buf, u8 count)
static int read_immediate(struct usb_serial_port *port, u8 *buf, u8 count)
static int iuu_led(struct usb_serial_port *port, unsigned int R,
unsigned int G, unsigned int B, u8 f)
static void iuu_rgbf_fill_buffer(u8 *buf, u8 r1, u8 r2, u8 g1, u8 g2, u8 b1,
u8 b2, u8 freq)
static void iuu_led_activity_on(struct urb *urb)
static void iuu_led_activity_off(struct urb *urb)
static int iuu_clk(struct usb_serial_port *port, int dwFrq)
static int iuu_uart_flush(struct usb_serial_port *port)
static void read_buf_callback(struct urb *urb)
static int iuu_bulk_write(struct usb_serial_port *port)
static int iuu_read_buf(struct usb_serial_port *port, int len)
static void iuu_uart_read_callback(struct urb *urb)
static int iuu_uart_write(struct tty_struct *tty, struct usb_serial_port *port,
const u8 *buf, int count)
static void read_rxcmd_callback(struct urb *urb)
static int iuu_uart_on(struct usb_serial_port *port)
static int iuu_uart_off(struct usb_serial_port *port)
static int iuu_uart_baud(struct usb_serial_port *port, u32 baud_base,
u32 *actual, u8 parity)
static void iuu_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void iuu_close(struct usb_serial_port *port)
static void iuu_init_termios(struct tty_struct *tty)
static int iuu_open(struct tty_struct *tty, struct usb_serial_port *port)
static int iuu_vcc_set(struct usb_serial_port *port, unsigned int vcc)
static ssize_t show_vcc_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_vcc_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vcc_mode, S_IRUSR | S_IWUSR, show_vcc_mode,
store_vcc_mode);
static int iuu_create_sysfs_attrs(struct usb_serial_port *port)
static int iuu_remove_sysfs_attrs(struct usb_serial_port *port)
static struct usb_serial_driver iuu_device = ;
static int __init iuu_init(void)
static void __exit iuu_exit(void)
module_init(iuu_init);
module_exit(iuu_exit);
MODULE_AUTHOR("Alain Degreffe eczema@ecze.com");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(xmas, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(xmas, "Xmas colors enabled or not");
module_param(boost, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(boost, "Card overclock boost (in percent 100-500)");
module_param(clockmode, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(clockmode, "Card clock mode (1=3.579 MHz, 2=3.680 MHz, "
"3=6 Mhz)");
module_param(cdmode, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(cdmode, "Card detect mode (0=none, 1=CD, 2=!CD, 3=DSR, "
"4=!DSR, 5=CTS, 6=!CTS, 7=RING, 8=!RING)");
module_param(vcc_default, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(vcc_default, "Set default VCC (either 3 for 3.3V or 5 "
"for 5V). Default to 5.");
