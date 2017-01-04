#define CAST5_BLOCK_SIZE 8
#define CAST5_MIN_KEY_SIZE 5
#define CAST5_MAX_KEY_SIZE 16
struct cast5_ctx ;
static const u32 s1[256] = ;
static const u32 s2[256] = ;
static const u32 s3[256] = ;
static const u32 s4[256] = ;
static const u32 s5[256] = ;
static const u32 s6[256] = ;
static const u32 s7[256] = ;
static const u32 sb8[256] = ;
#define F1(D, m, r)  ((I = ((m) + (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] ^ s2[(I>>16)&0xff]) - s3[(I>>8)&0xff]) + s4[I&0xff]))
#define F2(D, m, r)  ((I = ((m) ^ (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] - s2[(I>>16)&0xff]) + s3[(I>>8)&0xff]) ^ s4[I&0xff]))
#define F3(D, m, r)  ((I = ((m) - (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] + s2[(I>>16)&0xff]) ^ s3[(I>>8)&0xff]) - s4[I&0xff]))
static void cast5_encrypt(struct crypto_tfm *tfm, u8 *outbuf, const u8 *inbuf)
static void cast5_decrypt(struct crypto_tfm *tfm, u8 *outbuf, const u8 *inbuf)
static void key_schedule(u32 *x, u32 *z, u32 *k)
static int cast5_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned key_len)
static struct crypto_alg alg = ;
static int __init cast5_mod_init(void)
static void __exit cast5_mod_fini(void)
module_init(cast5_mod_init);
module_exit(cast5_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Cast5 Cipher Algorithm");
