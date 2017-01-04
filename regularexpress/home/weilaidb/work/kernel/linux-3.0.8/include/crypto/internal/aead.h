#define _CRYPTO_INTERNAL_AEAD_H
struct rtattr;
struct crypto_aead_spawn ;
extern const struct crypto_type crypto_nivaead_type;
static inline void crypto_set_aead_spawn(
struct crypto_aead_spawn *spawn, struct crypto_instance *inst)
int crypto_grab_aead(struct crypto_aead_spawn *spawn, const char *name,
u32 type, u32 mask);
static inline void crypto_drop_aead(struct crypto_aead_spawn *spawn)
static inline struct crypto_alg *crypto_aead_spawn_alg(
struct crypto_aead_spawn *spawn)
static inline struct crypto_aead *crypto_spawn_aead(
struct crypto_aead_spawn *spawn)
struct crypto_instance *aead_geniv_alloc(struct crypto_template *tmpl,
struct rtattr **tb, u32 type,
u32 mask);
void aead_geniv_free(struct crypto_instance *inst);
int aead_geniv_init(struct crypto_tfm *tfm);
void aead_geniv_exit(struct crypto_tfm *tfm);
static inline struct crypto_aead *aead_geniv_base(struct crypto_aead *geniv)
static inline void *aead_givcrypt_reqctx(struct aead_givcrypt_request *req)
static inline void aead_givcrypt_complete(struct aead_givcrypt_request *req,
int err)
