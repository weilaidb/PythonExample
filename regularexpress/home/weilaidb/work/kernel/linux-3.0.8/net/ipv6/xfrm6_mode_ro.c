static int xfrm6_ro_output(struct xfrm_state *x, struct sk_buff *skb)
static struct xfrm_mode xfrm6_ro_mode = ;
static int __init xfrm6_ro_init(void)
static void __exit xfrm6_ro_exit(void)
module_init(xfrm6_ro_init);
module_exit(xfrm6_ro_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_MODE(AF_INET6, XFRM_MODE_ROUTEOPTIMIZATION);
