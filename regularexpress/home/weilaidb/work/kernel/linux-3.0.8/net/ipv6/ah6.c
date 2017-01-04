#define IPV6HDR_BASELEN 8
struct tmp_ext ;
struct ah_skb_cb ;
#define AH_SKB_CB(__skb) ((struct ah_skb_cb *)&((__skb)->cb[0]))
static void *ah_alloc_tmp(struct crypto_ahash *ahash, int nfrags,
unsigned int size)
static inline struct tmp_ext *ah_tmp_ext(void *base)
static inline u8 *ah_tmp_auth(u8 *tmp, unsigned int offset)
static inline u8 *ah_tmp_icv(struct crypto_ahash *ahash, void *tmp,
unsigned int offset)
static inline struct ahash_request *ah_tmp_req(struct crypto_ahash *ahash,
u8 *icv)
static inline struct scatterlist *ah_req_sg(struct crypto_ahash *ahash,
struct ahash_request *req)
static int zero_out_mutable_opts(struct ipv6_opt_hdr *opthdr)
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
static void ipv6_rearrange_destopt(struct ipv6hdr *iph, struct ipv6_opt_hdr *destopt)
static void ipv6_rearrange_destopt(struct ipv6hdr *iph, struct ipv6_opt_hdr *destopt)
static void ipv6_rearrange_rthdr(struct ipv6hdr *iph, struct ipv6_rt_hdr *rthdr)
static int ipv6_clear_mutable_options(struct ipv6hdr *iph, int len, int dir)
static void ah6_output_done(struct crypto_async_request *base, int err)
static int ah6_output(struct xfrm_state *x, struct sk_buff *skb)
static void ah6_input_done(struct crypto_async_request *base, int err)
static int ah6_input(struct xfrm_state *x, struct sk_buff *skb)
static void ah6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int ah6_init_state(struct xfrm_state *x)
static void ah6_destroy(struct xfrm_state *x)
static const struct xfrm_type ah6_type =
;
static const struct inet6_protocol ah6_protocol = ;
static int __init ah6_init(void)
static void __exit ah6_fini(void)
module_init(ah6_init);
module_exit(ah6_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_AH);
