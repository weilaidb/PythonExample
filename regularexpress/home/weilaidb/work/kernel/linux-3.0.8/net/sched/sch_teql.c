struct teql_master ;
struct teql_sched_data ;
#define NEXT_SLAVE(q) (((struct teql_sched_data *)qdisc_priv(q))->next)
#define FMASK (IFF_BROADCAST | IFF_POINTOPOINT)
static int
teql_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *
teql_dequeue(struct Qdisc *sch)
static struct sk_buff *
teql_peek(struct Qdisc *sch)
static inline void
teql_neigh_release(struct neighbour *n)
static void
teql_reset(struct Qdisc *sch)
static void
teql_destroy(struct Qdisc *sch)
static int teql_qdisc_init(struct Qdisc *sch, struct nlattr *opt)
static int
__teql_resolve(struct sk_buff *skb, struct sk_buff *skb_res, struct net_device *dev)
static inline int teql_resolve(struct sk_buff *skb,
struct sk_buff *skb_res, struct net_device *dev)
static netdev_tx_t teql_master_xmit(struct sk_buff *skb, struct net_device *dev)
static int teql_master_open(struct net_device *dev)
static int teql_master_close(struct net_device *dev)
static struct rtnl_link_stats64 *teql_master_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static int teql_master_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops teql_netdev_ops = ;
static __init void teql_master_setup(struct net_device *dev)
static LIST_HEAD(master_dev_list);
static int max_equalizers = 1;
module_param(max_equalizers, int, 0);
MODULE_PARM_DESC(max_equalizers, "Max number of link equalizers");
static int __init teql_init(void)
static void __exit teql_exit(void)
module_init(teql_init);
module_exit(teql_exit);
MODULE_LICENSE("GPL");
