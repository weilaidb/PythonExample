static int xfrm_output2(struct sk_buff *skb);
static int xfrm_state_check_space(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm_output_one(struct sk_buff *skb, int err)
int xfrm_output_resume(struct sk_buff *skb, int err)
EXPORT_SYMBOL_GPL(xfrm_output_resume);
static int xfrm_output2(struct sk_buff *skb)
static int xfrm_output_gso(struct sk_buff *skb)
int xfrm_output(struct sk_buff *skb)
int xfrm_inner_extract_output(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(xfrm_output);
EXPORT_SYMBOL_GPL(xfrm_inner_extract_output);
