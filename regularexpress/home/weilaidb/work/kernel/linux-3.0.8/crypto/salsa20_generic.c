#define SALSA20_IV_SIZE        8U
#define SALSA20_MIN_KEY_SIZE  16U
#define SALSA20_MAX_KEY_SIZE  32U
#define U32TO8_LITTLE(p, v) \
#define U8TO32_LITTLE(p)   \
(((u32)((p)[0])      ) | ((u32)((p)[1]) <<  8) | \
((u32)((p)[2]) << 16) | ((u32)((p)[3]) << 24)   )
struct salsa20_ctx
;
static void salsa20_wordtobyte(u8 output[64], const u32 input[16])
static const char sigma[16] = "expand 32-byte k";
static const char tau[16] = "expand 16-byte k";
static void salsa20_keysetup(struct salsa20_ctx *ctx, const u8 *k, u32 kbytes)
static void salsa20_ivsetup(struct salsa20_ctx *ctx, const u8 *iv)
static void salsa20_encrypt_bytes(struct salsa20_ctx *ctx, u8 *dst,
const u8 *src, unsigned int bytes)
static int setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keysize)
static int encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg alg = ;
static int __init salsa20_generic_mod_init(void)
static void __exit salsa20_generic_mod_fini(void)
module_init(salsa20_generic_mod_init);
module_exit(salsa20_generic_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION ("Salsa20 stream cipher algorithm");
MODULE_ALIAS("salsa20");
