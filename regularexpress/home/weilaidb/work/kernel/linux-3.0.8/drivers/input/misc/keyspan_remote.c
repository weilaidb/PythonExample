#define DRIVER_VERSION	"v0.1"
#define DRIVER_AUTHOR	"Michael Downey <downey@zymeta.com>"
#define DRIVER_DESC	"Driver for the USB Keyspan remote control."
#define DRIVER_LICENSE	"GPL"
static int debug;
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "Enable extra debug messages and information");
#define USB_KEYSPAN_VENDOR_ID		0x06CD
#define USB_KEYSPAN_PRODUCT_UIA11	0x0202
#define ZERO		0x18
#define ZERO_MASK	0x1F
#define ONE		0x3C
#define ONE_MASK	0x3F
#define SYNC		0x3F80
#define SYNC_MASK	0x3FFF
#define STOP		0x00
#define STOP_MASK	0x1F
#define GAP		0xFF
#define RECV_SIZE	8
static const unsigned short keyspan_key_table[] = ;
static struct usb_device_id keyspan_table[] = ;
struct keyspan_message ;
struct bit_tester ;
struct usb_keyspan ;
static struct usb_driver keyspan_driver;
static void keyspan_print(struct usb_keyspan* dev)
static int keyspan_load_tester(struct usb_keyspan* dev, int bits_needed)
static void keyspan_report_button(struct usb_keyspan *remote, int button, int press)
static void keyspan_check_data(struct usb_keyspan *remote)
static int keyspan_setup(struct usb_device* dev)
static void keyspan_irq_recv(struct urb *urb)
static int keyspan_open(struct input_dev *dev)
static void keyspan_close(struct input_dev *dev)
static struct usb_endpoint_descriptor *keyspan_get_in_endpoint(struct usb_host_interface *iface)
static int keyspan_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void keyspan_disconnect(struct usb_interface *interface)
static struct usb_driver keyspan_driver =
;
static int __init usb_keyspan_init(void)
static void __exit usb_keyspan_exit(void)
module_init(usb_keyspan_init);
module_exit(usb_keyspan_exit);
MODULE_DEVICE_TABLE(usb, keyspan_table);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
