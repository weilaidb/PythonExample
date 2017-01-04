struct ccm_instance_ctx ;
struct crypto_ccm_ctx ;
struct crypto_rfc4309_ctx ;
struct crypto_ccm_req_priv_ctx ;
static inline struct crypto_ccm_req_priv_ctx *crypto_ccm_reqctx(
struct aead_request *req)
static int set_msg_len(u8 *block, unsigned int msglen, int csize)
static int crypto_ccm_setkey(struct crypto_aead *aead, const u8 *key,
unsigned int keylen)
static int crypto_ccm_setauthsize(struct crypto_aead *tfm,
unsigned int authsize)
static int format_input(u8 *info, struct aead_request *req,
unsigned int cryptlen)
static int format_adata(u8 *adata, unsigned int a)
static void compute_mac(struct crypto_cipher *tfm, u8 *data, int n,
struct crypto_ccm_req_priv_ctx *pctx)
static void get_data_to_compute(struct crypto_cipher *tfm,
struct crypto_ccm_req_priv_ctx *pctx,
struct scatterlist *sg, unsigned int len)
static int crypto_ccm_auth(struct aead_request *req, struct scatterlist *plain,
unsigned int cryptlen)
static void crypto_ccm_encrypt_done(struct crypto_async_request *areq, int err)
static inline int crypto_ccm_check_iv(const u8 *iv)
static int crypto_ccm_encrypt(struct aead_request *req)
static void crypto_ccm_decrypt_done(struct crypto_async_request *areq,
int err)
static int crypto_ccm_decrypt(struct aead_request *req)
static int crypto_ccm_init_tfm(struct crypto_tfm *tfm)
static void crypto_ccm_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_ccm_alloc_common(struct rtattr **tb,
const char *full_name,
const char *ctr_name,
const char *cipher_name)
static struct crypto_instance *crypto_ccm_alloc(struct rtattr **tb)
static void crypto_ccm_free(struct crypto_instance *inst)
static struct crypto_template crypto_ccm_tmpl = ;
static struct crypto_instance *crypto_ccm_base_alloc(struct rtattr **tb)
static struct crypto_template crypto_ccm_base_tmpl = ;
static int crypto_rfc4309_setkey(struct crypto_aead *parent, const u8 *key,
unsigned int keylen)
static int crypto_rfc4309_setauthsize(struct crypto_aead *parent,
unsigned int authsize)
static struct aead_request *crypto_rfc4309_crypt(struct aead_request *req)
static int crypto_rfc4309_encrypt(struct aead_request *req)
static int crypto_rfc4309_decrypt(struct aead_request *req)
static int crypto_rfc4309_init_tfm(struct crypto_tfm *tfm)
static void crypto_rfc4309_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_rfc4309_alloc(struct rtattr **tb)
static void crypto_rfc4309_free(struct crypto_instance *inst)
static struct crypto_template crypto_rfc4309_tmpl = ;
static int __init crypto_ccm_module_init(void)
static void __exit crypto_ccm_module_exit(void)
module_init(crypto_ccm_module_init);
module_exit(crypto_ccm_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Counter with CBC MAC");
MODULE_ALIAS("ccm_base");
MODULE_ALIAS("rfc4309");
