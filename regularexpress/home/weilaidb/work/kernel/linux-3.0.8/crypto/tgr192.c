#define TGR192_DIGEST_SIZE 24
#define TGR160_DIGEST_SIZE 20
#define TGR128_DIGEST_SIZE 16
#define TGR192_BLOCK_SIZE  64
struct tgr192_ctx ;
static const u64 sbox1[256] = ;
static const u64 sbox2[256] = ;
static const u64 sbox3[256] = ;
static const u64 sbox4[256] = ;
static void tgr192_round(u64 * ra, u64 * rb, u64 * rc, u64 x, int mul)
static void tgr192_pass(u64 * ra, u64 * rb, u64 * rc, u64 * x, int mul)
static void tgr192_key_schedule(u64 * x)
static void tgr192_transform(struct tgr192_ctx *tctx, const u8 * data)
static int tgr192_init(struct shash_desc *desc)
static int tgr192_update(struct shash_desc *desc, const u8 *inbuf,
unsigned int len)
static int tgr192_final(struct shash_desc *desc, u8 * out)
static int tgr160_final(struct shash_desc *desc, u8 * out)
static int tgr128_final(struct shash_desc *desc, u8 * out)
static struct shash_alg tgr192 = ;
static struct shash_alg tgr160 = ;
static struct shash_alg tgr128 = ;
static int __init tgr192_mod_init(void)
static void __exit tgr192_mod_fini(void)
MODULE_ALIAS("tgr160");
MODULE_ALIAS("tgr128");
module_init(tgr192_mod_init);
module_exit(tgr192_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Tiger Message Digest Algorithm");
