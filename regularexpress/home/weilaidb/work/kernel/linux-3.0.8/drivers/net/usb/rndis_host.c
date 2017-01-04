void rndis_status(struct usbnet *dev, struct urb *urb)
EXPORT_SYMBOL_GPL(rndis_status);
static void rndis_msg_indicate(struct usbnet *dev, struct rndis_indicate *msg,
int buflen)
int rndis_command(struct usbnet *dev, struct rndis_msg_hdr *buf, int buflen)
EXPORT_SYMBOL_GPL(rndis_command);
static int rndis_query(struct usbnet *dev, struct usb_interface *intf,
void *buf, __le32 oid, u32 in_len,
void **reply, int *reply_len)
static const struct net_device_ops rndis_netdev_ops = ;
int
generic_rndis_bind(struct usbnet *dev, struct usb_interface *intf, int flags)
EXPORT_SYMBOL_GPL(generic_rndis_bind);
static int rndis_bind(struct usbnet *dev, struct usb_interface *intf)
void rndis_unbind(struct usbnet *dev, struct usb_interface *intf)
EXPORT_SYMBOL_GPL(rndis_unbind);
int rndis_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(rndis_rx_fixup);
struct sk_buff *
rndis_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
EXPORT_SYMBOL_GPL(rndis_tx_fixup);
static const struct driver_info	rndis_info = ;
static const struct driver_info	rndis_poll_status_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver rndis_driver = ;
static int __init rndis_init(void)
module_init(rndis_init);
static void __exit rndis_exit(void)
module_exit(rndis_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("USB Host side RNDIS driver");
MODULE_LICENSE("GPL");
