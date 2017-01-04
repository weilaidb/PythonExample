static struct xfrm_tunnel __rcu *tunnel4_handlers __read_mostly;
static struct xfrm_tunnel __rcu *tunnel64_handlers __read_mostly;
static DEFINE_MUTEX(tunnel4_mutex);
static inline struct xfrm_tunnel __rcu **fam_handlers(unsigned short family)
int xfrm4_tunnel_register(struct xfrm_tunnel *handler, unsigned short family)
EXPORT_SYMBOL(xfrm4_tunnel_register);
int xfrm4_tunnel_deregister(struct xfrm_tunnel *handler, unsigned short family)
EXPORT_SYMBOL(xfrm4_tunnel_deregister);
#define for_each_tunnel_rcu(head, handler)		\
for (handler = rcu_dereference(head);		\
handler != NULL;				\
handler = rcu_dereference(handler->next))	\
static int tunnel4_rcv(struct sk_buff *skb)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int tunnel64_rcv(struct sk_buff *skb)
static void tunnel4_err(struct sk_buff *skb, u32 info)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static void tunnel64_err(struct sk_buff *skb, u32 info)
static const struct net_protocol tunnel4_protocol = ;
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static const struct net_protocol tunnel64_protocol = ;
static int __init tunnel4_init(void)
static void __exit tunnel4_fini(void)
module_init(tunnel4_init);
module_exit(tunnel4_fini);
MODULE_LICENSE("GPL");
