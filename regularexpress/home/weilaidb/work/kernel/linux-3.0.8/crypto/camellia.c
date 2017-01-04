static const u32 camellia_sp1110[256] = ;
static const u32 camellia_sp0222[256] = ;
static const u32 camellia_sp3033[256] = ;
static const u32 camellia_sp4404[256] = ;
#define CAMELLIA_MIN_KEY_SIZE        16
#define CAMELLIA_MAX_KEY_SIZE        32
#define CAMELLIA_BLOCK_SIZE          16
#define CAMELLIA_TABLE_BYTE_LEN     272
#define CAMELLIA_SIGMA1L (0xA09E667FL)
#define CAMELLIA_SIGMA1R (0x3BCC908BL)
#define CAMELLIA_SIGMA2L (0xB67AE858L)
#define CAMELLIA_SIGMA2R (0x4CAA73B2L)
#define CAMELLIA_SIGMA3L (0xC6EF372FL)
#define CAMELLIA_SIGMA3R (0xE94F82BEL)
#define CAMELLIA_SIGMA4L (0x54FF53A5L)
#define CAMELLIA_SIGMA4R (0xF1D36F1CL)
#define CAMELLIA_SIGMA5L (0x10E527FAL)
#define CAMELLIA_SIGMA5R (0xDE682D1DL)
#define CAMELLIA_SIGMA6L (0xB05688C2L)
#define CAMELLIA_SIGMA6R (0xB3E6C1FDL)
#define ROLDQ(ll, lr, rl, rr, w0, w1, bits)		\
do  while (0)
#define ROLDQo32(ll, lr, rl, rr, w0, w1, bits)		\
do  while (0)
#define CAMELLIA_F(xl, xr, kl, kr, yl, yr, il, ir, t0, t1)	\
do  while (0)
#define SUBKEY_L(INDEX) (subkey[(INDEX)*2])
#define SUBKEY_R(INDEX) (subkey[(INDEX)*2 + 1])
static void camellia_setup_tail(u32 *subkey, u32 *subL, u32 *subR, int max)
static void camellia_setup128(const unsigned char *key, u32 *subkey)
static void camellia_setup256(const unsigned char *key, u32 *subkey)
static void camellia_setup192(const unsigned char *key, u32 *subkey)
#define CAMELLIA_FLS(ll, lr, rl, rr, kll, klr, krl, krr, t0, t1, t2, t3) \
do  while (0)
#define CAMELLIA_ROUNDSM(xl, xr, kl, kr, yl, yr, il, ir)		\
do  while (0)
static void camellia_do_encrypt(const u32 *subkey, u32 *io, unsigned max)
static void camellia_do_decrypt(const u32 *subkey, u32 *io, unsigned i)
struct camellia_ctx ;
static int
camellia_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void camellia_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void camellia_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg camellia_alg = ;
static int __init camellia_init(void)
static void __exit camellia_fini(void)
module_init(camellia_init);
module_exit(camellia_fini);
MODULE_DESCRIPTION("Camellia Cipher Algorithm");
MODULE_LICENSE("GPL");
