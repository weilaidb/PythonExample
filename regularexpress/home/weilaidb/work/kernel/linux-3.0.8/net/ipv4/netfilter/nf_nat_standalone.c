static void nat_decode_session(struct sk_buff *skb, struct flowi *fl)
static unsigned int
nf_nat_fn(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
nf_nat_in(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
nf_nat_out(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
nf_nat_local_fn(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops nf_nat_ops[] __read_mostly = ;
static int __init nf_nat_standalone_init(void)
static void __exit nf_nat_standalone_fini(void)
module_init(nf_nat_standalone_init);
module_exit(nf_nat_standalone_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_nat");
