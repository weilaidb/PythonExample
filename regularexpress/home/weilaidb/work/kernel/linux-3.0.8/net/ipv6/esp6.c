struct esp_skb_cb ;
#define ESP_SKB_CB(__skb) ((struct esp_skb_cb *)&((__skb)->cb[0]))
static u32 esp6_get_mtu(struct xfrm_state *x, int mtu);
static void *esp_alloc_tmp(struct crypto_aead *aead, int nfrags, int seqihlen)
static inline __be32 *esp_tmp_seqhi(void *tmp)
static inline u8 *esp_tmp_iv(struct crypto_aead *aead, void *tmp, int seqhilen)
static inline struct aead_givcrypt_request *esp_tmp_givreq(
struct crypto_aead *aead, u8 *iv)
static inline struct aead_request *esp_tmp_req(struct crypto_aead *aead, u8 *iv)
static inline struct scatterlist *esp_req_sg(struct crypto_aead *aead,
struct aead_request *req)
static inline struct scatterlist *esp_givreq_sg(
struct crypto_aead *aead, struct aead_givcrypt_request *req)
static void esp_output_done(struct crypto_async_request *base, int err)
static int esp6_output(struct xfrm_state *x, struct sk_buff *skb)
static int esp_input_done2(struct sk_buff *skb, int err)
static void esp_input_done(struct crypto_async_request *base, int err)
static int esp6_input(struct xfrm_state *x, struct sk_buff *skb)
static u32 esp6_get_mtu(struct xfrm_state *x, int mtu)
static void esp6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static void esp6_destroy(struct xfrm_state *x)
static int esp_init_aead(struct xfrm_state *x)
static int esp_init_authenc(struct xfrm_state *x)
static int esp6_init_state(struct xfrm_state *x)
static const struct xfrm_type esp6_type =
;
static const struct inet6_protocol esp6_protocol = ;
static int __init esp6_init(void)
static void __exit esp6_fini(void)
module_init(esp6_init);
module_exit(esp6_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_ESP);
