#define _CRYPTO_INTERNAL_H
enum ;
struct crypto_instance;
struct crypto_template;
struct crypto_larval ;
extern struct list_head crypto_alg_list;
extern struct rw_semaphore crypto_alg_sem;
extern struct blocking_notifier_head crypto_chain;
void __init crypto_init_proc(void);
void __exit crypto_exit_proc(void);
static inline void crypto_init_proc(void)
static inline void crypto_exit_proc(void)
static inline unsigned int crypto_cipher_ctxsize(struct crypto_alg *alg)
static inline unsigned int crypto_compress_ctxsize(struct crypto_alg *alg)
struct crypto_alg *crypto_mod_get(struct crypto_alg *alg);
struct crypto_alg *crypto_alg_lookup(const char *name, u32 type, u32 mask);
struct crypto_alg *crypto_alg_mod_lookup(const char *name, u32 type, u32 mask);
int crypto_init_cipher_ops(struct crypto_tfm *tfm);
int crypto_init_compress_ops(struct crypto_tfm *tfm);
void crypto_exit_cipher_ops(struct crypto_tfm *tfm);
void crypto_exit_compress_ops(struct crypto_tfm *tfm);
struct crypto_larval *crypto_larval_alloc(const char *name, u32 type, u32 mask);
void crypto_larval_kill(struct crypto_alg *alg);
struct crypto_alg *crypto_larval_lookup(const char *name, u32 type, u32 mask);
void crypto_larval_error(const char *name, u32 type, u32 mask);
void crypto_alg_tested(const char *name, int err);
void crypto_shoot_alg(struct crypto_alg *alg);
struct crypto_tfm *__crypto_alloc_tfm(struct crypto_alg *alg, u32 type,
u32 mask);
void *crypto_create_tfm(struct crypto_alg *alg,
const struct crypto_type *frontend);
struct crypto_alg *crypto_find_alg(const char *alg_name,
const struct crypto_type *frontend,
u32 type, u32 mask);
void *crypto_alloc_tfm(const char *alg_name,
const struct crypto_type *frontend, u32 type, u32 mask);
int crypto_register_notifier(struct notifier_block *nb);
int crypto_unregister_notifier(struct notifier_block *nb);
int crypto_probing_notify(unsigned long val, void *v);
static inline void crypto_alg_put(struct crypto_alg *alg)
static inline int crypto_tmpl_get(struct crypto_template *tmpl)
static inline void crypto_tmpl_put(struct crypto_template *tmpl)
static inline int crypto_is_larval(struct crypto_alg *alg)
static inline int crypto_is_dead(struct crypto_alg *alg)
static inline int crypto_is_moribund(struct crypto_alg *alg)
static inline void crypto_notify(unsigned long val, void *v)
