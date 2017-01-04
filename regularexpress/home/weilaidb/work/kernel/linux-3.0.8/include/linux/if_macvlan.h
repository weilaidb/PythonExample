#define _LINUX_IF_MACVLAN_H
#if defined(CONFIG_MACVTAP) || defined(CONFIG_MACVTAP_MODULE)
struct socket *macvtap_get_socket(struct file *);
struct file;
struct socket;
static inline struct socket *macvtap_get_socket(struct file *f)
struct macvlan_port;
struct macvtap_queue;
struct macvlan_pcpu_stats ;
#define MAX_MACVTAP_QUEUES	(NR_CPUS < 16 ? NR_CPUS : 16)
struct macvlan_dev ;
static inline void macvlan_count_rx(const struct macvlan_dev *vlan,
unsigned int len, bool success,
bool multicast)
extern void macvlan_common_setup(struct net_device *dev);
extern int macvlan_common_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[],
int (*receive)(struct sk_buff *skb),
int (*forward)(struct net_device *dev,
struct sk_buff *skb));
extern void macvlan_count_rx(const struct macvlan_dev *vlan,
unsigned int len, bool success,
bool multicast);
extern void macvlan_dellink(struct net_device *dev, struct list_head *head);
extern int macvlan_link_register(struct rtnl_link_ops *ops);
extern netdev_tx_t macvlan_start_xmit(struct sk_buff *skb,
struct net_device *dev);
