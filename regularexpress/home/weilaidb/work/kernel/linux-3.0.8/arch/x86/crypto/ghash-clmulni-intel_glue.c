#define GHASH_BLOCK_SIZE	16
#define GHASH_DIGEST_SIZE	16
void clmul_ghash_mul(char *dst, const be128 *shash);
void clmul_ghash_update(char *dst, const char *src, unsigned int srclen,
const be128 *shash);
void clmul_ghash_setkey(be128 *shash, const u8 *key);
struct ghash_async_ctx ;
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
static int ghash_async_init(struct ahash_request *req)
static int ghash_async_update(struct ahash_request *req)
static int ghash_async_final(struct ahash_request *req)
static int ghash_async_digest(struct ahash_request *req)
static int ghash_async_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
static int ghash_async_init_tfm(struct crypto_tfm *tfm)
static void ghash_async_exit_tfm(struct crypto_tfm *tfm)
static struct ahash_alg ghash_async_alg = ;
static int __init ghash_pclmulqdqni_mod_init(void)
static void __exit ghash_pclmulqdqni_mod_exit(void)
module_init(ghash_pclmulqdqni_mod_init);
module_exit(ghash_pclmulqdqni_mod_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("GHASH Message Digest Algorithm, "
"acclerated by PCLMULQDQ-NI");
MODULE_ALIAS("ghash");
