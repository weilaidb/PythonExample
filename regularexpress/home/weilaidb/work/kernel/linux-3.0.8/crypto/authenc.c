typedef u8 *(*authenc_ahash_t)(struct aead_request *req, unsigned int flags);
struct authenc_instance_ctx ;
struct crypto_authenc_ctx ;
struct authenc_request_ctx ;
static void authenc_request_complete(struct aead_request *req, int err)
static int crypto_authenc_setkey(struct crypto_aead *authenc, const u8 *key,
unsigned int keylen)
static void authenc_geniv_ahash_update_done(struct crypto_async_request *areq,
int err)
static void authenc_geniv_ahash_done(struct crypto_async_request *areq, int err)
static void authenc_verify_ahash_update_done(struct crypto_async_request *areq,
int err)
static void authenc_verify_ahash_done(struct crypto_async_request *areq,
int err)
static u8 *crypto_authenc_ahash_fb(struct aead_request *req, unsigned int flags)
static u8 *crypto_authenc_ahash(struct aead_request *req, unsigned int flags)
static int crypto_authenc_genicv(struct aead_request *req, u8 *iv,
unsigned int flags)
static void crypto_authenc_encrypt_done(struct crypto_async_request *req,
int err)
static int crypto_authenc_encrypt(struct aead_request *req)
static void crypto_authenc_givencrypt_done(struct crypto_async_request *req,
int err)
static int crypto_authenc_givencrypt(struct aead_givcrypt_request *req)
static int crypto_authenc_verify(struct aead_request *req,
authenc_ahash_t authenc_ahash_fn)
static int crypto_authenc_iverify(struct aead_request *req, u8 *iv,
unsigned int cryptlen)
static int crypto_authenc_decrypt(struct aead_request *req)
static int crypto_authenc_init_tfm(struct crypto_tfm *tfm)
static void crypto_authenc_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_authenc_alloc(struct rtattr **tb)
static void crypto_authenc_free(struct crypto_instance *inst)
static struct crypto_template crypto_authenc_tmpl = ;
static int __init crypto_authenc_module_init(void)
static void __exit crypto_authenc_module_exit(void)
module_init(crypto_authenc_module_init);
module_exit(crypto_authenc_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple AEAD wrapper for IPsec");
