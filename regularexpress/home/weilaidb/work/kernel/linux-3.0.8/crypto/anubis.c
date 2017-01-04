#define ANUBIS_MIN_KEY_SIZE	16
#define ANUBIS_MAX_KEY_SIZE	40
#define ANUBIS_BLOCK_SIZE	16
#define ANUBIS_MAX_N		10
#define ANUBIS_MAX_ROUNDS	(8 + ANUBIS_MAX_N)
struct anubis_ctx ;
static const u32 T0[256] = ;
static const u32 T1[256] = ;
static const u32 T2[256] = ;
static const u32 T3[256] = ;
static const u32 T4[256] = ;
static const u32 T5[256] = ;
static const u32 rc[] = ;
static int anubis_setkey(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void anubis_crypt(u32 roundKey[ANUBIS_MAX_ROUNDS + 1][4],
u8 *ciphertext, const u8 *plaintext, const int R)
static void anubis_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void anubis_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg anubis_alg = ;
static int __init anubis_mod_init(void)
static void __exit anubis_mod_fini(void)
module_init(anubis_mod_init);
module_exit(anubis_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Anubis Cryptographic Algorithm");
