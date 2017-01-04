struct geth_descs ;
struct f_gether ;
static inline struct f_gether *func_to_geth(struct usb_function *f)
static struct usb_interface_descriptor subset_data_intf __initdata = ;
static struct usb_cdc_header_desc mdlm_header_desc __initdata = ;
static struct usb_cdc_mdlm_desc mdlm_desc __initdata = ;
static u8 mdlm_detail_desc[] __initdata = ;
static struct usb_cdc_ether_desc ether_desc __initdata = ;
static struct usb_endpoint_descriptor fs_subset_in_desc __initdata = ;
static struct usb_endpoint_descriptor fs_subset_out_desc __initdata = ;
static struct usb_descriptor_header *fs_eth_function[] __initdata = ;
static struct usb_endpoint_descriptor hs_subset_in_desc __initdata = ;
static struct usb_endpoint_descriptor hs_subset_out_desc __initdata = ;
static struct usb_descriptor_header *hs_eth_function[] __initdata = ;
static struct usb_string geth_string_defs[] = ;
static struct usb_gadget_strings geth_string_table = ;
static struct usb_gadget_strings *geth_strings[] = ;
static int geth_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void geth_disable(struct usb_function *f)
static int __init
geth_bind(struct usb_configuration *c, struct usb_function *f)
static void
geth_unbind(struct usb_configuration *c, struct usb_function *f)
int __init geth_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])
