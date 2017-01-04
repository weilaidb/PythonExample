static int debug;
#define AIRCABLE_VID		0x16CA
#define AIRCABLE_USB_PID	0x1502
#define HCI_HEADER_LENGTH	0x4
#define TX_HEADER_0		0x20
#define TX_HEADER_1		0x29
#define RX_HEADER_0		0x00
#define RX_HEADER_1		0x20
#define HCI_COMPLETE_FRAME	64
#define THROTTLED		0x01
#define ACTUALLY_THROTTLED	0x02
#define DRIVER_VERSION "v2.0"
#define DRIVER_AUTHOR "Naranjo, Manuel Francisco <naranjo.manuel@gmail.com>, Johan Hovold <jhovold@gmail.com>"
#define DRIVER_DESC "AIRcable USB Driver"
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static int aircable_prepare_write_buffer(struct usb_serial_port *port,
void *dest, size_t size)
static int aircable_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int aircable_process_packet(struct tty_struct *tty,
struct usb_serial_port *port, int has_headers,
char *packet, int len)
static void aircable_process_read_urb(struct urb *urb)
static struct usb_driver aircable_driver = ;
static struct usb_serial_driver aircable_device = ;
static int __init aircable_init(void)
static void __exit aircable_exit(void)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_init(aircable_init);
module_exit(aircable_exit);
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
