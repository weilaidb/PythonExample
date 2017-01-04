unsigned int uvc_gadget_trace_param;
#define UVC_STRING_ASSOCIATION_IDX		0
#define UVC_STRING_CONTROL_IDX			1
#define UVC_STRING_STREAMING_IDX		2
static struct usb_string uvc_en_us_strings[] = ;
static struct usb_gadget_strings uvc_stringtab = ;
static struct usb_gadget_strings *uvc_function_strings[] = ;
#define UVC_INTF_VIDEO_CONTROL			0
#define UVC_INTF_VIDEO_STREAMING		1
static struct usb_interface_assoc_descriptor uvc_iad __initdata = ;
static struct usb_interface_descriptor uvc_control_intf __initdata = ;
static struct usb_endpoint_descriptor uvc_control_ep __initdata = ;
static struct uvc_control_endpoint_descriptor uvc_control_cs_ep __initdata = ;
static struct usb_interface_descriptor uvc_streaming_intf_alt0 __initdata = ;
static struct usb_interface_descriptor uvc_streaming_intf_alt1 __initdata = ;
static struct usb_endpoint_descriptor uvc_streaming_ep = ;
static const struct usb_descriptor_header * const uvc_fs_streaming[] = ;
static const struct usb_descriptor_header * const uvc_hs_streaming[] = ;
static void
uvc_function_ep0_complete(struct usb_ep *ep, struct usb_request *req)
static int
uvc_function_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int
uvc_function_get_alt(struct usb_function *f, unsigned interface)
static int
uvc_function_set_alt(struct usb_function *f, unsigned interface, unsigned alt)
static void
uvc_function_disable(struct usb_function *f)
void
uvc_function_connect(struct uvc_device *uvc)
void
uvc_function_disconnect(struct uvc_device *uvc)
static int
uvc_register_video(struct uvc_device *uvc)
#define UVC_COPY_DESCRIPTOR(mem, dst, desc) \
do  while (0);
#define UVC_COPY_DESCRIPTORS(mem, dst, src) \
do  while (0)
static struct usb_descriptor_header ** __init
uvc_copy_descriptors(struct uvc_device *uvc, enum usb_device_speed speed)
static void
uvc_function_unbind(struct usb_configuration *c, struct usb_function *f)
static int __init
uvc_function_bind(struct usb_configuration *c, struct usb_function *f)
int __init
uvc_bind_config(struct usb_configuration *c,
const struct uvc_descriptor_header * const *control,
const struct uvc_descriptor_header * const *fs_streaming,
const struct uvc_descriptor_header * const *hs_streaming)
module_param_named(trace, uvc_gadget_trace_param, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(trace, "Trace level bitmask");
