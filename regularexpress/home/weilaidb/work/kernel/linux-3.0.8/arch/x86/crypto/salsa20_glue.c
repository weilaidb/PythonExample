#define SALSA20_IV_SIZE        8U
#define SALSA20_MIN_KEY_SIZE  16U
#define SALSA20_MAX_KEY_SIZE  32U
#define salsa20_keysetup        ECRYPT_keysetup
#define salsa20_ivsetup         ECRYPT_ivsetup
#define salsa20_encrypt_bytes   ECRYPT_encrypt_bytes
struct salsa20_ctx
;
asmlinkage void salsa20_keysetup(struct salsa20_ctx *ctx, const u8 *k,
u32 keysize, u32 ivsize);
asmlinkage void salsa20_ivsetup(struct salsa20_ctx *ctx, const u8 *iv);
asmlinkage void salsa20_encrypt_bytes(struct salsa20_ctx *ctx,
const u8 *src, u8 *dst, u32 bytes);
static int setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keysize)
static int encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg alg = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION ("Salsa20 stream cipher algorithm (optimized assembly version)");
MODULE_ALIAS("salsa20");
MODULE_ALIAS("salsa20-asm");
