struct seqiv_ctx ;
static void seqiv_complete2(struct skcipher_givcrypt_request *req, int err)
static void seqiv_complete(struct crypto_async_request *base, int err)
static void seqiv_aead_complete2(struct aead_givcrypt_request *req, int err)
static void seqiv_aead_complete(struct crypto_async_request *base, int err)
static void seqiv_geniv(struct seqiv_ctx *ctx, u8 *info, u64 seq,
unsigned int ivsize)
static int seqiv_givencrypt(struct skcipher_givcrypt_request *req)
static int seqiv_aead_givencrypt(struct aead_givcrypt_request *req)
static int seqiv_givencrypt_first(struct skcipher_givcrypt_request *req)
static int seqiv_aead_givencrypt_first(struct aead_givcrypt_request *req)
static int seqiv_init(struct crypto_tfm *tfm)
static int seqiv_aead_init(struct crypto_tfm *tfm)
static struct crypto_template seqiv_tmpl;
static struct crypto_instance *seqiv_ablkcipher_alloc(struct rtattr **tb)
static struct crypto_instance *seqiv_aead_alloc(struct rtattr **tb)
static struct crypto_instance *seqiv_alloc(struct rtattr **tb)
static void seqiv_free(struct crypto_instance *inst)
static struct crypto_template seqiv_tmpl = ;
static int __init seqiv_module_init(void)
static void __exit seqiv_module_exit(void)
module_init(seqiv_module_init);
module_exit(seqiv_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sequence Number IV Generator");
