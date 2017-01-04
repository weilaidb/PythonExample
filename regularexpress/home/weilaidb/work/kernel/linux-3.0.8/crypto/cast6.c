#define CAST6_BLOCK_SIZE 16
#define CAST6_MIN_KEY_SIZE 16
#define CAST6_MAX_KEY_SIZE 32
struct cast6_ctx ;
#define F1(D, r, m)  ((I = ((m) + (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] ^ s2[(I>>16)&0xff]) - s3[(I>>8)&0xff]) + s4[I&0xff]))
#define F2(D, r, m)  ((I = ((m) ^ (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] - s2[(I>>16)&0xff]) + s3[(I>>8)&0xff]) ^ s4[I&0xff]))
#define F3(D, r, m)  ((I = ((m) - (D))), (I = rol32(I, (r))),   \
(((s1[I >> 24] + s2[(I>>16)&0xff]) ^ s3[(I>>8)&0xff]) - s4[I&0xff]))
static const u32 s1[256] = ;
static const u32 s2[256] = ;
static const u32 s3[256] = ;
static const u32 s4[256] = ;
static const u32 Tm[24][8] = ;
static const u8 Tr[4][8] = ;
static void W(u32 *key, unsigned int i)
static int cast6_setkey(struct crypto_tfm *tfm, const u8 *in_key,
unsigned key_len)
static void Q(u32 *block, u8 *Kr, u32 *Km)
static void QBAR(u32 *block, u8 *Kr, u32 *Km)
static void cast6_encrypt(struct crypto_tfm *tfm, u8 *outbuf, const u8 *inbuf)
static void cast6_decrypt(struct crypto_tfm *tfm, u8 *outbuf, const u8 *inbuf)
static struct crypto_alg alg = ;
static int __init cast6_mod_init(void)
static void __exit cast6_mod_fini(void)
module_init(cast6_mod_init);
module_exit(cast6_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Cast6 Cipher Algorithm");
