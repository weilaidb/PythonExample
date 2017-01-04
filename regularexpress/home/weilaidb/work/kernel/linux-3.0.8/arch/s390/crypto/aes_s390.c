#define KMSG_COMPONENT "aes_s390"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define AES_KEYLEN_128		1
#define AES_KEYLEN_192		2
#define AES_KEYLEN_256		4
static u8 *ctrblk;
static char keylen_flag;
struct s390_aes_ctx ;
struct pcc_param ;
struct s390_xts_ctx ;
static int need_fallback(unsigned int key_len)
static int setkey_fallback_cip(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static int aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void aes_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void aes_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static int fallback_init_cip(struct crypto_tfm *tfm)
static void fallback_exit_cip(struct crypto_tfm *tfm)
static struct crypto_alg aes_alg = ;
static int setkey_fallback_blk(struct crypto_tfm *tfm, const u8 *key,
unsigned int len)
static int fallback_blk_dec(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int fallback_blk_enc(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static int ecb_aes_crypt(struct blkcipher_desc *desc, long func, void *param,
struct blkcipher_walk *walk)
static int ecb_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int fallback_init_blk(struct crypto_tfm *tfm)
static void fallback_exit_blk(struct crypto_tfm *tfm)
static struct crypto_alg ecb_aes_alg = ;
static int cbc_aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static int cbc_aes_crypt(struct blkcipher_desc *desc, long func, void *param,
struct blkcipher_walk *walk)
static int cbc_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cbc_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg cbc_aes_alg = ;
static int xts_fallback_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int len)
static int xts_fallback_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int xts_fallback_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int xts_aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static int xts_aes_crypt(struct blkcipher_desc *desc, long func,
struct s390_xts_ctx *xts_ctx,
struct blkcipher_walk *walk)
static int xts_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int xts_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int xts_fallback_init(struct crypto_tfm *tfm)
static void xts_fallback_exit(struct crypto_tfm *tfm)
static struct crypto_alg xts_aes_alg = ;
static int ctr_aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static int ctr_aes_crypt(struct blkcipher_desc *desc, long func,
struct s390_aes_ctx *sctx, struct blkcipher_walk *walk)
static int ctr_aes_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ctr_aes_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ctr_aes_alg = ;
static int __init aes_s390_init(void)
static void __exit aes_s390_fini(void)
module_init(aes_s390_init);
module_exit(aes_s390_fini);
MODULE_ALIAS("aes-all");
MODULE_DESCRIPTION("Rijndael (AES) Cipher Algorithm");
MODULE_LICENSE("GPL");
