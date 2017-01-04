static DEFINE_MUTEX(crypto_default_rng_lock);
struct crypto_rng *crypto_default_rng;
EXPORT_SYMBOL_GPL(crypto_default_rng);
static int crypto_default_rng_refcnt;
static int rngapi_reset(struct crypto_rng *tfm, u8 *seed, unsigned int slen)
static int crypto_init_rng_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static void crypto_rng_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_rng_show(struct seq_file *m, struct crypto_alg *alg)
static unsigned int crypto_rng_ctxsize(struct crypto_alg *alg, u32 type,
u32 mask)
const struct crypto_type crypto_rng_type = ;
EXPORT_SYMBOL_GPL(crypto_rng_type);
int crypto_get_default_rng(void)
EXPORT_SYMBOL_GPL(crypto_get_default_rng);
void crypto_put_default_rng(void)
EXPORT_SYMBOL_GPL(crypto_put_default_rng);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Random Number Generator");
