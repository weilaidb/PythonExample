#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
static int nf_ct_ipv4_gather_frags(struct sk_buff *skb, u_int32_t user)
static enum ip_defrag_users nf_ct_defrag_user(unsigned int hooknum,
struct sk_buff *skb)
static unsigned int ipv4_conntrack_defrag(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ipv4_defrag_ops[] = ;
static int __init nf_defrag_init(void)
static void __exit nf_defrag_fini(void)
void nf_defrag_ipv4_enable(void)
EXPORT_SYMBOL_GPL(nf_defrag_ipv4_enable);
module_init(nf_defrag_init);
module_exit(nf_defrag_fini);
MODULE_LICENSE("GPL");
