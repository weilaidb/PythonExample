LIST_HEAD(crypto_alg_list);
EXPORT_SYMBOL_GPL(crypto_alg_list);
DECLARE_RWSEM(crypto_alg_sem);
EXPORT_SYMBOL_GPL(crypto_alg_sem);
BLOCKING_NOTIFIER_HEAD(crypto_chain);
EXPORT_SYMBOL_GPL(crypto_chain);
static inline struct crypto_alg *crypto_alg_get(struct crypto_alg *alg)
struct crypto_alg *crypto_mod_get(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_mod_get);
void crypto_mod_put(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_mod_put);
static inline int crypto_is_test_larval(struct crypto_larval *larval)
static struct crypto_alg *__crypto_alg_lookup(const char *name, u32 type,
u32 mask)
static void crypto_larval_destroy(struct crypto_alg *alg)
struct crypto_larval *crypto_larval_alloc(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_larval_alloc);
static struct crypto_alg *crypto_larval_add(const char *name, u32 type,
u32 mask)
void crypto_larval_kill(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_larval_kill);
static struct crypto_alg *crypto_larval_wait(struct crypto_alg *alg)
struct crypto_alg *crypto_alg_lookup(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alg_lookup);
struct crypto_alg *crypto_larval_lookup(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_larval_lookup);
int crypto_probing_notify(unsigned long val, void *v)
EXPORT_SYMBOL_GPL(crypto_probing_notify);
struct crypto_alg *crypto_alg_mod_lookup(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alg_mod_lookup);
static int crypto_init_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static void crypto_exit_ops(struct crypto_tfm *tfm)
static unsigned int crypto_ctxsize(struct crypto_alg *alg, u32 type, u32 mask)
void crypto_shoot_alg(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_shoot_alg);
struct crypto_tfm *__crypto_alloc_tfm(struct crypto_alg *alg, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(__crypto_alloc_tfm);
struct crypto_tfm *crypto_alloc_base(const char *alg_name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_base);
void *crypto_create_tfm(struct crypto_alg *alg,
const struct crypto_type *frontend)
EXPORT_SYMBOL_GPL(crypto_create_tfm);
struct crypto_alg *crypto_find_alg(const char *alg_name,
const struct crypto_type *frontend,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_find_alg);
void *crypto_alloc_tfm(const char *alg_name,
const struct crypto_type *frontend, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_tfm);
void crypto_destroy_tfm(void *mem, struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(crypto_destroy_tfm);
int crypto_has_alg(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_has_alg);
MODULE_DESCRIPTION("Cryptographic core API");
MODULE_LICENSE("GPL");
