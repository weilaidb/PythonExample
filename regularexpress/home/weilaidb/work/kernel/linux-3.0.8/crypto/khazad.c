#define KHAZAD_KEY_SIZE		16
#define KHAZAD_BLOCK_SIZE	8
#define KHAZAD_ROUNDS		8
struct khazad_ctx ;
static const u64 T0[256] = ;
static const u64 T1[256] = ;
static const u64 T2[256] = ;
static const u64 T3[256] = ;
static const u64 T4[256] = ;
static const u64 T5[256] = ;
static const u64 T6[256] = ;
static const u64 T7[256] = ;
static const u64 c[KHAZAD_ROUNDS + 1] = ;
static int khazad_setkey(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void khazad_crypt(const u64 roundKey[KHAZAD_ROUNDS + 1],
u8 *ciphertext, const u8 *plaintext)
static void khazad_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void khazad_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg khazad_alg = ;
static int __init khazad_mod_init(void)
static void __exit khazad_mod_fini(void)
module_init(khazad_mod_init);
module_exit(khazad_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Khazad Cryptographic Algorithm");
