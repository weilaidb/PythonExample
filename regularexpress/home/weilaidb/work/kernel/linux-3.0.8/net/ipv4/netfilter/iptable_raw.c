#define RAW_VALID_HOOKS ((1 << NF_INET_PRE_ROUTING) | (1 << NF_INET_LOCAL_OUT))
static const struct xt_table packet_raw = ;
static unsigned int
iptable_raw_hook(unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *rawtable_ops __read_mostly;
static int __net_init iptable_raw_net_init(struct net *net)
static void __net_exit iptable_raw_net_exit(struct net *net)
static struct pernet_operations iptable_raw_net_ops = ;
static int __init iptable_raw_init(void)
static void __exit iptable_raw_fini(void)
module_init(iptable_raw_init);
module_exit(iptable_raw_fini);
MODULE_LICENSE("GPL");
