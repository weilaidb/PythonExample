#define MD4_DIGEST_SIZE		16
#define MD4_HMAC_BLOCK_SIZE	64
#define MD4_BLOCK_WORDS		16
#define MD4_HASH_WORDS		4
struct md4_ctx ;
static inline u32 lshift(u32 x, unsigned int s)
static inline u32 F(u32 x, u32 y, u32 z)
static inline u32 G(u32 x, u32 y, u32 z)
static inline u32 H(u32 x, u32 y, u32 z)
#define ROUND1(a,b,c,d,k,s) (a = lshift(a + F(b,c,d) + k, s))
#define ROUND2(a,b,c,d,k,s) (a = lshift(a + G(b,c,d) + k + (u32)0x5A827999,s))
#define ROUND3(a,b,c,d,k,s) (a = lshift(a + H(b,c,d) + k + (u32)0x6ED9EBA1,s))
static inline void le32_to_cpu_array(u32 *buf, unsigned int words)
static inline void cpu_to_le32_array(u32 *buf, unsigned int words)
static void md4_transform(u32 *hash, u32 const *in)
static inline void md4_transform_helper(struct md4_ctx *ctx)
static int md4_init(struct shash_desc *desc)
static int md4_update(struct shash_desc *desc, const u8 *data, unsigned int len)
static int md4_final(struct shash_desc *desc, u8 *out)
static struct shash_alg alg = ;
static int __init md4_mod_init(void)
static void __exit md4_mod_fini(void)
module_init(md4_mod_init);
module_exit(md4_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MD4 Message Digest Algorithm");
