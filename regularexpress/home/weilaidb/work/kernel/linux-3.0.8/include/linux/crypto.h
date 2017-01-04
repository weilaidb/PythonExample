#define _LINUX_CRYPTO_H
#define CRYPTO_ALG_TYPE_MASK		0x0000000f
#define CRYPTO_ALG_TYPE_CIPHER		0x00000001
#define CRYPTO_ALG_TYPE_COMPRESS	0x00000002
#define CRYPTO_ALG_TYPE_AEAD		0x00000003
#define CRYPTO_ALG_TYPE_BLKCIPHER	0x00000004
#define CRYPTO_ALG_TYPE_ABLKCIPHER	0x00000005
#define CRYPTO_ALG_TYPE_GIVCIPHER	0x00000006
#define CRYPTO_ALG_TYPE_DIGEST		0x00000008
#define CRYPTO_ALG_TYPE_HASH		0x00000008
#define CRYPTO_ALG_TYPE_SHASH		0x00000009
#define CRYPTO_ALG_TYPE_AHASH		0x0000000a
#define CRYPTO_ALG_TYPE_RNG		0x0000000c
#define CRYPTO_ALG_TYPE_PCOMPRESS	0x0000000f
#define CRYPTO_ALG_TYPE_HASH_MASK	0x0000000e
#define CRYPTO_ALG_TYPE_AHASH_MASK	0x0000000c
#define CRYPTO_ALG_TYPE_BLKCIPHER_MASK	0x0000000c
#define CRYPTO_ALG_LARVAL		0x00000010
#define CRYPTO_ALG_DEAD			0x00000020
#define CRYPTO_ALG_DYING		0x00000040
#define CRYPTO_ALG_ASYNC		0x00000080
#define CRYPTO_ALG_NEED_FALLBACK	0x00000100
#define CRYPTO_ALG_GENIV		0x00000200
#define CRYPTO_ALG_TESTED		0x00000400
#define CRYPTO_TFM_REQ_MASK		0x000fff00
#define CRYPTO_TFM_RES_MASK		0xfff00000
#define CRYPTO_TFM_REQ_WEAK_KEY		0x00000100
#define CRYPTO_TFM_REQ_MAY_SLEEP	0x00000200
#define CRYPTO_TFM_REQ_MAY_BACKLOG	0x00000400
#define CRYPTO_TFM_RES_WEAK_KEY		0x00100000
#define CRYPTO_TFM_RES_BAD_KEY_LEN   	0x00200000
#define CRYPTO_TFM_RES_BAD_KEY_SCHED 	0x00400000
#define CRYPTO_TFM_RES_BAD_BLOCK_LEN 	0x00800000
#define CRYPTO_TFM_RES_BAD_FLAGS 	0x01000000
#define CRYPTO_MAX_ALG_NAME		64
#define CRYPTO_MINALIGN ARCH_KMALLOC_MINALIGN
#define CRYPTO_MINALIGN_ATTR __attribute__ ((__aligned__(CRYPTO_MINALIGN)))
struct scatterlist;
struct crypto_ablkcipher;
struct crypto_async_request;
struct crypto_aead;
struct crypto_blkcipher;
struct crypto_hash;
struct crypto_rng;
struct crypto_tfm;
struct crypto_type;
struct aead_givcrypt_request;
struct skcipher_givcrypt_request;
typedef void (*crypto_completion_t)(struct crypto_async_request *req, int err);
struct crypto_async_request ;
struct ablkcipher_request ;
struct aead_request ;
struct blkcipher_desc ;
struct cipher_desc ;
struct hash_desc ;
struct ablkcipher_alg ;
struct aead_alg ;
struct blkcipher_alg ;
struct cipher_alg ;
struct compress_alg ;
struct rng_alg ;
#define cra_ablkcipher	cra_u.ablkcipher
#define cra_aead	cra_u.aead
#define cra_blkcipher	cra_u.blkcipher
#define cra_cipher	cra_u.cipher
#define cra_compress	cra_u.compress
#define cra_rng		cra_u.rng
struct crypto_alg ;
int crypto_register_alg(struct crypto_alg *alg);
int crypto_unregister_alg(struct crypto_alg *alg);
int crypto_has_alg(const char *name, u32 type, u32 mask);
struct ablkcipher_tfm ;
struct aead_tfm ;
struct blkcipher_tfm ;
struct cipher_tfm ;
struct hash_tfm ;
struct compress_tfm ;
struct rng_tfm ;
#define crt_ablkcipher	crt_u.ablkcipher
#define crt_aead	crt_u.aead
#define crt_blkcipher	crt_u.blkcipher
#define crt_cipher	crt_u.cipher
#define crt_hash	crt_u.hash
#define crt_compress	crt_u.compress
#define crt_rng		crt_u.rng
struct crypto_tfm ;
struct crypto_ablkcipher ;
struct crypto_aead ;
struct crypto_blkcipher ;
struct crypto_cipher ;
struct crypto_comp ;
struct crypto_hash ;
struct crypto_rng ;
enum ;
#define CRYPTOA_MAX (__CRYPTOA_MAX - 1)
#define CRYPTO_MAX_ATTRS 32
struct crypto_attr_alg ;
struct crypto_attr_type ;
struct crypto_attr_u32 ;
struct crypto_tfm *crypto_alloc_base(const char *alg_name, u32 type, u32 mask);
void crypto_destroy_tfm(void *mem, struct crypto_tfm *tfm);
static inline void crypto_free_tfm(struct crypto_tfm *tfm)
int alg_test(const char *driver, const char *alg, u32 type, u32 mask);
static inline const char *crypto_tfm_alg_name(struct crypto_tfm *tfm)
static inline const char *crypto_tfm_alg_driver_name(struct crypto_tfm *tfm)
static inline int crypto_tfm_alg_priority(struct crypto_tfm *tfm)
static inline const char *crypto_tfm_alg_modname(struct crypto_tfm *tfm)
static inline u32 crypto_tfm_alg_type(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_blocksize(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_alg_alignmask(struct crypto_tfm *tfm)
static inline u32 crypto_tfm_get_flags(struct crypto_tfm *tfm)
static inline void crypto_tfm_set_flags(struct crypto_tfm *tfm, u32 flags)
static inline void crypto_tfm_clear_flags(struct crypto_tfm *tfm, u32 flags)
static inline void *crypto_tfm_ctx(struct crypto_tfm *tfm)
static inline unsigned int crypto_tfm_ctx_alignment(void)
static inline struct crypto_ablkcipher *__crypto_ablkcipher_cast(
struct crypto_tfm *tfm)
static inline u32 crypto_skcipher_type(u32 type)
static inline u32 crypto_skcipher_mask(u32 mask)
struct crypto_ablkcipher *crypto_alloc_ablkcipher(const char *alg_name,
u32 type, u32 mask);
static inline struct crypto_tfm *crypto_ablkcipher_tfm(
struct crypto_ablkcipher *tfm)
static inline void crypto_free_ablkcipher(struct crypto_ablkcipher *tfm)
static inline int crypto_has_ablkcipher(const char *alg_name, u32 type,
u32 mask)
static inline struct ablkcipher_tfm *crypto_ablkcipher_crt(
struct crypto_ablkcipher *tfm)
static inline unsigned int crypto_ablkcipher_ivsize(
struct crypto_ablkcipher *tfm)
static inline unsigned int crypto_ablkcipher_blocksize(
struct crypto_ablkcipher *tfm)
static inline unsigned int crypto_ablkcipher_alignmask(
struct crypto_ablkcipher *tfm)
static inline u32 crypto_ablkcipher_get_flags(struct crypto_ablkcipher *tfm)
static inline void crypto_ablkcipher_set_flags(struct crypto_ablkcipher *tfm,
u32 flags)
static inline void crypto_ablkcipher_clear_flags(struct crypto_ablkcipher *tfm,
u32 flags)
static inline int crypto_ablkcipher_setkey(struct crypto_ablkcipher *tfm,
const u8 *key, unsigned int keylen)
static inline struct crypto_ablkcipher *crypto_ablkcipher_reqtfm(
struct ablkcipher_request *req)
static inline int crypto_ablkcipher_encrypt(struct ablkcipher_request *req)
static inline int crypto_ablkcipher_decrypt(struct ablkcipher_request *req)
static inline unsigned int crypto_ablkcipher_reqsize(
struct crypto_ablkcipher *tfm)
static inline void ablkcipher_request_set_tfm(
struct ablkcipher_request *req, struct crypto_ablkcipher *tfm)
static inline struct ablkcipher_request *ablkcipher_request_cast(
struct crypto_async_request *req)
static inline struct ablkcipher_request *ablkcipher_request_alloc(
struct crypto_ablkcipher *tfm, gfp_t gfp)
static inline void ablkcipher_request_free(struct ablkcipher_request *req)
static inline void ablkcipher_request_set_callback(
struct ablkcipher_request *req,
u32 flags, crypto_completion_t complete, void *data)
static inline void ablkcipher_request_set_crypt(
struct ablkcipher_request *req,
struct scatterlist *src, struct scatterlist *dst,
unsigned int nbytes, void *iv)
static inline struct crypto_aead *__crypto_aead_cast(struct crypto_tfm *tfm)
struct crypto_aead *crypto_alloc_aead(const char *alg_name, u32 type, u32 mask);
static inline struct crypto_tfm *crypto_aead_tfm(struct crypto_aead *tfm)
static inline void crypto_free_aead(struct crypto_aead *tfm)
static inline struct aead_tfm *crypto_aead_crt(struct crypto_aead *tfm)
static inline unsigned int crypto_aead_ivsize(struct crypto_aead *tfm)
static inline unsigned int crypto_aead_authsize(struct crypto_aead *tfm)
static inline unsigned int crypto_aead_blocksize(struct crypto_aead *tfm)
static inline unsigned int crypto_aead_alignmask(struct crypto_aead *tfm)
static inline u32 crypto_aead_get_flags(struct crypto_aead *tfm)
static inline void crypto_aead_set_flags(struct crypto_aead *tfm, u32 flags)
static inline void crypto_aead_clear_flags(struct crypto_aead *tfm, u32 flags)
static inline int crypto_aead_setkey(struct crypto_aead *tfm, const u8 *key,
unsigned int keylen)
int crypto_aead_setauthsize(struct crypto_aead *tfm, unsigned int authsize);
static inline struct crypto_aead *crypto_aead_reqtfm(struct aead_request *req)
static inline int crypto_aead_encrypt(struct aead_request *req)
static inline int crypto_aead_decrypt(struct aead_request *req)
static inline unsigned int crypto_aead_reqsize(struct crypto_aead *tfm)
static inline void aead_request_set_tfm(struct aead_request *req,
struct crypto_aead *tfm)
static inline struct aead_request *aead_request_alloc(struct crypto_aead *tfm,
gfp_t gfp)
static inline void aead_request_free(struct aead_request *req)
static inline void aead_request_set_callback(struct aead_request *req,
u32 flags,
crypto_completion_t complete,
void *data)
static inline void aead_request_set_crypt(struct aead_request *req,
struct scatterlist *src,
struct scatterlist *dst,
unsigned int cryptlen, u8 *iv)
static inline void aead_request_set_assoc(struct aead_request *req,
struct scatterlist *assoc,
unsigned int assoclen)
static inline struct crypto_blkcipher *__crypto_blkcipher_cast(
struct crypto_tfm *tfm)
static inline struct crypto_blkcipher *crypto_blkcipher_cast(
struct crypto_tfm *tfm)
static inline struct crypto_blkcipher *crypto_alloc_blkcipher(
const char *alg_name, u32 type, u32 mask)
static inline struct crypto_tfm *crypto_blkcipher_tfm(
struct crypto_blkcipher *tfm)
static inline void crypto_free_blkcipher(struct crypto_blkcipher *tfm)
static inline int crypto_has_blkcipher(const char *alg_name, u32 type, u32 mask)
static inline const char *crypto_blkcipher_name(struct crypto_blkcipher *tfm)
static inline struct blkcipher_tfm *crypto_blkcipher_crt(
struct crypto_blkcipher *tfm)
static inline struct blkcipher_alg *crypto_blkcipher_alg(
struct crypto_blkcipher *tfm)
static inline unsigned int crypto_blkcipher_ivsize(struct crypto_blkcipher *tfm)
static inline unsigned int crypto_blkcipher_blocksize(
struct crypto_blkcipher *tfm)
static inline unsigned int crypto_blkcipher_alignmask(
struct crypto_blkcipher *tfm)
static inline u32 crypto_blkcipher_get_flags(struct crypto_blkcipher *tfm)
static inline void crypto_blkcipher_set_flags(struct crypto_blkcipher *tfm,
u32 flags)
static inline void crypto_blkcipher_clear_flags(struct crypto_blkcipher *tfm,
u32 flags)
static inline int crypto_blkcipher_setkey(struct crypto_blkcipher *tfm,
const u8 *key, unsigned int keylen)
static inline int crypto_blkcipher_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_blkcipher_encrypt_iv(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_blkcipher_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_blkcipher_decrypt_iv(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline void crypto_blkcipher_set_iv(struct crypto_blkcipher *tfm,
const u8 *src, unsigned int len)
static inline void crypto_blkcipher_get_iv(struct crypto_blkcipher *tfm,
u8 *dst, unsigned int len)
static inline struct crypto_cipher *__crypto_cipher_cast(struct crypto_tfm *tfm)
static inline struct crypto_cipher *crypto_cipher_cast(struct crypto_tfm *tfm)
static inline struct crypto_cipher *crypto_alloc_cipher(const char *alg_name,
u32 type, u32 mask)
static inline struct crypto_tfm *crypto_cipher_tfm(struct crypto_cipher *tfm)
static inline void crypto_free_cipher(struct crypto_cipher *tfm)
static inline int crypto_has_cipher(const char *alg_name, u32 type, u32 mask)
static inline struct cipher_tfm *crypto_cipher_crt(struct crypto_cipher *tfm)
static inline unsigned int crypto_cipher_blocksize(struct crypto_cipher *tfm)
static inline unsigned int crypto_cipher_alignmask(struct crypto_cipher *tfm)
static inline u32 crypto_cipher_get_flags(struct crypto_cipher *tfm)
static inline void crypto_cipher_set_flags(struct crypto_cipher *tfm,
u32 flags)
static inline void crypto_cipher_clear_flags(struct crypto_cipher *tfm,
u32 flags)
static inline int crypto_cipher_setkey(struct crypto_cipher *tfm,
const u8 *key, unsigned int keylen)
static inline void crypto_cipher_encrypt_one(struct crypto_cipher *tfm,
u8 *dst, const u8 *src)
static inline void crypto_cipher_decrypt_one(struct crypto_cipher *tfm,
u8 *dst, const u8 *src)
static inline struct crypto_hash *__crypto_hash_cast(struct crypto_tfm *tfm)
static inline struct crypto_hash *crypto_hash_cast(struct crypto_tfm *tfm)
static inline struct crypto_hash *crypto_alloc_hash(const char *alg_name,
u32 type, u32 mask)
static inline struct crypto_tfm *crypto_hash_tfm(struct crypto_hash *tfm)
static inline void crypto_free_hash(struct crypto_hash *tfm)
static inline int crypto_has_hash(const char *alg_name, u32 type, u32 mask)
static inline struct hash_tfm *crypto_hash_crt(struct crypto_hash *tfm)
static inline unsigned int crypto_hash_blocksize(struct crypto_hash *tfm)
static inline unsigned int crypto_hash_alignmask(struct crypto_hash *tfm)
static inline unsigned int crypto_hash_digestsize(struct crypto_hash *tfm)
static inline u32 crypto_hash_get_flags(struct crypto_hash *tfm)
static inline void crypto_hash_set_flags(struct crypto_hash *tfm, u32 flags)
static inline void crypto_hash_clear_flags(struct crypto_hash *tfm, u32 flags)
static inline int crypto_hash_init(struct hash_desc *desc)
static inline int crypto_hash_update(struct hash_desc *desc,
struct scatterlist *sg,
unsigned int nbytes)
static inline int crypto_hash_final(struct hash_desc *desc, u8 *out)
static inline int crypto_hash_digest(struct hash_desc *desc,
struct scatterlist *sg,
unsigned int nbytes, u8 *out)
static inline int crypto_hash_setkey(struct crypto_hash *hash,
const u8 *key, unsigned int keylen)
static inline struct crypto_comp *__crypto_comp_cast(struct crypto_tfm *tfm)
static inline struct crypto_comp *crypto_comp_cast(struct crypto_tfm *tfm)
static inline struct crypto_comp *crypto_alloc_comp(const char *alg_name,
u32 type, u32 mask)
static inline struct crypto_tfm *crypto_comp_tfm(struct crypto_comp *tfm)
static inline void crypto_free_comp(struct crypto_comp *tfm)
static inline int crypto_has_comp(const char *alg_name, u32 type, u32 mask)
static inline const char *crypto_comp_name(struct crypto_comp *tfm)
static inline struct compress_tfm *crypto_comp_crt(struct crypto_comp *tfm)
static inline int crypto_comp_compress(struct crypto_comp *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
static inline int crypto_comp_decompress(struct crypto_comp *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
