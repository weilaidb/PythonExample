#define EEM_HLEN 2
struct eem_ep_descs ;
struct f_eem ;
static inline struct f_eem *func_to_eem(struct usb_function *f)
static struct usb_interface_descriptor eem_intf __initdata = ;
static struct usb_endpoint_descriptor eem_fs_in_desc __initdata = ;
static struct usb_endpoint_descriptor eem_fs_out_desc __initdata = ;
static struct usb_descriptor_header *eem_fs_function[] __initdata = ;
static struct usb_endpoint_descriptor eem_hs_in_desc __initdata = ;
static struct usb_endpoint_descriptor eem_hs_out_desc __initdata = ;
static struct usb_descriptor_header *eem_hs_function[] __initdata = ;
static struct usb_string eem_string_defs[] = ;
static struct usb_gadget_strings eem_string_table = ;
static struct usb_gadget_strings *eem_strings[] = ;
static int eem_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int eem_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void eem_disable(struct usb_function *f)
static int __init
eem_bind(struct usb_configuration *c, struct usb_function *f)
static void
eem_unbind(struct usb_configuration *c, struct usb_function *f)
static void eem_cmd_complete(struct usb_ep *ep, struct usb_request *req)
static struct sk_buff *eem_wrap(struct gether *port, struct sk_buff *skb)
static int eem_unwrap(struct gether *port,
struct sk_buff *skb,
struct sk_buff_head *list)
int __init eem_bind_config(struct usb_configuration *c)
