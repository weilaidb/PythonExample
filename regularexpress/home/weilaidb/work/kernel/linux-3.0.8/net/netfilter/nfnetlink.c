MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_NETFILTER);
static char __initdata nfversion[] = "0.30";
static const struct nfnetlink_subsystem *subsys_table[NFNL_SUBSYS_COUNT];
static DEFINE_MUTEX(nfnl_mutex);
void nfnl_lock(void)
EXPORT_SYMBOL_GPL(nfnl_lock);
void nfnl_unlock(void)
EXPORT_SYMBOL_GPL(nfnl_unlock);
int nfnetlink_subsys_register(const struct nfnetlink_subsystem *n)
EXPORT_SYMBOL_GPL(nfnetlink_subsys_register);
int nfnetlink_subsys_unregister(const struct nfnetlink_subsystem *n)
EXPORT_SYMBOL_GPL(nfnetlink_subsys_unregister);
static inline const struct nfnetlink_subsystem *nfnetlink_get_subsys(u_int16_t type)
static inline const struct nfnl_callback *
nfnetlink_find_client(u_int16_t type, const struct nfnetlink_subsystem *ss)
int nfnetlink_has_listeners(struct net *net, unsigned int group)
EXPORT_SYMBOL_GPL(nfnetlink_has_listeners);
int nfnetlink_send(struct sk_buff *skb, struct net *net, u32 pid,
unsigned group, int echo, gfp_t flags)
EXPORT_SYMBOL_GPL(nfnetlink_send);
int nfnetlink_set_err(struct net *net, u32 pid, u32 group, int error)
EXPORT_SYMBOL_GPL(nfnetlink_set_err);
int nfnetlink_unicast(struct sk_buff *skb, struct net *net, u_int32_t pid, int flags)
EXPORT_SYMBOL_GPL(nfnetlink_unicast);
static int nfnetlink_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void nfnetlink_rcv(struct sk_buff *skb)
static int __net_init nfnetlink_net_init(struct net *net)
static void __net_exit nfnetlink_net_exit_batch(struct list_head *net_exit_list)
static struct pernet_operations nfnetlink_net_ops = ;
static int __init nfnetlink_init(void)
static void __exit nfnetlink_exit(void)
module_init(nfnetlink_init);
module_exit(nfnetlink_exit);
