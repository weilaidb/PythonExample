LIST_HEAD(crypto_alg_list);
DECLARE_RWSEM(crypto_alg_sem);
static inline int crypto_alg_get(struct crypto_alg *alg)
static inline void crypto_alg_put(struct crypto_alg *alg)
struct crypto_alg *crypto_alg_lookup(const char *name)
static int crypto_init_flags(struct crypto_tfm *tfm, u32 flags)
static int crypto_init_ops(struct crypto_tfm *tfm)
static void crypto_exit_ops(struct crypto_tfm *tfm)
struct crypto_tfm *crypto_alloc_tfm(const char *name, u32 flags)
void crypto_free_tfm(struct crypto_tfm *tfm)
int crypto_register_alg(struct crypto_alg *alg)
int crypto_unregister_alg(struct crypto_alg *alg)
int crypto_alg_available(const char *name, u32 flags)
static int __init init_crypto(void)
__initcall(init_crypto);
EXPORT_SYMBOL_NOVERS(crypto_register_alg);
EXPORT_SYMBOL_NOVERS(crypto_unregister_alg);
EXPORT_SYMBOL_NOVERS(crypto_alloc_tfm);
EXPORT_SYMBOL_NOVERS(crypto_free_tfm);
EXPORT_SYMBOL_NOVERS(crypto_alg_available);
