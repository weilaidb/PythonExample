#define DRIVER_AUTHOR		"Laurent Pinchart " \
"<laurent.pinchart@ideasonboard.com>"
#define DRIVER_DESC		"USB Video Class driver"
unsigned int uvc_clock_param = CLOCK_MONOTONIC;
unsigned int uvc_no_drop_param;
static unsigned int uvc_quirks_param = -1;
unsigned int uvc_trace_param;
unsigned int uvc_timeout_param = UVC_CTRL_STREAMING_TIMEOUT;
static struct uvc_format_desc uvc_fmts[] = ;
struct usb_host_endpoint *uvc_find_endpoint(struct usb_host_interface *alts,
__u8 epaddr)
static struct uvc_format_desc *uvc_format_by_guid(const __u8 guid[16])
static __u32 uvc_colorspace(const __u8 primaries)
void uvc_simplify_fraction(uint32_t *numerator, uint32_t *denominator,
unsigned int n_terms, unsigned int threshold)
uint32_t uvc_fraction_to_interval(uint32_t numerator, uint32_t denominator)
struct uvc_entity *uvc_entity_by_id(struct uvc_device *dev, int id)
static struct uvc_entity *uvc_entity_by_reference(struct uvc_device *dev,
int id, struct uvc_entity *entity)
static struct uvc_streaming *uvc_stream_by_id(struct uvc_device *dev, int id)
static int uvc_parse_format(struct uvc_device *dev,
struct uvc_streaming *streaming, struct uvc_format *format,
__u32 **intervals, unsigned char *buffer, int buflen)
static int uvc_parse_streaming(struct uvc_device *dev,
struct usb_interface *intf)
static struct uvc_entity *uvc_alloc_entity(u16 type, u8 id,
unsigned int num_pads, unsigned int extra_size)
static int uvc_parse_vendor_control(struct uvc_device *dev,
const unsigned char *buffer, int buflen)
static int uvc_parse_standard_control(struct uvc_device *dev,
const unsigned char *buffer, int buflen)
static int uvc_parse_control(struct uvc_device *dev)
static int uvc_scan_chain_entity(struct uvc_video_chain *chain,
struct uvc_entity *entity)
static int uvc_scan_chain_forward(struct uvc_video_chain *chain,
struct uvc_entity *entity, struct uvc_entity *prev)
static int uvc_scan_chain_backward(struct uvc_video_chain *chain,
struct uvc_entity **_entity)
static int uvc_scan_chain(struct uvc_video_chain *chain,
struct uvc_entity *term)
static unsigned int uvc_print_terms(struct list_head *terms, u16 dir,
char *buffer)
static const char *uvc_print_chain(struct uvc_video_chain *chain)
static int uvc_scan_device(struct uvc_device *dev)
static void uvc_delete(struct uvc_device *dev)
static void uvc_release(struct video_device *vdev)
static void uvc_unregister_video(struct uvc_device *dev)
static int uvc_register_video(struct uvc_device *dev,
struct uvc_streaming *stream)
static int uvc_register_terms(struct uvc_device *dev,
struct uvc_video_chain *chain)
static int uvc_register_chains(struct uvc_device *dev)
static int uvc_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void uvc_disconnect(struct usb_interface *intf)
static int uvc_suspend(struct usb_interface *intf, pm_message_t message)
static int __uvc_resume(struct usb_interface *intf, int reset)
static int uvc_resume(struct usb_interface *intf)
static int uvc_reset_resume(struct usb_interface *intf)
static int uvc_clock_param_get(char *buffer, struct kernel_param *kp)
static int uvc_clock_param_set(const char *val, struct kernel_param *kp)
module_param_call(clock, uvc_clock_param_set, uvc_clock_param_get,
&uvc_clock_param, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(clock, "Video buffers timestamp clock");
module_param_named(nodrop, uvc_no_drop_param, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(nodrop, "Don't drop incomplete frames");
module_param_named(quirks, uvc_quirks_param, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(quirks, "Forced device quirks");
module_param_named(trace, uvc_trace_param, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(trace, "Trace level bitmask");
module_param_named(timeout, uvc_timeout_param, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(timeout, "Streaming control requests timeout");
static struct usb_device_id uvc_ids[] = ;
MODULE_DEVICE_TABLE(usb, uvc_ids);
struct uvc_driver uvc_driver = ;
static int __init uvc_init(void)
static void __exit uvc_cleanup(void)
module_init(uvc_init);
module_exit(uvc_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
