#define DRIVER_VERSION	"1.61"
#define DRIVER_NAME	"streamzap"
#define DRIVER_DESC	"Streamzap Remote Control driver"
static int debug = 1;
static int debug;
#define USB_STREAMZAP_VENDOR_ID		0x0e9c
#define USB_STREAMZAP_PRODUCT_ID	0x0000
static struct usb_device_id streamzap_table[] = ;
MODULE_DEVICE_TABLE(usb, streamzap_table);
#define SZ_PULSE_MASK 0xf0
#define SZ_SPACE_MASK 0x0f
#define SZ_TIMEOUT    0xff
#define SZ_RESOLUTION 256
#define SZ_BUF_LEN 128
#define load_rc5_sz_decode()    request_module("ir-rc5-sz-decoder")
#define load_rc5_sz_decode()
enum StreamzapDecoderState ;
struct streamzap_ir ;
static int streamzap_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void streamzap_disconnect(struct usb_interface *interface);
static void streamzap_callback(struct urb *urb);
static int streamzap_suspend(struct usb_interface *intf, pm_message_t message);
static int streamzap_resume(struct usb_interface *intf);
static struct usb_driver streamzap_driver = ;
static void sz_push(struct streamzap_ir *sz, struct ir_raw_event rawir)
static void sz_push_full_pulse(struct streamzap_ir *sz,
unsigned char value)
static void sz_push_half_pulse(struct streamzap_ir *sz,
unsigned char value)
static void sz_push_full_space(struct streamzap_ir *sz,
unsigned char value)
static void sz_push_half_space(struct streamzap_ir *sz,
unsigned long value)
static void streamzap_callback(struct urb *urb)
static struct rc_dev *streamzap_init_rc_dev(struct streamzap_ir *sz)
static int __devinit streamzap_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void streamzap_disconnect(struct usb_interface *interface)
static int streamzap_suspend(struct usb_interface *intf, pm_message_t message)
static int streamzap_resume(struct usb_interface *intf)
static int __init streamzap_init(void)
static void __exit streamzap_exit(void)
module_init(streamzap_init);
module_exit(streamzap_exit);
MODULE_AUTHOR("Jarod Wilson <jarod@wilsonet.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging messages");
