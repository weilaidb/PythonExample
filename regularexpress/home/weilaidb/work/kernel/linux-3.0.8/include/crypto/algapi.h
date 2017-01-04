#define _CRYPTO_ALGAPI_H
struct module;
struct rtattr;
struct seq_file;
struct crypto_type ;
struct crypto_instance ;
struct crypto_template ;
struct crypto_spawn ;
struct crypto_queue ;
struct scatter_walk ;
struct blkcipher_walk ;
struct ablkcipher_walk ;
extern const struct crypto_type crypto_ablkcipher_type;
extern const struct crypto_type crypto_aead_type;
extern const struct crypto_type crypto_blkcipher_type;
void crypto_mod_put(struct crypto_alg *alg);
int crypto_register_template(struct crypto_template *tmpl);
void crypto_unregister_template(struct crypto_template *tmpl);
struct crypto_template *crypto_lookup_template(const char *name);
int crypto_register_instance(struct crypto_template *tmpl,
struct crypto_instance *inst);
int crypto_init_spawn(struct crypto_spawn *spawn, struct crypto_alg *alg,
struct crypto_instance *inst, u32 mask);
int crypto_init_spawn2(struct crypto_spawn *spawn, struct crypto_alg *alg,
struct crypto_instance *inst,
const struct crypto_type *frontend);
void crypto_drop_spawn(struct crypto_spawn *spawn);
struct crypto_tfm *crypto_spawn_tfm(struct crypto_spawn *spawn, u32 type,
u32 mask);
void *crypto_spawn_tfm2(struct crypto_spawn *spawn);
static inline void crypto_set_spawn(struct crypto_spawn *spawn,
struct crypto_instance *inst)
struct crypto_attr_type *crypto_get_attr_type(struct rtattr **tb);
int crypto_check_attr_type(struct rtattr **tb, u32 type);
const char *crypto_attr_alg_name(struct rtattr *rta);
struct crypto_alg *crypto_attr_alg2(struct rtattr *rta,
const struct crypto_type *frontend,
u32 type, u32 mask);
static inline struct crypto_alg *crypto_attr_alg(struct rtattr *rta,
u32 type, u32 mask)
int crypto_attr_u32(struct rtattr *rta, u32 *num);
void *crypto_alloc_instance2(const char *name, struct crypto_alg *alg,
unsigned int head);
struct crypto_instance *crypto_alloc_instance(const char *name,
struct crypto_alg *alg);
void crypto_init_queue(struct crypto_queue *queue, unsigned int max_qlen);
int crypto_enqueue_request(struct crypto_queue *queue,
struct crypto_async_request *request);
void *__crypto_dequeue_request(struct crypto_queue *queue, unsigned int offset);
struct crypto_async_request *crypto_dequeue_request(struct crypto_queue *queue);
int crypto_tfm_in_queue(struct crypto_queue *queue, struct crypto_tfm *tfm);
void crypto_inc(u8 *a, unsigned int size);
void crypto_xor(u8 *dst, const u8 *src, unsigned int size);
int blkcipher_walk_done(struct blkcipher_desc *desc,
struct blkcipher_walk *walk, int err);
int blkcipher_walk_virt(struct blkcipher_desc *desc,
struct blkcipher_walk *walk);
int blkcipher_walk_phys(struct blkcipher_desc *desc,
struct blkcipher_walk *walk);
int blkcipher_walk_virt_block(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
unsigned int blocksize);
int ablkcipher_walk_done(struct ablkcipher_request *req,
struct ablkcipher_walk *walk, int err);
int ablkcipher_walk_phys(struct ablkcipher_request *req,
struct ablkcipher_walk *walk);
void __ablkcipher_walk_complete(struct ablkcipher_walk *walk);
static inline void *crypto_tfm_ctx_aligned(struct crypto_tfm *tfm)
static inline struct crypto_instance *crypto_tfm_alg_instance(
struct crypto_tfm *tfm)
static inline void *crypto_instance_ctx(struct crypto_instance *inst)
static inline struct ablkcipher_alg *crypto_ablkcipher_alg(
struct crypto_ablkcipher *tfm)
static inline void *crypto_ablkcipher_ctx(struct crypto_ablkcipher *tfm)
static inline void *crypto_ablkcipher_ctx_aligned(struct crypto_ablkcipher *tfm)
static inline struct aead_alg *crypto_aead_alg(struct crypto_aead *tfm)
static inline void *crypto_aead_ctx(struct crypto_aead *tfm)
static inline struct crypto_instance *crypto_aead_alg_instance(
struct crypto_aead *aead)
static inline struct crypto_blkcipher *crypto_spawn_blkcipher(
struct crypto_spawn *spawn)
static inline void *crypto_blkcipher_ctx(struct crypto_blkcipher *tfm)
static inline void *crypto_blkcipher_ctx_aligned(struct crypto_blkcipher *tfm)
static inline struct crypto_cipher *crypto_spawn_cipher(
struct crypto_spawn *spawn)
static inline struct cipher_alg *crypto_cipher_alg(struct crypto_cipher *tfm)
static inline struct crypto_hash *crypto_spawn_hash(struct crypto_spawn *spawn)
static inline void *crypto_hash_ctx(struct crypto_hash *tfm)
static inline void *crypto_hash_ctx_aligned(struct crypto_hash *tfm)
static inline void blkcipher_walk_init(struct blkcipher_walk *walk,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline void ablkcipher_walk_init(struct ablkcipher_walk *walk,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline void ablkcipher_walk_complete(struct ablkcipher_walk *walk)
static inline struct crypto_async_request *crypto_get_backlog(
struct crypto_queue *queue)
static inline int ablkcipher_enqueue_request(struct crypto_queue *queue,
struct ablkcipher_request *request)
static inline struct ablkcipher_request *ablkcipher_dequeue_request(
struct crypto_queue *queue)
static inline void *ablkcipher_request_ctx(struct ablkcipher_request *req)
static inline int ablkcipher_tfm_in_queue(struct crypto_queue *queue,
struct crypto_ablkcipher *tfm)
static inline void *aead_request_ctx(struct aead_request *req)
static inline void aead_request_complete(struct aead_request *req, int err)
static inline u32 aead_request_flags(struct aead_request *req)
static inline struct crypto_alg *crypto_get_attr_alg(struct rtattr **tb,
u32 type, u32 mask)
static inline int crypto_requires_sync(u32 type, u32 mask)
