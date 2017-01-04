static int x25_ioctl(struct net_device *dev, struct ifreq *ifr);
static void x25_connect_disconnect(struct net_device *dev, int reason, int code)
static void x25_connected(struct net_device *dev, int reason)
static void x25_disconnected(struct net_device *dev, int reason)
static int x25_data_indication(struct net_device *dev, struct sk_buff *skb)
static void x25_data_transmit(struct net_device *dev, struct sk_buff *skb)
static netdev_tx_t x25_xmit(struct sk_buff *skb, struct net_device *dev)
static int x25_open(struct net_device *dev)
static void x25_close(struct net_device *dev)
static int x25_rx(struct sk_buff *skb)
static struct hdlc_proto proto = ;
static int x25_ioctl(struct net_device *dev, struct ifreq *ifr)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("X.25 protocol support for generic HDLC");
MODULE_LICENSE("GPL v2");
