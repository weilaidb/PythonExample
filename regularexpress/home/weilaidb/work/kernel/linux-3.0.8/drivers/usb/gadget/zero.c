#define DRIVER_VERSION		"Cinco de Mayo 2008"
static const char longname[] = "Gadget Zero";
unsigned buflen = 4096;
module_param(buflen, uint, 0);
static int loopdefault = 0;
module_param(loopdefault, bool, S_IRUGO|S_IWUSR);
#define DRIVER_VENDOR_NUM	0x0525
#define DRIVER_PRODUCT_NUM	0xa4a0
#define DEFAULT_AUTORESUME	0
#define DRIVER_VENDOR_NUM	0x1a0a
#define DRIVER_PRODUCT_NUM	0xbadd
#define DEFAULT_AUTORESUME	5
unsigned autoresume = DEFAULT_AUTORESUME;
module_param(autoresume, uint, S_IRUGO);
MODULE_PARM_DESC(autoresume, "zero, or seconds before remote wakeup");
static struct usb_device_descriptor device_desc = ;
static struct usb_otg_descriptor otg_descriptor = ;
const struct usb_descriptor_header *otg_desc[] = ;
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
#define STRING_SERIAL_IDX		2
static char manufacturer[50];
static char serial[] = "0123456789.0123456789.0123456789";
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *dev_strings[] = ;
struct usb_request *alloc_ep_req(struct usb_ep *ep)
void free_ep_req(struct usb_ep *ep, struct usb_request *req)
static void disable_ep(struct usb_composite_dev *cdev, struct usb_ep *ep)
void disable_endpoints(struct usb_composite_dev *cdev,
struct usb_ep *in, struct usb_ep *out)
static struct timer_list	autoresume_timer;
static void zero_autoresume(unsigned long _c)
static void zero_suspend(struct usb_composite_dev *cdev)
static void zero_resume(struct usb_composite_dev *cdev)
static int __init zero_bind(struct usb_composite_dev *cdev)
static int zero_unbind(struct usb_composite_dev *cdev)
static struct usb_composite_driver zero_driver = ;
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);
