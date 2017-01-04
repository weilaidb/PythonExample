#define pr_fmt(fmt)	"%s: " fmt, __func__
struct zlib_ctx ;
static void zlib_comp_exit(struct zlib_ctx *ctx)
static void zlib_decomp_exit(struct zlib_ctx *ctx)
static int zlib_init(struct crypto_tfm *tfm)
static void zlib_exit(struct crypto_tfm *tfm)
static int zlib_compress_setup(struct crypto_pcomp *tfm, void *params,
unsigned int len)
static int zlib_compress_init(struct crypto_pcomp *tfm)
static int zlib_compress_update(struct crypto_pcomp *tfm,
struct comp_request *req)
static int zlib_compress_final(struct crypto_pcomp *tfm,
struct comp_request *req)
static int zlib_decompress_setup(struct crypto_pcomp *tfm, void *params,
unsigned int len)
static int zlib_decompress_init(struct crypto_pcomp *tfm)
static int zlib_decompress_update(struct crypto_pcomp *tfm,
struct comp_request *req)
static int zlib_decompress_final(struct crypto_pcomp *tfm,
struct comp_request *req)
static struct pcomp_alg zlib_alg = ;
static int __init zlib_mod_init(void)
static void __exit zlib_mod_fini(void)
module_init(zlib_mod_init);
module_exit(zlib_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Zlib Compression Algorithm");
MODULE_AUTHOR("Sony Corporation");
