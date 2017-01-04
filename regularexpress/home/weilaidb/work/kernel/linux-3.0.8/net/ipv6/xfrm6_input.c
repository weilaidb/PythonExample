int xfrm6_extract_input(struct xfrm_state *x, struct sk_buff *skb)
int xfrm6_rcv_spi(struct sk_buff *skb, int nexthdr, __be32 spi)
EXPORT_SYMBOL(xfrm6_rcv_spi);
int xfrm6_transport_finish(struct sk_buff *skb, int async)
int xfrm6_rcv(struct sk_buff *skb)
EXPORT_SYMBOL(xfrm6_rcv);
int xfrm6_input_addr(struct sk_buff *skb, xfrm_address_t *daddr,
xfrm_address_t *saddr, u8 proto)
EXPORT_SYMBOL(xfrm6_input_addr);
