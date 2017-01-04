static const u8 bcast_addr[6] = ;
#define MAXLAPBDEV 100
struct lapbethdev ;
static LIST_HEAD(lapbeth_devices);
static struct lapbethdev *lapbeth_get_x25_dev(struct net_device *dev)
static __inline__ int dev_is_ethdev(struct net_device *dev)
static int lapbeth_rcv(struct sk_buff *skb, struct net_device *dev, struct packet_type *ptype, struct net_device *orig_dev)
static int lapbeth_data_indication(struct net_device *dev, struct sk_buff *skb)
static netdev_tx_t lapbeth_xmit(struct sk_buff *skb,
struct net_device *dev)
static void lapbeth_data_transmit(struct net_device *ndev, struct sk_buff *skb)
static void lapbeth_connected(struct net_device *dev, int reason)
static void lapbeth_disconnected(struct net_device *dev, int reason)
static int lapbeth_set_mac_address(struct net_device *dev, void *addr)
static struct lapb_register_struct lapbeth_callbacks = ;
static int lapbeth_open(struct net_device *dev)
static int lapbeth_close(struct net_device *dev)
static const struct net_device_ops lapbeth_netdev_ops = ;
static void lapbeth_setup(struct net_device *dev)
static int lapbeth_new_device(struct net_device *dev)
static void lapbeth_free_device(struct lapbethdev *lapbeth)
static int lapbeth_device_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct packet_type lapbeth_packet_type __read_mostly = ;
static struct notifier_block lapbeth_dev_notifier = ;
static const char banner[] __initconst =
KERN_INFO "LAPB Ethernet driver version 0.02\n";
static int __init lapbeth_init_driver(void)
module_init(lapbeth_init_driver);
static void __exit lapbeth_cleanup_driver(void)
module_exit(lapbeth_cleanup_driver);
MODULE_AUTHOR("Jonathan Naylor <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The unofficial LAPB over Ethernet driver");
MODULE_LICENSE("GPL");
