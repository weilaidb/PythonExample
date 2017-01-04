static int xfrm4_transport_output(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm4_transport_input(struct xfrm_state *x, struct sk_buff *skb)
static struct xfrm_mode xfrm4_transport_mode = ;
static int __init xfrm4_transport_init(void)
static void __exit xfrm4_transport_exit(void)
module_init(xfrm4_transport_init);
module_exit(xfrm4_transport_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_MODE(AF_INET, XFRM_MODE_TRANSPORT);
