static void xfrm4_beet_make_header(struct sk_buff *skb)
static int xfrm4_beet_output(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm4_beet_input(struct xfrm_state *x, struct sk_buff *skb)
static struct xfrm_mode xfrm4_beet_mode = ;
static int __init xfrm4_beet_init(void)
static void __exit xfrm4_beet_exit(void)
module_init(xfrm4_beet_init);
module_exit(xfrm4_beet_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_MODE(AF_INET, XFRM_MODE_BEET);
