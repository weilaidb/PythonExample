struct f_loopback ;
static inline struct f_loopback *func_to_loop(struct usb_function *f)
static unsigned qlen = 32;
module_param(qlen, uint, 0);
MODULE_PARM_DESC(qlenn, "depth of loopback queue");
static struct usb_interface_descriptor loopback_intf = ;
static struct usb_endpoint_descriptor fs_loop_source_desc = ;
static struct usb_endpoint_descriptor fs_loop_sink_desc = ;
static struct usb_descriptor_header *fs_loopback_descs[] = ;
static struct usb_endpoint_descriptor hs_loop_source_desc = ;
static struct usb_endpoint_descriptor hs_loop_sink_desc = ;
static struct usb_descriptor_header *hs_loopback_descs[] = ;
static struct usb_string strings_loopback[] = ;
static struct usb_gadget_strings stringtab_loop = ;
static struct usb_gadget_strings *loopback_strings[] = ;
static int __init
loopback_bind(struct usb_configuration *c, struct usb_function *f)
static void
loopback_unbind(struct usb_configuration *c, struct usb_function *f)
static void loopback_complete(struct usb_ep *ep, struct usb_request *req)
static void disable_loopback(struct f_loopback *loop)
static int
enable_loopback(struct usb_composite_dev *cdev, struct f_loopback *loop)
static int loopback_set_alt(struct usb_function *f,
unsigned intf, unsigned alt)
static void loopback_disable(struct usb_function *f)
static int __init loopback_bind_config(struct usb_configuration *c)
static struct usb_configuration loopback_driver = ;
int __init loopback_add(struct usb_composite_dev *cdev, bool autoresume)
