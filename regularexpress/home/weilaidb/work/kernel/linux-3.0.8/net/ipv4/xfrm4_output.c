static int xfrm4_tunnel_check_size(struct sk_buff *skb)
int xfrm4_extract_output(struct xfrm_state *x, struct sk_buff *skb)
int xfrm4_prepare_output(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL(xfrm4_prepare_output);
int xfrm4_output_finish(struct sk_buff *skb)
int xfrm4_output(struct sk_buff *skb)
