struct gcm_instance_ctx ;
struct crypto_gcm_ctx ;
struct crypto_rfc4106_ctx ;
struct crypto_rfc4543_ctx ;
struct crypto_rfc4543_req_ctx ;
struct crypto_gcm_ghash_ctx ;
struct crypto_gcm_req_priv_ctx ;
struct crypto_gcm_setkey_result ;
static void *gcm_zeroes;
static inline struct crypto_gcm_req_priv_ctx *crypto_gcm_reqctx(
struct aead_request *req)
static void crypto_gcm_setkey_done(struct crypto_async_request *req, int err)
static int crypto_gcm_setkey(struct crypto_aead *aead, const u8 *key,
unsigned int keylen)
static int crypto_gcm_setauthsize(struct crypto_aead *tfm,
unsigned int authsize)
static void crypto_gcm_init_crypt(struct ablkcipher_request *ablk_req,
struct aead_request *req,
unsigned int cryptlen)
static inline unsigned int gcm_remain(unsigned int len)
static void gcm_hash_len_done(struct crypto_async_request *areq, int err);
static void gcm_hash_final_done(struct crypto_async_request *areq, int err);
static int gcm_hash_update(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx,
crypto_completion_t complete,
struct scatterlist *src,
unsigned int len)
static int gcm_hash_remain(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx,
unsigned int remain,
crypto_completion_t complete)
static int gcm_hash_len(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx)
static int gcm_hash_final(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx)
static void __gcm_hash_final_done(struct aead_request *req, int err)
static void gcm_hash_final_done(struct crypto_async_request *areq, int err)
static void __gcm_hash_len_done(struct aead_request *req, int err)
static void gcm_hash_len_done(struct crypto_async_request *areq, int err)
static void __gcm_hash_crypt_remain_done(struct aead_request *req, int err)
static void gcm_hash_crypt_remain_done(struct crypto_async_request *areq,
int err)
static void __gcm_hash_crypt_done(struct aead_request *req, int err)
static void gcm_hash_crypt_done(struct crypto_async_request *areq, int err)
static void __gcm_hash_assoc_remain_done(struct aead_request *req, int err)
static void gcm_hash_assoc_remain_done(struct crypto_async_request *areq,
int err)
static void __gcm_hash_assoc_done(struct aead_request *req, int err)
static void gcm_hash_assoc_done(struct crypto_async_request *areq, int err)
static void __gcm_hash_init_done(struct aead_request *req, int err)
static void gcm_hash_init_done(struct crypto_async_request *areq, int err)
static int gcm_hash(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx)
static void gcm_enc_copy_hash(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx)
static void gcm_enc_hash_done(struct aead_request *req, int err)
static void gcm_encrypt_done(struct crypto_async_request *areq, int err)
static int crypto_gcm_encrypt(struct aead_request *req)
static int crypto_gcm_verify(struct aead_request *req,
struct crypto_gcm_req_priv_ctx *pctx)
static void gcm_decrypt_done(struct crypto_async_request *areq, int err)
static void gcm_dec_hash_done(struct aead_request *req, int err)
static int crypto_gcm_decrypt(struct aead_request *req)
static int crypto_gcm_init_tfm(struct crypto_tfm *tfm)
static void crypto_gcm_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_gcm_alloc_common(struct rtattr **tb,
const char *full_name,
const char *ctr_name,
const char *ghash_name)
static struct crypto_instance *crypto_gcm_alloc(struct rtattr **tb)
static void crypto_gcm_free(struct crypto_instance *inst)
static struct crypto_template crypto_gcm_tmpl = ;
static struct crypto_instance *crypto_gcm_base_alloc(struct rtattr **tb)
static struct crypto_template crypto_gcm_base_tmpl = ;
static int crypto_rfc4106_setkey(struct crypto_aead *parent, const u8 *key,
unsigned int keylen)
static int crypto_rfc4106_setauthsize(struct crypto_aead *parent,
unsigned int authsize)
static struct aead_request *crypto_rfc4106_crypt(struct aead_request *req)
static int crypto_rfc4106_encrypt(struct aead_request *req)
static int crypto_rfc4106_decrypt(struct aead_request *req)
static int crypto_rfc4106_init_tfm(struct crypto_tfm *tfm)
static void crypto_rfc4106_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_rfc4106_alloc(struct rtattr **tb)
static void crypto_rfc4106_free(struct crypto_instance *inst)
static struct crypto_template crypto_rfc4106_tmpl = ;
static inline struct crypto_rfc4543_req_ctx *crypto_rfc4543_reqctx(
struct aead_request *req)
static int crypto_rfc4543_setkey(struct crypto_aead *parent, const u8 *key,
unsigned int keylen)
static int crypto_rfc4543_setauthsize(struct crypto_aead *parent,
unsigned int authsize)
static struct aead_request *crypto_rfc4543_crypt(struct aead_request *req,
int enc)
static int crypto_rfc4543_encrypt(struct aead_request *req)
static int crypto_rfc4543_decrypt(struct aead_request *req)
static int crypto_rfc4543_init_tfm(struct crypto_tfm *tfm)
static void crypto_rfc4543_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_rfc4543_alloc(struct rtattr **tb)
static void crypto_rfc4543_free(struct crypto_instance *inst)
static struct crypto_template crypto_rfc4543_tmpl = ;
static int __init crypto_gcm_module_init(void)
static void __exit crypto_gcm_module_exit(void)
module_init(crypto_gcm_module_init);
module_exit(crypto_gcm_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Galois/Counter Mode");
MODULE_AUTHOR("Mikko Herranen <mh1@iki.fi>");
MODULE_ALIAS("gcm_base");
MODULE_ALIAS("rfc4106");
MODULE_ALIAS("rfc4543");
