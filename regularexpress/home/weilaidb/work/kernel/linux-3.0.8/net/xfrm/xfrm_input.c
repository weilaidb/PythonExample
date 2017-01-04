static struct kmem_cache *secpath_cachep __read_mostly;
void __secpath_destroy(struct sec_path *sp)
EXPORT_SYMBOL(__secpath_destroy);
struct sec_path *secpath_dup(struct sec_path *src)
EXPORT_SYMBOL(secpath_dup);
int xfrm_parse_spi(struct sk_buff *skb, u8 nexthdr, __be32 *spi, __be32 *seq)
int xfrm_prepare_input(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL(xfrm_prepare_input);
int xfrm_input(struct sk_buff *skb, int nexthdr, __be32 spi, int encap_type)
EXPORT_SYMBOL(xfrm_input);
int xfrm_input_resume(struct sk_buff *skb, int nexthdr)
EXPORT_SYMBOL(xfrm_input_resume);
void __init xfrm_input_init(void)
