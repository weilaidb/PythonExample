#define	__LINUX_USB_USBNET_H
struct usbnet ;
static inline struct usb_driver *driver_of(struct usb_interface *intf)
struct driver_info ;
extern int usbnet_probe(struct usb_interface *, const struct usb_device_id *);
extern int usbnet_suspend(struct usb_interface *, pm_message_t);
extern int usbnet_resume(struct usb_interface *);
extern void usbnet_disconnect(struct usb_interface *);
struct cdc_state ;
extern int usbnet_generic_cdc_bind(struct usbnet *, struct usb_interface *);
extern int usbnet_cdc_bind(struct usbnet *, struct usb_interface *);
extern void usbnet_cdc_unbind(struct usbnet *, struct usb_interface *);
extern void usbnet_cdc_status(struct usbnet *, struct urb *);
#define	DEFAULT_FILTER	(USB_CDC_PACKET_TYPE_BROADCAST \
|USB_CDC_PACKET_TYPE_ALL_MULTICAST \
|USB_CDC_PACKET_TYPE_PROMISCUOUS \
|USB_CDC_PACKET_TYPE_DIRECTED)
enum skb_state ;
struct skb_data ;
extern int usbnet_open(struct net_device *net);
extern int usbnet_stop(struct net_device *net);
extern netdev_tx_t usbnet_start_xmit(struct sk_buff *skb,
struct net_device *net);
extern void usbnet_tx_timeout(struct net_device *net);
extern int usbnet_change_mtu(struct net_device *net, int new_mtu);
extern int usbnet_get_endpoints(struct usbnet *, struct usb_interface *);
extern int usbnet_get_ethernet_addr(struct usbnet *, int);
extern void usbnet_defer_kevent(struct usbnet *, int);
extern void usbnet_skb_return(struct usbnet *, struct sk_buff *);
extern void usbnet_unlink_rx_urbs(struct usbnet *);
extern void usbnet_pause_rx(struct usbnet *);
extern void usbnet_resume_rx(struct usbnet *);
extern void usbnet_purge_paused_rxq(struct usbnet *);
extern int usbnet_get_settings(struct net_device *net,
struct ethtool_cmd *cmd);
extern int usbnet_set_settings(struct net_device *net,
struct ethtool_cmd *cmd);
extern u32 usbnet_get_link(struct net_device *net);
extern u32 usbnet_get_msglevel(struct net_device *);
extern void usbnet_set_msglevel(struct net_device *, u32);
extern void usbnet_get_drvinfo(struct net_device *, struct ethtool_drvinfo *);
extern int usbnet_nway_reset(struct net_device *net);
