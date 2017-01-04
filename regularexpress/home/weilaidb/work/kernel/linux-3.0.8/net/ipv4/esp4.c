struct esp_skb_cb ;
#define ESP_SKB_CB(__skb) ((struct esp_skb_cb *)&((__skb)->cb[0]))
static u32 esp4_get_mtu(struct xfrm_state *x, int mtu);
static void *esp_alloc_tmp(struct crypto_aead *aead, int nfrags, int seqhilen)
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
static int esp_output(struct xfrm_state *x, struct sk_buff *skb)
static int esp_input_done2(struct sk_buff *skb, int err)
static void esp_input_done(struct crypto_async_request *base, int err)
static int esp_input(struct xfrm_state *x, struct sk_buff *skb)
static u32 esp4_get_mtu(struct xfrm_state *x, int mtu)
static void esp4_err(struct sk_buff *skb, u32 info)
static void esp_destroy(struct xfrm_state *x)
static int esp_init_aead(struct xfrm_state *x)
static int esp_init_authenc(struct xfrm_state *x)
static int esp_init_state(struct xfrm_state *x)
static const struct xfrm_type esp_type =
;
static const struct net_protocol esp4_protocol = ;
static int __init esp4_init(void)
static void __exit esp4_fini(void)
module_init(esp4_init);
module_exit(esp4_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET, XFRM_PROTO_ESP);
