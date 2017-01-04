#define SEED_NUM_KCONSTANTS	16
#define SEED_KEY_SIZE		16
#define SEED_BLOCK_SIZE		16
#define SEED_KEYSCHED_LEN	32
static inline u8
byte(const u32 x, const unsigned n)
struct seed_ctx ;
static const u32 SS0[256] = ;
static const u32 SS1[256] = ;
static const u32 SS2[256] = ;
static const u32 SS3[256] = ;
static const u32 KC[SEED_NUM_KCONSTANTS] = ;
#define OP(X1, X2, X3, X4, rbase)			\
t0 = X3 ^ ks[rbase];				\
t1 = X4 ^ ks[rbase+1];				\
t1 ^= t0;					\
t1 = SS0[byte(t1, 0)] ^ SS1[byte(t1, 1)] ^	\
SS2[byte(t1, 2)] ^ SS3[byte(t1, 3)];	\
t0 += t1;					\
t0 = SS0[byte(t0, 0)] ^ SS1[byte(t0, 1)] ^	\
SS2[byte(t0, 2)] ^ SS3[byte(t0, 3)];	\
t1 += t0;					\
t1 = SS0[byte(t1, 0)] ^ SS1[byte(t1, 1)] ^	\
SS2[byte(t1, 2)] ^ SS3[byte(t1, 3)];	\
t0 += t1;					\
X1 ^= t0;					\
X2 ^= t1;
static int seed_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void seed_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void seed_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg seed_alg = ;
static int __init seed_init(void)
static void __exit seed_fini(void)
module_init(seed_init);
module_exit(seed_fini);
MODULE_DESCRIPTION("SEED Cipher Algorithm");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hye-Shik Chang <perky@FreeBSD.org>, Kim Hyun <hkim@kisa.or.kr>");
