static inline u8 byte(const u32 x, const unsigned n)
static const u32 rco_tab[10] = ;
const u32 crypto_ft_tab[4][256] = ;
const u32 crypto_fl_tab[4][256] = ;
const u32 crypto_it_tab[4][256] = ;
const u32 crypto_il_tab[4][256] = ;
EXPORT_SYMBOL_GPL(crypto_ft_tab);
EXPORT_SYMBOL_GPL(crypto_fl_tab);
EXPORT_SYMBOL_GPL(crypto_it_tab);
EXPORT_SYMBOL_GPL(crypto_il_tab);
#define star_x(x) (((x) & 0x7f7f7f7f) << 1) ^ ((((x) & 0x80808080) >> 7) * 0x1b)
#define imix_col(y, x)	do  while (0)
#define ls_box(x)		\
crypto_fl_tab[0][byte(x, 0)] ^	\
crypto_fl_tab[1][byte(x, 1)] ^	\
crypto_fl_tab[2][byte(x, 2)] ^	\
crypto_fl_tab[3][byte(x, 3)]
#define loop4(i)	do  while (0)
#define loop6(i)	do  while (0)
#define loop8tophalf(i)	do  while (0)
#define loop8(i)	do  while (0)
int crypto_aes_expand_key(struct crypto_aes_ctx *ctx, const u8 *in_key,
unsigned int key_len)
EXPORT_SYMBOL_GPL(crypto_aes_expand_key);
int crypto_aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
EXPORT_SYMBOL_GPL(crypto_aes_set_key);
#define f_rn(bo, bi, n, k)	do  while (0)
#define f_nround(bo, bi, k)	do  while (0)
#define f_rl(bo, bi, n, k)	do  while (0)
#define f_lround(bo, bi, k)	do  while (0)
static void aes_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
#define i_rn(bo, bi, n, k)	do  while (0)
#define i_nround(bo, bi, k)	do  while (0)
#define i_rl(bo, bi, n, k)	do  while (0)
#define i_lround(bo, bi, k)	do  while (0)
static void aes_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg aes_alg = ;
static int __init aes_init(void)
static void __exit aes_fini(void)
module_init(aes_init);
module_exit(aes_fini);
MODULE_DESCRIPTION("Rijndael (AES) Cipher Algorithm");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("aes");
