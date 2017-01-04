#define NULL_KEY_SIZE		0
#define NULL_BLOCK_SIZE		1
#define NULL_DIGEST_SIZE	0
#define NULL_IV_SIZE		0
static int null_compress(struct crypto_tfm *tfm, const u8 *src,
unsigned int slen, u8 *dst, unsigned int *dlen)
static int null_init(struct shash_desc *desc)
static int null_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int null_final(struct shash_desc *desc, u8 *out)
static int null_digest(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
static int null_hash_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
static int null_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static void null_crypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static int skcipher_null_crypt(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src, unsigned int nbytes)
static struct crypto_alg compress_null = ;
static struct shash_alg digest_null = ;
static struct crypto_alg cipher_null = ;
static struct crypto_alg skcipher_null = ;
MODULE_ALIAS("compress_null");
MODULE_ALIAS("digest_null");
MODULE_ALIAS("cipher_null");
static int __init crypto_null_mod_init(void)
static void __exit crypto_null_mod_fini(void)
module_init(crypto_null_mod_init);
module_exit(crypto_null_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Null Cryptographic Algorithms");
