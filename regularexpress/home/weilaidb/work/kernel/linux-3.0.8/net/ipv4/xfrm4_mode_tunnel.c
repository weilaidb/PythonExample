static inline void ipip_ecn_decapsulate(struct sk_buff *skb)
static int xfrm4_mode_tunnel_output(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm4_mode_tunnel_input(struct xfrm_state *x, struct sk_buff *skb)
static struct xfrm_mode xfrm4_tunnel_mode = ;
static int __init xfrm4_mode_tunnel_init(void)
static void __exit xfrm4_mode_tunnel_exit(void)
module_init(xfrm4_mode_tunnel_init);
module_exit(xfrm4_mode_tunnel_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_MODE(AF_INET, XFRM_MODE_TUNNEL);
