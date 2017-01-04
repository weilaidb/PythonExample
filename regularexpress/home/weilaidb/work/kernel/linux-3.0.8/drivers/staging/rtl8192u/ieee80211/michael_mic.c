struct michael_mic_ctx ;
static inline u32 rotl(u32 val, int bits)
static inline u32 rotr(u32 val, int bits)
static inline u32 xswap(u32 val)
#define michael_block(l, r)	\
do  while (0)
static inline u32 get_le32(const u8 *p)
static inline void put_le32(u8 *p, u32 v)
static void michael_init(void *ctx)
static void michael_update(void *ctx, const u8 *data, unsigned int len)
static void michael_final(void *ctx, u8 *out)
static int michael_setkey(void *ctx, const u8 *key, unsigned int keylen,
u32 *flags)
static struct crypto_alg michael_mic_alg = ;
static int __init michael_mic_init(void)
static void __exit michael_mic_exit(void)
module_init(michael_mic_init);
module_exit(michael_mic_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Michael MIC");
MODULE_AUTHOR("Jouni Malinen <jkmaline@cc.hut.fi>");
