struct padlock_sha_desc ;
struct padlock_sha_ctx ;
static int padlock_sha_init(struct shash_desc *desc)
static int padlock_sha_update(struct shash_desc *desc,
const u8 *data, unsigned int length)
static int padlock_sha_export(struct shash_desc *desc, void *out)
static int padlock_sha_import(struct shash_desc *desc, const void *in)
static inline void padlock_output_block(uint32_t *src,
uint32_t *dst, size_t count)
static int padlock_sha1_finup(struct shash_desc *desc, const u8 *in,
unsigned int count, u8 *out)
static int padlock_sha1_final(struct shash_desc *desc, u8 *out)
static int padlock_sha256_finup(struct shash_desc *desc, const u8 *in,
unsigned int count, u8 *out)
static int padlock_sha256_final(struct shash_desc *desc, u8 *out)
static int padlock_cra_init(struct crypto_tfm *tfm)
static void padlock_cra_exit(struct crypto_tfm *tfm)
static struct shash_alg sha1_alg = ;
static struct shash_alg sha256_alg = ;
static int padlock_sha1_init_nano(struct shash_desc *desc)
static int padlock_sha1_update_nano(struct shash_desc *desc,
const u8 *data,	unsigned int len)
static int padlock_sha1_final_nano(struct shash_desc *desc, u8 *out)
static int padlock_sha256_init_nano(struct shash_desc *desc)
static int padlock_sha256_update_nano(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int padlock_sha256_final_nano(struct shash_desc *desc, u8 *out)
static int padlock_sha_export_nano(struct shash_desc *desc,
void *out)
static int padlock_sha_import_nano(struct shash_desc *desc,
const void *in)
static struct shash_alg sha1_alg_nano = ;
static struct shash_alg sha256_alg_nano = ;
static int __init padlock_init(void)
static void __exit padlock_fini(void)
module_init(padlock_init);
module_exit(padlock_fini);
MODULE_DESCRIPTION("VIA PadLock SHA1/SHA256 algorithms support.");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michal Ludvig");
MODULE_ALIAS("sha1-all");
MODULE_ALIAS("sha256-all");
MODULE_ALIAS("sha1-padlock");
MODULE_ALIAS("sha256-padlock");
