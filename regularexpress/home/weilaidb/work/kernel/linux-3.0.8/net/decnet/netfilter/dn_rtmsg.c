static struct sock *dnrmg = NULL;
static struct sk_buff *dnrmg_build_message(struct sk_buff *rt_skb, int *errp)
static void dnrmg_send_peer(struct sk_buff *skb)
static unsigned int dnrmg_hook(unsigned int hook,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
#define RCV_SKB_FAIL(err) do  while (0)
static inline void dnrmg_receive_user_skb(struct sk_buff *skb)
static struct nf_hook_ops dnrmg_ops __read_mostly = ;
static int __init dn_rtmsg_init(void)
static void __exit dn_rtmsg_fini(void)
MODULE_DESCRIPTION("DECnet Routing Message Grabulator");
MODULE_AUTHOR("Steven Whitehouse <steve@chygwyn.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_DNRTMSG);
module_init(dn_rtmsg_init);
module_exit(dn_rtmsg_fini);
