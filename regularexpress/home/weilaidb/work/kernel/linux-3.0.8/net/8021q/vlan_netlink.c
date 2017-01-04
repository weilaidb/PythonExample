static const struct nla_policy vlan_policy[IFLA_VLAN_MAX + 1] = ;
static const struct nla_policy vlan_map_policy[IFLA_VLAN_QOS_MAX + 1] = ;
static inline int vlan_validate_qos_map(struct nlattr *attr)
static int vlan_validate(struct nlattr *tb[], struct nlattr *data[])
static int vlan_changelink(struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static int vlan_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static inline size_t vlan_qos_map_size(unsigned int n)
static size_t vlan_get_size(const struct net_device *dev)
static int vlan_fill_info(struct sk_buff *skb, const struct net_device *dev)
struct rtnl_link_ops vlan_link_ops __read_mostly = ;
int __init vlan_netlink_init(void)
void __exit vlan_netlink_fini(void)
MODULE_ALIAS_RTNL_LINK("vlan");
