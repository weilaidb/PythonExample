#define DRIVER_VERSION "v.2.0"
#define DRIVER_AUTHOR "Paxton Smith, Matthew Safar, Rory Filer"
#define DRIVER_DESC "USB-to-WWAN Driver for Sierra Wireless modems"
static const char driver_name[] = "sierra_net";
#define SWI_USB_REQUEST_GET_FW_ATTR	0x06
#define SWI_GET_FW_ATTR_MASK		0x08
static	atomic_t iface_counter = ATOMIC_INIT(0);
#define SIERRA_NET_SYNCDELAY (2*HZ)
#define SIERRA_NET_MAX_SUPPORTED_MTU	1500
#define SIERRA_NET_USBCTL_BUF_LEN	1024
struct sierra_net_iface_info ;
struct sierra_net_info_data ;
struct sierra_net_data ;
struct param ;
#define SIERRA_NET_HIP_EXTENDEDID	0x7F
#define SIERRA_NET_HIP_HSYNC_ID		0x60
#define SIERRA_NET_HIP_RESTART_ID	0x62
#define SIERRA_NET_HIP_MSYNC_ID		0x20
#define SIERRA_NET_HIP_SHUTD_ID		0x26
#define SIERRA_NET_HIP_EXT_IP_IN_ID   0x0202
#define SIERRA_NET_HIP_EXT_IP_OUT_ID  0x0002
#define SIERRA_NET_HIP_LSI_UMTSID	0x78
#define SIERRA_NET_HIP_RCGI		0x64
#define SIERRA_NET_PROTOCOL_UMTS      0x01
#define SIERRA_NET_COVERAGE_NONE      0x00
#define SIERRA_NET_COVERAGE_NOPACKET  0x01
#define SIERRA_NET_SESSION_IDLE       0x00
#define SIERRA_NET_AS_LINK_TYPE_IPv4  0x00
struct lsi_umts  __packed;
#define SIERRA_NET_LSI_COMMON_LEN      4
#define SIERRA_NET_LSI_UMTS_LEN        (sizeof(struct lsi_umts))
#define SIERRA_NET_LSI_UMTS_STATUS_LEN \
(SIERRA_NET_LSI_UMTS_LEN - SIERRA_NET_LSI_COMMON_LEN)
static void sierra_sync_timer(unsigned long syncdata);
static int sierra_net_change_mtu(struct net_device *net, int new_mtu);
static const struct net_device_ops sierra_net_device_ops = ;
static inline struct sierra_net_data *sierra_net_get_private(struct usbnet *dev)
static inline void sierra_net_set_private(struct usbnet *dev,
struct sierra_net_data *priv)
static inline int is_ip(struct sk_buff *skb)
static int check_ethip_packet(struct sk_buff *skb, struct usbnet *dev)
static const u8 *save16bit(struct param *p, const u8 *datap)
static const u8 *save8bit(struct param *p, const u8 *datap)
#define SIERRA_NET_HIP_HDR_LEN 4
#define SIERRA_NET_HIP_EXT_HDR_LEN 6
struct hip_hdr ;
static int parse_hip(const u8 *buf, const u32 buflen, struct hip_hdr *hh)
static void build_hip(u8 *buf, const u16 payloadlen,
struct sierra_net_data *priv)
static int sierra_net_send_cmd(struct usbnet *dev,
u8 *cmd, int cmdlen, const char * cmd_name)
static int sierra_net_send_sync(struct usbnet *dev)
static void sierra_net_set_ctx_index(struct sierra_net_data *priv, u8 ctx_ix)
static inline int sierra_net_is_valid_addrlen(u8 len)
static int sierra_net_parse_lsi(struct usbnet *dev, char *data, int datalen)
static void sierra_net_handle_lsi(struct usbnet *dev, char *data,
struct hip_hdr	*hh)
static void sierra_net_dosync(struct usbnet *dev)
static void sierra_net_kevent(struct work_struct *work)
static void sierra_net_defer_kevent(struct usbnet *dev, int work)
void sierra_sync_timer(unsigned long syncdata)
static void sierra_net_status(struct usbnet *dev, struct urb *urb)
static void sierra_net_get_drvinfo(struct net_device *net,
struct ethtool_drvinfo *info)
static u32 sierra_net_get_link(struct net_device *net)
static struct ethtool_ops sierra_net_ethtool_ops = ;
static int sierra_net_change_mtu(struct net_device *net, int new_mtu)
static int is_whitelisted(const u8 ifnum,
const struct sierra_net_iface_info *whitelist)
static int sierra_net_get_fw_attr(struct usbnet *dev, u16 *datap)
static int sierra_net_bind(struct usbnet *dev, struct usb_interface *intf)
static void sierra_net_unbind(struct usbnet *dev, struct usb_interface *intf)
static struct sk_buff *sierra_net_skb_clone(struct usbnet *dev,
struct sk_buff *skb, int len)
static int sierra_net_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
struct sk_buff *sierra_net_tx_fixup(struct usbnet *dev, struct sk_buff *skb,
gfp_t flags)
static const u8 sierra_net_ifnum_list[] = ;
static const struct sierra_net_info_data sierra_net_info_data_68A3 = ;
static const struct driver_info sierra_net_info_68A3 = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver sierra_net_driver = ;
static int __init sierra_net_init(void)
static void __exit sierra_net_exit(void)
module_exit(sierra_net_exit);
module_init(sierra_net_init);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
