#define PN_MEDIA_USB	0x1B
static const unsigned rxq_size = 17;
struct usbpn_dev ;
static void tx_complete(struct urb *req);
static void rx_complete(struct urb *req);
static netdev_tx_t usbpn_xmit(struct sk_buff *skb, struct net_device *dev)
static void tx_complete(struct urb *req)
static int rx_submit(struct usbpn_dev *pnd, struct urb *req, gfp_t gfp_flags)
static void rx_complete(struct urb *req)
static int usbpn_close(struct net_device *dev);
static int usbpn_open(struct net_device *dev)
static int usbpn_close(struct net_device *dev)
static int usbpn_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int usbpn_set_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops usbpn_ops = ;
static void usbpn_setup(struct net_device *dev)
static struct usb_device_id usbpn_ids[] = ;
MODULE_DEVICE_TABLE(usb, usbpn_ids);
static struct usb_driver usbpn_driver;
int usbpn_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usbpn_disconnect(struct usb_interface *intf)
static struct usb_driver usbpn_driver = ;
static int __init usbpn_init(void)
static void __exit usbpn_exit(void)
module_init(usbpn_init);
module_exit(usbpn_exit);
MODULE_AUTHOR("Remi Denis-Courmont");
MODULE_DESCRIPTION("USB CDC Phonet host interface");
MODULE_LICENSE("GPL");
