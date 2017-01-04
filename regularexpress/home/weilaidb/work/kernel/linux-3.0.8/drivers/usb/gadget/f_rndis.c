struct rndis_ep_descs ;
struct f_rndis ;
static inline struct f_rndis *func_to_rndis(struct usb_function *f)
static unsigned int bitrate(struct usb_gadget *g)
#define LOG2_STATUS_INTERVAL_MSEC	5
#define STATUS_BYTECOUNT		8
static struct usb_interface_descriptor rndis_control_intf = ;
static struct usb_cdc_header_desc header_desc = ;
static struct usb_cdc_call_mgmt_descriptor call_mgmt_descriptor = ;
static struct usb_cdc_acm_descriptor rndis_acm_descriptor = ;
static struct usb_cdc_union_desc rndis_union_desc = ;
static struct usb_interface_descriptor rndis_data_intf = ;
static struct usb_interface_assoc_descriptor
rndis_iad_descriptor = ;
static struct usb_endpoint_descriptor fs_notify_desc = ;
static struct usb_endpoint_descriptor fs_in_desc = ;
static struct usb_endpoint_descriptor fs_out_desc = ;
static struct usb_descriptor_header *eth_fs_function[] = ;
static struct usb_endpoint_descriptor hs_notify_desc = ;
static struct usb_endpoint_descriptor hs_in_desc = ;
static struct usb_endpoint_descriptor hs_out_desc = ;
static struct usb_descriptor_header *eth_hs_function[] = ;
static struct usb_string rndis_string_defs[] = ;
static struct usb_gadget_strings rndis_string_table = ;
static struct usb_gadget_strings *rndis_strings[] = ;
static struct sk_buff *rndis_add_header(struct gether *port,
struct sk_buff *skb)
static void rndis_response_available(void *_rndis)
static void rndis_response_complete(struct usb_ep *ep, struct usb_request *req)
static void rndis_command_complete(struct usb_ep *ep, struct usb_request *req)
static int
rndis_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int rndis_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void rndis_disable(struct usb_function *f)
static void rndis_open(struct gether *geth)
static void rndis_close(struct gether *geth)
static int
rndis_bind(struct usb_configuration *c, struct usb_function *f)
static void
rndis_unbind(struct usb_configuration *c, struct usb_function *f)
static inline bool can_support_rndis(struct usb_configuration *c)
int
rndis_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])
