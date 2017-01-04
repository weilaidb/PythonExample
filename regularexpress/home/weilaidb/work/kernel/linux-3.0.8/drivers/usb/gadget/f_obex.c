struct obex_ep_descs ;
struct f_obex ;
static inline struct f_obex *func_to_obex(struct usb_function *f)
static inline struct f_obex *port_to_obex(struct gserial *p)
#define OBEX_CTRL_IDX	0
#define OBEX_DATA_IDX	1
static struct usb_string obex_string_defs[] = ;
static struct usb_gadget_strings obex_string_table = ;
static struct usb_gadget_strings *obex_strings[] = ;
static struct usb_interface_descriptor obex_control_intf __initdata = ;
static struct usb_interface_descriptor obex_data_nop_intf __initdata = ;
static struct usb_interface_descriptor obex_data_intf __initdata = ;
static struct usb_cdc_header_desc obex_cdc_header_desc __initdata = ;
static struct usb_cdc_union_desc obex_cdc_union_desc __initdata = ;
static struct usb_cdc_obex_desc obex_desc __initdata = ;
static struct usb_endpoint_descriptor obex_hs_ep_out_desc __initdata = ;
static struct usb_endpoint_descriptor obex_hs_ep_in_desc __initdata = ;
static struct usb_descriptor_header *hs_function[] __initdata = ;
static struct usb_endpoint_descriptor obex_fs_ep_in_desc __initdata = ;
static struct usb_endpoint_descriptor obex_fs_ep_out_desc __initdata = ;
static struct usb_descriptor_header *fs_function[] __initdata = ;
static int obex_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static int obex_get_alt(struct usb_function *f, unsigned intf)
static void obex_disable(struct usb_function *f)
static void obex_connect(struct gserial *g)
static void obex_disconnect(struct gserial *g)
static int __init
obex_bind(struct usb_configuration *c, struct usb_function *f)
static void
obex_unbind(struct usb_configuration *c, struct usb_function *f)
static inline bool can_support_obex(struct usb_configuration *c)
int __init obex_bind_config(struct usb_configuration *c, u8 port_num)
MODULE_AUTHOR("Felipe Balbi");
MODULE_LICENSE("GPL");
