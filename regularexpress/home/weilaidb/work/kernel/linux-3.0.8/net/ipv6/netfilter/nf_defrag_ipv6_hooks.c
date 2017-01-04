#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
static enum ip6_defrag_users nf_ct6_defrag_user(unsigned int hooknum,
struct sk_buff *skb)
static unsigned int ipv6_defrag(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ipv6_defrag_ops[] = ;
static int __init nf_defrag_init(void)
static void __exit nf_defrag_fini(void)
void nf_defrag_ipv6_enable(void)
EXPORT_SYMBOL_GPL(nf_defrag_ipv6_enable);
module_init(nf_defrag_init);
module_exit(nf_defrag_fini);
MODULE_LICENSE("GPL");
