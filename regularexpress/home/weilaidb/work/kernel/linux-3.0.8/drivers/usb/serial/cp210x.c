#define DRIVER_VERSION "v0.09"
#define DRIVER_DESC "Silicon Labs CP210x RS232 serial adaptor driver"
static int cp210x_open(struct tty_struct *tty, struct usb_serial_port *);
static void cp210x_close(struct usb_serial_port *);
static void cp210x_get_termios(struct tty_struct *,
struct usb_serial_port *port);
static void cp210x_get_termios_port(struct usb_serial_port *port,
unsigned int *cflagp, unsigned int *baudp);
static void cp210x_set_termios(struct tty_struct *, struct usb_serial_port *,
struct ktermios*);
static int cp210x_tiocmget(struct tty_struct *);
static int cp210x_tiocmset(struct tty_struct *, unsigned int, unsigned int);
static int cp210x_tiocmset_port(struct usb_serial_port *port,
unsigned int, unsigned int);
static void cp210x_break_ctl(struct tty_struct *, int);
static int cp210x_startup(struct usb_serial *);
static void cp210x_dtr_rts(struct usb_serial_port *p, int on);
static int debug;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver cp210x_driver = ;
static struct usb_serial_driver cp210x_device = ;
#define REQTYPE_HOST_TO_DEVICE	0x41
#define REQTYPE_DEVICE_TO_HOST	0xc1
#define CP210X_IFC_ENABLE	0x00
#define CP210X_SET_BAUDDIV	0x01
#define CP210X_GET_BAUDDIV	0x02
#define CP210X_SET_LINE_CTL	0x03
#define CP210X_GET_LINE_CTL	0x04
#define CP210X_SET_BREAK	0x05
#define CP210X_IMM_CHAR		0x06
#define CP210X_SET_MHS		0x07
#define CP210X_GET_MDMSTS	0x08
#define CP210X_SET_XON		0x09
#define CP210X_SET_XOFF		0x0A
#define CP210X_SET_EVENTMASK	0x0B
#define CP210X_GET_EVENTMASK	0x0C
#define CP210X_SET_CHAR		0x0D
#define CP210X_GET_CHARS	0x0E
#define CP210X_GET_PROPS	0x0F
#define CP210X_GET_COMM_STATUS	0x10
#define CP210X_RESET		0x11
#define CP210X_PURGE		0x12
#define CP210X_SET_FLOW		0x13
#define CP210X_GET_FLOW		0x14
#define CP210X_EMBED_EVENTS	0x15
#define CP210X_GET_EVENTSTATE	0x16
#define CP210X_SET_CHARS	0x19
#define UART_ENABLE		0x0001
#define UART_DISABLE		0x0000
#define BAUD_RATE_GEN_FREQ	0x384000
#define BITS_DATA_MASK		0X0f00
#define BITS_DATA_5		0X0500
#define BITS_DATA_6		0X0600
#define BITS_DATA_7		0X0700
#define BITS_DATA_8		0X0800
#define BITS_DATA_9		0X0900
#define BITS_PARITY_MASK	0x00f0
#define BITS_PARITY_NONE	0x0000
#define BITS_PARITY_ODD		0x0010
#define BITS_PARITY_EVEN	0x0020
#define BITS_PARITY_MARK	0x0030
#define BITS_PARITY_SPACE	0x0040
#define BITS_STOP_MASK		0x000f
#define BITS_STOP_1		0x0000
#define BITS_STOP_1_5		0x0001
#define BITS_STOP_2		0x0002
#define BREAK_ON		0x0001
#define BREAK_OFF		0x0000
#define CONTROL_DTR		0x0001
#define CONTROL_RTS		0x0002
#define CONTROL_CTS		0x0010
#define CONTROL_DSR		0x0020
#define CONTROL_RING		0x0040
#define CONTROL_DCD		0x0080
#define CONTROL_WRITE_DTR	0x0100
#define CONTROL_WRITE_RTS	0x0200
static int cp210x_get_config(struct usb_serial_port *port, u8 request,
unsigned int *data, int size)
static int cp210x_set_config(struct usb_serial_port *port, u8 request,
unsigned int *data, int size)
static inline int cp210x_set_config_single(struct usb_serial_port *port,
u8 request, unsigned int data)
static unsigned int cp210x_quantise_baudrate(unsigned int baud)
static int cp210x_open(struct tty_struct *tty, struct usb_serial_port *port)
static void cp210x_close(struct usb_serial_port *port)
static void cp210x_get_termios(struct tty_struct *tty,
struct usb_serial_port *port)
static void cp210x_get_termios_port(struct usb_serial_port *port,
unsigned int *cflagp, unsigned int *baudp)
static void cp210x_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int cp210x_tiocmset (struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int cp210x_tiocmset_port(struct usb_serial_port *port,
unsigned int set, unsigned int clear)
static void cp210x_dtr_rts(struct usb_serial_port *p, int on)
static int cp210x_tiocmget (struct tty_struct *tty)
static void cp210x_break_ctl (struct tty_struct *tty, int break_state)
static int cp210x_startup(struct usb_serial *serial)
static int __init cp210x_init(void)
static void __exit cp210x_exit(void)
module_init(cp210x_init);
module_exit(cp210x_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable verbose debugging messages");
