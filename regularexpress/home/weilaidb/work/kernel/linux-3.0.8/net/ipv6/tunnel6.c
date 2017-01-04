static struct xfrm6_tunnel __rcu *tunnel6_handlers __read_mostly;
static struct xfrm6_tunnel __rcu *tunnel46_handlers __read_mostly;
static DEFINE_MUTEX(tunnel6_mutex);
int xfrm6_tunnel_register(struct xfrm6_tunnel *handler, unsigned short family)
EXPORT_SYMBOL(xfrm6_tunnel_register);
int xfrm6_tunnel_deregister(struct xfrm6_tunnel *handler, unsigned short family)
EXPORT_SYMBOL(xfrm6_tunnel_deregister);
#define for_each_tunnel_rcu(head, handler)		\
for (handler = rcu_dereference(head);		\
handler != NULL;				\
handler = rcu_dereference(handler->next))	\
static int tunnel6_rcv(struct sk_buff *skb)
static int tunnel46_rcv(struct sk_buff *skb)
static void tunnel6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static const struct inet6_protocol tunnel6_protocol = ;
static const struct inet6_protocol tunnel46_protocol = ;
static int __init tunnel6_init(void)
static void __exit tunnel6_fini(void)
module_init(tunnel6_init);
module_exit(tunnel6_fini);
MODULE_LICENSE("GPL");
