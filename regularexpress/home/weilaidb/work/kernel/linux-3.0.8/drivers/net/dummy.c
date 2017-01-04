static int numdummies = 1;
static int dummy_set_address(struct net_device *dev, void *p)
static void set_multicast_list(struct net_device *dev)
struct pcpu_dstats ;
static struct rtnl_link_stats64 *dummy_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static netdev_tx_t dummy_xmit(struct sk_buff *skb, struct net_device *dev)
static int dummy_dev_init(struct net_device *dev)
static void dummy_dev_free(struct net_device *dev)
static const struct net_device_ops dummy_netdev_ops = ;
static void dummy_setup(struct net_device *dev)
static int dummy_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops dummy_link_ops __read_mostly = ;
module_param(numdummies, int, 0);
MODULE_PARM_DESC(numdummies, "Number of dummy pseudo devices");
static int __init dummy_init_one(void)
static int __init dummy_init_module(void)
static void __exit dummy_cleanup_module(void)
module_init(dummy_init_module);
module_exit(dummy_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_ALIAS_RTNL_LINK("dummy");
