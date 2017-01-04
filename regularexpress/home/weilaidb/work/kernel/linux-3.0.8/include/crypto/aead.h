#define _CRYPTO_AEAD_H
struct aead_givcrypt_request ;
static inline struct crypto_aead *aead_givcrypt_reqtfm(
struct aead_givcrypt_request *req)
static inline int crypto_aead_givencrypt(struct aead_givcrypt_request *req)
;
static inline int crypto_aead_givdecrypt(struct aead_givcrypt_request *req)
;
static inline void aead_givcrypt_set_tfm(struct aead_givcrypt_request *req,
struct crypto_aead *tfm)
static inline struct aead_givcrypt_request *aead_givcrypt_alloc(
struct crypto_aead *tfm, gfp_t gfp)
static inline void aead_givcrypt_free(struct aead_givcrypt_request *req)
static inline void aead_givcrypt_set_callback(
struct aead_givcrypt_request *req, u32 flags,
crypto_completion_t complete, void *data)
static inline void aead_givcrypt_set_crypt(struct aead_givcrypt_request *req,
struct scatterlist *src,
struct scatterlist *dst,
unsigned int nbytes, void *iv)
static inline void aead_givcrypt_set_assoc(struct aead_givcrypt_request *req,
struct scatterlist *assoc,
unsigned int assoclen)
static inline void aead_givcrypt_set_giv(struct aead_givcrypt_request *req,
u8 *giv, u64 seq)
