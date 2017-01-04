#define WP512_DIGEST_SIZE 64
#define WP384_DIGEST_SIZE 48
#define WP256_DIGEST_SIZE 32
#define WP512_BLOCK_SIZE  64
#define WP512_LENGTHBYTES 32
#define WHIRLPOOL_ROUNDS 10
struct wp512_ctx ;
static const u64 C0[256] = ;
static const u64 C1[256] = ;
static const u64 C2[256] = ;
static const u64 C3[256] = ;
static const u64 C4[256] = ;
static const u64 C5[256] = ;
static const u64 C6[256] = ;
static const u64 C7[256] = ;
static const u64 rc[WHIRLPOOL_ROUNDS + 1] = ;
static void wp512_process_buffer(struct wp512_ctx *wctx)
static int wp512_init(struct shash_desc *desc)
static int wp512_update(struct shash_desc *desc, const u8 *source,
unsigned int len)
static int wp512_final(struct shash_desc *desc, u8 *out)
static int wp384_final(struct shash_desc *desc, u8 *out)
static int wp256_final(struct shash_desc *desc, u8 *out)
static struct shash_alg wp512 = ;
static struct shash_alg wp384 = ;
static struct shash_alg wp256 = ;
static int __init wp512_mod_init(void)
static void __exit wp512_mod_fini(void)
MODULE_ALIAS("wp384");
MODULE_ALIAS("wp256");
module_init(wp512_mod_init);
module_exit(wp512_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Whirlpool Message Digest Algorithm");
