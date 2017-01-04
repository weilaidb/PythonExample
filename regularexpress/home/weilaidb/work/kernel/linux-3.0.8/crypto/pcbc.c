struct crypto_pcbc_ctx ;
static int crypto_pcbc_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int crypto_pcbc_encrypt_segment(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_pcbc_encrypt_inplace(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_pcbc_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_pcbc_decrypt_segment(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_pcbc_decrypt_inplace(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_pcbc_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_pcbc_init_tfm(struct crypto_tfm *tfm)
static void crypto_pcbc_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_pcbc_alloc(struct rtattr **tb)
static void crypto_pcbc_free(struct crypto_instance *inst)
static struct crypto_template crypto_pcbc_tmpl = ;
static int __init crypto_pcbc_module_init(void)
static void __exit crypto_pcbc_module_exit(void)
module_init(crypto_pcbc_module_init);
module_exit(crypto_pcbc_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PCBC block cipher algorithm");
