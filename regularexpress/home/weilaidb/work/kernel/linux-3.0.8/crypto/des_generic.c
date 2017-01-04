#define ROL(x, r) ((x) = rol32((x), (r)))
#define ROR(x, r) ((x) = ror32((x), (r)))
struct des_ctx ;
struct des3_ede_ctx ;
static const u8 pc1[256] = ;
static const u8 rs[256] = ;
static const u32 pc2[1024] = ;
static const u32 S1[64] = ;
static const u32 S2[64] = ;
static const u32 S3[64] = ;
static const u32 S4[64] = ;
static const u32 S5[64] = ;
static const u32 S6[64] = ;
static const u32 S7[64] = ;
static const u32 S8[64] = ;
#define IP(L, R, T)		\
ROL(R, 4);		\
T  = L;			\
L ^= R;			\
L &= 0xf0f0f0f0;	\
R ^= L;			\
L ^= T;			\
ROL(R, 12);		\
T  = L;			\
L ^= R;			\
L &= 0xffff0000;	\
R ^= L;			\
L ^= T;			\
ROR(R, 14);		\
T  = L;			\
L ^= R;			\
L &= 0xcccccccc;	\
R ^= L;			\
L ^= T;			\
ROL(R, 6);		\
T  = L;			\
L ^= R;			\
L &= 0xff00ff00;	\
R ^= L;			\
L ^= T;			\
ROR(R, 7);		\
T  = L;			\
L ^= R;			\
L &= 0xaaaaaaaa;	\
R ^= L;			\
L ^= T;			\
ROL(L, 1);
#define FP(L, R, T)		\
ROR(L, 1);		\
T  = L;			\
L ^= R;			\
L &= 0xaaaaaaaa;	\
R ^= L;			\
L ^= T;			\
ROL(R, 7);		\
T  = L;			\
L ^= R;			\
L &= 0xff00ff00;	\
R ^= L;			\
L ^= T;			\
ROR(R, 6);		\
T  = L;			\
L ^= R;			\
L &= 0xcccccccc;	\
R ^= L;			\
L ^= T;			\
ROL(R, 14);		\
T  = L;			\
L ^= R;			\
L &= 0xffff0000;	\
R ^= L;			\
L ^= T;			\
ROR(R, 12);		\
T  = L;			\
L ^= R;			\
L &= 0xf0f0f0f0;	\
R ^= L;			\
L ^= T;			\
ROR(R, 4);
#define ROUND(L, R, A, B, K, d)					\
B = K[0];			A = K[1];	K += d;	\
B ^= R;				A ^= R;			\
B &= 0x3f3f3f3f;		ROR(A, 4);		\
L ^= S8[0xff & B];		A &= 0x3f3f3f3f;	\
L ^= S6[0xff & (B >> 8)];	B >>= 16;		\
L ^= S7[0xff & A];					\
L ^= S5[0xff & (A >> 8)];	A >>= 16;		\
L ^= S4[0xff & B];					\
L ^= S2[0xff & (B >> 8)];				\
L ^= S3[0xff & A];					\
L ^= S1[0xff & (A >> 8)];
#define T1(x) pt[2 * (x) + 0]
#define T2(x) pt[2 * (x) + 1]
#define T3(x) pt[2 * (x) + 2]
#define T4(x) pt[2 * (x) + 3]
#define DES_PC2(a, b, c, d) (T4(d) | T3(c) | T2(b) | T1(a))
unsigned long des_ekey(u32 *pe, const u8 *k)
EXPORT_SYMBOL_GPL(des_ekey);
static void dkey(u32 *pe, const u8 *k)
static int des_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static void des_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void des_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static int des3_ede_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static void des3_ede_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void des3_ede_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg des_alg = ;
static struct crypto_alg des3_ede_alg = ;
MODULE_ALIAS("des3_ede");
static int __init des_generic_mod_init(void)
static void __exit des_generic_mod_fini(void)
module_init(des_generic_mod_init);
module_exit(des_generic_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("DES & Triple DES EDE Cipher Algorithms");
MODULE_AUTHOR("Dag Arne Osvik <da@osvik.no>");
MODULE_ALIAS("des");
