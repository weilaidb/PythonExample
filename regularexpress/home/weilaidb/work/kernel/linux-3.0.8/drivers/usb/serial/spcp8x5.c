#define DRIVER_VERSION	"v0.10"
#define DRIVER_DESC 	"SPCP8x5 USB to serial adaptor driver"
static int debug;
#define SPCP8x5_007_VID		0x04FC
#define SPCP8x5_007_PID		0x0201
#define SPCP8x5_008_VID		0x04fc
#define SPCP8x5_008_PID		0x0235
#define SPCP8x5_PHILIPS_VID	0x0471
#define SPCP8x5_PHILIPS_PID	0x081e
#define SPCP8x5_INTERMATIC_VID	0x04FC
#define SPCP8x5_INTERMATIC_PID	0x0204
#define SPCP8x5_835_VID		0x04fc
#define SPCP8x5_835_PID		0x0231
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct spcp8x5_usb_ctrl_arg ;
#define MCR_CONTROL_LINE_RTS		0x02
#define MCR_CONTROL_LINE_DTR		0x01
#define MCR_DTR				0x01
#define MCR_RTS				0x02
#define MSR_STATUS_LINE_DCD		0x80
#define MSR_STATUS_LINE_RI		0x40
#define MSR_STATUS_LINE_DSR		0x20
#define MSR_STATUS_LINE_CTS		0x10
#define SET_DEFAULT			0x40
#define SET_DEFAULT_TYPE		0x20
#define SET_UART_FORMAT			0x40
#define SET_UART_FORMAT_TYPE		0x21
#define SET_UART_FORMAT_SIZE_5		0x00
#define SET_UART_FORMAT_SIZE_6		0x01
#define SET_UART_FORMAT_SIZE_7		0x02
#define SET_UART_FORMAT_SIZE_8		0x03
#define SET_UART_FORMAT_STOP_1		0x00
#define SET_UART_FORMAT_STOP_2		0x04
#define SET_UART_FORMAT_PAR_NONE	0x00
#define SET_UART_FORMAT_PAR_ODD		0x10
#define SET_UART_FORMAT_PAR_EVEN	0x30
#define SET_UART_FORMAT_PAR_MASK	0xD0
#define SET_UART_FORMAT_PAR_SPACE	0x90
#define GET_UART_STATUS_TYPE		0xc0
#define GET_UART_STATUS			0x22
#define GET_UART_STATUS_MSR		0x06
#define SET_UART_STATUS			0x40
#define SET_UART_STATUS_TYPE		0x23
#define SET_UART_STATUS_MCR		0x0004
#define SET_UART_STATUS_MCR_DTR		0x01
#define SET_UART_STATUS_MCR_RTS		0x02
#define SET_UART_STATUS_MCR_LOOP	0x10
#define SET_WORKING_MODE		0x40
#define SET_WORKING_MODE_TYPE		0x24
#define SET_WORKING_MODE_U2C		0x00
#define SET_WORKING_MODE_RS485		0x01
#define SET_WORKING_MODE_PDMA		0x02
#define SET_WORKING_MODE_SPP		0x03
#define SET_FLOWCTL_CHAR		0x40
#define SET_FLOWCTL_CHAR_TYPE		0x25
#define GET_VERSION			0xc0
#define GET_VERSION_TYPE		0x26
#define SET_REGISTER			0x40
#define SET_REGISTER_TYPE		0x27
#define	GET_REGISTER			0xc0
#define GET_REGISTER_TYPE		0x28
#define SET_RAM				0x40
#define SET_RAM_TYPE			0x31
#define GET_RAM				0xc0
#define GET_RAM_TYPE			0x32
#define UART_STATE			0x08
#define UART_STATE_TRANSIENT_MASK	0x75
#define UART_DCD			0x01
#define UART_DSR			0x02
#define UART_BREAK_ERROR		0x04
#define UART_RING			0x08
#define UART_FRAME_ERROR		0x10
#define UART_PARITY_ERROR		0x20
#define UART_OVERRUN_ERROR		0x40
#define UART_CTS			0x80
enum spcp8x5_type ;
static struct usb_driver spcp8x5_driver = ;
struct spcp8x5_private ;
static int spcp8x5_startup(struct usb_serial *serial)
static void spcp8x5_release(struct usb_serial *serial)
static int spcp8x5_set_ctrlLine(struct usb_device *dev, u8 value,
enum spcp8x5_type type)
static int spcp8x5_get_msr(struct usb_device *dev, u8 *status,
enum spcp8x5_type type)
static void spcp8x5_set_workMode(struct usb_device *dev, u16 value,
u16 index, enum spcp8x5_type type)
static int spcp8x5_carrier_raised(struct usb_serial_port *port)
static void spcp8x5_dtr_rts(struct usb_serial_port *port, int on)
static void spcp8x5_init_termios(struct tty_struct *tty)
static void spcp8x5_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int spcp8x5_open(struct tty_struct *tty, struct usb_serial_port *port)
static void spcp8x5_process_read_urb(struct urb *urb)
static int spcp8x5_wait_modem_info(struct usb_serial_port *port,
unsigned int arg)
static int spcp8x5_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int spcp8x5_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int spcp8x5_tiocmget(struct tty_struct *tty)
static struct usb_serial_driver spcp8x5_device = ;
static int __init spcp8x5_init(void)
static void __exit spcp8x5_exit(void)
module_init(spcp8x5_init);
module_exit(spcp8x5_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
