struct acm_ep_descs ;
struct f_acm ;
static inline struct f_acm *func_to_acm(struct usb_function *f)
static inline struct f_acm *port_to_acm(struct gserial *p)
#define GS_LOG2_NOTIFY_INTERVAL		5
#define GS_NOTIFY_MAXPACKET		10
static struct usb_interface_assoc_descriptor
acm_iad_descriptor = ;
static struct usb_interface_descriptor acm_control_interface_desc = ;
static struct usb_interface_descriptor acm_data_interface_desc = ;
static struct usb_cdc_header_desc acm_header_desc = ;
static struct usb_cdc_call_mgmt_descriptor
acm_call_mgmt_descriptor = ;
static struct usb_cdc_acm_descriptor acm_descriptor = ;
static struct usb_cdc_union_desc acm_union_desc = ;
static struct usb_endpoint_descriptor acm_fs_notify_desc = ;
static struct usb_endpoint_descriptor acm_fs_in_desc = ;
static struct usb_endpoint_descriptor acm_fs_out_desc = ;
static struct usb_descriptor_header *acm_fs_function[] = ;
static struct usb_endpoint_descriptor acm_hs_notify_desc = ;
static struct usb_endpoint_descriptor acm_hs_in_desc = ;
static struct usb_endpoint_descriptor acm_hs_out_desc = ;
static struct usb_descriptor_header *acm_hs_function[] = ;
#define ACM_CTRL_IDX	0
#define ACM_DATA_IDX	1
#define ACM_IAD_IDX	2
static struct usb_string acm_string_defs[] = ;
static struct usb_gadget_strings acm_string_table = ;
static struct usb_gadget_strings *acm_strings[] = ;
static void acm_complete_set_line_coding(struct usb_ep *ep,
struct usb_request *req)
static int acm_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int acm_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void acm_disable(struct usb_function *f)
static int acm_cdc_notify(struct f_acm *acm, u8 type, u16 value,
void *data, unsigned length)
static int acm_notify_serial_state(struct f_acm *acm)
static void acm_cdc_notify_complete(struct usb_ep *ep, struct usb_request *req)
static void acm_connect(struct gserial *port)
static void acm_disconnect(struct gserial *port)
static int acm_send_break(struct gserial *port, int duration)
static int
acm_bind(struct usb_configuration *c, struct usb_function *f)
static void
acm_unbind(struct usb_configuration *c, struct usb_function *f)
static inline bool can_support_cdc(struct usb_configuration *c)
int acm_bind_config(struct usb_configuration *c, u8 port_num)
