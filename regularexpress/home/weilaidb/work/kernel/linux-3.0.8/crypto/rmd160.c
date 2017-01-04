struct rmd160_ctx ;
#define K1  RMD_K1
#define K2  RMD_K2
#define K3  RMD_K3
#define K4  RMD_K4
#define K5  RMD_K5
#define KK1 RMD_K6
#define KK2 RMD_K7
#define KK3 RMD_K8
#define KK4 RMD_K9
#define KK5 RMD_K1
#define F1(x, y, z) (x ^ y ^ z)
#define F2(x, y, z) (z ^ (x & (y ^ z)))
#define F3(x, y, z) ((x | ~y) ^ z)
#define F4(x, y, z) (y ^ (z & (x ^ y)))
#define F5(x, y, z) (x ^ (y | ~z))
#define ROUND(a, b, c, d, e, f, k, x, s)
static void rmd160_transform(u32 *state, const __le32 *in)
static int rmd160_init(struct shash_desc *desc)
static int rmd160_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int rmd160_final(struct shash_desc *desc, u8 *out)
static struct shash_alg alg = ;
static int __init rmd160_mod_init(void)
static void __exit rmd160_mod_fini(void)
module_init(rmd160_mod_init);
module_exit(rmd160_mod_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adrian-Ken Rueegsegger <ken@codelabs.ch>");
MODULE_DESCRIPTION("RIPEMD-160 Message Digest");
