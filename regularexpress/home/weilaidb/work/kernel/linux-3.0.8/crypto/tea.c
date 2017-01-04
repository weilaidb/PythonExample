#define TEA_KEY_SIZE		16
#define TEA_BLOCK_SIZE		8
#define TEA_ROUNDS		32
#define TEA_DELTA		0x9e3779b9
#define XTEA_KEY_SIZE		16
#define XTEA_BLOCK_SIZE		8
#define XTEA_ROUNDS		32
#define XTEA_DELTA		0x9e3779b9
struct tea_ctx ;
struct xtea_ctx ;
static int tea_setkey(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void tea_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void tea_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static int xtea_setkey(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void xtea_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void xtea_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void xeta_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void xeta_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg tea_alg = ;
static struct crypto_alg xtea_alg = ;
static struct crypto_alg xeta_alg = ;
static int __init tea_mod_init(void)
static void __exit tea_mod_fini(void)
MODULE_ALIAS("xtea");
MODULE_ALIAS("xeta");
module_init(tea_mod_init);
module_exit(tea_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TEA, XTEA & XETA Cryptographic Algorithms");
