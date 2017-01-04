#define _CRYPTO_INTERNAL_HASH_H
struct ahash_request;
struct scatterlist;
struct crypto_hash_walk ;
struct ahash_instance ;
struct shash_instance ;
struct crypto_ahash_spawn ;
struct crypto_shash_spawn ;
extern const struct crypto_type crypto_ahash_type;
int crypto_hash_walk_done(struct crypto_hash_walk *walk, int err);
int crypto_hash_walk_first(struct ahash_request *req,
struct crypto_hash_walk *walk);
int crypto_hash_walk_first_compat(struct hash_desc *hdesc,
struct crypto_hash_walk *walk,
struct scatterlist *sg, unsigned int len);
static inline int crypto_hash_walk_last(struct crypto_hash_walk *walk)
int crypto_register_ahash(struct ahash_alg *alg);
int crypto_unregister_ahash(struct ahash_alg *alg);
int ahash_register_instance(struct crypto_template *tmpl,
struct ahash_instance *inst);
void ahash_free_instance(struct crypto_instance *inst);
int crypto_init_ahash_spawn(struct crypto_ahash_spawn *spawn,
struct hash_alg_common *alg,
struct crypto_instance *inst);
static inline void crypto_drop_ahash(struct crypto_ahash_spawn *spawn)
struct hash_alg_common *ahash_attr_alg(struct rtattr *rta, u32 type, u32 mask);
int crypto_register_shash(struct shash_alg *alg);
int crypto_unregister_shash(struct shash_alg *alg);
int shash_register_instance(struct crypto_template *tmpl,
struct shash_instance *inst);
void shash_free_instance(struct crypto_instance *inst);
int crypto_init_shash_spawn(struct crypto_shash_spawn *spawn,
struct shash_alg *alg,
struct crypto_instance *inst);
static inline void crypto_drop_shash(struct crypto_shash_spawn *spawn)
struct shash_alg *shash_attr_alg(struct rtattr *rta, u32 type, u32 mask);
int shash_ahash_update(struct ahash_request *req, struct shash_desc *desc);
int shash_ahash_finup(struct ahash_request *req, struct shash_desc *desc);
int shash_ahash_digest(struct ahash_request *req, struct shash_desc *desc);
int crypto_init_shash_ops_async(struct crypto_tfm *tfm);
static inline void *crypto_ahash_ctx(struct crypto_ahash *tfm)
static inline struct ahash_alg *__crypto_ahash_alg(struct crypto_alg *alg)
static inline void crypto_ahash_set_reqsize(struct crypto_ahash *tfm,
unsigned int reqsize)
static inline struct crypto_instance *ahash_crypto_instance(
struct ahash_instance *inst)
static inline struct ahash_instance *ahash_instance(
struct crypto_instance *inst)
static inline void *ahash_instance_ctx(struct ahash_instance *inst)
static inline unsigned int ahash_instance_headroom(void)
static inline struct ahash_instance *ahash_alloc_instance(
const char *name, struct crypto_alg *alg)
static inline struct crypto_ahash *crypto_spawn_ahash(
struct crypto_ahash_spawn *spawn)
static inline int ahash_enqueue_request(struct crypto_queue *queue,
struct ahash_request *request)
static inline struct ahash_request *ahash_dequeue_request(
struct crypto_queue *queue)
static inline int ahash_tfm_in_queue(struct crypto_queue *queue,
struct crypto_ahash *tfm)
static inline void *crypto_shash_ctx(struct crypto_shash *tfm)
static inline struct crypto_instance *shash_crypto_instance(
struct shash_instance *inst)
static inline struct shash_instance *shash_instance(
struct crypto_instance *inst)
static inline void *shash_instance_ctx(struct shash_instance *inst)
static inline struct shash_instance *shash_alloc_instance(
const char *name, struct crypto_alg *alg)
static inline struct crypto_shash *crypto_spawn_shash(
struct crypto_shash_spawn *spawn)
static inline void *crypto_shash_ctx_aligned(struct crypto_shash *tfm)
static inline struct crypto_shash *__crypto_shash_cast(struct crypto_tfm *tfm)
