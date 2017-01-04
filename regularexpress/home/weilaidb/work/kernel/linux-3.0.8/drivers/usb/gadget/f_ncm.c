#define NCM_NDP_HDR_CRC_MASK	0x01000000
#define NCM_NDP_HDR_CRC		0x01000000
#define NCM_NDP_HDR_NOCRC	0x00000000
struct ncm_ep_descs ;
enum ncm_notify_state ;
struct f_ncm ;
static inline struct f_ncm *func_to_ncm(struct usb_function *f)
static inline unsigned ncm_bitrate(struct usb_gadget *g)
#define NTB_DEFAULT_IN_SIZE	USB_CDC_NCM_NTB_MIN_IN_SIZE
#define NTB_OUT_SIZE		16384
#define	MAX_TX_NONFIXED		(512 * 3)
#define FORMATS_SUPPORTED	(USB_CDC_NCM_NTB16_SUPPORTED |	\
USB_CDC_NCM_NTB32_SUPPORTED)
static struct usb_cdc_ncm_ntb_parameters ntb_parameters = ;
#define LOG2_STATUS_INTERVAL_MSEC	5
#define NCM_STATUS_BYTECOUNT		16
static struct usb_interface_assoc_descriptor ncm_iad_desc __initdata = ;
static struct usb_interface_descriptor ncm_control_intf __initdata = ;
static struct usb_cdc_header_desc ncm_header_desc __initdata = ;
static struct usb_cdc_union_desc ncm_union_desc __initdata = ;
static struct usb_cdc_ether_desc ecm_desc __initdata = ;
#define NCAPS	(USB_CDC_NCM_NCAP_ETH_FILTER | USB_CDC_NCM_NCAP_CRC_MODE)
static struct usb_cdc_ncm_desc ncm_desc __initdata = ;
static struct usb_interface_descriptor ncm_data_nop_intf __initdata = ;
static struct usb_interface_descriptor ncm_data_intf __initdata = ;
static struct usb_endpoint_descriptor fs_ncm_notify_desc __initdata = ;
static struct usb_endpoint_descriptor fs_ncm_in_desc __initdata = ;
static struct usb_endpoint_descriptor fs_ncm_out_desc __initdata = ;
static struct usb_descriptor_header *ncm_fs_function[] __initdata = ;
static struct usb_endpoint_descriptor hs_ncm_notify_desc __initdata = ;
static struct usb_endpoint_descriptor hs_ncm_in_desc __initdata = ;
static struct usb_endpoint_descriptor hs_ncm_out_desc __initdata = ;
static struct usb_descriptor_header *ncm_hs_function[] __initdata = ;
#define STRING_CTRL_IDX	0
#define STRING_MAC_IDX	1
#define STRING_DATA_IDX	2
#define STRING_IAD_IDX	3
static struct usb_string ncm_string_defs[] = ;
static struct usb_gadget_strings ncm_string_table = ;
static struct usb_gadget_strings *ncm_strings[] = ;
struct ndp_parser_opts ;
#define INIT_NDP16_OPTS
#define INIT_NDP32_OPTS
static struct ndp_parser_opts ndp16_opts = INIT_NDP16_OPTS;
static struct ndp_parser_opts ndp32_opts = INIT_NDP32_OPTS;
static inline void put_ncm(__le16 **p, unsigned size, unsigned val)
static inline unsigned get_ncm(__le16 **p, unsigned size)
static inline void ncm_reset_values(struct f_ncm *ncm)
static void ncm_do_notify(struct f_ncm *ncm)
static void ncm_notify(struct f_ncm *ncm)
static void ncm_notify_complete(struct usb_ep *ep, struct usb_request *req)
static void ncm_ep0out_complete(struct usb_ep *ep, struct usb_request *req)
static int ncm_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int ncm_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static int ncm_get_alt(struct usb_function *f, unsigned intf)
static struct sk_buff *ncm_wrap_ntb(struct gether *port,
struct sk_buff *skb)
static int ncm_unwrap_ntb(struct gether *port,
struct sk_buff *skb,
struct sk_buff_head *list)
static void ncm_disable(struct usb_function *f)
static void ncm_open(struct gether *geth)
static void ncm_close(struct gether *geth)
static int __init
ncm_bind(struct usb_configuration *c, struct usb_function *f)
static void
ncm_unbind(struct usb_configuration *c, struct usb_function *f)
int __init ncm_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])
