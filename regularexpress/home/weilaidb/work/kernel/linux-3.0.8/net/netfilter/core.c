static DEFINE_MUTEX(afinfo_mutex);
const struct nf_afinfo __rcu *nf_afinfo[NFPROTO_NUMPROTO] __read_mostly;
EXPORT_SYMBOL(nf_afinfo);
int nf_register_afinfo(const struct nf_afinfo *afinfo)
EXPORT_SYMBOL_GPL(nf_register_afinfo);
void nf_unregister_afinfo(const struct nf_afinfo *afinfo)
EXPORT_SYMBOL_GPL(nf_unregister_afinfo);
struct list_head nf_hooks[NFPROTO_NUMPROTO][NF_MAX_HOOKS] __read_mostly;
EXPORT_SYMBOL(nf_hooks);
static DEFINE_MUTEX(nf_hook_mutex);
int nf_register_hook(struct nf_hook_ops *reg)
EXPORT_SYMBOL(nf_register_hook);
void nf_unregister_hook(struct nf_hook_ops *reg)
EXPORT_SYMBOL(nf_unregister_hook);
int nf_register_hooks(struct nf_hook_ops *reg, unsigned int n)
EXPORT_SYMBOL(nf_register_hooks);
void nf_unregister_hooks(struct nf_hook_ops *reg, unsigned int n)
EXPORT_SYMBOL(nf_unregister_hooks);
unsigned int nf_iterate(struct list_head *head,
struct sk_buff *skb,
unsigned int hook,
const struct net_device *indev,
const struct net_device *outdev,
struct list_head **i,
int (*okfn)(struct sk_buff *),
int hook_thresh)
int nf_hook_slow(u_int8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *),
int hook_thresh)
EXPORT_SYMBOL(nf_hook_slow);
int skb_make_writable(struct sk_buff *skb, unsigned int writable_len)
EXPORT_SYMBOL(skb_make_writable);
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
void (*ip_ct_attach)(struct sk_buff *, struct sk_buff *) __rcu __read_mostly;
EXPORT_SYMBOL(ip_ct_attach);
void nf_ct_attach(struct sk_buff *new, struct sk_buff *skb)
EXPORT_SYMBOL(nf_ct_attach);
void (*nf_ct_destroy)(struct nf_conntrack *) __rcu __read_mostly;
EXPORT_SYMBOL(nf_ct_destroy);
void nf_conntrack_destroy(struct nf_conntrack *nfct)
EXPORT_SYMBOL(nf_conntrack_destroy);
struct proc_dir_entry *proc_net_netfilter;
EXPORT_SYMBOL(proc_net_netfilter);
void __init netfilter_init(void)
struct ctl_path nf_net_netfilter_sysctl_path[] = ;
EXPORT_SYMBOL_GPL(nf_net_netfilter_sysctl_path);
