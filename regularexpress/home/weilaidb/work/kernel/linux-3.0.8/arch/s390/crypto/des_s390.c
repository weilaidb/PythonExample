#define DES3_KEY_SIZE	(3 * DES_KEY_SIZE)
static u8 *ctrblk;
struct s390_des_ctx ;
static int des_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int key_len)
static void des_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void des_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg des_alg = ;
static int ecb_desall_crypt(struct blkcipher_desc *desc, long func,
u8 *key, struct blkcipher_walk *walk)
static int cbc_desall_crypt(struct blkcipher_desc *desc, long func,
u8 *iv, struct blkcipher_walk *walk)
static int ecb_des_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_des_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ecb_des_alg = ;
static int cbc_des_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cbc_des_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg cbc_des_alg = ;
static int des3_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int key_len)
static void des3_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void des3_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg des3_alg = ;
static int ecb_des3_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_des3_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ecb_des3_alg = ;
static int cbc_des3_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cbc_des3_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg cbc_des3_alg = ;
static int ctr_desall_crypt(struct blkcipher_desc *desc, long func,
struct s390_des_ctx *ctx, struct blkcipher_walk *walk)
static int ctr_des_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ctr_des_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ctr_des_alg = ;
static int ctr_des3_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ctr_des3_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg ctr_des3_alg = ;
static int __init des_s390_init(void)
static void __exit des_s390_exit(void)
module_init(des_s390_init);
module_exit(des_s390_exit);
MODULE_ALIAS("des");
MODULE_ALIAS("des3_ede");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("DES & Triple DES EDE Cipher Algorithms");
