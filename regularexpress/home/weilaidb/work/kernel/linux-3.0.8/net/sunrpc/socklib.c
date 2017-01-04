size_t xdr_skb_read_bits(struct xdr_skb_reader *desc, void *to, size_t len)
EXPORT_SYMBOL_GPL(xdr_skb_read_bits);
static size_t xdr_skb_read_and_csum_bits(struct xdr_skb_reader *desc, void *to, size_t len)
ssize_t xdr_partial_copy_from_skb(struct xdr_buf *xdr, unsigned int base, struct xdr_skb_reader *desc, xdr_skb_read_actor copy_actor)
EXPORT_SYMBOL_GPL(xdr_partial_copy_from_skb);
int csum_partial_copy_to_xdr(struct xdr_buf *xdr, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(csum_partial_copy_to_xdr);
