static const char version[] = "DLCI driver v0.35, 4 Jan 1997, mike.mclagan@linux.org";
static LIST_HEAD(dlci_devs);
static void dlci_setup(struct net_device *);
static int dlci_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static void dlci_receive(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t dlci_transmit(struct sk_buff *skb, struct net_device *dev)
static int dlci_config(struct net_device *dev, struct dlci_conf __user *conf, int get)
static int dlci_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int dlci_change_mtu(struct net_device *dev, int new_mtu)
static int dlci_open(struct net_device *dev)
static int dlci_close(struct net_device *dev)
static int dlci_add(struct dlci_add *dlci)
static int dlci_del(struct dlci_add *dlci)
static int dlci_ioctl(unsigned int cmd, void __user *arg)
static const struct header_ops dlci_header_ops = ;
static const struct net_device_ops dlci_netdev_ops = ;
static void dlci_setup(struct net_device *dev)
static int dlci_dev_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct notifier_block dlci_notifier = ;
static int __init init_dlci(void)
static void __exit dlci_exit(void)
module_init(init_dlci);
module_exit(dlci_exit);
MODULE_AUTHOR("Mike McLagan");
MODULE_DESCRIPTION("Frame Relay DLCI layer");
MODULE_LICENSE("GPL");
