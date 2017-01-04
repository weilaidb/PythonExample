struct crypto_cts_ctx ;
static int crypto_cts_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int cts_cbc_encrypt(struct crypto_cts_ctx *ctx,
struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int offset,
unsigned int nbytes)
static int crypto_cts_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cts_cbc_decrypt(struct crypto_cts_ctx *ctx,
struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int offset,
unsigned int nbytes)
static int crypto_cts_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_cts_init_tfm(struct crypto_tfm *tfm)
static void crypto_cts_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_cts_alloc(struct rtattr **tb)
static void crypto_cts_free(struct crypto_instance *inst)
static struct crypto_template crypto_cts_tmpl = ;
static int __init crypto_cts_module_init(void)
static void __exit crypto_cts_module_exit(void)
module_init(crypto_cts_module_init);
module_exit(crypto_cts_module_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("CTS-CBC CipherText Stealing for CBC");
