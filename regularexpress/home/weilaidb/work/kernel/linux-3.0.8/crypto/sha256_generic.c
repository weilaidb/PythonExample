static inline u32 Ch(u32 x, u32 y, u32 z)
static inline u32 Maj(u32 x, u32 y, u32 z)
#define e0(x)       (ror32(x, 2) ^ ror32(x,13) ^ ror32(x,22))
#define e1(x)       (ror32(x, 6) ^ ror32(x,11) ^ ror32(x,25))
#define s0(x)       (ror32(x, 7) ^ ror32(x,18) ^ (x >> 3))
#define s1(x)       (ror32(x,17) ^ ror32(x,19) ^ (x >> 10))
static inline void LOAD_OP(int I, u32 *W, const u8 *input)
static inline void BLEND_OP(int I, u32 *W)
static void sha256_transform(u32 *state, const u8 *input)
static int sha224_init(struct shash_desc *desc)
static int sha256_init(struct shash_desc *desc)
static int sha256_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int sha256_final(struct shash_desc *desc, u8 *out)
static int sha224_final(struct shash_desc *desc, u8 *hash)
static int sha256_export(struct shash_desc *desc, void *out)
static int sha256_import(struct shash_desc *desc, const void *in)
static struct shash_alg sha256 = ;
static struct shash_alg sha224 = ;
static int __init sha256_generic_mod_init(void)
static void __exit sha256_generic_mod_fini(void)
module_init(sha256_generic_mod_init);
module_exit(sha256_generic_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA-224 and SHA-256 Secure Hash Algorithm");
MODULE_ALIAS("sha224");
MODULE_ALIAS("sha256");
