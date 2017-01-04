#define _LINUX_CRYPTO_H
#define crypto_register_alg crypto_register_alg_rsl
#define crypto_unregister_alg crypto_unregister_alg_rsl
#define crypto_alloc_tfm crypto_alloc_tfm_rsl
#define crypto_free_tfm crypto_free_tfm_rsl
#define crypto_alg_available crypto_alg_available_rsl
#define CRYPTO_ALG_TYPE_MASK		0x000000ff
#define CRYPTO_ALG_TYPE_CIPHER		0x00000001
#define CRYPTO_ALG_TYPE_DIGEST		0x00000002
#define CRYPTO_ALG_TYPE_COMPRESS	0x00000004
#define CRYPTO_TFM_MODE_MASK		0x000000ff
#define CRYPTO_TFM_REQ_MASK		0x000fff00
#define CRYPTO_TFM_RES_MASK		0xfff00000
#define CRYPTO_TFM_MODE_ECB		0x00000001
#define CRYPTO_TFM_MODE_CBC		0x00000002
#define CRYPTO_TFM_MODE_CFB		0x00000004
#define CRYPTO_TFM_MODE_CTR		0x00000008
#define CRYPTO_TFM_REQ_WEAK_KEY		0x00000100
#define CRYPTO_TFM_RES_WEAK_KEY		0x00100000
#define CRYPTO_TFM_RES_BAD_KEY_LEN   	0x00200000
#define CRYPTO_TFM_RES_BAD_KEY_SCHED 	0x00400000
#define CRYPTO_TFM_RES_BAD_BLOCK_LEN 	0x00800000
#define CRYPTO_TFM_RES_BAD_FLAGS 	0x01000000
#define CRYPTO_UNSPEC			0
#define CRYPTO_MAX_ALG_NAME		64
struct scatterlist;
struct cipher_alg ;
struct digest_alg ;
struct compress_alg ;
#define cra_cipher	cra_u.cipher
#define cra_digest	cra_u.digest
#define cra_compress	cra_u.compress
struct crypto_alg ;
int crypto_register_alg(struct crypto_alg *alg);
int crypto_unregister_alg(struct crypto_alg *alg);
int crypto_alg_available(const char *name, u32 flags);
struct crypto_tfm;
struct cipher_tfm ;
struct digest_tfm ;
struct compress_tfm ;
#define crt_cipher	crt_u.cipher
#define crt_digest	crt_u.digest
#define crt_compress	crt_u.compress
struct crypto_tfm ;
struct crypto_tfm *crypto_alloc_tfm(const char *alg_name, u32 tfm_flags);
void crypto_free_tfm(struct crypto_tfm *tfm);
static inline const char *crypto_tfm_alg_name(struct crypto_tfm *tfm)
static inline const char *crypto_tfm_alg_modname(struct crypto_tfm *tfm)
static inline u32 crypto_tfm_alg_type(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_min_keysize(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_max_keysize(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_ivsize(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_blocksize(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_digestsize(struct crypto_tfm *tfm)
static inline void crypto_digest_init(struct crypto_tfm *tfm)
static inline void crypto_digest_update(struct crypto_tfm *tfm,
struct scatterlist *sg,
unsigned int nsg)
static inline void crypto_digest_final(struct crypto_tfm *tfm, u8 *out)
static inline void crypto_digest_digest(struct crypto_tfm *tfm,
struct scatterlist *sg,
unsigned int nsg, u8 *out)
static inline int crypto_digest_setkey(struct crypto_tfm *tfm,
const u8 *key, unsigned int keylen)
static inline int crypto_cipher_setkey(struct crypto_tfm *tfm,
const u8 *key, unsigned int keylen)
static inline int crypto_cipher_encrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_cipher_encrypt_iv(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, u8 *iv)
static inline int crypto_cipher_decrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_cipher_decrypt_iv(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, u8 *iv)
static inline void crypto_cipher_set_iv(struct crypto_tfm *tfm,
const u8 *src, unsigned int len)
static inline void crypto_cipher_get_iv(struct crypto_tfm *tfm,
u8 *dst, unsigned int len)
static inline int crypto_comp_compress(struct crypto_tfm *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
static inline int crypto_comp_decompress(struct crypto_tfm *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
void crypto_hmac_init(struct crypto_tfm *tfm, u8 *key, unsigned int *keylen);
void crypto_hmac_update(struct crypto_tfm *tfm,
struct scatterlist *sg, unsigned int nsg);
void crypto_hmac_final(struct crypto_tfm *tfm, u8 *key,
unsigned int *keylen, u8 *out);
void crypto_hmac(struct crypto_tfm *tfm, u8 *key, unsigned int *keylen,
struct scatterlist *sg, unsigned int nsg, u8 *out);
