#define DRIVER_VERSION		"v0.6"
#define DRIVER_AUTHOR		"Daniel Ritz <daniel.ritz@gmx.ch>"
#define DRIVER_DESC		"USB Touchscreen Driver"
static int swap_xy;
module_param(swap_xy, bool, 0644);
MODULE_PARM_DESC(swap_xy, "If set X and Y axes are swapped.");
static int hwcalib_xy;
module_param(hwcalib_xy, bool, 0644);
MODULE_PARM_DESC(hwcalib_xy, "If set hw-calibrated X/Y are used if available");
struct usbtouch_usb;
struct usbtouch_device_info ;
struct usbtouch_usb ;
enum ;
#define USB_DEVICE_HID_CLASS(vend, prod) \
.match_flags = USB_DEVICE_ID_MATCH_INT_CLASS \
| USB_DEVICE_ID_MATCH_INT_PROTOCOL \
| USB_DEVICE_ID_MATCH_DEVICE, \
.idVendor = (vend), \
.idProduct = (prod), \
.bInterfaceClass = USB_INTERFACE_CLASS_HID, \
.bInterfaceProtocol = USB_INTERFACE_PROTOCOL_MOUSE
static const struct usb_device_id usbtouch_devices[] = ;
static int e2i_init(struct usbtouch_usb *usbtouch)
static int e2i_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define MULTI_PACKET
#define EGALAX_PKT_TYPE_MASK		0xFE
#define EGALAX_PKT_TYPE_REPT		0x80
#define EGALAX_PKT_TYPE_DIAG		0x0A
static int egalax_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int egalax_get_pkt_len(unsigned char *buf, int len)
static int panjit_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define MTOUCHUSB_ASYNC_REPORT          1
#define MTOUCHUSB_RESET                 7
#define MTOUCHUSB_REQ_CTRLLR_ID         10
static int mtouch_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int mtouch_init(struct usbtouch_usb *usbtouch)
static int itm_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define MULTI_PACKET
static int eturbo_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int eturbo_get_pkt_len(unsigned char *buf, int len)
static int gunze_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define TSC10_RATE_POINT	0x50
#define TSC10_RATE_30		0x40
#define TSC10_RATE_50		0x41
#define TSC10_RATE_80		0x42
#define TSC10_RATE_100		0x43
#define TSC10_RATE_130		0x44
#define TSC10_RATE_150		0x45
#define TSC10_CMD_RESET		0x55
#define TSC10_CMD_RATE		0x05
#define TSC10_CMD_DATA1		0x01
static int dmc_tsc10_init(struct usbtouch_usb *usbtouch)
static int dmc_tsc10_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int irtouch_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int tc45usb_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define MULTI_PACKET
static int idealtek_get_pkt_len(unsigned char *buf, int len)
static int idealtek_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int general_touch_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int gotop_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int jastec_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
static int zytronic_read_data(struct usbtouch_usb *dev, unsigned char *pkt)
#define NEXIO_TIMEOUT	5000
#define NEXIO_BUFSIZE	1024
#define NEXIO_THRESHOLD	50
struct nexio_priv ;
struct nexio_touch_packet  __attribute__ ((packed));
static unsigned char nexio_ack_pkt[2] = ;
static unsigned char nexio_init_pkt[4] = ;
static void nexio_ack_complete(struct urb *urb)
static int nexio_alloc(struct usbtouch_usb *usbtouch)
static int nexio_init(struct usbtouch_usb *usbtouch)
static void nexio_exit(struct usbtouch_usb *usbtouch)
static int nexio_read_data(struct usbtouch_usb *usbtouch, unsigned char *pkt)
static void usbtouch_process_multi(struct usbtouch_usb *usbtouch,
unsigned char *pkt, int len);
static struct usbtouch_device_info usbtouch_dev_info[] = ;
static void usbtouch_process_pkt(struct usbtouch_usb *usbtouch,
unsigned char *pkt, int len)
static void usbtouch_process_multi(struct usbtouch_usb *usbtouch,
unsigned char *pkt, int len)
static void usbtouch_irq(struct urb *urb)
static int usbtouch_open(struct input_dev *input)
static void usbtouch_close(struct input_dev *input)
static int usbtouch_suspend
(struct usb_interface *intf, pm_message_t message)
static int usbtouch_resume(struct usb_interface *intf)
static int usbtouch_reset_resume(struct usb_interface *intf)
static void usbtouch_free_buffers(struct usb_device *udev,
struct usbtouch_usb *usbtouch)
static struct usb_endpoint_descriptor *
usbtouch_get_input_endpoint(struct usb_host_interface *interface)
static int usbtouch_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usbtouch_disconnect(struct usb_interface *intf)
MODULE_DEVICE_TABLE(usb, usbtouch_devices);
static struct usb_driver usbtouch_driver = ;
static int __init usbtouch_init(void)
static void __exit usbtouch_cleanup(void)
module_init(usbtouch_init);
module_exit(usbtouch_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_ALIAS("touchkitusb");
MODULE_ALIAS("itmtouch");
MODULE_ALIAS("mtouchusb");
