#define DRIVER_VENDOR_ID	0x0525
#define DRIVER_PRODUCT_ID	0xc0de
#define USB_DEBUG_MAX_PACKET_SIZE     8
#define DBGP_REQ_EP0_LEN              128
#define DBGP_REQ_LEN                  512
static struct dbgp  dbgp;
static struct usb_device_descriptor device_desc = ;
static struct usb_debug_descriptor dbg_desc = ;
static struct usb_endpoint_descriptor i_desc = ;
static struct usb_endpoint_descriptor o_desc = ;
static int dbgp_consume(char *buf, unsigned len)
static void __disable_ep(struct usb_ep *ep)
static void dbgp_disable_ep(void)
static void dbgp_complete(struct usb_ep *ep, struct usb_request *req)
static int dbgp_enable_ep_req(struct usb_ep *ep)
static int __enable_ep(struct usb_ep *ep, struct usb_endpoint_descriptor *desc)
static int dbgp_enable_ep(void)
static void dbgp_disconnect(struct usb_gadget *gadget)
static void dbgp_unbind(struct usb_gadget *gadget)
static int __init dbgp_configure_endpoints(struct usb_gadget *gadget)
static int __init dbgp_bind(struct usb_gadget *gadget)
static void dbgp_setup_complete(struct usb_ep *ep,
struct usb_request *req)
static int dbgp_setup(struct usb_gadget *gadget,
const struct usb_ctrlrequest *ctrl)
static struct usb_gadget_driver dbgp_driver = ;
static int __init dbgp_init(void)
static void __exit dbgp_exit(void)
MODULE_AUTHOR("Stephane Duverger");
MODULE_LICENSE("GPL");
module_init(dbgp_init);
module_exit(dbgp_exit);
