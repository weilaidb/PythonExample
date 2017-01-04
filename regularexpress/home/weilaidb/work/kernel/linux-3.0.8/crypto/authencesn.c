struct authenc_esn_instance_ctx ;
struct crypto_authenc_esn_ctx ;
struct authenc_esn_request_ctx ;
static void authenc_esn_request_complete(struct aead_request *req, int err)
static int crypto_authenc_esn_setkey(struct crypto_aead *authenc_esn, const u8 *key,
unsigned int keylen)
static void authenc_esn_geniv_ahash_update_done(struct crypto_async_request *areq,
int err)
static void authenc_esn_geniv_ahash_update_done2(struct crypto_async_request *areq,
int err)
static void authenc_esn_geniv_ahash_done(struct crypto_async_request *areq,
int err)
static void authenc_esn_verify_ahash_update_done(struct crypto_async_request *areq,
int err)
static void authenc_esn_verify_ahash_update_done2(struct crypto_async_request *areq,
int err)
static void authenc_esn_verify_ahash_done(struct crypto_async_request *areq,
int err)
static u8 *crypto_authenc_esn_ahash(struct aead_request *req,
unsigned int flags)
static int crypto_authenc_esn_genicv(struct aead_request *req, u8 *iv,
unsigned int flags)
static void crypto_authenc_esn_encrypt_done(struct crypto_async_request *req,
int err)
static int crypto_authenc_esn_encrypt(struct aead_request *req)
static void crypto_authenc_esn_givencrypt_done(struct crypto_async_request *req,
int err)
static int crypto_authenc_esn_givencrypt(struct aead_givcrypt_request *req)
static int crypto_authenc_esn_verify(struct aead_request *req)
static int crypto_authenc_esn_iverify(struct aead_request *req, u8 *iv,
unsigned int cryptlen)
static int crypto_authenc_esn_decrypt(struct aead_request *req)
static int crypto_authenc_esn_init_tfm(struct crypto_tfm *tfm)
static void crypto_authenc_esn_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_authenc_esn_alloc(struct rtattr **tb)
static void crypto_authenc_esn_free(struct crypto_instance *inst)
static struct crypto_template crypto_authenc_esn_tmpl = ;
static int __init crypto_authenc_esn_module_init(void)
static void __exit crypto_authenc_esn_module_exit(void)
module_init(crypto_authenc_esn_module_init);
module_exit(crypto_authenc_esn_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Steffen Klassert <steffen.klassert@secunet.com>");
MODULE_DESCRIPTION("AEAD wrapper for IPsec with extended sequence numbers");
