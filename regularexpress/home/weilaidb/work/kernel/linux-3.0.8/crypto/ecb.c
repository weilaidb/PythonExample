struct crypto_ecb_ctx ;
static int crypto_ecb_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int crypto_ecb_crypt(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm,
void (*fn)(struct crypto_tfm *, u8 *, const u8 *))
static int crypto_ecb_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_ecb_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_ecb_init_tfm(struct crypto_tfm *tfm)
static void crypto_ecb_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_ecb_alloc(struct rtattr **tb)
static void crypto_ecb_free(struct crypto_instance *inst)
static struct crypto_template crypto_ecb_tmpl = ;
static int __init crypto_ecb_module_init(void)
static void __exit crypto_ecb_module_exit(void)
module_init(crypto_ecb_module_init);
module_exit(crypto_ecb_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ECB block cipher algorithm");
