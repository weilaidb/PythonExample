struct ah_skb_cb ;
#define AH_SKB_CB(__skb) ((struct ah_skb_cb *)&((__skb)->cb[0]))
static void *ah_alloc_tmp(struct crypto_ahash *ahash, int nfrags,
unsigned int size)
static inline u8 *ah_tmp_auth(void *tmp, unsigned int offset)
static inline u8 *ah_tmp_icv(struct crypto_ahash *ahash, void *tmp,
unsigned int offset)
static inline struct ahash_request *ah_tmp_req(struct crypto_ahash *ahash,
u8 *icv)
static inline struct scatterlist *ah_req_sg(struct crypto_ahash *ahash,
struct ahash_request *req)
static int ip_clear_mutable_options(const struct iphdr *iph, __be32 *daddr)
static void ah_output_done(struct crypto_async_request *base, int err)
static int ah_output(struct xfrm_state *x, struct sk_buff *skb)
static void ah_input_done(struct crypto_async_request *base, int err)
static int ah_input(struct xfrm_state *x, struct sk_buff *skb)
static void ah4_err(struct sk_buff *skb, u32 info)
static int ah_init_state(struct xfrm_state *x)
static void ah_destroy(struct xfrm_state *x)
static const struct xfrm_type ah_type =
;
static const struct net_protocol ah4_protocol = ;
static int __init ah4_init(void)
static void __exit ah4_fini(void)
module_init(ah4_init);
module_exit(ah4_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET, XFRM_PROTO_AH);
