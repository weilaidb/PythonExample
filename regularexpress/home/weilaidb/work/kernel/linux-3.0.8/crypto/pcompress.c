static int crypto_pcomp_init(struct crypto_tfm *tfm, u32 type, u32 mask)
static unsigned int crypto_pcomp_extsize(struct crypto_alg *alg)
static int crypto_pcomp_init_tfm(struct crypto_tfm *tfm)
static void crypto_pcomp_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_pcomp_show(struct seq_file *m, struct crypto_alg *alg)
static const struct crypto_type crypto_pcomp_type = ;
struct crypto_pcomp *crypto_alloc_pcomp(const char *alg_name, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_pcomp);
int crypto_register_pcomp(struct pcomp_alg *alg)
EXPORT_SYMBOL_GPL(crypto_register_pcomp);
int crypto_unregister_pcomp(struct pcomp_alg *alg)
EXPORT_SYMBOL_GPL(crypto_unregister_pcomp);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Partial (de)compression type");
MODULE_AUTHOR("Sony Corporation");
