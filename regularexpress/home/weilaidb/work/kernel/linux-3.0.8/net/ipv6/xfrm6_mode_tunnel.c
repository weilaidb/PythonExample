static inline void ipip6_ecn_decapsulate(struct sk_buff *skb)
static int xfrm6_mode_tunnel_output(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm6_mode_tunnel_input(struct xfrm_state *x, struct sk_buff *skb)
static struct xfrm_mode xfrm6_tunnel_mode = ;
static int __init xfrm6_mode_tunnel_init(void)
static void __exit xfrm6_mode_tunnel_exit(void)
module_init(xfrm6_mode_tunnel_init);
module_exit(xfrm6_mode_tunnel_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_MODE(AF_INET6, XFRM_MODE_TUNNEL);
