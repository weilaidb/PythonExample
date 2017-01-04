struct lzo_ctx ;
static int lzo_init(struct crypto_tfm *tfm)
static void lzo_exit(struct crypto_tfm *tfm)
static int lzo_compress(struct crypto_tfm *tfm, const u8 *src,
unsigned int slen, u8 *dst, unsigned int *dlen)
static int lzo_decompress(struct crypto_tfm *tfm, const u8 *src,
unsigned int slen, u8 *dst, unsigned int *dlen)
static struct crypto_alg alg = ;
static int __init lzo_mod_init(void)
static void __exit lzo_mod_fini(void)
module_init(lzo_mod_init);
module_exit(lzo_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LZO Compression Algorithm");
