int xfrm6_find_1stfragopt(struct xfrm_state *x, struct sk_buff *skb,
u8 **prevhdr)
EXPORT_SYMBOL(xfrm6_find_1stfragopt);
static int xfrm6_tunnel_check_size(struct sk_buff *skb)
int xfrm6_extract_output(struct xfrm_state *x, struct sk_buff *skb)
int xfrm6_prepare_output(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL(xfrm6_prepare_output);
int xfrm6_output_finish(struct sk_buff *skb)
static int __xfrm6_output(struct sk_buff *skb)
int xfrm6_output(struct sk_buff *skb)
