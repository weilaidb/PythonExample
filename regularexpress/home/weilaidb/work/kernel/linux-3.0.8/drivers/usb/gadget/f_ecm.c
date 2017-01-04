struct ecm_ep_descs ;
enum ecm_notify_state ;
struct f_ecm ;
static inline struct f_ecm *func_to_ecm(struct usb_function *f)
static inline unsigned ecm_bitrate(struct usb_gadget *g)
#define LOG2_STATUS_INTERVAL_MSEC	5
#define ECM_STATUS_BYTECOUNT		16
static struct usb_interface_descriptor ecm_control_intf = ;
static struct usb_cdc_header_desc ecm_header_desc = ;
static struct usb_cdc_union_desc ecm_union_desc = ;
static struct usb_cdc_ether_desc ecm_desc = ;
static struct usb_interface_descriptor ecm_data_nop_intf = ;
static struct usb_interface_descriptor ecm_data_intf = ;
static struct usb_endpoint_descriptor fs_ecm_notify_desc = ;
static struct usb_endpoint_descriptor fs_ecm_in_desc = ;
static struct usb_endpoint_descriptor fs_ecm_out_desc = ;
static struct usb_descriptor_header *ecm_fs_function[] = ;
static struct usb_endpoint_descriptor hs_ecm_notify_desc = ;
static struct usb_endpoint_descriptor hs_ecm_in_desc = ;
static struct usb_endpoint_descriptor hs_ecm_out_desc = ;
static struct usb_descriptor_header *ecm_hs_function[] = ;
static struct usb_string ecm_string_defs[] = ;
static struct usb_gadget_strings ecm_string_table = ;
static struct usb_gadget_strings *ecm_strings[] = ;
static void ecm_do_notify(struct f_ecm *ecm)
static void ecm_notify(struct f_ecm *ecm)
static void ecm_notify_complete(struct usb_ep *ep, struct usb_request *req)
static int ecm_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int ecm_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static int ecm_get_alt(struct usb_function *f, unsigned intf)
static void ecm_disable(struct usb_function *f)
static void ecm_open(struct gether *geth)
static void ecm_close(struct gether *geth)
static int
ecm_bind(struct usb_configuration *c, struct usb_function *f)
static void
ecm_unbind(struct usb_configuration *c, struct usb_function *f)
int
ecm_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])
