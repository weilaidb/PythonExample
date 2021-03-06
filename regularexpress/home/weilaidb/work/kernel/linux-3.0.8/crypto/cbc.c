struct crypto_cbc_ctx ;
static int crypto_cbc_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int crypto_cbc_encrypt_segment(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_cbc_encrypt_inplace(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_cbc_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_cbc_decrypt_segment(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_cbc_decrypt_inplace(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_cbc_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_cbc_init_tfm(struct crypto_tfm *tfm)
static void crypto_cbc_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_cbc_alloc(struct rtattr **tb)
static void crypto_cbc_free(struct crypto_instance *inst)
static struct crypto_template crypto_cbc_tmpl = ;
static int __init crypto_cbc_module_init(void)
static void __exit crypto_cbc_module_exit(void)
module_init(crypto_cbc_module_init);
module_exit(crypto_cbc_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CBC block cipher algorithm");
