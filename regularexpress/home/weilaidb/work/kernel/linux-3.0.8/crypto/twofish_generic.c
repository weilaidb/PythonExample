#define G1(a) \
(ctx->s[0][(a) & 0xFF]) ^ (ctx->s[1][((a) >> 8) & 0xFF]) \
^ (ctx->s[2][((a) >> 16) & 0xFF]) ^ (ctx->s[3][(a) >> 24])
#define G2(b) \
(ctx->s[1][(b) & 0xFF]) ^ (ctx->s[2][((b) >> 8) & 0xFF]) \
^ (ctx->s[3][((b) >> 16) & 0xFF]) ^ (ctx->s[0][(b) >> 24])
#define ENCROUND(n, a, b, c, d) \
x = G1 (a); y = G2 (b); \
x += y; y += x + ctx->k[2 * (n) + 1]; \
(c) ^= x + ctx->k[2 * (n)]; \
(c) = ror32((c), 1); \
(d) = rol32((d), 1) ^ y
#define DECROUND(n, a, b, c, d) \
x = G1 (a); y = G2 (b); \
x += y; y += x; \
(d) ^= y + ctx->k[2 * (n) + 1]; \
(d) = ror32((d), 1); \
(c) = rol32((c), 1); \
(c) ^= (x + ctx->k[2 * (n)])
#define ENCCYCLE(n) \
ENCROUND (2 * (n), a, b, c, d); \
ENCROUND (2 * (n) + 1, c, d, a, b)
#define DECCYCLE(n) \
DECROUND (2 * (n) + 1, c, d, a, b); \
DECROUND (2 * (n), a, b, c, d)
#define INPACK(n, x, m) \
x = le32_to_cpu(src[n]) ^ ctx->w[m]
#define OUTUNPACK(n, x, m) \
x ^= ctx->w[m]; \
dst[n] = cpu_to_le32(x)
static void twofish_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void twofish_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg alg = ;
static int __init twofish_mod_init(void)
static void __exit twofish_mod_fini(void)
module_init(twofish_mod_init);
module_exit(twofish_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION ("Twofish Cipher Algorithm");
MODULE_ALIAS("twofish");
