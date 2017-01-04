#define BF_BLOCK_SIZE 8
#define BF_MIN_KEY_SIZE 4
#define BF_MAX_KEY_SIZE 56
struct bf_ctx ;
static const u32 bf_pbox[16 + 2] = ;
static const u32 bf_sbox[256 * 4] = ;
#define GET32_3(x) (((x) & 0xff))
#define GET32_2(x) (((x) >> (8)) & (0xff))
#define GET32_1(x) (((x) >> (16)) & (0xff))
#define GET32_0(x) (((x) >> (24)) & (0xff))
#define bf_F(x) (((S[GET32_0(x)] + S[256 + GET32_1(x)]) ^ \
S[512 + GET32_2(x)]) + S[768 + GET32_3(x)])
#define ROUND(a, b, n)  b ^= P[n]; a ^= bf_F (b)
static void encrypt_block(struct bf_ctx *bctx, u32 *dst, u32 *src)
static void bf_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void bf_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static int bf_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static struct crypto_alg alg = ;
static int __init blowfish_mod_init(void)
static void __exit blowfish_mod_fini(void)
module_init(blowfish_mod_init);
module_exit(blowfish_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Blowfish Cipher Algorithm");
