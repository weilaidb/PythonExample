#define GHASH_BLOCK_SIZE	16
#define GHASH_DIGEST_SIZE	16
struct ghash_ctx ;
struct ghash_desc_ctx ;
static int ghash_init(struct shash_desc *desc)
static int ghash_setkey(struct crypto_shash *tfm,
const u8 *key, unsigned int keylen)
static int ghash_update(struct shash_desc *desc,
const u8 *src, unsigned int srclen)
static void ghash_flush(struct ghash_ctx *ctx, struct ghash_desc_ctx *dctx)
static int ghash_final(struct shash_desc *desc, u8 *dst)
static struct shash_alg ghash_alg = ;
static int __init ghash_mod_init(void)
static void __exit ghash_mod_exit(void)
module_init(ghash_mod_init);
module_exit(ghash_mod_exit);
MODULE_ALIAS("ghash");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("GHASH Message Digest Algorithm, s390 implementation");
