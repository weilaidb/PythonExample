#if defined(CONFIG_CRYPTO_CTR) || defined(CONFIG_CRYPTO_CTR_MODULE)
#define HAS_CTR
#if defined(CONFIG_CRYPTO_LRW) || defined(CONFIG_CRYPTO_LRW_MODULE)
#define HAS_LRW
#if defined(CONFIG_CRYPTO_PCBC) || defined(CONFIG_CRYPTO_PCBC_MODULE)
#define HAS_PCBC
#if defined(CONFIG_CRYPTO_XTS) || defined(CONFIG_CRYPTO_XTS_MODULE)
#define HAS_XTS
struct async_aes_ctx ;
struct aesni_rfc4106_gcm_ctx ;
struct aesni_gcm_set_hash_subkey_result ;
struct aesni_hash_subkey_req_data ;
#define AESNI_ALIGN	(16)
#define AES_BLOCK_MASK	(~(AES_BLOCK_SIZE-1))
#define RFC4106_HASH_SUBKEY_SIZE 16
asmlinkage int aesni_set_key(struct crypto_aes_ctx *ctx, const u8 *in_key,
unsigned int key_len);
asmlinkage void aesni_enc(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in);
asmlinkage void aesni_dec(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in);
asmlinkage void aesni_ecb_enc(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in, unsigned int len);
asmlinkage void aesni_ecb_dec(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in, unsigned int len);
asmlinkage void aesni_cbc_enc(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in, unsigned int len, u8 *iv);
asmlinkage void aesni_cbc_dec(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in, unsigned int len, u8 *iv);
int crypto_fpu_init(void);
void crypto_fpu_exit(void);
asmlinkage void aesni_ctr_enc(struct crypto_aes_ctx *ctx, u8 *out,
const u8 *in, unsigned int len, u8 *iv);
asmlinkage void aesni_gcm_enc(void *ctx, u8 *out,
const u8 *in, unsigned long plaintext_len, u8 *iv,
u8 *hash_subkey, const u8 *aad, unsigned long aad_len,
u8 *auth_tag, unsigned long auth_tag_len);
asmlinkage void aesni_gcm_dec(void *ctx, u8 *out,
const u8 *in, unsigned long ciphertext_len, u8 *iv,
u8 *hash_subkey, const u8 *aad, unsigned long aad_len,
u8 *auth_tag, unsigned long auth_tag_len);
static inline struct
aesni_rfc4106_gcm_ctx *aesni_rfc4106_gcm_ctx_get(struct crypto_aead *tfm)
static inline struct crypto_aes_ctx *aes_ctx(void *raw_ctx)
static int aes_set_key_common(struct crypto_tfm *tfm, void *raw_ctx,
const u8 *in_key, unsigned int key_len)
static int aes_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void aes_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void aes_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg aesni_alg = ;
static void __aes_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void __aes_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg __aesni_alg = ;
static int ecb_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int ecb_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg blk_ecb_alg = ;
static int cbc_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int cbc_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg blk_cbc_alg = ;
static void ctr_crypt_final(struct crypto_aes_ctx *ctx,
struct blkcipher_walk *walk)
static int ctr_crypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg blk_ctr_alg = ;
static int ablk_set_key(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int key_len)
static int ablk_encrypt(struct ablkcipher_request *req)
static int ablk_decrypt(struct ablkcipher_request *req)
static void ablk_exit(struct crypto_tfm *tfm)
static void ablk_init_common(struct crypto_tfm *tfm,
struct cryptd_ablkcipher *cryptd_tfm)
static int ablk_ecb_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_ecb_alg = ;
static int ablk_cbc_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_cbc_alg = ;
static int ablk_ctr_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_ctr_alg = ;
static int ablk_rfc3686_ctr_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_rfc3686_ctr_alg = ;
static int ablk_lrw_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_lrw_alg = ;
static int ablk_pcbc_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_pcbc_alg = ;
static int ablk_xts_init(struct crypto_tfm *tfm)
static struct crypto_alg ablk_xts_alg = ;
static int rfc4106_init(struct crypto_tfm *tfm)
static void rfc4106_exit(struct crypto_tfm *tfm)
static void
rfc4106_set_hash_subkey_done(struct crypto_async_request *req, int err)
static int
rfc4106_set_hash_subkey(u8 *hash_subkey, const u8 *key, unsigned int key_len)
static int rfc4106_set_key(struct crypto_aead *parent, const u8 *key,
unsigned int key_len)
static int rfc4106_set_authsize(struct crypto_aead *parent,
unsigned int authsize)
static int rfc4106_encrypt(struct aead_request *req)
static int rfc4106_decrypt(struct aead_request *req)
static struct crypto_alg rfc4106_alg = ;
static int __driver_rfc4106_encrypt(struct aead_request *req)
static int __driver_rfc4106_decrypt(struct aead_request *req)
static struct crypto_alg __rfc4106_alg = ;
static int __init aesni_init(void)
static void __exit aesni_exit(void)
module_init(aesni_init);
module_exit(aesni_exit);
MODULE_DESCRIPTION("Rijndael (AES) Cipher Algorithm, Intel AES-NI instructions optimized");
MODULE_LICENSE("GPL");
MODULE_ALIAS("aes");
