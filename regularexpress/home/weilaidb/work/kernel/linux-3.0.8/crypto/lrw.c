struct priv ;
static inline void setbit128_bbe(void *b, int bit)
static int setkey(struct crypto_tfm *parent, const u8 *key,
unsigned int keylen)
struct sinfo ;
static inline void inc(be128 *iv)
static inline void lrw_round(struct sinfo *s, void *dst, const void *src)
static inline int get_index128(be128 *block)
static int crypt(struct blkcipher_desc *d,
struct blkcipher_walk *w, struct priv *ctx,
void (*fn)(struct crypto_tfm *, u8 *, const u8 *))
static int encrypt(struct blkcipher_desc *desc, struct scatterlist *dst,
struct scatterlist *src, unsigned int nbytes)
static int decrypt(struct blkcipher_desc *desc, struct scatterlist *dst,
struct scatterlist *src, unsigned int nbytes)
static int init_tfm(struct crypto_tfm *tfm)
static void exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *alloc(struct rtattr **tb)
static void free(struct crypto_instance *inst)
static struct crypto_template crypto_tmpl = ;
static int __init crypto_module_init(void)
static void __exit crypto_module_exit(void)
module_init(crypto_module_init);
module_exit(crypto_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LRW block cipher mode");
