#define TX_Q_LIMIT    32
struct ifb_private ;
static int numifbs = 2;
static void ri_tasklet(unsigned long dev);
static netdev_tx_t ifb_xmit(struct sk_buff *skb, struct net_device *dev);
static int ifb_open(struct net_device *dev);
static int ifb_close(struct net_device *dev);
static void ri_tasklet(unsigned long dev)
static const struct net_device_ops ifb_netdev_ops = ;
#define IFB_FEATURES (NETIF_F_NO_CSUM | NETIF_F_SG  | NETIF_F_FRAGLIST	| \
NETIF_F_TSO_ECN | NETIF_F_TSO | NETIF_F_TSO6	| \
NETIF_F_HIGHDMA | NETIF_F_HW_VLAN_TX)
static void ifb_setup(struct net_device *dev)
static netdev_tx_t ifb_xmit(struct sk_buff *skb, struct net_device *dev)
static int ifb_close(struct net_device *dev)
static int ifb_open(struct net_device *dev)
static int ifb_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops ifb_link_ops __read_mostly = ;
module_param(numifbs, int, 0);
MODULE_PARM_DESC(numifbs, "Number of ifb devices");
static int __init ifb_init_one(int index)
static int __init ifb_init_module(void)
static void __exit ifb_cleanup_module(void)
module_init(ifb_init_module);
module_exit(ifb_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jamal Hadi Salim");
MODULE_ALIAS_RTNL_LINK("ifb");
