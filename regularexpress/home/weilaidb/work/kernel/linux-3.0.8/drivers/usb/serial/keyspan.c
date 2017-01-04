static int debug;
#define DRIVER_VERSION "v1.1.5"
#define DRIVER_AUTHOR "Hugh Blemings <hugh@misc.nu"
#define DRIVER_DESC "Keyspan USB to Serial Converter Driver"
#define INSTAT_BUFLEN	32
#define GLOCONT_BUFLEN	64
#define INDAT49W_BUFLEN	512
struct keyspan_serial_private ;
struct keyspan_port_private ;
static int __init keyspan_init(void)
static void __exit keyspan_exit(void)
module_init(keyspan_init);
module_exit(keyspan_exit);
static void keyspan_break_ctl(struct tty_struct *tty, int break_state)
static void keyspan_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int keyspan_tiocmget(struct tty_struct *tty)
static int keyspan_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int keyspan_write(struct tty_struct *tty,
struct usb_serial_port *port, const unsigned char *buf, int count)
static void	usa26_indat_callback(struct urb *urb)
static void	usa2x_outdat_callback(struct urb *urb)
static void	usa26_inack_callback(struct urb *urb)
static void	usa26_outcont_callback(struct urb *urb)
static void	usa26_instat_callback(struct urb *urb)
static void	usa26_glocont_callback(struct urb *urb)
static void usa28_indat_callback(struct urb *urb)
static void	usa28_inack_callback(struct urb *urb)
static void	usa28_outcont_callback(struct urb *urb)
static void	usa28_instat_callback(struct urb *urb)
static void	usa28_glocont_callback(struct urb *urb)
static void	usa49_glocont_callback(struct urb *urb)
static void	usa49_instat_callback(struct urb *urb)
static void	usa49_inack_callback(struct urb *urb)
static void	usa49_indat_callback(struct urb *urb)
static void usa49wg_indat_callback(struct urb *urb)
static void usa49_outcont_callback(struct urb *urb)
static void usa90_indat_callback(struct urb *urb)
static void	usa90_instat_callback(struct urb *urb)
static void	usa90_outcont_callback(struct urb *urb)
static void	usa67_instat_callback(struct urb *urb)
static void usa67_glocont_callback(struct urb *urb)
static int keyspan_write_room(struct tty_struct *tty)
static int keyspan_open(struct tty_struct *tty, struct usb_serial_port *port)
static inline void stop_urb(struct urb *urb)
static void keyspan_dtr_rts(struct usb_serial_port *port, int on)
static void keyspan_close(struct usb_serial_port *port)
static int keyspan_fake_startup(struct usb_serial *serial)
static struct usb_endpoint_descriptor const *find_ep(struct usb_serial const *serial,
int endpoint)
static struct urb *keyspan_setup_urb(struct usb_serial *serial, int endpoint,
int dir, void *ctx, char *buf, int len,
void (*callback)(struct urb *))
static struct callbacks  keyspan_callbacks[] = ;
static void keyspan_setup_urbs(struct usb_serial *serial)
static int keyspan_usa19_calc_baud(u32 baud_rate, u32 baudclk, u8 *rate_hi,
u8 *rate_low, u8 *prescaler, int portnum)
static int keyspan_usa19hs_calc_baud(u32 baud_rate, u32 baudclk, u8 *rate_hi,
u8 *rate_low, u8 *prescaler, int portnum)
static int keyspan_usa19w_calc_baud(u32 baud_rate, u32 baudclk, u8 *rate_hi,
u8 *rate_low, u8 *prescaler, int portnum)
static int keyspan_usa28_calc_baud(u32 baud_rate, u32 baudclk, u8 *rate_hi,
u8 *rate_low, u8 *prescaler, int portnum)
static int keyspan_usa26_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
static int keyspan_usa28_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
static int keyspan_usa49_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
static int keyspan_usa90_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
static int keyspan_usa67_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
static void keyspan_send_setup(struct usb_serial_port *port, int reset_port)
static int keyspan_startup(struct usb_serial *serial)
static void keyspan_disconnect(struct usb_serial *serial)
static void keyspan_release(struct usb_serial *serial)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("keyspan/usa28.fw");
MODULE_FIRMWARE("keyspan/usa28x.fw");
MODULE_FIRMWARE("keyspan/usa28xa.fw");
MODULE_FIRMWARE("keyspan/usa28xb.fw");
MODULE_FIRMWARE("keyspan/usa19.fw");
MODULE_FIRMWARE("keyspan/usa19qi.fw");
MODULE_FIRMWARE("keyspan/mpr.fw");
MODULE_FIRMWARE("keyspan/usa19qw.fw");
MODULE_FIRMWARE("keyspan/usa18x.fw");
MODULE_FIRMWARE("keyspan/usa19w.fw");
MODULE_FIRMWARE("keyspan/usa49w.fw");
MODULE_FIRMWARE("keyspan/usa49wlc.fw");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
