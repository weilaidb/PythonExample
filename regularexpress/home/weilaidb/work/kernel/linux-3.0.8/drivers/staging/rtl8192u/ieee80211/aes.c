#define AES_MIN_KEY_SIZE	16
#define AES_MAX_KEY_SIZE	32
#define AES_BLOCK_SIZE		16
static inline
u32 generic_rotr32 (const u32 x, const unsigned bits)
static inline
u32 generic_rotl32 (const u32 x, const unsigned bits)
#define rotl generic_rotl32
#define rotr generic_rotr32
inline static u8
byte(const u32 x, const unsigned n)
#define u32_in(x) le32_to_cpu(*(const u32 *)(x))
#define u32_out(to, from) (*(u32 *)(to) = cpu_to_le32(from))
struct aes_ctx ;
#define E_KEY ctx->E
#define D_KEY ctx->D
static u8 pow_tab[256] __initdata;
static u8 log_tab[256] __initdata;
static u8 sbx_tab[256] __initdata;
static u8 isb_tab[256] __initdata;
static u32 rco_tab[10];
static u32 ft_tab[4][256];
static u32 it_tab[4][256];
static u32 fl_tab[4][256];
static u32 il_tab[4][256];
static inline u8 __init
f_mult (u8 a, u8 b)
#define ff_mult(a,b)    (a && b ? f_mult(a, b) : 0)
#define f_rn(bo, bi, n, k)					\
bo[n] =  ft_tab[0][byte(bi[n],0)] ^				\
ft_tab[1][byte(bi[(n + 1) & 3],1)] ^		\
ft_tab[2][byte(bi[(n + 2) & 3],2)] ^		\
ft_tab[3][byte(bi[(n + 3) & 3],3)] ^ *(k + n)
#define i_rn(bo, bi, n, k)					\
bo[n] =  it_tab[0][byte(bi[n],0)] ^				\
it_tab[1][byte(bi[(n + 3) & 3],1)] ^		\
it_tab[2][byte(bi[(n + 2) & 3],2)] ^		\
it_tab[3][byte(bi[(n + 1) & 3],3)] ^ *(k + n)
#define ls_box(x)				\
( fl_tab[0][byte(x, 0)] ^			\
fl_tab[1][byte(x, 1)] ^			\
fl_tab[2][byte(x, 2)] ^			\
fl_tab[3][byte(x, 3)] )
#define f_rl(bo, bi, n, k)					\
bo[n] =  fl_tab[0][byte(bi[n],0)] ^				\
fl_tab[1][byte(bi[(n + 1) & 3],1)] ^		\
fl_tab[2][byte(bi[(n + 2) & 3],2)] ^		\
fl_tab[3][byte(bi[(n + 3) & 3],3)] ^ *(k + n)
#define i_rl(bo, bi, n, k)					\
bo[n] =  il_tab[0][byte(bi[n],0)] ^				\
il_tab[1][byte(bi[(n + 3) & 3],1)] ^		\
il_tab[2][byte(bi[(n + 2) & 3],2)] ^		\
il_tab[3][byte(bi[(n + 1) & 3],3)] ^ *(k + n)
static void __init
gen_tabs (void)
#define star_x(x) (((x) & 0x7f7f7f7f) << 1) ^ ((((x) & 0x80808080) >> 7) * 0x1b)
#define imix_col(y,x)       \
u   = star_x(x);        \
v   = star_x(u);        \
w   = star_x(v);        \
t   = w ^ (x);          \
(y)  = u ^ v ^ w;        \
(y) ^= rotr(u ^ t,  8) ^ \
rotr(v ^ t, 16) ^ \
rotr(t,24)
#define loop4(i)                                    \
#define loop6(i)                                    \
#define loop8(i)                                    \
static int
aes_set_key(void *ctx_arg, const u8 *in_key, unsigned int key_len, u32 *flags)
#define f_nround(bo, bi, k) \
f_rn(bo, bi, 0, k);     \
f_rn(bo, bi, 1, k);     \
f_rn(bo, bi, 2, k);     \
f_rn(bo, bi, 3, k);     \
k += 4
#define f_lround(bo, bi, k) \
f_rl(bo, bi, 0, k);     \
f_rl(bo, bi, 1, k);     \
f_rl(bo, bi, 2, k);     \
f_rl(bo, bi, 3, k)
static void aes_encrypt(void *ctx_arg, u8 *out, const u8 *in)
#define i_nround(bo, bi, k) \
i_rn(bo, bi, 0, k);     \
i_rn(bo, bi, 1, k);     \
i_rn(bo, bi, 2, k);     \
i_rn(bo, bi, 3, k);     \
k -= 4
#define i_lround(bo, bi, k) \
i_rl(bo, bi, 0, k);     \
i_rl(bo, bi, 1, k);     \
i_rl(bo, bi, 2, k);     \
i_rl(bo, bi, 3, k)
static void aes_decrypt(void *ctx_arg, u8 *out, const u8 *in)
static struct crypto_alg aes_alg = ;
static int __init aes_init(void)
static void __exit aes_fini(void)
module_init(aes_init);
module_exit(aes_fini);
MODULE_DESCRIPTION("Rijndael (AES) Cipher Algorithm");
MODULE_LICENSE("Dual BSD/GPL");
