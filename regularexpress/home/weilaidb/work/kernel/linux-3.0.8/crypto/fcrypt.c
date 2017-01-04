#define ROUNDS 16
struct fcrypt_ctx ;
#define ror56(hi, lo, n)					\
do  while (0)
#define ror56_64(k, n)						\
do  while (0)
#undef Z
#define Z(x) cpu_to_be32(x << 3)
static const __be32 sbox0[256] = ;
#undef Z
#define Z(x) cpu_to_be32((x << 27) | (x >> 5))
static const __be32 sbox1[256] = ;
#undef Z
#define Z(x) cpu_to_be32(x << 11)
static const __be32 sbox2[256] = ;
#undef Z
#define Z(x) cpu_to_be32(x << 19)
static const __be32 sbox3[256] = ;
#define F_ENCRYPT(R, L, sched)						\
do  while (0)
static void fcrypt_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void fcrypt_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static int fcrypt_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static struct crypto_alg fcrypt_alg = ;
static int __init fcrypt_mod_init(void)
static void __exit fcrypt_mod_fini(void)
module_init(fcrypt_mod_init);
module_exit(fcrypt_mod_fini);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("FCrypt Cipher Algorithm");
MODULE_AUTHOR("David Howells <dhowells@redhat.com>");
