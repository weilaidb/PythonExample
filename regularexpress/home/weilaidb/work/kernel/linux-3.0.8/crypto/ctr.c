struct crypto_ctr_ctx ;
struct crypto_rfc3686_ctx ;
static int crypto_ctr_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static void crypto_ctr_crypt_final(struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_ctr_crypt_segment(struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_ctr_crypt_inplace(struct blkcipher_walk *walk,
struct crypto_cipher *tfm)
static int crypto_ctr_crypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_ctr_init_tfm(struct crypto_tfm *tfm)
static void crypto_ctr_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_ctr_alloc(struct rtattr **tb)
static void crypto_ctr_free(struct crypto_instance *inst)
static struct crypto_template crypto_ctr_tmpl = ;
static int crypto_rfc3686_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int crypto_rfc3686_crypt(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src, unsigned int nbytes)
static int crypto_rfc3686_init_tfm(struct crypto_tfm *tfm)
static void crypto_rfc3686_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_rfc3686_alloc(struct rtattr **tb)
static struct crypto_template crypto_rfc3686_tmpl = ;
static int __init crypto_ctr_module_init(void)
static void __exit crypto_ctr_module_exit(void)
module_init(crypto_ctr_module_init);
module_exit(crypto_ctr_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CTR Counter block mode");
MODULE_ALIAS("rfc3686");
