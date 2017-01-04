#define	DRIVER_VERSION				"04-Aug-2011"
#define USB_CDC_NCM_NDP16_LENGTH_MIN		0x10
#define	CDC_NCM_NTB_MAX_SIZE_TX			16384
#define	CDC_NCM_NTB_MAX_SIZE_RX			16384
#define	CDC_NCM_MIN_DATAGRAM_SIZE		1514
#define	CDC_NCM_MIN_TX_PKT			512
#define	CDC_NCM_MAX_DATAGRAM_SIZE		2048
#define	CDC_NCM_DPT_DATAGRAMS_MAX		32
#define	CDC_NCM_DPT_DATAGRAMS_IN_MAX		0
#define	CDC_NCM_RESTART_TIMER_DATAGRAM_CNT	3
#define	CDC_NCM_MIN_HDR_SIZE \
(sizeof(struct usb_cdc_ncm_nth16) + sizeof(struct usb_cdc_ncm_ndp16) + \
(CDC_NCM_DPT_DATAGRAMS_MAX + 1) * sizeof(struct usb_cdc_ncm_dpe16))
struct cdc_ncm_data ;
struct cdc_ncm_ctx ;
static void cdc_ncm_tx_timeout(unsigned long arg);
static const struct driver_info cdc_ncm_info;
static struct usb_driver cdc_ncm_driver;
static struct ethtool_ops cdc_ncm_ethtool_ops;
static const struct usb_device_id cdc_devs[] = ;
MODULE_DEVICE_TABLE(usb, cdc_devs);
static void
cdc_ncm_get_drvinfo(struct net_device *net, struct ethtool_drvinfo *info)
static u8 cdc_ncm_setup(struct cdc_ncm_ctx *ctx)
static void
cdc_ncm_find_endpoints(struct cdc_ncm_ctx *ctx, struct usb_interface *intf)
static void cdc_ncm_free(struct cdc_ncm_ctx *ctx)
static int cdc_ncm_bind(struct usbnet *dev, struct usb_interface *intf)
static void cdc_ncm_unbind(struct usbnet *dev, struct usb_interface *intf)
static void cdc_ncm_zero_fill(u8 *ptr, u32 first, u32 end, u32 max)
static struct sk_buff *
cdc_ncm_fill_tx_frame(struct cdc_ncm_ctx *ctx, struct sk_buff *skb)
static void cdc_ncm_tx_timeout_start(struct cdc_ncm_ctx *ctx)
static void cdc_ncm_tx_timeout(unsigned long arg)
static struct sk_buff *
cdc_ncm_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
static int cdc_ncm_rx_fixup(struct usbnet *dev, struct sk_buff *skb_in)
static void
cdc_ncm_speed_change(struct cdc_ncm_ctx *ctx,
struct usb_cdc_speed_change *data)
static void cdc_ncm_status(struct usbnet *dev, struct urb *urb)
static int cdc_ncm_check_connect(struct usbnet *dev)
static int
cdc_ncm_probe(struct usb_interface *udev, const struct usb_device_id *prod)
static void cdc_ncm_disconnect(struct usb_interface *intf)
static int cdc_ncm_manage_power(struct usbnet *dev, int status)
static const struct driver_info cdc_ncm_info = ;
static struct usb_driver cdc_ncm_driver = ;
static struct ethtool_ops cdc_ncm_ethtool_ops = ;
static int __init cdc_ncm_init(void)
module_init(cdc_ncm_init);
static void __exit cdc_ncm_exit(void)
module_exit(cdc_ncm_exit);
MODULE_AUTHOR("Hans Petter Selasky");
MODULE_DESCRIPTION("USB CDC NCM host driver");
MODULE_LICENSE("Dual BSD/GPL");
