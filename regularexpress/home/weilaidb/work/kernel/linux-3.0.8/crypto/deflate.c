#define DEFLATE_DEF_LEVEL		Z_DEFAULT_COMPRESSION
#define DEFLATE_DEF_WINBITS		11
#define DEFLATE_DEF_MEMLEVEL		MAX_MEM_LEVEL
struct deflate_ctx ;
static int deflate_comp_init(struct deflate_ctx *ctx)
static int deflate_decomp_init(struct deflate_ctx *ctx)
static void deflate_comp_exit(struct deflate_ctx *ctx)
static void deflate_decomp_exit(struct deflate_ctx *ctx)
static int deflate_init(struct crypto_tfm *tfm)
static void deflate_exit(struct crypto_tfm *tfm)
static int deflate_compress(struct crypto_tfm *tfm, const u8 *src,
unsigned int slen, u8 *dst, unsigned int *dlen)
static int deflate_decompress(struct crypto_tfm *tfm, const u8 *src,
unsigned int slen, u8 *dst, unsigned int *dlen)
static struct crypto_alg alg = ;
static int __init deflate_mod_init(void)
static void __exit deflate_mod_fini(void)
module_init(deflate_mod_init);
module_exit(deflate_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Deflate Compression Algorithm for IPCOMP");
MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
