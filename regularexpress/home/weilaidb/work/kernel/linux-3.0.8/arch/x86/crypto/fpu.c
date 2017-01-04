struct crypto_fpu_ctx ;
static int crypto_fpu_setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
static int crypto_fpu_encrypt(struct blkcipher_desc *desc_in,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_fpu_decrypt(struct blkcipher_desc *desc_in,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int crypto_fpu_init_tfm(struct crypto_tfm *tfm)
static void crypto_fpu_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *crypto_fpu_alloc(struct rtattr **tb)
static void crypto_fpu_free(struct crypto_instance *inst)
static struct crypto_template crypto_fpu_tmpl = ;
int __init crypto_fpu_init(void)
void __exit crypto_fpu_exit(void)
