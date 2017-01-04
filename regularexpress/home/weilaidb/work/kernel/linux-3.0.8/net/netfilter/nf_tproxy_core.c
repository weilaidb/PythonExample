static void
nf_tproxy_destructor(struct sk_buff *skb)
void
nf_tproxy_assign_sock(struct sk_buff *skb, struct sock *sk)
EXPORT_SYMBOL_GPL(nf_tproxy_assign_sock);
static int __init nf_tproxy_init(void)
module_init(nf_tproxy_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Krisztian Kovacs");
MODULE_DESCRIPTION("Transparent proxy support core routines");
