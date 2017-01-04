#define CHKSUM_BLOCK_SIZE	1
#define CHKSUM_DIGEST_SIZE	4
#define SCALE_F	sizeof(unsigned long)
#define REX_PRE "0x48, "
#define REX_PRE
static u32 crc32c_intel_le_hw_byte(u32 crc, unsigned char const *data, size_t length)
static u32 __pure crc32c_intel_le_hw(u32 crc, unsigned char const *p, size_t len)
static int crc32c_intel_setkey(struct crypto_shash *hash, const u8 *key,
unsigned int keylen)
static int crc32c_intel_init(struct shash_desc *desc)
static int crc32c_intel_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int __crc32c_intel_finup(u32 *crcp, const u8 *data, unsigned int len,
u8 *out)
static int crc32c_intel_finup(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
static int crc32c_intel_final(struct shash_desc *desc, u8 *out)
static int crc32c_intel_digest(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
static int crc32c_intel_cra_init(struct crypto_tfm *tfm)
static struct shash_alg alg = ;
static int __init crc32c_intel_mod_init(void)
static void __exit crc32c_intel_mod_fini(void)
module_init(crc32c_intel_mod_init);
module_exit(crc32c_intel_mod_fini);
MODULE_AUTHOR("Austin Zhang <austin.zhang@intel.com>, Kent Liu <kent.liu@intel.com>");
MODULE_DESCRIPTION("CRC32c (Castagnoli) optimization using Intel Hardware.");
MODULE_LICENSE("GPL");
MODULE_ALIAS("crc32c");
MODULE_ALIAS("crc32c-intel");
