struct gser_descs ;
struct f_gser ;
static inline struct f_gser *func_to_gser(struct usb_function *f)
static struct usb_interface_descriptor gser_interface_desc __initdata = ;
static struct usb_endpoint_descriptor gser_fs_in_desc __initdata = ;
static struct usb_endpoint_descriptor gser_fs_out_desc __initdata = ;
static struct usb_descriptor_header *gser_fs_function[] __initdata = ;
static struct usb_endpoint_descriptor gser_hs_in_desc __initdata = ;
static struct usb_endpoint_descriptor gser_hs_out_desc __initdata = ;
static struct usb_descriptor_header *gser_hs_function[] __initdata = ;
static struct usb_string gser_string_defs[] = ;
static struct usb_gadget_strings gser_string_table = ;
static struct usb_gadget_strings *gser_strings[] = ;
static int gser_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void gser_disable(struct usb_function *f)
static int __init
gser_bind(struct usb_configuration *c, struct usb_function *f)
static void
gser_unbind(struct usb_configuration *c, struct usb_function *f)
int __init gser_bind_config(struct usb_configuration *c, u8 port_num)
