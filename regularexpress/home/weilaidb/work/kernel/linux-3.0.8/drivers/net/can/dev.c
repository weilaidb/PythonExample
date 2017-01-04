#define MOD_DESC "CAN device driver interface"
MODULE_DESCRIPTION(MOD_DESC);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Wolfgang Grandegger <wg@grandegger.com>");
#define CAN_CALC_MAX_ERROR 50
static int can_update_spt(const struct can_bittiming_const *btc,
int sampl_pt, int tseg, int *tseg1, int *tseg2)
static int can_calc_bittiming(struct net_device *dev, struct can_bittiming *bt)
static int can_calc_bittiming(struct net_device *dev, struct can_bittiming *bt)
static int can_fixup_bittiming(struct net_device *dev, struct can_bittiming *bt)
int can_get_bittiming(struct net_device *dev, struct can_bittiming *bt)
static void can_flush_echo_skb(struct net_device *dev)
void can_put_echo_skb(struct sk_buff *skb, struct net_device *dev,
unsigned int idx)
EXPORT_SYMBOL_GPL(can_put_echo_skb);
void can_get_echo_skb(struct net_device *dev, unsigned int idx)
EXPORT_SYMBOL_GPL(can_get_echo_skb);
void can_free_echo_skb(struct net_device *dev, unsigned int idx)
EXPORT_SYMBOL_GPL(can_free_echo_skb);
void can_restart(unsigned long data)
int can_restart_now(struct net_device *dev)
void can_bus_off(struct net_device *dev)
EXPORT_SYMBOL_GPL(can_bus_off);
static void can_setup(struct net_device *dev)
struct sk_buff *alloc_can_skb(struct net_device *dev, struct can_frame **cf)
EXPORT_SYMBOL_GPL(alloc_can_skb);
struct sk_buff *alloc_can_err_skb(struct net_device *dev, struct can_frame **cf)
EXPORT_SYMBOL_GPL(alloc_can_err_skb);
struct net_device *alloc_candev(int sizeof_priv, unsigned int echo_skb_max)
EXPORT_SYMBOL_GPL(alloc_candev);
void free_candev(struct net_device *dev)
EXPORT_SYMBOL_GPL(free_candev);
int open_candev(struct net_device *dev)
EXPORT_SYMBOL_GPL(open_candev);
void close_candev(struct net_device *dev)
EXPORT_SYMBOL_GPL(close_candev);
static const struct nla_policy can_policy[IFLA_CAN_MAX + 1] = ;
static int can_changelink(struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static size_t can_get_size(const struct net_device *dev)
static int can_fill_info(struct sk_buff *skb, const struct net_device *dev)
static size_t can_get_xstats_size(const struct net_device *dev)
static int can_fill_xstats(struct sk_buff *skb, const struct net_device *dev)
static int can_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops can_link_ops __read_mostly = ;
int register_candev(struct net_device *dev)
EXPORT_SYMBOL_GPL(register_candev);
void unregister_candev(struct net_device *dev)
EXPORT_SYMBOL_GPL(unregister_candev);
static __init int can_dev_init(void)
module_init(can_dev_init);
static __exit void can_dev_exit(void)
module_exit(can_dev_exit);
MODULE_ALIAS_RTNL_LINK("can");
