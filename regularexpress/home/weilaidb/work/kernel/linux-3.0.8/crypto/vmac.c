#define UINT64_C(x) x##ULL
const u64 p64   = UINT64_C(0xfffffffffffffeff);
const u64 m62   = UINT64_C(0x3fffffffffffffff);
const u64 m63   = UINT64_C(0x7fffffffffffffff);
const u64 m64   = UINT64_C(0xffffffffffffffff);
const u64 mpoly = UINT64_C(0x1fffffff1fffffff);
#define pe64_to_cpup le64_to_cpup
#define INDEX_HIGH 1
#define INDEX_LOW 0
#define INDEX_HIGH 0
#define INDEX_LOW 1
#define ADD128(rh, rl, ih, il)						\
do  while (0)
#define MUL32(i1, i2)	((u64)(u32)(i1)*(u32)(i2))
#define PMUL64(rh, rl, i1, i2)	\
do  while (0)
#define MUL64(rh, rl, i1, i2)						\
do  while (0)
#define nh_16(mp, kp, nw, rh, rl)					\
do  while (0)
#define nh_16_2(mp, kp, nw, rh, rl, rh1, rl1)				\
do  while (0)
#if (VMAC_NHBYTES >= 64)
#define nh_vmac_nhbytes(mp, kp, nw, rh, rl)				\
do  while (0)
#define nh_vmac_nhbytes_2(mp, kp, nw, rh, rl, rh1, rl1)			\
do  while (0)
#define poly_step(ah, al, kh, kl, mh, ml)				\
do  while (0)
#define nh_16(mp, kp, nw, rh, rl)					\
do  while (0)
static void poly_step_func(u64 *ahi, u64 *alo,
const u64 *kh, const u64 *kl,
const u64 *mh, const u64 *ml)
#define poly_step(ah, al, kh, kl, mh, ml)				\
poly_step_func(&(ah), &(al), &(kh), &(kl), &(mh), &(ml))
#define nh_16_2(mp, kp, nw, rh, rl, rh2, rl2)				\
do  while (0)
#define nh_vmac_nhbytes(mp, kp, nw, rh, rl)				\
nh_16(mp, kp, nw, rh, rl)
#define nh_vmac_nhbytes_2(mp, kp, nw, rh, rl, rh2, rl2)			\
do  while (0)
static void vhash_abort(struct vmac_ctx *ctx)
static u64 l3hash(u64 p1, u64 p2, u64 k1, u64 k2, u64 len)
static void vhash_update(const unsigned char *m,
unsigned int mbytes,
struct vmac_ctx *ctx)
static u64 vhash(unsigned char m[], unsigned int mbytes,
u64 *tagl, struct vmac_ctx *ctx)
static u64 vmac(unsigned char m[], unsigned int mbytes,
unsigned char n[16], u64 *tagl,
struct vmac_ctx_t *ctx)
static int vmac_set_key(unsigned char user_key[], struct vmac_ctx_t *ctx)
static int vmac_setkey(struct crypto_shash *parent,
const u8 *key, unsigned int keylen)
static int vmac_init(struct shash_desc *pdesc)
static int vmac_update(struct shash_desc *pdesc, const u8 *p,
unsigned int len)
static int vmac_final(struct shash_desc *pdesc, u8 *out)
static int vmac_init_tfm(struct crypto_tfm *tfm)
static void vmac_exit_tfm(struct crypto_tfm *tfm)
static int vmac_create(struct crypto_template *tmpl, struct rtattr **tb)
static struct crypto_template vmac_tmpl = ;
static int __init vmac_module_init(void)
static void __exit vmac_module_exit(void)
module_init(vmac_module_init);
module_exit(vmac_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VMAC hash algorithm");
