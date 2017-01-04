static int raw_eth_ioctl(struct net_device *dev, struct ifreq *ifr);
static netdev_tx_t eth_tx(struct sk_buff *skb, struct net_device *dev)
static struct hdlc_proto proto = ;
static int raw_eth_ioctl(struct net_device *dev, struct ifreq *ifr)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Ethernet encapsulation support for generic HDLC");
MODULE_LICENSE("GPL v2");
