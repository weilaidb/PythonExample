struct michael_mic_ctx ;
struct michael_mic_desc_ctx ;
static inline u32 xswap(u32 val)
#define michael_block(l, r)	\
do  while (0)
static int michael_init(struct shash_desc *desc)
static int michael_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int michael_final(struct shash_desc *desc, u8 *out)
static int michael_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
static struct shash_alg alg = ;
static int __init michael_mic_init(void)
static void __exit michael_mic_exit(void)
module_init(michael_mic_init);
module_exit(michael_mic_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Michael MIC");
MODULE_AUTHOR("Jouni Malinen <j@w1.fi>");
