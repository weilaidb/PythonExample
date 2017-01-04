#define CHKSUM_BLOCK_SIZE	1
#define CHKSUM_DIGEST_SIZE	4
struct chksum_ctx ;
struct chksum_desc_ctx ;
static const u32 crc32c_table[256] = ;
static u32 crc32c(u32 crc, const u8 *data, unsigned int length)
static int chksum_init(struct shash_desc *desc)
static int chksum_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
static int chksum_update(struct shash_desc *desc, const u8 *data,
unsigned int length)
static int chksum_final(struct shash_desc *desc, u8 *out)
static int __chksum_finup(u32 *crcp, const u8 *data, unsigned int len, u8 *out)
static int chksum_finup(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
static int chksum_digest(struct shash_desc *desc, const u8 *data,
unsigned int length, u8 *out)
static int crc32c_cra_init(struct crypto_tfm *tfm)
static struct shash_alg alg = ;
static int __init crc32c_mod_init(void)
static void __exit crc32c_mod_fini(void)
module_init(crc32c_mod_init);
module_exit(crc32c_mod_fini);
MODULE_AUTHOR("Clay Haapala <chaapala@cisco.com>");
MODULE_DESCRIPTION("CRC32c (Castagnoli) calculations wrapper for lib/crc32c");
MODULE_LICENSE("GPL");
