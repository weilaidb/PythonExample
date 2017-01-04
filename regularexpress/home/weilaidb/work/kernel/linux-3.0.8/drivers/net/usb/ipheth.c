#define USB_VENDOR_APPLE        0x05ac
#define USB_PRODUCT_IPHONE      0x1290
#define USB_PRODUCT_IPHONE_3G   0x1292
#define USB_PRODUCT_IPHONE_3GS  0x1294
#define USB_PRODUCT_IPHONE_4	0x1297
#define IPHETH_USBINTF_CLASS    255
#define IPHETH_USBINTF_SUBCLASS 253
#define IPHETH_USBINTF_PROTO    1
#define IPHETH_BUF_SIZE         1516
#define IPHETH_IP_ALIGN		2
#define IPHETH_TX_TIMEOUT       (5 * HZ)
#define IPHETH_INTFNUM          2
#define IPHETH_ALT_INTFNUM      1
#define IPHETH_CTRL_ENDP        0x00
#define IPHETH_CTRL_BUF_SIZE    0x40
#define IPHETH_CTRL_TIMEOUT     (5 * HZ)
#define IPHETH_CMD_GET_MACADDR   0x00
#define IPHETH_CMD_CARRIER_CHECK 0x45
#define IPHETH_CARRIER_CHECK_TIMEOUT round_jiffies_relative(1 * HZ)
#define IPHETH_CARRIER_ON       0x04
static struct usb_device_id ipheth_table[] = ;
MODULE_DEVICE_TABLE(usb, ipheth_table);
struct ipheth_device ;
static int ipheth_rx_submit(struct ipheth_device *dev, gfp_t mem_flags);
static int ipheth_alloc_urbs(struct ipheth_device *iphone)
static void ipheth_free_urbs(struct ipheth_device *iphone)
static void ipheth_kill_urbs(struct ipheth_device *dev)
static void ipheth_rcvbulk_callback(struct urb *urb)
static void ipheth_sndbulk_callback(struct urb *urb)
static int ipheth_carrier_set(struct ipheth_device *dev)
static void ipheth_carrier_check_work(struct work_struct *work)
static int ipheth_get_macaddr(struct ipheth_device *dev)
static int ipheth_rx_submit(struct ipheth_device *dev, gfp_t mem_flags)
static int ipheth_open(struct net_device *net)
static int ipheth_close(struct net_device *net)
static int ipheth_tx(struct sk_buff *skb, struct net_device *net)
static void ipheth_tx_timeout(struct net_device *net)
static struct net_device_stats *ipheth_stats(struct net_device *net)
static u32 ipheth_ethtool_op_get_link(struct net_device *net)
static struct ethtool_ops ops = ;
static const struct net_device_ops ipheth_netdev_ops = ;
static int ipheth_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ipheth_disconnect(struct usb_interface *intf)
static struct usb_driver ipheth_driver = ;
static int __init ipheth_init(void)
static void __exit ipheth_exit(void)
module_init(ipheth_init);
module_exit(ipheth_exit);
MODULE_AUTHOR("Diego Giagio <diego@giagio.com>");
MODULE_DESCRIPTION("Apple iPhone USB Ethernet driver");
MODULE_LICENSE("Dual BSD/GPL");
