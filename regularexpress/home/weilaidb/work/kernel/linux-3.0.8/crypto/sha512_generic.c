static DEFINE_PER_CPU(u64[80], msg_schedule);
static inline u64 Ch(u64 x, u64 y, u64 z)
static inline u64 Maj(u64 x, u64 y, u64 z)
static inline u64 RORu64(u64 x, u64 y)
static const u64 sha512_K[80] = ;
#define e0(x)       (RORu64(x,28) ^ RORu64(x,34) ^ RORu64(x,39))
#define e1(x)       (RORu64(x,14) ^ RORu64(x,18) ^ RORu64(x,41))
#define s0(x)       (RORu64(x, 1) ^ RORu64(x, 8) ^ (x >> 7))
#define s1(x)       (RORu64(x,19) ^ RORu64(x,61) ^ (x >> 6))
static inline void LOAD_OP(int I, u64 *W, const u8 *input)
static inline void BLEND_OP(int I, u64 *W)
static void
sha512_transform(u64 *state, const u8 *input)
static int
sha512_init(struct shash_desc *desc)
static int
sha384_init(struct shash_desc *desc)
static int
sha512_update(struct shash_desc *desc, const u8 *data, unsigned int len)
static int
sha512_final(struct shash_desc *desc, u8 *hash)
static int sha384_final(struct shash_desc *desc, u8 *hash)
static struct shash_alg sha512 = ;
static struct shash_alg sha384 = ;
static int __init sha512_generic_mod_init(void)
static void __exit sha512_generic_mod_fini(void)
module_init(sha512_generic_mod_init);
module_exit(sha512_generic_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA-512 and SHA-384 Secure Hash Algorithms");
MODULE_ALIAS("sha384");
MODULE_ALIAS("sha512");
