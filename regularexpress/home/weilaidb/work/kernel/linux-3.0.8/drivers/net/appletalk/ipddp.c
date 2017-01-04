static const char version[] = KERN_INFO "ipddp.c:v0.01 8/28/97 Bradford W. Johnson <johns393@maroon.tc.umn.edu>\n";
static struct ipddp_route *ipddp_route_list;
static DEFINE_SPINLOCK(ipddp_route_lock);
static int ipddp_mode = IPDDP_ENCAP;
static int ipddp_mode = IPDDP_DECAP;
static netdev_tx_t ipddp_xmit(struct sk_buff *skb,
struct net_device *dev);
static int ipddp_create(struct ipddp_route *new_rt);
static int ipddp_delete(struct ipddp_route *rt);
static struct ipddp_route* __ipddp_find_route(struct ipddp_route *rt);
static int ipddp_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static const struct net_device_ops ipddp_netdev_ops = ;
static struct net_device * __init ipddp_init(void)
static netdev_tx_t ipddp_xmit(struct sk_buff *skb, struct net_device *dev)
static int ipddp_create(struct ipddp_route *new_rt)
static int ipddp_delete(struct ipddp_route *rt)
static struct ipddp_route* __ipddp_find_route(struct ipddp_route *rt)
static int ipddp_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static struct net_device *dev_ipddp;
MODULE_LICENSE("GPL");
module_param(ipddp_mode, int, 0);
static int __init ipddp_init_module(void)
static void __exit ipddp_cleanup_module(void)
module_init(ipddp_init_module);
module_exit(ipddp_cleanup_module);
