#define PN_MEDIA_USB	0x1B
#define MAXPACKET	512
#if (PAGE_SIZE % MAXPACKET)
#error MAXPACKET must divide PAGE_SIZE!
struct phonet_port ;
struct f_phonet ;
static int phonet_rxq_size = 17;
static inline struct f_phonet *func_to_pn(struct usb_function *f)
#define USB_CDC_SUBCLASS_PHONET	0xfe
#define USB_CDC_PHONET_TYPE	0xab
static struct usb_interface_descriptor
pn_control_intf_desc = ;
static const struct usb_cdc_header_desc
pn_header_desc = ;
static const struct usb_cdc_header_desc
pn_phonet_desc = ;
static struct usb_cdc_union_desc
pn_union_desc = ;
static struct usb_interface_descriptor
pn_data_nop_intf_desc = ;
static struct usb_interface_descriptor
pn_data_intf_desc = ;
static struct usb_endpoint_descriptor
pn_fs_sink_desc = ;
static struct usb_endpoint_descriptor
pn_hs_sink_desc = ;
static struct usb_endpoint_descriptor
pn_fs_source_desc = ;
static struct usb_endpoint_descriptor
pn_hs_source_desc = ;
static struct usb_descriptor_header *fs_pn_function[] = ;
static struct usb_descriptor_header *hs_pn_function[] = ;
static int pn_net_open(struct net_device *dev)
static int pn_net_close(struct net_device *dev)
static void pn_tx_complete(struct usb_ep *ep, struct usb_request *req)
static int pn_net_xmit(struct sk_buff *skb, struct net_device *dev)
static int pn_net_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops pn_netdev_ops = ;
static void pn_net_setup(struct net_device *dev)
static int
pn_rx_submit(struct f_phonet *fp, struct usb_request *req, gfp_t gfp_flags)
static void pn_rx_complete(struct usb_ep *ep, struct usb_request *req)
static void __pn_reset(struct usb_function *f)
static int pn_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static int pn_get_alt(struct usb_function *f, unsigned intf)
static void pn_disconnect(struct usb_function *f)
static __init
int pn_bind(struct usb_configuration *c, struct usb_function *f)
static void
pn_unbind(struct usb_configuration *c, struct usb_function *f)
static struct net_device *dev;
int __init phonet_bind_config(struct usb_configuration *c)
int __init gphonet_setup(struct usb_gadget *gadget)
void gphonet_cleanup(void)
