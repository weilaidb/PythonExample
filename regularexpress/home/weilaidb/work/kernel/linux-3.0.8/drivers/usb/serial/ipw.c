#define DRIVER_VERSION	"v0.4"
#define DRIVER_AUTHOR	"Roelf Diedericks"
#define DRIVER_DESC	"IPWireless tty driver"
#define IPW_TTY_MAJOR	240
#define IPW_TTY_MINORS	256
#define USB_IPW_MAGIC	0x6d02
#define EVENT_BUFFER_SIZE	0xFF
#define CHAR2INT16(c1, c0)	(((u32)((c1) & 0xff) << 8) + (u32)((c0) & 0xff))
#define IPW_VID		0x0bc3
#define IPW_PID		0x0001
enum ;
#define ipw_dtb_7		0x700
#define ipw_dtb_8		0x810
#define IPW_SIO_RXCTL		0x00
#define IPW_SIO_SET_BAUD	0x01
#define IPW_SIO_SET_LINE	0x03
#define IPW_SIO_SET_PIN		0x03
#define IPW_SIO_POLL		0x08
#define IPW_SIO_INIT		0x11
#define IPW_SIO_PURGE		0x12
#define IPW_SIO_HANDFLOW	0x13
#define IPW_SIO_SETCHARS	0x13
#define IPW_PIN_SETDTR		0x101
#define IPW_PIN_SETRTS		0x202
#define IPW_PIN_CLRDTR		0x100
#define IPW_PIN_CLRRTS		0x200
#define IPW_RXBULK_ON		1
#define IPW_RXBULK_OFF		0
#define IPW_BYTES_FLOWINIT
#define IPW_DSR			((1<<4) | (1<<5))
#define IPW_CTS			((1<<5) | (1<<4))
#define IPW_WANTS_TO_SEND	0x30
static const struct usb_device_id usb_ipw_ids[] = ;
MODULE_DEVICE_TABLE(usb, usb_ipw_ids);
static struct usb_driver usb_ipw_driver = ;
static int debug;
static int ipw_open(struct tty_struct *tty, struct usb_serial_port *port)
static void ipw_dtr_rts(struct usb_serial_port *port, int on)
static void ipw_close(struct usb_serial_port *port)
static struct usb_serial_driver ipw_device = ;
static int __init usb_ipw_init(void)
static void __exit usb_ipw_exit(void)
module_init(usb_ipw_init);
module_exit(usb_ipw_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
