#define INT51X1_VENDOR_ID	0x09e1
#define INT51X1_PRODUCT_ID	0x5121
#define INT51X1_HEADER_SIZE	2
#define PACKET_TYPE_PROMISCUOUS		(1 << 0)
#define PACKET_TYPE_ALL_MULTICAST	(1 << 1)
#define PACKET_TYPE_DIRECTED		(1 << 2)
#define PACKET_TYPE_BROADCAST		(1 << 3)
#define PACKET_TYPE_MULTICAST		(1 << 4)
#define SET_ETHERNET_PACKET_FILTER	0x43
static int int51x1_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *int51x1_tx_fixup(struct usbnet *dev,
struct sk_buff *skb, gfp_t flags)
static void int51x1_async_cmd_callback(struct urb *urb)
static void int51x1_set_multicast(struct net_device *netdev)
static const struct net_device_ops int51x1_netdev_ops = ;
static int int51x1_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct driver_info int51x1_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver int51x1_driver = ;
static int __init int51x1_init(void)
module_init(int51x1_init);
static void __exit int51x1_exit(void)
module_exit(int51x1_exit);
MODULE_AUTHOR("Peter Holik");
MODULE_DESCRIPTION("Intellon usb powerline adapter");
MODULE_LICENSE("GPL");
