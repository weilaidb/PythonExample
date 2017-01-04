static void ipcomp4_err(struct sk_buff *skb, u32 info)
static struct xfrm_state *ipcomp_tunnel_create(struct xfrm_state *x)
static int ipcomp_tunnel_attach(struct xfrm_state *x)
static int ipcomp4_init_state(struct xfrm_state *x)
static const struct xfrm_type ipcomp_type = ;
static const struct net_protocol ipcomp4_protocol = ;
static int __init ipcomp4_init(void)
static void __exit ipcomp4_fini(void)
module_init(ipcomp4_init);
module_exit(ipcomp4_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("IP Payload Compression Protocol (IPComp/IPv4) - RFC3173");
MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
MODULE_ALIAS_XFRM_TYPE(AF_INET, XFRM_PROTO_COMP);
