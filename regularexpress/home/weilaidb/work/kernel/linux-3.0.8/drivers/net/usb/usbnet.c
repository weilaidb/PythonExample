#define DRIVER_VERSION		"22-Aug-2005"
#define RX_MAX_QUEUE_MEMORY (60 * 1518)
#define	RX_QLEN(dev) (((dev)->udev->speed == USB_SPEED_HIGH) ? \
(RX_MAX_QUEUE_MEMORY/(dev)->rx_urb_size) : 4)
#define	TX_QLEN(dev) (((dev)->udev->speed == USB_SPEED_HIGH) ? \
(RX_MAX_QUEUE_MEMORY/(dev)->hard_mtu) : 4)
#define TX_TIMEOUT_JIFFIES	(5*HZ)
#define THROTTLE_JIFFIES	(HZ/8)
#define UNLINK_TIMEOUT_MS	3
static u8	node_id [ETH_ALEN];
static const char driver_name [] = "usbnet";
static int msg_level = -1;
module_param (msg_level, int, 0);
MODULE_PARM_DESC (msg_level, "Override default message level");
int usbnet_get_endpoints(struct usbnet *dev, struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_get_endpoints);
int usbnet_get_ethernet_addr(struct usbnet *dev, int iMACAddress)
EXPORT_SYMBOL_GPL(usbnet_get_ethernet_addr);
static void intr_complete (struct urb *urb);
static int init_status (struct usbnet *dev, struct usb_interface *intf)
void usbnet_skb_return (struct usbnet *dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(usbnet_skb_return);
int usbnet_change_mtu (struct net_device *net, int new_mtu)
EXPORT_SYMBOL_GPL(usbnet_change_mtu);
static void defer_bh(struct usbnet *dev, struct sk_buff *skb, struct sk_buff_head *list)
void usbnet_defer_kevent (struct usbnet *dev, int work)
EXPORT_SYMBOL_GPL(usbnet_defer_kevent);
static void rx_complete (struct urb *urb);
static int rx_submit (struct usbnet *dev, struct urb *urb, gfp_t flags)
static inline void rx_process (struct usbnet *dev, struct sk_buff *skb)
static void rx_complete (struct urb *urb)
static void intr_complete (struct urb *urb)
void usbnet_pause_rx(struct usbnet *dev)
EXPORT_SYMBOL_GPL(usbnet_pause_rx);
void usbnet_resume_rx(struct usbnet *dev)
EXPORT_SYMBOL_GPL(usbnet_resume_rx);
void usbnet_purge_paused_rxq(struct usbnet *dev)
EXPORT_SYMBOL_GPL(usbnet_purge_paused_rxq);
static int unlink_urbs (struct usbnet *dev, struct sk_buff_head *q)
void usbnet_unlink_rx_urbs(struct usbnet *dev)
EXPORT_SYMBOL_GPL(usbnet_unlink_rx_urbs);
static void usbnet_terminate_urbs(struct usbnet *dev)
int usbnet_stop (struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_stop);
int usbnet_open (struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_open);
int usbnet_get_settings (struct net_device *net, struct ethtool_cmd *cmd)
EXPORT_SYMBOL_GPL(usbnet_get_settings);
int usbnet_set_settings (struct net_device *net, struct ethtool_cmd *cmd)
EXPORT_SYMBOL_GPL(usbnet_set_settings);
u32 usbnet_get_link (struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_get_link);
int usbnet_nway_reset(struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_nway_reset);
void usbnet_get_drvinfo (struct net_device *net, struct ethtool_drvinfo *info)
EXPORT_SYMBOL_GPL(usbnet_get_drvinfo);
u32 usbnet_get_msglevel (struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_get_msglevel);
void usbnet_set_msglevel (struct net_device *net, u32 level)
EXPORT_SYMBOL_GPL(usbnet_set_msglevel);
static const struct ethtool_ops usbnet_ethtool_ops = ;
static void
kevent (struct work_struct *work)
static void tx_complete (struct urb *urb)
void usbnet_tx_timeout (struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_tx_timeout);
netdev_tx_t usbnet_start_xmit (struct sk_buff *skb,
struct net_device *net)
EXPORT_SYMBOL_GPL(usbnet_start_xmit);
static void usbnet_bh (unsigned long param)
void usbnet_disconnect (struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_disconnect);
static const struct net_device_ops usbnet_netdev_ops = ;
static struct device_type wlan_type = ;
static struct device_type wwan_type = ;
int
usbnet_probe (struct usb_interface *udev, const struct usb_device_id *prod)
EXPORT_SYMBOL_GPL(usbnet_probe);
int usbnet_suspend (struct usb_interface *intf, pm_message_t message)
EXPORT_SYMBOL_GPL(usbnet_suspend);
int usbnet_resume (struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usbnet_resume);
static int __init usbnet_init(void)
module_init(usbnet_init);
static void __exit usbnet_exit(void)
module_exit(usbnet_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("USB network driver framework");
MODULE_LICENSE("GPL");
