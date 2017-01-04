#define _CRYPTO_HASH_H
struct crypto_ahash;
struct hash_alg_common ;
struct ahash_request ;
struct ahash_alg ;
struct shash_desc ;
struct shash_alg ;
struct crypto_ahash ;
struct crypto_shash ;
static inline struct crypto_ahash *__crypto_ahash_cast(struct crypto_tfm *tfm)
struct crypto_ahash *crypto_alloc_ahash(const char *alg_name, u32 type,
u32 mask);
static inline struct crypto_tfm *crypto_ahash_tfm(struct crypto_ahash *tfm)
static inline void crypto_free_ahash(struct crypto_ahash *tfm)
static inline unsigned int crypto_ahash_alignmask(
struct crypto_ahash *tfm)
static inline struct hash_alg_common *__crypto_hash_alg_common(
struct crypto_alg *alg)
static inline struct hash_alg_common *crypto_hash_alg_common(
struct crypto_ahash *tfm)
static inline unsigned int crypto_ahash_digestsize(struct crypto_ahash *tfm)
static inline unsigned int crypto_ahash_statesize(struct crypto_ahash *tfm)
static inline u32 crypto_ahash_get_flags(struct crypto_ahash *tfm)
static inline void crypto_ahash_set_flags(struct crypto_ahash *tfm, u32 flags)
static inline void crypto_ahash_clear_flags(struct crypto_ahash *tfm, u32 flags)
static inline struct crypto_ahash *crypto_ahash_reqtfm(
struct ahash_request *req)
static inline unsigned int crypto_ahash_reqsize(struct crypto_ahash *tfm)
static inline void *ahash_request_ctx(struct ahash_request *req)
int crypto_ahash_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen);
int crypto_ahash_finup(struct ahash_request *req);
int crypto_ahash_final(struct ahash_request *req);
int crypto_ahash_digest(struct ahash_request *req);
static inline int crypto_ahash_export(struct ahash_request *req, void *out)
static inline int crypto_ahash_import(struct ahash_request *req, const void *in)
static inline int crypto_ahash_init(struct ahash_request *req)
static inline int crypto_ahash_update(struct ahash_request *req)
static inline void ahash_request_set_tfm(struct ahash_request *req,
struct crypto_ahash *tfm)
static inline struct ahash_request *ahash_request_alloc(
struct crypto_ahash *tfm, gfp_t gfp)
static inline void ahash_request_free(struct ahash_request *req)
static inline struct ahash_request *ahash_request_cast(
struct crypto_async_request *req)
static inline void ahash_request_set_callback(struct ahash_request *req,
u32 flags,
crypto_completion_t complete,
void *data)
static inline void ahash_request_set_crypt(struct ahash_request *req,
struct scatterlist *src, u8 *result,
unsigned int nbytes)
struct crypto_shash *crypto_alloc_shash(const char *alg_name, u32 type,
u32 mask);
static inline struct crypto_tfm *crypto_shash_tfm(struct crypto_shash *tfm)
static inline void crypto_free_shash(struct crypto_shash *tfm)
static inline unsigned int crypto_shash_alignmask(
struct crypto_shash *tfm)
static inline unsigned int crypto_shash_blocksize(struct crypto_shash *tfm)
static inline struct shash_alg *__crypto_shash_alg(struct crypto_alg *alg)
static inline struct shash_alg *crypto_shash_alg(struct crypto_shash *tfm)
static inline unsigned int crypto_shash_digestsize(struct crypto_shash *tfm)
static inline unsigned int crypto_shash_statesize(struct crypto_shash *tfm)
static inline u32 crypto_shash_get_flags(struct crypto_shash *tfm)
static inline void crypto_shash_set_flags(struct crypto_shash *tfm, u32 flags)
static inline void crypto_shash_clear_flags(struct crypto_shash *tfm, u32 flags)
static inline unsigned int crypto_shash_descsize(struct crypto_shash *tfm)
static inline void *shash_desc_ctx(struct shash_desc *desc)
int crypto_shash_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen);
int crypto_shash_digest(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out);
static inline int crypto_shash_export(struct shash_desc *desc, void *out)
static inline int crypto_shash_import(struct shash_desc *desc, const void *in)
static inline int crypto_shash_init(struct shash_desc *desc)
int crypto_shash_update(struct shash_desc *desc, const u8 *data,
unsigned int len);
int crypto_shash_final(struct shash_desc *desc, u8 *out);
int crypto_shash_finup(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out);
