#define _CRYPTO_SKCIPHER_H
struct skcipher_givcrypt_request ;
static inline struct crypto_ablkcipher *skcipher_givcrypt_reqtfm(
struct skcipher_givcrypt_request *req)
static inline int crypto_skcipher_givencrypt(
struct skcipher_givcrypt_request *req)
;
static inline int crypto_skcipher_givdecrypt(
struct skcipher_givcrypt_request *req)
;
static inline void skcipher_givcrypt_set_tfm(
struct skcipher_givcrypt_request *req, struct crypto_ablkcipher *tfm)
static inline struct skcipher_givcrypt_request *skcipher_givcrypt_cast(
struct crypto_async_request *req)
static inline struct skcipher_givcrypt_request *skcipher_givcrypt_alloc(
struct crypto_ablkcipher *tfm, gfp_t gfp)
static inline void skcipher_givcrypt_free(struct skcipher_givcrypt_request *req)
static inline void skcipher_givcrypt_set_callback(
struct skcipher_givcrypt_request *req, u32 flags,
crypto_completion_t complete, void *data)
static inline void skcipher_givcrypt_set_crypt(
struct skcipher_givcrypt_request *req,
struct scatterlist *src, struct scatterlist *dst,
unsigned int nbytes, void *iv)
static inline void skcipher_givcrypt_set_giv(
struct skcipher_givcrypt_request *req, u8 *giv, u64 seq)
