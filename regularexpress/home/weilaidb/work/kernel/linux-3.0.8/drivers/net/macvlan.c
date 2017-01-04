#define MACVLAN_HASH_SIZE	(1 << BITS_PER_BYTE)
struct macvlan_port ;
static void macvlan_port_destroy(struct net_device *dev);
#define macvlan_port_get_rcu(dev) \
((struct macvlan_port *) rcu_dereference(dev->rx_handler_data))
#define macvlan_port_get(dev) ((struct macvlan_port *) dev->rx_handler_data)
#define macvlan_port_exists(dev) (dev->priv_flags & IFF_MACVLAN_PORT)
static struct macvlan_dev *macvlan_hash_lookup(const struct macvlan_port *port,
const unsigned char *addr)
static void macvlan_hash_add(struct macvlan_dev *vlan)
static void macvlan_hash_del(struct macvlan_dev *vlan, bool sync)
static void macvlan_hash_change_addr(struct macvlan_dev *vlan,
const unsigned char *addr)
static int macvlan_addr_busy(const struct macvlan_port *port,
const unsigned char *addr)
static int macvlan_broadcast_one(struct sk_buff *skb,
const struct macvlan_dev *vlan,
const struct ethhdr *eth, bool local)
static void macvlan_broadcast(struct sk_buff *skb,
const struct macvlan_port *port,
struct net_device *src,
enum macvlan_mode mode)
static rx_handler_result_t macvlan_handle_frame(struct sk_buff **pskb)
static int macvlan_queue_xmit(struct sk_buff *skb, struct net_device *dev)
netdev_tx_t macvlan_start_xmit(struct sk_buff *skb,
struct net_device *dev)
EXPORT_SYMBOL_GPL(macvlan_start_xmit);
static int macvlan_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static const struct header_ops macvlan_hard_header_ops = ;
static int macvlan_open(struct net_device *dev)
static int macvlan_stop(struct net_device *dev)
static int macvlan_set_mac_address(struct net_device *dev, void *p)
static void macvlan_change_rx_flags(struct net_device *dev, int change)
static void macvlan_set_multicast_list(struct net_device *dev)
static int macvlan_change_mtu(struct net_device *dev, int new_mtu)
static struct lock_class_key macvlan_netdev_xmit_lock_key;
static struct lock_class_key macvlan_netdev_addr_lock_key;
#define MACVLAN_FEATURES \
(NETIF_F_SG | NETIF_F_ALL_CSUM | NETIF_F_HIGHDMA | NETIF_F_FRAGLIST | \
NETIF_F_GSO | NETIF_F_TSO | NETIF_F_UFO | NETIF_F_GSO_ROBUST | \
NETIF_F_TSO_ECN | NETIF_F_TSO6 | NETIF_F_GRO | NETIF_F_RXCSUM)
#define MACVLAN_STATE_MASK \
((1<<__LINK_STATE_NOCARRIER) | (1<<__LINK_STATE_DORMANT))
static void macvlan_set_lockdep_class_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void macvlan_set_lockdep_class(struct net_device *dev)
static int macvlan_init(struct net_device *dev)
static void macvlan_uninit(struct net_device *dev)
static struct rtnl_link_stats64 *macvlan_dev_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static void macvlan_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *drvinfo)
static int macvlan_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static const struct ethtool_ops macvlan_ethtool_ops = ;
static const struct net_device_ops macvlan_netdev_ops = ;
void macvlan_common_setup(struct net_device *dev)
EXPORT_SYMBOL_GPL(macvlan_common_setup);
static void macvlan_setup(struct net_device *dev)
static int macvlan_port_create(struct net_device *dev)
static void macvlan_port_destroy(struct net_device *dev)
static int macvlan_validate(struct nlattr *tb[], struct nlattr *data[])
int macvlan_common_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[],
int (*receive)(struct sk_buff *skb),
int (*forward)(struct net_device *dev,
struct sk_buff *skb))
EXPORT_SYMBOL_GPL(macvlan_common_newlink);
static int macvlan_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
void macvlan_dellink(struct net_device *dev, struct list_head *head)
EXPORT_SYMBOL_GPL(macvlan_dellink);
static int macvlan_changelink(struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static size_t macvlan_get_size(const struct net_device *dev)
static int macvlan_fill_info(struct sk_buff *skb,
const struct net_device *dev)
static const struct nla_policy macvlan_policy[IFLA_MACVLAN_MAX + 1] = ;
int macvlan_link_register(struct rtnl_link_ops *ops)
;
EXPORT_SYMBOL_GPL(macvlan_link_register);
static struct rtnl_link_ops macvlan_link_ops = ;
static int macvlan_device_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct notifier_block macvlan_notifier_block __read_mostly = ;
static int __init macvlan_init_module(void)
static void __exit macvlan_cleanup_module(void)
module_init(macvlan_init_module);
module_exit(macvlan_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("Driver for MAC address based VLANs");
MODULE_ALIAS_RTNL_LINK("macvlan");
