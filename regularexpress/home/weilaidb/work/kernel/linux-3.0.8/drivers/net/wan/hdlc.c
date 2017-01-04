static const char* version = "HDLC support module revision 1.22";
#undef DEBUG_LINK
static struct hdlc_proto *first_proto;
int hdlc_change_mtu(struct net_device *dev, int new_mtu)
static int hdlc_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *p, struct net_device *orig_dev)
netdev_tx_t hdlc_start_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void hdlc_proto_start(struct net_device *dev)
static inline void hdlc_proto_stop(struct net_device *dev)
static int hdlc_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
int hdlc_open(struct net_device *dev)
void hdlc_close(struct net_device *dev)
int hdlc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static const struct header_ops hdlc_null_ops;
static void hdlc_setup_dev(struct net_device *dev)
static void hdlc_setup(struct net_device *dev)
struct net_device *alloc_hdlcdev(void *priv)
void unregister_hdlc_device(struct net_device *dev)
int attach_hdlc_protocol(struct net_device *dev, struct hdlc_proto *proto,
size_t size)
void detach_hdlc_protocol(struct net_device *dev)
void register_hdlc_protocol(struct hdlc_proto *proto)
void unregister_hdlc_protocol(struct hdlc_proto *proto)
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("HDLC support module");
MODULE_LICENSE("GPL v2");
EXPORT_SYMBOL(hdlc_change_mtu);
EXPORT_SYMBOL(hdlc_start_xmit);
EXPORT_SYMBOL(hdlc_open);
EXPORT_SYMBOL(hdlc_close);
EXPORT_SYMBOL(hdlc_ioctl);
EXPORT_SYMBOL(alloc_hdlcdev);
EXPORT_SYMBOL(unregister_hdlc_device);
EXPORT_SYMBOL(register_hdlc_protocol);
EXPORT_SYMBOL(unregister_hdlc_protocol);
EXPORT_SYMBOL(attach_hdlc_protocol);
EXPORT_SYMBOL(detach_hdlc_protocol);
static struct packet_type hdlc_packet_type __read_mostly = ;
static struct notifier_block hdlc_notifier = ;
static int __init hdlc_module_init(void)
static void __exit hdlc_module_exit(void)
module_init(hdlc_module_init);
module_exit(hdlc_module_exit);
