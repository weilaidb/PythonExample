static void ipcomp6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static struct xfrm_state *ipcomp6_tunnel_create(struct xfrm_state *x)
static int ipcomp6_tunnel_attach(struct xfrm_state *x)
static int ipcomp6_init_state(struct xfrm_state *x)
static const struct xfrm_type ipcomp6_type =
;
static const struct inet6_protocol ipcomp6_protocol =
;
static int __init ipcomp6_init(void)
static void __exit ipcomp6_fini(void)
module_init(ipcomp6_init);
module_exit(ipcomp6_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("IP Payload Compression Protocol (IPComp) for IPv6 - RFC3173");
MODULE_AUTHOR("Mitsuru KANDA <mk@linux-ipv6.org>");
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_COMP);
