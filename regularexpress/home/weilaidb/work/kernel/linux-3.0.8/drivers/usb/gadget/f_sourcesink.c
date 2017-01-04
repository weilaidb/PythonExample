struct f_sourcesink ;
static inline struct f_sourcesink *func_to_ss(struct usb_function *f)
static unsigned pattern;
module_param(pattern, uint, 0);
MODULE_PARM_DESC(pattern, "0 = all zeroes, 1 = mod63 ");
static struct usb_interface_descriptor source_sink_intf = ;
static struct usb_endpoint_descriptor fs_source_desc = ;
static struct usb_endpoint_descriptor fs_sink_desc = ;
static struct usb_descriptor_header *fs_source_sink_descs[] = ;
static struct usb_endpoint_descriptor hs_source_desc = ;
static struct usb_endpoint_descriptor hs_sink_desc = ;
static struct usb_descriptor_header *hs_source_sink_descs[] = ;
static struct usb_string strings_sourcesink[] = ;
static struct usb_gadget_strings stringtab_sourcesink = ;
static struct usb_gadget_strings *sourcesink_strings[] = ;
static int __init
sourcesink_bind(struct usb_configuration *c, struct usb_function *f)
static void
sourcesink_unbind(struct usb_configuration *c, struct usb_function *f)
static int check_read_data(struct f_sourcesink *ss, struct usb_request *req)
static void reinit_write_data(struct usb_ep *ep, struct usb_request *req)
static void source_sink_complete(struct usb_ep *ep, struct usb_request *req)
static int source_sink_start_ep(struct f_sourcesink *ss, bool is_in)
static void disable_source_sink(struct f_sourcesink *ss)
static int
enable_source_sink(struct usb_composite_dev *cdev, struct f_sourcesink *ss)
static int sourcesink_set_alt(struct usb_function *f,
unsigned intf, unsigned alt)
static void sourcesink_disable(struct usb_function *f)
static int __init sourcesink_bind_config(struct usb_configuration *c)
static int sourcesink_setup(struct usb_configuration *c,
const struct usb_ctrlrequest *ctrl)
static struct usb_configuration sourcesink_driver = ;
int __init sourcesink_add(struct usb_composite_dev *cdev, bool autoresume)
