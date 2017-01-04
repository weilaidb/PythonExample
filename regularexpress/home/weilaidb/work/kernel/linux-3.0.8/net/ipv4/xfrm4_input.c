int xfrm4_extract_input(struct xfrm_state *x, struct sk_buff *skb)
static inline int xfrm4_rcv_encap_finish(struct sk_buff *skb)
int xfrm4_rcv_encap(struct sk_buff *skb, int nexthdr, __be32 spi,
int encap_type)
EXPORT_SYMBOL(xfrm4_rcv_encap);
int xfrm4_transport_finish(struct sk_buff *skb, int async)
int xfrm4_udp_encap_rcv(struct sock *sk, struct sk_buff *skb)
int xfrm4_rcv(struct sk_buff *skb)
EXPORT_SYMBOL(xfrm4_rcv);
