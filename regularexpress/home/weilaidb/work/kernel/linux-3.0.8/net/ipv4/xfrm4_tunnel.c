static int ipip_output(struct xfrm_state *x, struct sk_buff *skb)
static int ipip_xfrm_rcv(struct xfrm_state *x, struct sk_buff *skb)
static int ipip_init_state(struct xfrm_state *x)
static void ipip_destroy(struct xfrm_state *x)
static const struct xfrm_type ipip_type = ;
static int xfrm_tunnel_rcv(struct sk_buff *skb)
static int xfrm_tunnel_err(struct sk_buff *skb, u32 info)
static struct xfrm_tunnel xfrm_tunnel_handler __read_mostly = ;
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static struct xfrm_tunnel xfrm64_tunnel_handler __read_mostly = ;
static int __init ipip_init(void)
static void __exit ipip_fini(void)
module_init(ipip_init);
module_exit(ipip_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET, XFRM_PROTO_IPIP);
